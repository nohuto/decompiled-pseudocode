/*
 * XREFs of KeFindFirstSetLeftGroupAffinity @ 0x14045A030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanReverse64(&v2, v2);
  return *((unsigned int *)qword_140F21E78 + 64 * *(unsigned __int16 *)(a1 + 8) + (int)v2);
}
