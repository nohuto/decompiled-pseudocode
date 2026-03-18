/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x140097410
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  int SessionTokenManager; // eax
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 Win32kImportTable; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v5);
  v1 = v5;
  v2 = SessionTokenManager;
  if ( SessionTokenManager >= 0
    && (Win32kImportTable = DxgkGetWin32kImportTable(), (*(unsigned int (**)(void))(Win32kImportTable + 608))()) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
  }
  else
  {
    v2 = -1073741790;
  }
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  KeLeaveCriticalRegion();
  return v2;
}
