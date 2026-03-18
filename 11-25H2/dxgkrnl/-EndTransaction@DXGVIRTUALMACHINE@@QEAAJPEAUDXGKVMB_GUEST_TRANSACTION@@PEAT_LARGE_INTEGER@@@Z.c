/*
 * XREFs of ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x14022C308
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401DC00C (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::EndTransaction(
        DXGVIRTUALMACHINE *this,
        struct _KEVENT *a2,
        union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER *v3; // r9
  NTSTATUS v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 LockNV; // rsi
  __int64 v12; // rcx
  struct DXGKVMB_GUEST_TRANSACTION **Flink; // rax
  __int64 Blink; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  if ( !g_DisableTransactionTimeout )
    v3 = a3;
  v6 = KeWaitForSingleObject(&a2[1], Executive, 0, 0, v3);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 344));
  if ( v6 == 258 )
  {
    if ( !KeReadStateEvent(a2 + 1) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 126;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Timeout occurred while waiting for guest transaction",
        126LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_6:
      LODWORD(LockNV) = -1073741823;
      goto LABEL_7;
    }
  }
  else if ( v6 )
  {
    goto LABEL_6;
  }
  LockNV = a2[2].Header.LockNV;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = a2->Header.WaitListHead.Blink;
  WdLogGlobalForLineNumber = 138;
  if ( (int)LockNV < 0 )
  {
    WdLogSingleEntry2(2LL, a2->Header.WaitListHead.Blink, LockNV);
    Blink = (__int64)a2->Header.WaitListHead.Blink;
    WdLogGlobalForLineNumber = 146;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Transaction %I64u returned an error from the guest, Status=0x%.8x",
      Blink,
      LockNV,
      0LL,
      0LL,
      0LL);
  }
LABEL_7:
  v12 = *(_QWORD *)&a2->Header.Lock;
  if ( *(struct _KEVENT **)(*(_QWORD *)&a2->Header.Lock + 8LL) != a2
    || (Flink = (struct DXGKVMB_GUEST_TRANSACTION **)a2->Header.WaitListHead.Flink,
        *Flink != (struct DXGKVMB_GUEST_TRANSACTION *)a2) )
  {
    __fastfail(3u);
  }
  *Flink = (struct DXGKVMB_GUEST_TRANSACTION *)v12;
  *(_QWORD *)(v12 + 8) = Flink;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 44) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 344, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)LockNV;
}
