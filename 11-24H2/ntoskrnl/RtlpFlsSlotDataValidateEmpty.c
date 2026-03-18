/*
 * XREFs of RtlpFlsSlotDataValidateEmpty @ 0x14048B78C
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpFlsSlotDataValidateEmpty(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int i; // edx
  int v6; // ecx
  __int64 v7; // rbx

  v2 = 1;
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    for ( i = 17; i - 16 <= dword_140E280E8; ++i )
    {
      _BitScanReverse((unsigned int *)&v6, i);
      v7 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v6 - 4));
      if ( v7 && *(_QWORD *)(v7 + 24LL * (i ^ (1 << v6)) + 8) )
        return 0;
    }
  }
  return v2;
}
