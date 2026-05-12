/*
 * XREFs of ScsiUnmapRequest @ 0x1401171E4
 * Callers:
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeNamespaceIsDeallocateSupported @ 0x1401051A0 (NvmeNamespaceIsDeallocateSupported.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     BuildNvmeDeallocateCommand @ 0x140119254 (BuildNvmeDeallocateCommand.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _BYTE *v8; // rdi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // si
  unsigned __int16 v16; // ax
  char v17; // al
  char v18; // al
  char v19; // cl
  char *v21; // rcx
  _BYTE *v22; // r8
  __int64 v23; // rdx
  char v24; // al
  char v25; // al
  char v26; // al
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v28; // [rsp+78h] [rbp+10h]

  v4 = *(_BYTE *)(a2 + 2) == 40;
  v27 = 0LL;
  if ( v4 )
    v8 = *(_BYTE **)(a2 + 64);
  else
    v8 = *(_BYTE **)(a2 + 24);
  if ( !NvmeNamespaceIsDeallocateSupported(a1) || (*(_BYTE *)(v11 + 1) & 1) != 0 )
  {
    LOBYTE(v9) = 6;
    goto LABEL_29;
  }
  if ( !v8 || v12 < 0x18 )
  {
    LOBYTE(v12) = 36;
    LOBYTE(v11) = 5;
    LOBYTE(v9) = 21;
    SetSrbSenseData(a2, v9, v11, v12, 0);
    return 3221225507LL;
  }
  v13 = *(_QWORD *)(v10 + 16);
  HIBYTE(v28) = v8[2];
  LOBYTE(v28) = v8[3];
  v14 = *(_QWORD *)(v13 + 600);
  v15 = v28 >> 4;
  if ( !v14 || (v16 = *(unsigned __int8 *)(v14 + 3), !(_BYTE)v16) )
    v16 = 256;
  if ( v15 > v16 )
  {
    LOBYTE(v9) = 21;
LABEL_29:
    LOBYTE(v12) = 36;
    LOBYTE(v11) = 5;
    SetSrbSenseData(a2, v9, v11, v12, 0);
    return 3221225485LL;
  }
  if ( (int)NvmeAllocateDmaBuffer(v13, 16 * (unsigned int)v15, v11, (void **)&v27, (_QWORD *)&v27 + 1, 0) >= 0 )
  {
    if ( v15 )
    {
      v21 = v8 + 18;
      v22 = (_BYTE *)(v27 + 14);
      v23 = v15;
      do
      {
        v22[1] = *(v21 - 10);
        *v22 = *(v21 - 9);
        v22 += 16;
        *(v22 - 17) = *(v21 - 8);
        *(v22 - 18) = *(v21 - 7);
        *(v22 - 19) = *(v21 - 6);
        *(v22 - 20) = *(v21 - 5);
        *(v22 - 21) = *(v21 - 4);
        *(v22 - 22) = *(v21 - 3);
        *(v22 - 23) = *(v21 - 2);
        *(v22 - 24) = *(v21 - 1);
        v24 = *v21;
        v21 += 16;
        *(v22 - 25) = v24;
        *(v22 - 26) = *(v21 - 15);
        --v23;
      }
      while ( v23 );
    }
    BuildNvmeDeallocateCommand(*(unsigned int *)(a1 + 56), v15, *(_QWORD *)a4 + 4096LL, (char *)&v27 + 8);
    *(_DWORD *)(*(_QWORD *)a4 + 4256LL) |= 4u;
    *(_DWORD *)(*(_QWORD *)a4 + 4256LL) &= ~1u;
    *(_DWORD *)(*(_QWORD *)a4 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)a4 + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)a4 + 4256LL) &= ~0x40u;
    *(_OWORD *)(*(_QWORD *)a4 + 4160LL) = v27;
    *(_DWORD *)(*(_QWORD *)a4 + 4248LL) = 16 * v15;
    v25 = *(_BYTE *)(a2 + 3);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v26 = v25 >> 7;
    else
      v26 = (v25 >= 0) - 1;
    *(_BYTE *)(a2 + 3) = v26 & 0x80;
    return 259LL;
  }
  else
  {
    v17 = *(_BYTE *)(a2 + 3);
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      v18 = ((v17 >> 7) & 0x80) + 38;
    }
    else
    {
      v19 = 38;
      if ( v17 < 0 )
        v19 = -90;
      v18 = v19;
    }
    *(_BYTE *)(a2 + 3) = v18;
    return 3221225495LL;
  }
}
