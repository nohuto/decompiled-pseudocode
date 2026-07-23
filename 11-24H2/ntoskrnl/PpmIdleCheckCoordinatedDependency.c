/*
 * XREFs of PpmIdleCheckCoordinatedDependency @ 0x1405CB75C
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x1405CB5E8 (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1405CB5E8 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405CBAFC (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1405CC2D4 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleTransitionStall @ 0x1405CC3CC (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x1405CC954 (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependency(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int *a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 *a11)
{
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // r13
  __int64 v14; // r8
  unsigned int v15; // r12d
  char v16; // dl
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 Prcb; // rax
  unsigned __int64 v25; // rcx
  char v27; // [rsp+68h] [rbp-61h]
  unsigned int v28; // [rsp+6Ch] [rbp-5Dh]
  int v29; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+74h] [rbp-55h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-51h]
  unsigned __int64 v32; // [rsp+80h] [rbp-49h] BYREF
  __int128 v33; // [rsp+88h] [rbp-41h] BYREF
  __int64 v34; // [rsp+98h] [rbp-31h]
  _QWORD v35[13]; // [rsp+A0h] [rbp-29h] BYREF

  v29 = -1;
  v11 = a7;
  v32 = 0LL;
  v30 = 0;
  v28 = 0;
  v34 = 0LL;
  v33 = 0LL;
  *a11 = -1LL;
  v12 = KeCheckProcessorAffinityEx(
          (unsigned __int16 *)(448LL * *(unsigned int *)(*(_QWORD *)(a7 + 8) + 4LL) + PpmPlatformStates + 128),
          *(_DWORD *)(a1 + 36));
  v13 = a9;
  v14 = 0LL;
  v15 = 0;
  v27 = v12;
  v16 = v12;
  v17 = 2147483649LL;
  while ( 1 )
  {
    v31 = v15;
    if ( v15 >= *(_DWORD *)v11 )
      return v17;
    v18 = *(_QWORD *)(v11 + 8);
    v19 = PpmPlatformStates;
    v20 = *(unsigned int *)(v18 + 24LL * v15 + 4);
    v21 = 448 * v20;
    if ( v16 )
    {
      v28 = *(_DWORD *)(v13 + 4);
      if ( *(_BYTE *)(v18 + 24LL * v15 + 1) == (_BYTE)v14 )
        goto LABEL_25;
      v29 = -1;
      v17 = PpmIdleCheckCoordinatedStateEligibility(a1, a2, a3, a4, a5, v20, a6, (__int64)&v29, v13, (__int64)&v32);
      if ( v17 )
      {
LABEL_23:
        PpmIdleRollbackCoordinatedSelection(v13, v28);
LABEL_24:
        v16 = v27;
        goto LABEL_25;
      }
    }
    else
    {
      if ( *(_BYTE *)(v18 + 24LL * v15 + 2) == (_BYTE)v14 )
        goto LABEL_25;
      v22 = *(_DWORD *)(v21 + PpmPlatformStates + 416);
      if ( (v22 & 0x4000000) == 0 )
      {
        v35[3] = 0x100000000LL;
        v35[0] = 0LL;
        v35[1] = PopIdleTransitionTimeout;
        v35[2] = v14;
        if ( (v22 & 0x3000000) == 0x1000000 )
        {
          do
          {
            if ( v22 >> 27 > a6 )
              break;
            PpmIdleTransitionStall(v35);
            v22 = *(_DWORD *)(v21 + v19 + 416);
          }
          while ( (v22 & 0x3000000) == 0x1000000 );
          v16 = v27;
          v14 = 0LL;
        }
        if ( (v22 & 0x4000000) == 0 )
        {
          v17 = 2147483659LL;
          goto LABEL_25;
        }
      }
      v23 = PpmIdleCheckCoordinatedDependencies(
              a1,
              a2,
              a6,
              *(_DWORD *)(v21 + v19 + 72) + a3,
              a4,
              a5,
              *(_DWORD *)(v18 + 24LL * v15 + 8),
              *(_QWORD *)(v18 + 24LL * v15 + 16),
              v14,
              v14,
              a10,
              &v32);
      v14 = 0LL;
      v17 = v23;
      if ( v23 )
        goto LABEL_24;
    }
    if ( !*(_BYTE *)(v18 + 24LL * v15) )
      goto LABEL_26;
    LOWORD(v34) = 0;
    v17 = 0LL;
    *((_QWORD *)&v33 + 1) = *(_QWORD *)(v21 + v19 + 128 + 8);
    *(_QWORD *)&v33 = v21 + v19 + 128;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v30, (unsigned __int16 **)&v33) )
    {
      Prcb = KeGetPrcb(v30);
      if ( a1 != Prcb )
      {
        v17 = PpmTestAndLockProcessor(Prcb, a10, 0LL);
        if ( v17 )
          break;
      }
    }
    v15 = v31;
    v13 = a9;
    if ( !v17 )
    {
LABEL_26:
      if ( v27 )
        *a8 = v29;
      v25 = v32;
      if ( *a11 < v32 )
        v25 = *a11;
      *a11 = v25;
      return v17;
    }
    v16 = v27;
    v14 = 0LL;
    if ( v27 )
      goto LABEL_23;
LABEL_25:
    v11 = a7;
    ++v15;
  }
}
