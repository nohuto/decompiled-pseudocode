/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01B9D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9674 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00B96E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C00E76C0 (ApiSetEditionFindThreadPointerData.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x1C01C712C (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7400 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x1C01C74DC (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D2350 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01D3354 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8738 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01DA7EC (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C0205B04 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        void *a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  unsigned __int16 v9; // r15
  __int64 v10; // r12
  BOOL v12; // ebx
  CTouchProcessor *v13; // rcx
  CTouchProcessor *v14; // rcx
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int64 v16; // rcx
  int v17; // ecx
  struct CPointerCaptureData *v18; // rax
  __int64 ThreadPointerData; // rax
  __int64 v20; // rdi
  void *v21; // rdx
  int v22; // r9d
  int v23; // r9d
  int v24; // edx
  __int16 v25; // r8
  __int16 v26; // r10
  int v27; // edx
  __int16 v28; // r8
  unsigned int v29; // r9d
  int v30; // r9d
  _BYTE v32[56]; // [rsp+48h] [rbp-100h] BYREF
  _BYTE v33[128]; // [rsp+80h] [rbp-C8h] BYREF

  v9 = a3;
  v10 = a2;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      108,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v32, (struct CInpLockGuard *)(a1 + 32), a5);
  CInputDest::CInputDest((CInputDest *)v33, a7);
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4682);
  if ( v9 != CTouchProcessor::GetMsgPointerId(v13, (unsigned __int64)a5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4683);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4685);
  if ( (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v14, (unsigned __int64)a5) + 9) & 2) != 0 )
  {
    PointerCaptureData = CTouchProcessor::GetPointerCaptureData((CTouchProcessor *)a1, (unsigned __int64)a5);
    if ( PointerCaptureData )
      CTouchProcessor::SetDelegateActionInt(v16, PointerCaptureData, 2LL);
  }
  if ( a6 - 578 <= 0xF )
  {
    v17 = 32785;
    if ( _bittest(&v17, a6 - 578) )
    {
      v18 = CTouchProcessor::GetPointerCaptureData((CTouchProcessor *)a1, (unsigned __int64)a5);
      if ( v18 )
        *((_DWORD *)v18 + 76) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v10, v9);
  v20 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v21 = *(void **)(ThreadPointerData + 24);
    if ( v21 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4740);
      v22 = *(_DWORD *)(v20 + 48);
      if ( (v22 & 1) == 0 && a8 )
        *(_DWORD *)(v20 + 48) = v22 | 1;
      *(_DWORD *)(v20 + 32) = a6;
      *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v33);
      *(_DWORD *)(v20 + 48) = v23 & 0xFFFFFFF5;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v24) = v26;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v25) = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == v26) )
      {
        LOBYTE(v25) = v26;
      }
      if ( (_BYTE)v24 || (_BYTE)v25 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v24,
          v25,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          4,
          109,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      goto LABEL_56;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v21, 4LL);
    *(_QWORD *)(v20 + 24) = 0LL;
  }
  else
  {
    v20 = ApiSetEditionAllocAndLinkThreadPointerData(v10);
    if ( !v20 )
      goto LABEL_45;
  }
  v29 = *(_DWORD *)(v20 + 48) & 0xFFFFFFF7;
  *(_WORD *)(v20 + 16) = v9;
  *(_DWORD *)(v20 + 48) = v29;
  *(_DWORD *)(v20 + 20) = a4;
  *(_QWORD *)(v20 + 24) = a5;
  *(_DWORD *)(v20 + 32) = a6;
  *(_QWORD *)(v20 + 40) = CInputDest::GetWindowHandle((CInputDest *)v33);
  *(_DWORD *)(v20 + 48) = (v30 ^ (a8 ^ v30) & 1) & 0xFFFFFFFD;
  CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
LABEL_45:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v27) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v12) = 0;
  if ( (_BYTE)v27 || v12 )
  {
    LOBYTE(v28) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v27,
      v28,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      110,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
  v12 = v20 != 0;
LABEL_56:
  CInputDest::SetEmpty((CInputDest *)v33);
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v32);
  return v12;
}
