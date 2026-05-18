/*
 * XREFs of ?Stop@CKstBase@@QEAAXXZ @ 0x1800104D8
 * Callers:
 *     DwmpShutdownWinlogonMouseThread @ 0x18000DCB0 (DwmpShutdownWinlogonMouseThread.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x18000F93C (--1CKstBase@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180009CE4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SignalReset@DWM@KST@InputTraceLogging@@SAXXZ @ 0x18001028C (-SignalReset@DWM@KST@InputTraceLogging@@SAXXZ.c)
 */

void __fastcall CKstBase::Stop(HANDLE *this)
{
  const char *v2; // r9
  char *v3; // rsi
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::KST::DWM::SignalReset();
  if ( (char *)this[2] - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    if ( !SetEvent(this[4]) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x9C3,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v2);
    WaitForSingleObject(this[2], 0xFFFFFFFF);
    v3 = (char *)this[2];
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v3);
      SetLastError(LastError);
    }
    this[2] = 0LL;
  }
}
