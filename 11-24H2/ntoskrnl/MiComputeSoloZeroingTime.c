/*
 * XREFs of MiComputeSoloZeroingTime @ 0x1402718B0
 * Callers:
 *     MiQuantifyZeroWork @ 0x140271758 (MiQuantifyZeroWork.c)
 * Callees:
 *     MiTimeToWriteMemory @ 0x140271984 (MiTimeToWriteMemory.c)
 */

__int64 __fastcall MiComputeSoloZeroingTime(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rbp
  _QWORD *v5; // r14
  unsigned int i; // edi

  v2 = *(_QWORD *)(qword_140E38D50 + 57216LL * *(unsigned int *)(a1 + 88) + 15272);
  if ( !v2 )
    return 0LL;
  v3 = 0;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    LOBYTE(v3) = KeGetCurrentPrcb()->PowerState.ArchitecturalEfficiencyClass != 1;
    ++v3;
  }
  if ( !*(_DWORD *)(304LL * v3 + v2 + 140) )
    return 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(a1 + 48);
  for ( i = 0; i < 4; ++i )
  {
    if ( *v5 )
      v4 += MiTimeToWriteMemory(*(_DWORD *)(a1 + 88), v3, i, 1, *v5 << 12);
    ++v5;
  }
  return v4;
}
