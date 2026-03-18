/*
 * XREFs of ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1401FF62C
 * Callers:
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x140201830 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D2568 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        PERESOURCE *this,
        const struct CPointerInfoNode *a2,
        HWND *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  int v9; // r8d
  CInputDest *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !tagDomLock::IsLockedShared(this + 4) )
  {
    LODWORD(v11) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16048);
  }
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
  {
    LODWORD(v11) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16060);
  }
  v11 = 0LL;
  v7 = *((unsigned int *)PtiCurrent(v6) + 340);
  if ( (v7 & 0x2000) != 0 || (v8 = PtiCurrent(v7), v9 = 0, (*((_QWORD *)v8 + 170) & 0x2000000000LL) != 0) )
    v9 = 1;
  CTouchProcessor::GetPointerCapture((CTouchProcessor *)this, *((_QWORD *)a2 + 2), v9, &v11, 0LL);
  if ( v11 )
    *a3 = CInputDest::GetWindowHandle(v11);
  else
    *a3 = (HWND)*((_QWORD *)a2 + 24);
  return 1LL;
}
