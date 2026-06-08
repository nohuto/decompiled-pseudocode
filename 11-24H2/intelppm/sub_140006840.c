/*
 * XREFs of sub_140006840 @ 0x140006840
 * Callers:
 *     sub_140029000 @ 0x140029000 (sub_140029000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140006840(int a1)
{
  __int64 v1; // r9
  unsigned int i; // r8d

  v1 = 0LL;
  for ( i = 0; i < dword_1400196F0; ++i )
  {
    if ( a1 == *(_DWORD *)(qword_1400196E8 + 12LL * i) )
      return qword_1400196E8 + 12LL * i;
  }
  return v1;
}
