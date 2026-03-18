/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1401F6A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D2744 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140110444 (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x140191370 (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        void *a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  CTouchProcessor *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  HWND WindowHandle; // rax
  PERESOURCE *v19[7]; // [rsp+28h] [rbp-100h] BYREF
  _BYTE v20[128]; // [rsp+60h] [rbp-C8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v19, (PERESOURCE *)(a1 + 32), a5);
  v12 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4991);
  if ( a3 != (unsigned __int16)CTouchProcessor::GetMsgPointerId(v11, (unsigned __int64)a5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4992);
  CInputDest::CInputDest((CInputDest *)v20, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v15 = ApiSetEditionAllocThreadPointerData(v14, v13);
    v16 = v15;
    if ( v15 )
    {
      *(_DWORD *)(v15 + 32) = a6;
      *(_WORD *)(v15 + 16) = a3;
      *(_DWORD *)(v15 + 20) = a4;
      *(_QWORD *)(v15 + 24) = a5;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v20);
      *(_DWORD *)(v16 + 48) &= ~1u;
      *(_QWORD *)(v16 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(a1, (unsigned __int64)a5, 5);
      *(_QWORD *)(a2 + 24) = v16;
      v12 = 1;
    }
  }
  CInputDest::~CInputDest((CInputDest *)v20);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v19);
  return v12;
}
