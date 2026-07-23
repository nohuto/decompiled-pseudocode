/*
 * XREFs of MiDeleteEmptyPageTableCommit @ 0x140473714
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x1404734A0 (MiDeleteEmptyPageTableTail.c)
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiGetPreviousVad @ 0x140291B10 (MiGetPreviousVad.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 */

unsigned __int64 __fastcall MiDeleteEmptyPageTableCommit(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r9
  unsigned __int64 LeafVa; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r12
  char *v13; // r14
  char *NextVad; // rdi
  _KPROCESS *Process; // r15
  __int64 v16; // r8
  unsigned __int8 v17; // bl
  __int64 v18; // rcx
  unsigned __int64 result; // rax
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h]
  __int128 v27; // [rsp+B0h] [rbp-50h]
  _QWORD v28[2]; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-20h]
  __int128 v31; // [rsp+F0h] [rbp-10h]
  __int128 v32; // [rsp+100h] [rbp+0h]
  __int128 v33; // [rsp+110h] [rbp+10h]
  __int128 v34; // [rsp+120h] [rbp+20h]
  __int128 v35; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v38; // [rsp+1B0h] [rbp+B0h]

  memset_0(&v20, 0, 0x88uLL);
  memset_0(&v29, 0, 0x88uLL);
  v4 = a1[23];
  v37 = 0;
  v38 = v4;
  v5 = *(_QWORD *)(v4 + 80);
  LeafVa = MiGetLeafVa(a2);
  if ( LeafVa < a1[5] )
    LeafVa = a1[5];
  v8 = MiGetLeafVa(v6);
  v11 = 128LL;
  v12 = v8 - 1;
  if ( v8 - 1 > a1[6] )
    v12 = a1[6];
  if ( LeafVa == (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 )
  {
    LODWORD(v13) = MiGetPreviousVad((unsigned __int64 *)v5);
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v5 + 48), 0x15u) )
    {
      v20 = *(_OWORD *)v5;
      v21 = *(_OWORD *)(v5 + 16);
      v22 = *(_OWORD *)(v5 + 32);
      v23 = *(_OWORD *)(v5 + 48);
    }
    else
    {
      v20 = *(_OWORD *)v5;
      v21 = *(_OWORD *)(v5 + 16);
      v22 = *(_OWORD *)(v5 + 32);
      v23 = *(_OWORD *)(v5 + 48);
      v24 = *(_OWORD *)(v5 + 64);
      v25 = *(_OWORD *)(v5 + 80);
      v26 = *(_OWORD *)(v5 + 96);
      v27 = *(_OWORD *)(v5 + 112);
      v28[0] = *(_QWORD *)(v5 + 128);
    }
    HIDWORD(v21) = (LeafVa >> 12) - 1;
    BYTE1(v22) = ((LeafVa >> 12) - 1) >> 32;
    v13 = (char *)&v20 + 1;
  }
  if ( v12 == (((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12) | 0xFFF) )
  {
    NextVad = (char *)MiGetNextVad(v5);
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v5 + 48), 0x15u) )
    {
      v29 = *(_OWORD *)v5;
      v30 = *(_OWORD *)(v5 + 16);
      v31 = *(_OWORD *)(v5 + 32);
      v32 = *(_OWORD *)(v5 + 48);
    }
    else
    {
      v29 = *(_OWORD *)v5;
      v30 = *(_OWORD *)(v5 + 16);
      v31 = *(_OWORD *)(v5 + 32);
      v32 = *(_OWORD *)(v5 + 48);
      v33 = *(_OWORD *)(v5 + 64);
      v34 = *(_OWORD *)(v5 + 80);
      v35 = *(_OWORD *)(v5 + 96);
      *(_OWORD *)&v28[v11 / 8] = *(_OWORD *)(v5 + 112);
      *(_QWORD *)((char *)&v29 + v11) = *(_QWORD *)(v5 + v11);
    }
    DWORD2(v30) = (v12 >> 12) + 1;
    LOBYTE(v31) = ((v12 >> 12) + 1) >> 32;
    NextVad = (char *)&v29 + 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v16) = MiLockWorkingSetShared(a1[4], v9, v11, v10);
  v17 = v16;
  MiCaptureDeleteHierarchy(LeafVa, v12, v16, (__int64)&v37);
  MiUnlockWorkingSetShared(a1[4], v17);
  MiReturnPageTablePageCommitment(LeafVa, v12, (_DWORD)Process, (_DWORD)v13, (__int64)NextVad, v5, (__int64)&v37);
  v18 = *(_QWORD *)(v38 + 8);
  result = *(_QWORD *)(v18 + 24);
  if ( result )
  {
    result = -(__int64)result;
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, result);
    *(_QWORD *)(v18 + 24) = 0LL;
  }
  return result;
}
