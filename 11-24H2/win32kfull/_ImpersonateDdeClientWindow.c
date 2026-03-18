/*
 * XREFs of _ImpersonateDdeClientWindow @ 0x1402B1048
 * Callers:
 *     NtUserImpersonateDdeClientWindow @ 0x1402988D0 (NtUserImpersonateDdeClientWindow.c)
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401D3948 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 */

__int64 __fastcall ImpersonateDdeClientWindow(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *DdeConv; // rax
  __int64 v3; // rcx
  int v4; // eax

  DdeConv = FindDdeConv(a1, a2);
  if ( !DdeConv )
    return 0LL;
  v3 = *((_QWORD *)DdeConv + 11);
  if ( !v3 )
    return 0LL;
  v4 = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(v3 + 16), KeGetCurrentThread());
  if ( v4 < 0 )
  {
    SetLastNtError(v4);
    return 0LL;
  }
  return 1LL;
}
