/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x14046FF88
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140379DAC (MiUnlockWorkingSetCoreExclusive.c)
 *     MiMapWorkingSetTypeToVm @ 0x14047013C (MiMapWorkingSetTypeToVm.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

unsigned __int64 __fastcall MmQuerySystemWorkingSetInformation(__int64 a1, _QWORD *a2)
{
  int v2; // r14d
  unsigned __int64 result; // rax
  int *v4; // rsi
  int v6; // r15d
  __int64 v7; // rbp
  int *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ebx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // [rsp+50h] [rbp+8h]

  v2 = 0;
  result = (unsigned int)(a1 - 1);
  v4 = (int *)a2 + 15;
  *((_DWORD *)a2 + 15) = 0;
  v6 = a1;
  if ( (unsigned int)result <= 3 )
  {
    v7 = MiMapWorkingSetTypeToVm(a1);
    v8 = v4;
    if ( v6 == 1 )
    {
      v9 = *((_QWORD *)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      v7 = (v9 + 18816) & -(__int64)(*(_BYTE *)(v9 + 18524) != 0);
      if ( !v7 )
        return (unsigned __int64)memset_0(a2, 0, 0x40uLL);
      v8 = (int *)a2 + 15;
    }
    v10 = *((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v7 + 174));
    v19 = MiLockWorkingSetShared(v7);
    MiLockWorkingSetCoreExclusive(v7, v11, v12);
    *a2 = *(_QWORD *)(v7 + 128);
    a2[1] = *(_QWORD *)(v7 + 160);
    *((_DWORD *)a2 + 4) = *(_DWORD *)(v7 + 4);
    a2[3] = *(_QWORD *)(v7 + 112);
    a2[4] = *(_QWORD *)(v7 + 120);
    v13 = *(_DWORD *)(v7 + 184);
    a2[6] = *(_QWORD *)(v10 + 8LL * (unsigned int)(v6 - 1) + 7240);
    MiUnlockWorkingSetCoreExclusive(v7);
    if ( (v13 & 0x80u) != 0 )
      *v4 |= 4u;
    else
      v8 = v4;
    if ( (v13 & 0x40) != 0 )
      *v8 = *v4 | 1;
    MiUnlockWorkingSetShared(v7, v19);
    v14 = (_DWORD *)(v10 + 7204);
    v15 = 7LL;
    do
    {
      v2 += *v14++;
      --v15;
    }
    while ( v15 );
    v16 = *a2;
    v17 = a2[6];
    *((_DWORD *)a2 + 14) = v2;
    v18 = v16 + *(_QWORD *)(v10 + 7232);
    a2[5] = v18;
    if ( v18 > v17 )
      a2[5] = v17;
    result = a2[1] << 12;
    a2[1] = result;
    *a2 = v16 << 12;
  }
  return result;
}
