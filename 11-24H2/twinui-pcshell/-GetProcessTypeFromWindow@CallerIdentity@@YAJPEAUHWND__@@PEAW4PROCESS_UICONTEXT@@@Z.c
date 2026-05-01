/*
 * XREFs of ?GetProcessTypeFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1806792A4
 * Callers:
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1802EF334 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetProcessTypeFromWindow(
        CallerIdentity *this,
        _DWORD *a2,
        enum PROCESS_UICONTEXT *a3)
{
  signed int Error; // ebx
  HANDLE v5; // rdi
  DWORD dwProcessId; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  dwProcessId = 0;
  if ( GetWindowThreadProcessId((HWND)this, &dwProcessId) || (Error = ResultFromKnownLastError(), Error >= 0) )
  {
    v5 = OpenProcess(0x1000u, 0, dwProcessId);
    if ( v5 || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      v8 = 0LL;
      if ( (unsigned int)GetProcessUIContextInformation(v5, &v8) )
      {
        Error = 0;
        *a2 = v8;
      }
      else
      {
        Error = -2147024890;
      }
      CloseHandle(v5);
    }
  }
  return (unsigned int)Error;
}
