/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x14091E410
 * Callers:
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v6; // r14d
  _KPROCESS *Process; // rcx
  _OWORD *v8; // rax
  int v9; // eax
  int v10; // edx
  int v11; // r9d
  __int64 v12; // r10
  int v13; // ecx
  int v14; // edi
  int v15; // r8d
  int v16; // r11d
  __int64 v17; // rax
  int v18; // ecx
  __int16 v20; // ax
  int v21; // edx
  _OWORD *v22; // rax

  v6 = 0;
  memset_0(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime )
  {
    v20 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( (v20 == 332 || v20 == 452)
      && (unsigned __int16)PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process) == 452 )
    {
      *(_QWORD *)(a1 + 8) &= ~1uLL;
    }
  }
  v8 = *(_OWORD **)(a1 + 8);
  *((_OWORD *)a3 + 1) = *v8;
  *((_OWORD *)a3 + 2) = v8[1];
  *((_OWORD *)a3 + 3) = v8[2];
  *((_OWORD *)a3 + 4) = v8[3];
  *((_OWORD *)a3 + 5) = v8[4];
  *((_OWORD *)a3 + 6) = v8[5];
  *((_OWORD *)a3 + 7) = v8[6];
  *((_OWORD *)a3 + 8) = v8[7];
  v8 += 8;
  *((_OWORD *)a3 + 9) = *v8;
  *((_OWORD *)a3 + 10) = v8[1];
  *((_OWORD *)a3 + 11) = v8[2];
  *((_OWORD *)a3 + 12) = v8[3];
  *((_OWORD *)a3 + 13) = v8[4];
  *((_OWORD *)a3 + 14) = v8[5];
  *((_OWORD *)a3 + 15) = v8[6];
  *((_QWORD *)a3 + 41) = *(_QWORD *)(a1 + 8);
  v9 = a3[13];
  v10 = v9 & 0xF;
  a3[2] = v10;
  a3[3] = (unsigned __int8)v9 >> 4;
  if ( v10 != 1 )
  {
    if ( (v9 & 0xF) == 0 )
    {
      v11 = a3[18];
      if ( (v11 & 0xFFFFFFF) != 0 )
        goto LABEL_7;
    }
    return (unsigned int)-1073741811;
  }
  v22 = *(_OWORD **)(a1 + 8);
  *((_OWORD *)a3 + 1) = *v22;
  *((_OWORD *)a3 + 2) = v22[1];
  *((_OWORD *)a3 + 3) = v22[2];
  *((_OWORD *)a3 + 4) = v22[3];
  *((_OWORD *)a3 + 5) = v22[4];
  *((_OWORD *)a3 + 6) = v22[5];
  *((_OWORD *)a3 + 7) = v22[6];
  *((_OWORD *)a3 + 8) = v22[7];
  v22 += 8;
  *((_OWORD *)a3 + 9) = *v22;
  *((_OWORD *)a3 + 10) = v22[1];
  *((_OWORD *)a3 + 11) = v22[2];
  *((_OWORD *)a3 + 12) = v22[3];
  *((_OWORD *)a3 + 13) = v22[4];
  *((_OWORD *)a3 + 14) = v22[5];
  *((_OWORD *)a3 + 15) = v22[6];
  *((_QWORD *)a3 + 32) = *((_QWORD *)v22 + 14);
  v11 = a3[18];
  if ( (v11 & 0xFFFFFFF) == 0 )
    return (unsigned int)-1073741811;
  v10 = a3[2];
LABEL_7:
  v12 = *((_QWORD *)a3 + 41) - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF);
  *(_QWORD *)a3 = v12;
  v13 = 4096;
  if ( (unsigned int)a3[15] > 0x1000 )
    v13 = a3[15];
  a3[81] = v13;
  v14 = a3[19];
  v15 = v14 & 0xFFFFFFF;
  v16 = a3[17];
  if ( (v14 & 0xFFFFFFF) != 0 )
  {
    v18 = a3[20] & 0xFFFFFFF;
    a3[78] = v18 + 16;
    a3[77] = v11 & 0xFFFFFFF;
    a3[76] = v16 & 0xFFFFFFF;
    *((_QWORD *)a3 + 37) = v12 + (v16 & 0xFFFFFFF);
    v17 = v14 & 0xFFFFFFF;
  }
  else
  {
    v17 = v16 & 0xFFFFFFF;
    v15 = v16 & 0xFFFFFFF;
    v18 = v11 & 0xFFFFFFF;
  }
  a3[72] = 16;
  a3[71] = v18;
  a3[70] = v15;
  *((_QWORD *)a3 + 34) = v12 + v17;
  if ( v10 == 1 )
  {
    v21 = a3[64];
    if ( (v14 & 0xFFFFFFF) != 0 )
    {
      a3[73] = a3[65];
      a3[79] = v21;
    }
    else
    {
      a3[73] = v21;
    }
  }
  a3[80] = a3[77] + 16 + v18;
  return v6;
}
