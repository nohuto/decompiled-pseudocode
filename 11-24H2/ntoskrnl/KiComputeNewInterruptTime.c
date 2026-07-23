/*
 * XREFs of KiComputeNewInterruptTime @ 0x1402ABF50
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KiUpdateTimeAssist @ 0x1402AD69C (KiUpdateTimeAssist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeNewInterruptTime(unsigned __int64 a1, _QWORD *a2)
{
  char v2; // al
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int128 v6; // rax

  v2 = MEMORY[0xFFFFF78000000369];
  *a2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 <= MEMORY[0xFFFFF78000000350] )
    return MEMORY[0xFFFFF78000000008];
  v5 = a1 - MEMORY[0xFFFFF78000000350];
  if ( v2 )
    v5 <<= v2;
  v6 = v5 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
  KiInterruptTimeErrorAccumulator += v6;
  if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v6 )
    ++*((_QWORD *)&v6 + 1);
  *a2 = *((_QWORD *)&v6 + 1);
  return *((_QWORD *)&v6 + 1) + v4;
}
