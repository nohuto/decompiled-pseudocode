/*
 * XREFs of MiUpdateCloneReducedCommit @ 0x14026A19C
 * Callers:
 *     MiWriteSharedDemandZeroPte @ 0x14026A080 (MiWriteSharedDemandZeroPte.c)
 *     MiDecrementCloneBlock @ 0x140294E14 (MiDecrementCloneBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateCloneReducedCommit(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    v3 = ((v2 & 0xFFFFFFFFFFFFFFE0uLL) + 32) ^ (v2 ^ ((v2 & 0xFFFFFFFFFFFFFFE0uLL) + 32)) & 0xF00000000000001FuLL;
  else
    v3 = (32 * ((v2 >> 5) - 1)) ^ (v2 ^ (32 * ((v2 >> 5) - 1))) & 0xF00000000000001FuLL;
  *(_QWORD *)(a1 + 16) = v3;
  return (v3 >> 5) & 0x7FFFFFFFFFFFFFLL;
}
