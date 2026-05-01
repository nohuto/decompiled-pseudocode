/*
 * XREFs of ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x1803029D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18002FB38 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::GetDestinationInformation(
        CImmersiveApp *this,
        struct IImmersiveApplicationWindow **a2,
        struct tagRECT *a3)
{
  __int64 v6; // rax
  const struct _GUID *v7; // rdx
  int Instance; // ebx
  HWND v10; // [rsp+20h] [rbp-38h] BYREF
  RECT rcSrc; // [rsp+28h] [rbp-30h] BYREF

  *a2 = 0LL;
  SetRectEmpty(a3);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = 0LL;
  v6 = *((_QWORD *)this + 3);
  rcSrc = 0LL;
  Instance = (*(__int64 (__fastcall **)(char *, HWND *, RECT *))(v6 + 328))((char *)this + 24, &v10, &rcSrc);
  if ( Instance >= 0 )
  {
    Instance = CImmersiveApplicationWindow_CreateInstance(v10, v7, (void **)a2);
    if ( Instance >= 0 )
      CopyRect(a3, &rcSrc);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)Instance;
}
