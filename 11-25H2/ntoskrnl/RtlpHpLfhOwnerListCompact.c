/*
 * XREFs of RtlpHpLfhOwnerListCompact @ 0x1403C7004
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403C73E0 (RtlpHpLfhSubsegmentDecommitPages.c)
 */

__int64 __fastcall RtlpHpLfhOwnerListCompact(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *i; // rbx
  __int64 result; // rax

  for ( i = *a3; i != (__int64 *)a3; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 39) != 1 )
      result = RtlpHpLfhSubsegmentDecommitPages(a1, i, 0xFFFFFFFFLL, 1LL);
  }
  return result;
}
