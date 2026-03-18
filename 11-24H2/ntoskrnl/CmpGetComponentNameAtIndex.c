/*
 * XREFs of CmpGetComponentNameAtIndex @ 0x1409A6A00
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetComponentNameAtIndex(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 )
    return *(_QWORD *)(a1 + 160) + 16 * (a2 - 8 + 6LL);
  else
    return a1 + 16 * (a2 + 2LL);
}
