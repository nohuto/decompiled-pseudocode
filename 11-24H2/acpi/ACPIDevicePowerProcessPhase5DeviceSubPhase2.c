/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x14001C360
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  unsigned int v3; // edi
  _OWORD *Pool2; // rbp
  int v5; // edx
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 result; // rax
  KIRQL v12; // al
  __int64 v13; // rcx
  KIRQL v14; // r12
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  const char *v18; // rax
  _OWORD *v19; // rax
  size_t v20; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v2 = byte_1400753E8;
  v3 = 0;
  Pool2 = 0LL;
  v5 = 0;
  v7 = byte_1400753E8;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = byte_1400753E8;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      10,
      77,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      5,
      v5,
      (__int64)v7,
      (__int64)v8);
  if ( _bittest64((const signed __int64 *)(v1 + 8), 0x33u)
    || (v10 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1397904223LL)) == 0LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 1120), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v13 = *(_QWORD *)(v1 + 688);
  v14 = v12;
  if ( v13 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, *(unsigned int *)(v13 + 24) + 40LL, 1332765505LL);
    if ( Pool2 )
    {
      v19 = *(_OWORD **)(v1 + 688);
      *Pool2 = *v19;
      Pool2[1] = v19[1];
      v20 = *((unsigned int *)Pool2 + 6);
      *((_QWORD *)Pool2 + 4) = (char *)Pool2 + 40;
      memmove((char *)Pool2 + 40, *(const void **)(*(_QWORD *)(v1 + 688) + 32LL), v20);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  if ( Pool2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 1120), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v15 = AMLIAsyncEvalObject(v10, 0LL, 1, (__int64)Pool2, ACPIDeviceCompleteGenericPhase, a1);
    v17 = *(_QWORD *)(v1 + 8);
    v3 = v15;
    v18 = byte_1400753E8;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_qLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        10,
        78,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
        a1,
        v3,
        v1,
        (__int64)v2,
        (__int64)v18);
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  AMLIDereferenceHandleEx((__int64)v10);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_8;
  return result;
}
