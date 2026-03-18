/*
 * XREFs of ExpRevokeBootLoaderPagePrivileges @ 0x140BF9A10
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     KeSetPagePrivilege @ 0x1402CE1B0 (KeSetPagePrivilege.c)
 */

_UNKNOWN **__fastcall ExpRevokeBootLoaderPagePrivileges(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 *v2; // rsi
  __int64 *i; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v6[1] = 0LL;
  v2 = (__int64 *)(a1 + 32);
  v6[0] = 0LL;
  for ( i = *(__int64 **)(a1 + 32); i != v2; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 6) == 4 )
    {
      v4 = i[4];
      v5 = i[5] + v4 - 1;
      while ( v4 <= v5 )
        result = (_UNKNOWN **)KeSetPagePrivilege(v4++, 0LL, (__int64)v6, 0x10u);
    }
  }
  return result;
}
