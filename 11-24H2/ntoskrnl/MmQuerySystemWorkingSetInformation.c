/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x14046A3B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140296808 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiMapWorkingSetTypeToVm @ 0x14046A564 (MiMapWorkingSetTypeToVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MmQuerySystemWorkingSetInformation(__int64 a1, _QWORD *a2)
{
  int v2; // r14d
  unsigned __int64 result; // rax
  int *v4; // rsi
  int v6; // r15d
  __int64 Blink_high; // rdx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // [rsp+50h] [rbp+8h]

  v2 = 0;
  result = (unsigned int)(a1 - 1);
  v4 = (int *)a2 + 15;
  *((_DWORD *)a2 + 15) = 0;
  v6 = a1;
  if ( (unsigned int)result <= 3 )
  {
    v8 = MiMapWorkingSetTypeToVm(a1);
    v11 = v4;
    if ( v6 == 1 )
    {
      Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
      v8 = (*((_QWORD *)qword_140E300C8 + Blink_high) + 18816LL) & -(__int64)(*(_BYTE *)(*((_QWORD *)qword_140E300C8
                                                                                         + Blink_high)
                                                                                       + 18524LL) != 0);
      if ( !v8 )
        return (unsigned __int64)memset_0(a2, 0, 0x40uLL);
      v11 = (int *)a2 + 15;
    }
    v12 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v8 + 174));
    v22 = MiLockWorkingSetShared(v8, Blink_high, v9, v10);
    MiLockWorkingSetCoreExclusive(v8, v13, v14, v15);
    *a2 = *(_QWORD *)(v8 + 128);
    a2[1] = *(_QWORD *)(v8 + 160);
    *((_DWORD *)a2 + 4) = *(_DWORD *)(v8 + 4);
    a2[3] = *(_QWORD *)(v8 + 112);
    a2[4] = *(_QWORD *)(v8 + 120);
    v16 = *(_DWORD *)(v8 + 184);
    a2[6] = *(_QWORD *)(v12 + 8LL * (unsigned int)(v6 - 1) + 7240);
    MiUnlockWorkingSetCoreExclusive(v8);
    if ( (v16 & 0x80u) != 0 )
      *v4 |= 4u;
    else
      v11 = v4;
    if ( (v16 & 0x40) != 0 )
      *v11 = *v4 | 1;
    MiUnlockWorkingSetShared(v8, v22);
    v17 = (_DWORD *)(v12 + 7204);
    v18 = 7LL;
    do
    {
      v2 += *v17++;
      --v18;
    }
    while ( v18 );
    v19 = *a2;
    v20 = a2[6];
    *((_DWORD *)a2 + 14) = v2;
    v21 = v19 + *(_QWORD *)(v12 + 7232);
    a2[5] = v21;
    if ( v21 > v20 )
      a2[5] = v20;
    result = a2[1] << 12;
    a2[1] = result;
    *a2 = v19 << 12;
  }
  return result;
}
