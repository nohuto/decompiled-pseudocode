/*
 * XREFs of HMFindEntry @ 0x1401B64F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HMFindEntry(__int64 a1, unsigned int (__fastcall *a2)(__int64, __int64))
{
  __int64 v4; // rcx
  __int64 UserSessionState; // rsi
  unsigned int i; // edi
  __int64 v7; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  for ( i = 0; i <= *(_DWORD *)(W32GetUserSessionState(v4) + 19872); ++i )
  {
    v7 = *(_QWORD *)(UserSessionState + 19944) + 32LL * i;
    if ( *(_BYTE *)(v7 + 24) && a2(a1, *(_QWORD *)(UserSessionState + 19944) + 32LL * i) )
      return v7;
  }
  return 0LL;
}
