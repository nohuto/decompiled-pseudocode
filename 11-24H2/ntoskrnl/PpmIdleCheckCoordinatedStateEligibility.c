/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x1405CBAFC
 * Callers:
 *     PpmIdleSelectStates @ 0x1404E1498 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1405CB75C (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     PpmCheckIdleVeto @ 0x1405CB57C (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1405CB5E8 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1405CC2D4 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405CC628 (PpmIdleWaitForDependentTransitions.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7,
        _DWORD *a8,
        __int64 a9,
        _QWORD *a10)
{
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbp
  _QWORD *v14; // r14
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // eax
  int v20; // r8d
  unsigned __int64 v21; // r10
  __int64 v22; // r11
  _DWORD *v23; // r12
  int v24; // r9d
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rdx
  __int64 v28; // [rsp+60h] [rbp-48h]
  unsigned __int64 v29; // [rsp+B0h] [rbp+8h] BYREF
  int v30; // [rsp+B8h] [rbp+10h]
  __int64 v31; // [rsp+C8h] [rbp+20h]

  v31 = a4;
  v30 = a2;
  v10 = a6;
  v11 = *(_QWORD *)(a1 + 34880);
  v12 = a9;
  v14 = a10;
  v16 = PpmPlatformStates;
  v17 = 448LL * a6;
  v29 = 0LL;
  v28 = v11 + 336;
  a6 = *(_DWORD *)(a9 + 4);
  if ( a10 )
    *a10 = -1LL;
  if ( *(_BYTE *)(v17 + v16 + 121) )
  {
    if ( !*(_BYTE *)(v11 + 716) )
    {
      v18 = *(_BYTE *)(a1 + 33) != 0 ? 0xFFFFFFFFLL : 2147483660LL;
LABEL_33:
      PpmIdleRollbackCoordinatedSelection(v12, a6);
      return v18;
    }
  }
  else if ( !(unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)(v17 + v16 + 128), (unsigned __int16 *)(v11 + 720)) )
  {
LABEL_7:
    v18 = 0xFFFFFFFFLL;
    goto LABEL_33;
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v17 + v16 + 416),
         (a7 << 27) | KeGetPcr()->Prcb.Number & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_7;
  }
  *(_DWORD *)(*(_QWORD *)(v12 + 16) + 4LL * (unsigned int)(*(_DWORD *)(v12 + 4))++) = v10;
  if ( !*(_BYTE *)(v17 + v16 + 122) )
  {
    v18 = 2147483658LL;
    goto LABEL_33;
  }
  v19 = PpmCheckIdleVeto(v17 + v16 + 80);
  if ( v19 )
  {
    v18 = v19 | 0x100000000LL;
    goto LABEL_33;
  }
  if ( (unsigned int)(a3 + *(_DWORD *)(v17 + v16 + 72)) > *(_DWORD *)(a1 + 34936) )
  {
    v18 = 2147483650LL;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v17 + v16 + 448) )
    goto LABEL_32;
  if ( *(unsigned int *)(v17 + v16 + 76) > v21 )
  {
    v18 = 2147483651LL;
    goto LABEL_33;
  }
  v23 = a8;
  v24 = a3 + *(_DWORD *)(v17 + v16 + 72);
  v25 = a5;
  v18 = PpmIdleCheckCoordinatedDependencies(
          a1,
          v30,
          v20,
          v24,
          v21,
          a5,
          *(_DWORD *)(v17 + v16 + 124),
          *(_QWORD *)(v17 + v16 + 408),
          (__int64)a8,
          v12,
          v22,
          &v29);
  if ( v18 )
    goto LABEL_33;
  if ( v29 != -1LL )
  {
    if ( v25 <= v29 )
      v26 = v29 - v25;
    else
      v26 = 0LL;
    if ( *(unsigned int *)(v17 + v16 + 76) > v26 )
    {
      v18 = 2147483662LL;
      goto LABEL_33;
    }
    if ( v14 )
      *v14 = v29;
  }
  if ( *v23 == -1 )
  {
    v18 = 2147483649LL;
    goto LABEL_33;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v28) < 0 )
  {
    v18 = 2147483653LL;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(v17 + v16 + 448) )
  {
LABEL_32:
    v18 = 2147483652LL;
    goto LABEL_33;
  }
  return v18;
}
