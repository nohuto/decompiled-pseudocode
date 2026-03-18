/*
 * XREFs of ExpPoolContextHeaderFromHandle @ 0x1404F5F24
 * Callers:
 *     ExpSecurePoolFromHandle @ 0x1404F5EFC (ExpSecurePoolFromHandle.c)
 *     ExDestroyPool @ 0x140654030 (ExDestroyPool.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ExpPoolContextHeaderFromHandle(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140E6BC08 ^ a1);
    if ( *v2 != -1347437123 )
      return 0LL;
    return v2;
  }
  return result;
}
