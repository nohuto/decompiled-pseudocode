/*
 * XREFs of ExpRevokeBootLoaderPagePrivileges @ 0x140C0CA10
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 */

_UNKNOWN **__fastcall ExpRevokeBootLoaderPagePrivileges(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rsi
  __int64 *i; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (__int64 *)(a1 + 32);
  v6 = 0uLL;
  for ( i = *(__int64 **)(a1 + 32); i != v2; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 6) == 4 )
    {
      v4 = i[4];
      v5 = i[5] + v4 - 1;
      while ( v4 <= v5 )
        result = (_UNKNOWN **)KeSetPagePrivilege(v4++, 0LL, &v6, 0x10u);
    }
  }
  return result;
}
