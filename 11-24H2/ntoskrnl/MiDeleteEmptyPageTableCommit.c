/*
 * XREFs of MiDeleteEmptyPageTableCommit @ 0x140477174
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x140476F00 (MiDeleteEmptyPageTableTail.c)
 * Callees:
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiGetPreviousVad @ 0x140261500 (MiGetPreviousVad.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiReturnPageTablePageCommitment @ 0x1409DE1C0 (MiReturnPageTablePageCommitment.c)
 */

unsigned __int64 __fastcall MiDeleteEmptyPageTableCommit(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r9
  unsigned __int64 LeafVa; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r12
  char *v11; // r14
  char *NextVad; // rdi
  _KPROCESS *Process; // r15
  __int64 v14; // r8
  unsigned __int8 v15; // bl
  __int64 v16; // rcx
  unsigned __int64 result; // rax
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h]
  __int128 v20; // [rsp+60h] [rbp-A0h]
  __int128 v21; // [rsp+70h] [rbp-90h]
  __int128 v22; // [rsp+80h] [rbp-80h]
  __int128 v23; // [rsp+90h] [rbp-70h]
  __int128 v24; // [rsp+A0h] [rbp-60h]
  __int128 v25; // [rsp+B0h] [rbp-50h]
  _QWORD v26[2]; // [rsp+C0h] [rbp-40h]
  __int128 v27; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-20h]
  __int128 v29; // [rsp+F0h] [rbp-10h]
  __int128 v30; // [rsp+100h] [rbp+0h]
  __int128 v31; // [rsp+110h] [rbp+10h]
  __int128 v32; // [rsp+120h] [rbp+20h]
  __int128 v33; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v36; // [rsp+1B0h] [rbp+B0h]

  memset_0(&v18, 0, 0x88uLL);
  memset_0(&v27, 0, 0x88uLL);
  v4 = a1[23];
  v35 = 0;
  v36 = v4;
  v5 = *(_QWORD *)(v4 + 80);
  LeafVa = MiGetLeafVa(a2);
  if ( LeafVa < a1[5] )
    LeafVa = a1[5];
  v8 = MiGetLeafVa(v6);
  v9 = 128LL;
  v10 = v8 - 1;
  if ( v8 - 1 > a1[6] )
    v10 = a1[6];
  if ( LeafVa == (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 )
  {
    LODWORD(v11) = MiGetPreviousVad((unsigned __int64 *)v5);
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v5 + 48), 0x15u) )
    {
      v18 = *(_OWORD *)v5;
      v19 = *(_OWORD *)(v5 + 16);
      v20 = *(_OWORD *)(v5 + 32);
      v21 = *(_OWORD *)(v5 + 48);
    }
    else
    {
      v18 = *(_OWORD *)v5;
      v19 = *(_OWORD *)(v5 + 16);
      v20 = *(_OWORD *)(v5 + 32);
      v21 = *(_OWORD *)(v5 + 48);
      v22 = *(_OWORD *)(v5 + 64);
      v23 = *(_OWORD *)(v5 + 80);
      v24 = *(_OWORD *)(v5 + 96);
      v25 = *(_OWORD *)(v5 + 112);
      v26[0] = *(_QWORD *)(v5 + 128);
    }
    HIDWORD(v19) = (LeafVa >> 12) - 1;
    BYTE1(v20) = ((LeafVa >> 12) - 1) >> 32;
    v11 = (char *)&v18 + 1;
  }
  if ( v10 == (((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12) | 0xFFF) )
  {
    NextVad = (char *)MiGetNextVad(v5);
  }
  else
  {
    if ( _bittest((const signed __int32 *)(v5 + 48), 0x15u) )
    {
      v27 = *(_OWORD *)v5;
      v28 = *(_OWORD *)(v5 + 16);
      v29 = *(_OWORD *)(v5 + 32);
      v30 = *(_OWORD *)(v5 + 48);
    }
    else
    {
      v27 = *(_OWORD *)v5;
      v28 = *(_OWORD *)(v5 + 16);
      v29 = *(_OWORD *)(v5 + 32);
      v30 = *(_OWORD *)(v5 + 48);
      v31 = *(_OWORD *)(v5 + 64);
      v32 = *(_OWORD *)(v5 + 80);
      v33 = *(_OWORD *)(v5 + 96);
      *(_OWORD *)&v26[v9 / 8] = *(_OWORD *)(v5 + 112);
      *(_QWORD *)((char *)&v27 + v9) = *(_QWORD *)(v5 + v9);
    }
    DWORD2(v28) = (v10 >> 12) + 1;
    LOBYTE(v29) = ((v10 >> 12) + 1) >> 32;
    NextVad = (char *)&v27 + 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v14) = MiLockWorkingSetShared(a1[4]);
  v15 = v14;
  MiCaptureDeleteHierarchy(LeafVa, v10, v14, (__int64)&v35);
  MiUnlockWorkingSetShared(a1[4], v15);
  MiReturnPageTablePageCommitment(LeafVa, v10, (_DWORD)Process, (_DWORD)v11, (__int64)NextVad, v5, (__int64)&v35);
  v16 = *(_QWORD *)(v36 + 8);
  result = *(_QWORD *)(v16 + 24);
  if ( result )
  {
    result = -(__int64)result;
    _InterlockedAdd64((volatile signed __int64 *)Process[1].Padding, result);
    *(_QWORD *)(v16 + 24) = 0LL;
  }
  return result;
}
