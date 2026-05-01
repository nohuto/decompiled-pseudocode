/*
 * XREFs of ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z @ 0x180679258
 * Callers:
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1802EF334 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180679980 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

int __fastcall CallerIdentity::GetPackageSidFromWindow(CallerIdentity *this, _QWORD *a2, void **a3)
{
  void **v4; // r8
  int result; // eax
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  dwProcessId = 0;
  if ( GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return CallerIdentity::GetPackageSidFromProcess(dwProcessId, a2, v4);
  result = ResultFromKnownLastError();
  if ( result >= 0 )
    return CallerIdentity::GetPackageSidFromProcess(dwProcessId, a2, v4);
  return result;
}
