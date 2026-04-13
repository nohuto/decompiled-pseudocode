/*
 * XREFs of ?GetCallingProcessPackageSidString@CallerIdentity@@YAJPEAPEAG@Z @ 0x18007157C
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180033E04 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800630B8 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180071708 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180071964 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessPackageSidString(
        LPWSTR *StringSid,
        unsigned __int16 **a2,
        void **a3)
{
  signed int CallingProcessHandle; // ebx
  void **v5; // r8
  CallerIdentity *v6; // rcx
  char *v7; // rcx
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF
  PSID Sid; // [rsp+38h] [rbp+10h] BYREF

  *StringSid = 0LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(
                           (CallerIdentity *)StringSid,
                           (unsigned int)&hObject,
                           a3);
  if ( CallingProcessHandle >= 0 )
  {
    v6 = (CallerIdentity *)hObject;
    *StringSid = 0LL;
    Sid = 0LL;
    CallingProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(v6, &Sid, v5);
    if ( CallingProcessHandle >= 0 )
    {
      if ( ConvertSidToStringSidW(Sid, StringSid) )
        CallingProcessHandle = 0;
      else
        CallingProcessHandle = ResultFromKnownLastError();
      LocalFree(Sid);
    }
  }
  v7 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return (unsigned int)CallingProcessHandle;
}
