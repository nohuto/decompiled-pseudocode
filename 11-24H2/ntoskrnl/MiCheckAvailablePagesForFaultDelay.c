/*
 * XREFs of MiCheckAvailablePagesForFaultDelay @ 0x140260E00
 * Callers:
 *     MiConvertFaultStatus @ 0x140260910 (MiConvertFaultStatus.c)
 * Callees:
 *     MiGetCurrentSlabIdentity @ 0x1402619D0 (MiGetCurrentSlabIdentity.c)
 */

__int64 __fastcall MiCheckAvailablePagesForFaultDelay(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r11
  int v6; // ebx
  unsigned __int64 v9; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // r12
  __int64 *v13; // rsi
  __int64 v14; // rbp
  __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // r10

  v5 = a5;
  v6 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v11 = *(_QWORD *)(a1 + 16) + 57216LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    v12 = *(_QWORD *)(v11 + 3848) + *(_QWORD *)(v11 + 3856);
    if ( v12 >= 0x420 )
      return 0LL;
    v13 = (__int64 *)(v11 + 16);
    v14 = 3LL;
    v15 = MiPageSizes;
    v16 = 0LL;
    do
    {
      v17 = *(v13 - 1);
      v18 = *v13;
      v13 += 160;
      v19 = *v15++;
      v16 += (v17 + v18) * v19;
      --v14;
    }
    while ( v14 );
    if ( v16 + v12 >= 0x420 )
      return 0LL;
  }
  v9 = *(_QWORD *)(a1 + 18688);
  if ( v9 >= 0x420 )
    return 0LL;
  if ( !a4 && (unsigned __int8)MiGetCurrentSlabIdentity(a2) != 0xFF )
  {
    v9 += *(_QWORD *)(v21 + 18304);
    if ( v9 >= 0x420 )
      return 0LL;
    v6 = v20 + 2;
  }
  if ( v5 )
    *v5 = v9;
  return v6 | 1u;
}
