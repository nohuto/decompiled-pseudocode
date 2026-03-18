/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x140097A60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(void *a1)
{
  __int64 Win32kImportTable; // rax
  int SessionTokenManager; // edi
  __int64 v4; // rbx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Win32kImportTable = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
  {
    v7 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v7);
    if ( SessionTokenManager >= 0 )
    {
      v4 = v7;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v7 + 120LL))(v7, &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager < 0 )
    goto LABEL_10;
  if ( Handle == (HANDLE)-1LL )
    SessionTokenManager = -1073741811;
  else
    RtlCopyToUser(a1, &Handle, 8uLL);
  if ( SessionTokenManager < 0 )
  {
LABEL_10:
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
