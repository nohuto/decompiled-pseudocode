/*
 * XREFs of ExpPoolContextHeaderFromHandle @ 0x1404F5990
 * Callers:
 *     ExpSecurePoolFromHandle @ 0x1404F5968 (ExpSecurePoolFromHandle.c)
 *     ExDestroyPool @ 0x140648130 (ExDestroyPool.c)
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
    v2 = (_DWORD *)(qword_140E6B948 ^ a1);
    if ( *v2 != -1347437123 )
      return 0LL;
    return v2;
  }
  return result;
}
