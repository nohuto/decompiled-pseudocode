/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x1403C22D8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14037F48C (MiUnlockWorkingSetCoreExclusive.c)
 *     MiMapWorkingSetTypeToVm @ 0x1403C248C (MiMapWorkingSetTypeToVm.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  int v11; // ebx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // [rsp+50h] [rbp+8h]

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
      v9 = *((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      v7 = (v9 + 18816) & -(__int64)(*(_BYTE *)(v9 + 18524) != 0);
      if ( !v7 )
        return (unsigned __int64)memset_0(a2, 0, 0x40uLL);
      v8 = (int *)a2 + 15;
    }
    v10 = *((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v7 + 174));
    v17 = MiLockWorkingSetShared(v7);
    MiLockWorkingSetCoreExclusive(v7);
    *a2 = *(_QWORD *)(v7 + 128);
    a2[1] = *(_QWORD *)(v7 + 160);
    *((_DWORD *)a2 + 4) = *(_DWORD *)(v7 + 4);
    a2[3] = *(_QWORD *)(v7 + 112);
    a2[4] = *(_QWORD *)(v7 + 120);
    v11 = *(_DWORD *)(v7 + 184);
    a2[6] = *(_QWORD *)(v10 + 8LL * (unsigned int)(v6 - 1) + 7240);
    MiUnlockWorkingSetCoreExclusive(v7);
    if ( (v11 & 0x80u) != 0 )
      *v4 |= 4u;
    else
      v8 = v4;
    if ( (v11 & 0x40) != 0 )
      *v8 = *v4 | 1;
    MiUnlockWorkingSetShared(v7, v17);
    v12 = (_DWORD *)(v10 + 7204);
    v13 = 7LL;
    do
    {
      v2 += *v12++;
      --v13;
    }
    while ( v13 );
    v14 = *a2;
    v15 = a2[6];
    *((_DWORD *)a2 + 14) = v2;
    v16 = v14 + *(_QWORD *)(v10 + 7232);
    a2[5] = v16;
    if ( v16 > v15 )
      a2[5] = v15;
    result = a2[1] << 12;
    a2[1] = result;
    *a2 = v14 << 12;
  }
  return result;
}
