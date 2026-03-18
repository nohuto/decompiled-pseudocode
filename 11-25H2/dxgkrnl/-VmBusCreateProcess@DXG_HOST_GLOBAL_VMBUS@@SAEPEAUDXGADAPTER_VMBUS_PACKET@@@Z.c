/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021AE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x140077318 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14007AA28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     Feature_358131000__private_IsEnabledDeviceUsageNoInline @ 0x14007BAA0 (Feature_358131000__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_675062072__private_IsEnabledDeviceUsageNoInline @ 0x14007BAF4 (Feature_675062072__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1401E7350 (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1401E85BC (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // r15
  unsigned int v3; // r12d
  bool v4; // r14
  char v5; // cl
  __int64 v6; // rsi
  unsigned int v7; // eax
  bool v8; // bl
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // eax
  DXGPROCESSVM *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  DXGFASTMUTEX *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rbx
  struct VMBPACKETCOMPLETION__ *v26; // rcx
  int v28; // [rsp+6Ch] [rbp-35h] BYREF
  _BYTE v29[24]; // [rsp+70h] [rbp-31h] BYREF
  DXGPROCESSVM *v30; // [rsp+88h] [rbp-19h] BYREF
  int v31; // [rsp+90h] [rbp-11h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-9h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  if ( !v2 )
    return 0;
  v30 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( (unsigned int)Feature_358131000__private_IsEnabledDeviceUsageNoInline() && (*(_BYTE *)(v2 + 562) & 0x10) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7241;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process flag, bWslProcess is not supported",
      7241LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v30 = (DXGPROCESSVM *)58001484;
    v31 = 0;
    RtlLogUnexpectedCodepath(&v30);
    return 0;
  }
  v5 = *(_BYTE *)(v2 + 562);
  if ( (v5 & 3) == 3 || v5 & 1 | ((v5 & 2) != 0) && (v5 & 4) != 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 7251LL;
    v10 = L"Invalid process flags";
    goto LABEL_51;
  }
  v6 = *((_QWORD *)a1 + 12);
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 592) + 392LL);
  if ( v7 < 0x1F )
  {
    v8 = 0;
    if ( v7 < 0x1B )
      goto LABEL_15;
  }
  else
  {
    v8 = (v5 & 0x10) != 0;
  }
  v4 = (v5 & 8) != 0;
  if ( ((v5 & 8) != 0 || v8) && (v5 & 7) != 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 7270LL;
    v10 = L"Invalid process Linux/WSL flags";
LABEL_51:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
LABEL_15:
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v6 + 592)) < 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 7278LL;
    v10 = L"To  many VM processes created";
    goto LABEL_51;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v6 + 56), &ApcState);
  v11 = DXGPROCESS::CreateDxgProcess(&v30, (struct DXGPROCESS *)v6, *(struct DXGPROCESS **)(v2 + 24), 0, 0LL);
  v28 = v11;
  if ( v11 < 0 )
  {
    v25 = v11;
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 7366;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create VM process: 0x%I64x",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v12 = v30;
    if ( v4 )
      *((_DWORD *)v30 + 102) |= 0x20u;
    if ( v8 )
    {
      v13 = *((_QWORD *)v12 + 8);
      *((_DWORD *)v12 + 102) |= 0x10u;
      *(_BYTE *)(v13 + 136) = 1;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v29,
      (struct DXGPROCESS *)v6);
    v14 = (_QWORD *)(v6 + 280);
    v15 = HMGRTABLE::AllocHandle(v6 + 280, v12, 12LL, 0LL, 0);
    v3 = v15;
    if ( !v15 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7307;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to allocate process handle: 0x%I64x",
        7307LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESS::DestroyDxgProcess(v12);
      _InterlockedDecrement(*(volatile signed __int32 **)(v6 + 592));
      if ( (unsigned int)Feature_675062072__private_IsEnabledDeviceUsageNoInline() )
        KeUnstackDetachProcess(&ApcState);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
      return 0;
    }
    v16 = (v15 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *(_DWORD *)(v6 + 296) )
    {
      v17 = *(_DWORD *)(*v14 + 16 * v16 + 8);
      if ( ((v3 >> 25) & 0x60) == (*(_BYTE *)(*v14 + 16 * v16 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
        *(_DWORD *)(*v14 + 16 * (((unsigned __int64)v3 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    *((_DWORD *)v12 + 159) = v3;
    DXGPROCESSVM::SetVmProcessName(v12, (unsigned __int16 *)(v2 + 40), v18, v19);
    *(_QWORD *)(*((_QWORD *)v12 + 8) + 88LL) = *(_QWORD *)(v2 + 32);
    v20 = *(_BYTE *)(v2 + 562);
    if ( (v20 & 2) != 0 )
    {
      *((_DWORD *)v12 + 102) |= 4u;
    }
    else if ( (v20 & 1) != 0 )
    {
      *((_DWORD *)v12 + 102) |= 1u;
    }
    else if ( (v20 & 4) != 0 )
    {
      *((_DWORD *)v12 + 102) |= 8u;
    }
    v21 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 368);
    DXGFASTMUTEX::Acquire(v21);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v6);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v21);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        *((_QWORD *)v12 + 8),
        &EventCreateDxgProcessVm,
        v22,
        v12,
        *(_QWORD *)(*((_QWORD *)v12 + 8) + 80LL),
        *((_DWORD *)v12 + 122),
        *((_DWORD *)v12 + 102),
        *(_QWORD *)(*((_QWORD *)v12 + 8) + 88LL),
        *((_QWORD *)v12 + 75),
        *(_QWORD *)(*((_QWORD *)v12 + 74) + 592LL),
        v2 + 40);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 248));
    v23 = (v3 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 < *(_DWORD *)(v6 + 296) )
    {
      v24 = *(_QWORD *)(v6 + 280);
      if ( ((v3 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
        && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v24 + 16 * (((unsigned __int64)v3 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)(v6 + 280) + 16 * (((unsigned __int64)v3 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v6 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v28 >= 0 )
  {
    v26 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
    v28 = v3;
    VmBusCompletePacket(v26, &v28, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v6 + 592));
  return 0;
}
