/*
 * XREFs of AslRegWildcardFindClose @ 0x1407FB27C
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1407F408C (SdbpCheckMatchingWildcardRegistryEntry.c)
 *     AslRegWildcardFindFirst @ 0x1407FB2F0 (AslRegWildcardFindFirst.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 */

__int64 __fastcall AslRegWildcardFindClose(_QWORD *a1)
{
  _QWORD *v1; // rsi
  void *v3; // rcx
  _QWORD *v4; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != a1 )
    {
      do
      {
        v3 = (void *)v1[4];
        if ( v3 )
        {
          ZwClose(v3);
          v1[4] = 0LL;
        }
        v4 = (_QWORD *)*v1;
        AslFree(v3);
        v1 = v4;
      }
      while ( v4 != a1 );
    }
    if ( a1[3] )
      AslFree(a1);
    return AslFree(a1);
  }
  return result;
}
