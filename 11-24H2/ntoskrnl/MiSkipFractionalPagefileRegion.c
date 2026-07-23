/*
 * XREFs of MiSkipFractionalPagefileRegion @ 0x14046314C
 * Callers:
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSkipFractionalPagefileRegion(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx
  __int64 v5; // r8

  v3 = a1;
  v4 = *(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 44);
  if ( (__int64)(v4 - a1) >> 3 > a3 )
    v4 = a1 + 8 * a3;
  do
  {
    v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (*(_QWORD *)v5 & 0x3E0LL) != 0 || (*(_QWORD *)v5 & 1) != 0 )
      break;
    v3 = ((v5 << 25) + 0x10000000) >> 16;
  }
  while ( v3 < v4 );
  if ( v3 <= v4 )
    return v3;
  return v4;
}
