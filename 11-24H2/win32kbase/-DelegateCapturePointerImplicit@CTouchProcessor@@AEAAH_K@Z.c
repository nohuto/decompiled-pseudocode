/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1401F9AC4
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1400D3170 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1401F9638 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x140221B7C (ApiSetEditionDelegateCapturePointers.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(PERESOURCE *this, unsigned __int64 a2)
{
  char v4; // di
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // bl
  _DWORD v9[32]; // [rsp+40h] [rbp-128h] BYREF
  _OWORD v10[8]; // [rsp+C0h] [rbp-A8h] BYREF

  v4 = 0;
  memset(v9, 0, sizeof(v9));
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11166);
  CTouchProcessor::DelegateCapture(this, v10, a2, v5, (__int64)v9);
  if ( !LOWORD(v9[0])
    || !v9[1]
    || (v4 = 1, v7 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v10, (const struct tagINPUTDEST *)&v9[2])) )
  {
    v7 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::~CInputDest((CInputDest *)v10);
  if ( v7 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v6, v9);
}
