/*
 * XREFs of ivrLoadImage @ 0x140217F30
 * Callers:
 *     ?ivrInitialize@@YAJXZ @ 0x140217B2C (-ivrInitialize@@YAJXZ.c)
 * Callees:
 *     UserGetLoadedImageInformation @ 0x1401B35F0 (UserGetLoadedImageInformation.c)
 */

__int64 __fastcall ivrLoadImage(__int64 a1)
{
  struct _UNICODE_STRING *UserSessionState; // rax
  struct _UNICODE_STRING *v2; // rbx
  NTSTATUS v3; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  UserSessionState = (struct _UNICODE_STRING *)W32GetUserSessionState(a1);
  v2 = UserSessionState + 1215;
  UserSessionState[1215] = 0LL;
  UserSessionState[1216] = 0LL;
  UserSessionState[1217] = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\win32kns.sys");
  *v2 = DestinationString;
  v3 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x30uLL);
  if ( v3 >= 0 )
    return (__int64)v2;
  if ( v3 == -1073741554 )
    return (unsigned __int64)v2 & -(__int64)((unsigned int)UserGetLoadedImageInformation(
                                                             (wchar_t *)L"\\SystemRoot\\System32\\win32kns.sys",
                                                             v2) != 0);
  return 0LL;
}
