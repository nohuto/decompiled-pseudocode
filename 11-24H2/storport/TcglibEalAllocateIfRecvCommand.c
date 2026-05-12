/*
 * XREFs of TcglibEalAllocateIfRecvCommand @ 0x140084DA4
 * Callers:
 *     TcglibpAllocateRequestResources @ 0x14013EE80 (TcglibpAllocateRequestResources.c)
 *     TcglibpGetCapabilities @ 0x14013FB04 (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x14013FFF0 (TcglibpGetProtocolList.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 */

__int64 __fastcall TcglibEalAllocateIfRecvCommand(__int64 a1, char a2, __int16 a3, int a4, __int64 *a5)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rsi
  __int64 v7; // rdi
  _DWORD *v8; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned int v11; // ebp
  __int64 *v12; // r12
  __int64 v13; // r9
  __int64 *v14; // r15
  void *Pool; // r13
  __int64 *v16; // r9
  __int64 Srb; // r8
  char v18; // al
  unsigned int LockArray_high; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rax
  _BYTE *v25; // rcx
  char v26; // al
  int v27; // eax
  unsigned int v28; // ebp
  PVOID P; // [rsp+60h] [rbp+8h]

  v5 = 0;
  v6 = (_DWORD *)a1;
  v7 = 0LL;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    v8 = *(_DWORD **)(a1 + 24);
    v7 = a1;
    v9 = a1;
    v6 = v8;
    if ( *v8 == 1314275652 )
    {
      v10 = (__int64)v8 + 274;
      goto LABEL_9;
    }
    if ( *v8 != 1094997074 )
    {
      v10 = 98LL;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    v8 = (_DWORD *)a1;
    v9 = 0LL;
  }
  v10 = (__int64)v6 + 482;
LABEL_9:
  v11 = (a4 + 511) & 0xFFFFFE00;
  if ( v7 )
  {
    v12 = (__int64 *)(v7 + 8);
    v13 = *(_QWORD *)(v7 + 8);
    v14 = (__int64 *)(v8 + 2);
  }
  else
  {
    v14 = (__int64 *)(v6 + 2);
    v12 = (__int64 *)(v9 + 8);
    v13 = *((_QWORD *)v6 + 1);
  }
  Pool = (void *)RaidAllocatePool(64LL, v11, 1129603410LL, v13);
  if ( !Pool )
    return (unsigned int)-1073741801;
  v16 = v12;
  if ( !v7 )
    v16 = v14;
  P = (PVOID)RaidAllocatePool(64LL, 255LL, 1314087250LL, *v16);
  if ( !P )
  {
    v5 = -1073741801;
LABEL_22:
    ExFreePoolWithTag(Pool, 0x43546152u);
    return v5;
  }
  if ( v7 )
    v14 = v12;
  Srb = RaidAllocateSrb(*v14, 0, *(_BYTE *)v10, 1);
  if ( !Srb )
  {
    v5 = -1073741801;
    ExFreePoolWithTag(P, 0x4E536152u);
    goto LABEL_22;
  }
  v18 = *(_BYTE *)v10;
  *(_BYTE *)(Srb + 3) = 0;
  if ( v18 == 1 )
  {
    *(_DWORD *)(Srb + 20) = 0;
    *(_DWORD *)(Srb + 24) = 320;
    if ( *v6 == 1094997074 && (*((_BYTE *)v6 + 111) & 4) != 0 )
    {
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      _InterlockedIncrement(*(volatile signed __int32 **)(*((_QWORD *)v6 + 771) + 8LL * LockArray_high));
      v20 = **(_QWORD **)(*((_QWORD *)v6 + 771) + 8LL * LockArray_high);
      *(_DWORD *)(Srb + 44) = HIDWORD(v20);
    }
    else
    {
      LODWORD(v20) = -1;
    }
    *(_DWORD *)(Srb + 32) = v20;
    *(_QWORD *)(Srb + 64) = Pool;
    *(_DWORD *)(Srb + 60) = v11;
    *(_QWORD *)(Srb + 80) = 0LL;
    if ( v7 )
      v21 = *(_DWORD *)(v7 + 1392);
    else
      v21 = v6[1031];
    v22 = *(unsigned int *)(Srb + 52);
    *(_DWORD *)(Srb + 40) = v21;
    if ( v7 )
    {
      *(_BYTE *)(v22 + Srb + 8) = *(_BYTE *)(v7 + 104);
      *(_BYTE *)(v22 + Srb + 9) = *(_BYTE *)(v7 + 105);
      v23 = *(_BYTE *)(v7 + 106);
    }
    else
    {
      *(_WORD *)(v22 + Srb + 8) = 0;
      v23 = 0;
    }
    *(_BYTE *)(v22 + Srb + 10) = v23;
    v24 = Srb + *(unsigned int *)(Srb + 120);
    *(_QWORD *)(v24 + 16) = P;
    v25 = (_BYTE *)(v24 + 24);
    *(_DWORD *)v24 = 64;
    *(_DWORD *)(v24 + 4) = 32;
    *(_WORD *)(v24 + 8) = -256;
    *(_BYTE *)(v24 + 10) = 12;
  }
  else
  {
    *(_WORD *)Srb = 88;
    *(_BYTE *)(Srb + 2) = 0;
    *(_DWORD *)(Srb + 12) = 320;
    if ( v7 )
    {
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(v7 + 104);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(v7 + 105);
      v26 = *(_BYTE *)(v7 + 106);
    }
    else
    {
      *(_WORD *)(Srb + 5) = 0;
      v26 = 0;
    }
    *(_BYTE *)(Srb + 7) = v26;
    *(_BYTE *)(Srb + 8) = -1;
    *(_QWORD *)(Srb + 24) = Pool;
    *(_DWORD *)(Srb + 16) = v11;
    *(_QWORD *)(Srb + 48) = 0LL;
    if ( v7 )
      v27 = *(_DWORD *)(v7 + 1392);
    else
      v27 = v6[1031];
    *(_QWORD *)(Srb + 32) = P;
    v25 = (_BYTE *)(Srb + 72);
    *(_DWORD *)(Srb + 20) = v27;
    *(_WORD *)(Srb + 10) = -244;
  }
  v25[4] |= 0x80u;
  v25[1] = a2;
  v25[3] = a3;
  v25[2] = HIBYTE(a3);
  v28 = v11 >> 9;
  v25[9] = v28;
  v25[8] = BYTE1(v28);
  v25[7] = BYTE2(v28);
  *v25 = -94;
  v25[6] = HIBYTE(v28);
  *a5 = Srb;
  return v5;
}
