/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402212C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140039DBC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x140077DB0 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14007AF08 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1401ECD4C (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1401EDF94 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x14034CE14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x14034D1D8 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r15
  __int64 v2; // rax
  __int64 v3; // r14
  char v4; // cl
  unsigned int v5; // esi
  bool v6; // di
  __int64 v7; // r12
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // eax
  DXGFASTMUTEX *v11; // rbx
  DXGPROCESSVM *v12; // r13
  __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // edx
  char v16; // al
  __int64 v17; // r15
  int v18; // edi
  int v19; // esi
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 ProcessID; // rax
  __int64 v23; // r8
  __int64 v24; // rbx
  struct VMBPACKETCOMPLETION__ *v25; // rcx
  int v27; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-45h]
  unsigned int v29; // [rsp+70h] [rbp-41h]
  DXGPROCESSVM *v30; // [rsp+78h] [rbp-39h] BYREF
  __int64 v31; // [rsp+80h] [rbp-31h]
  _BYTE v32[24]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-11h] BYREF
  int v34; // [rsp+A8h] [rbp-9h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-1h] BYREF

  v1 = a1;
  v33 = (__int64)a1;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *(_BYTE *)(v2 + 562);
  v5 = 0;
  v30 = 0LL;
  v6 = 0;
  if ( (v4 & 0x10) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7273;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process flag, bWslProcess is not supported",
      7273LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v33 = 58001484LL;
    v34 = 0;
    RtlLogUnexpectedCodepath(&v33);
    return 0;
  }
  if ( (v4 & 3) == 3 || v4 & 1 | ((v4 & 2) != 0) && (v4 & 4) != 0 )
  {
    WdLogSingleEntry0(2LL);
    v8 = 7282LL;
    v9 = L"Invalid process flags";
    goto LABEL_43;
  }
  v7 = *((_QWORD *)v1 + 12);
  if ( *(_DWORD *)(*(_QWORD *)(v7 + 592) + 392LL) >= 0x1Bu )
  {
    v6 = (v4 & 8) != 0;
    if ( (v4 & 8) != 0 && (v4 & 7) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v8 = 7301LL;
      v9 = L"Invalid process Linux/WSL flags";
LABEL_43:
      WdLogGlobalForLineNumber = v8;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
      return 0;
    }
  }
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v7 + 592)) < 0 )
  {
    WdLogSingleEntry0(2LL);
    v8 = 7309LL;
    v9 = L"To  many VM processes created";
    goto LABEL_43;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v7 + 56), &ApcState);
  v10 = DXGPROCESS::CreateDxgProcess(&v30, (struct DXGPROCESS *)v7, *(struct DXGPROCESS **)(v3 + 24), 0, 0LL);
  v27 = v10;
  if ( v10 < 0 )
  {
    v24 = v10;
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 7393;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to create VM process: 0x%I64x",
      v24,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v11 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 368);
    DXGFASTMUTEX::Acquire(v11);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v7);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v11);
    v12 = v30;
    if ( v6 )
      *((_DWORD *)v30 + 102) |= 0x20u;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v32,
      (struct DXGPROCESS *)v7);
    v13 = v7 + 280;
    v28 = HMGRTABLE::AllocHandle(v7 + 280, v12, 12LL, 0LL, 0);
    v5 = v28;
    if ( !v28 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7347;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate process handle: 0x%I64x",
        7347LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESS::DestroyDxgProcess(v12);
      KeUnstackDetachProcess(&ApcState);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      return 0;
    }
    v14 = (v28 >> 6) & 0xFFFFFF;
    v29 = v14;
    if ( v14 < *(_DWORD *)(v7 + 296) )
    {
      v15 = *(_DWORD *)(*(_QWORD *)v13 + 16LL * v14 + 8);
      if ( ((v28 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v13 + 16LL * v14 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v13 + 16 * (((unsigned __int64)v28 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
    *((_DWORD *)v12 + 159) = v5;
    v31 = v3 + 40;
    DXGPROCESSVM::SetVmProcessName(v12, (unsigned __int16 *)(v3 + 40));
    *(_QWORD *)(*((_QWORD *)v12 + 8) + 88LL) = *(_QWORD *)(v3 + 32);
    v16 = *(_BYTE *)(v3 + 562);
    if ( (v16 & 2) != 0 )
    {
      *((_DWORD *)v12 + 102) |= 4u;
    }
    else if ( (v16 & 1) != 0 )
    {
      *((_DWORD *)v12 + 102) |= 1u;
    }
    else if ( (v16 & 4) != 0 )
    {
      *((_DWORD *)v12 + 102) |= 8u;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v17 = *((_QWORD *)v12 + 75);
      v18 = *((_DWORD *)v12 + 102);
      v19 = *((_DWORD *)v12 + 122);
      v20 = *(_QWORD *)(*((_QWORD *)v12 + 74) + 592LL);
      v21 = *(_QWORD *)(*((_QWORD *)v12 + 8) + 88LL);
      ProcessID = DXGPROCESS::GetProcessID(v12);
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        v31,
        &EventCreateDxgProcessVm,
        v23,
        v12,
        ProcessID,
        v19,
        v18,
        v21,
        v17,
        v20,
        v31);
      v5 = v28;
      v13 = v7 + 280;
      v14 = v29;
      v1 = (struct DXGADAPTER_VMBUS_PACKET *)v33;
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 248));
    if ( v14 < *(_DWORD *)(v13 + 16)
      && ((v5 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v13 + 16LL * v14 + 8) & 0x60)
      && (*(_DWORD *)(*(_QWORD *)v13 + 16LL * v14 + 8) & 0x1F) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v13 + 16LL * ((v5 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)v13 + 16LL * ((v5 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
    }
    *(_QWORD *)(v7 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v27 >= 0 )
  {
    v25 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)v1 + 16);
    v27 = v5;
    VmBusCompletePacket(v25, &v27, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v7 + 592));
  return 0;
}
