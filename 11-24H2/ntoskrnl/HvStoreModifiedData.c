/*
 * XREFs of HvStoreModifiedData @ 0x140966BFC
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x1404281C0 (RtlMergeBitMaps.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140967554 (HvpTruncateBins.c)
 *     HvResetDirtyData @ 0x140967654 (HvResetDirtyData.c)
 *     HvpGenerateLogEntry @ 0x140967718 (HvpGenerateLogEntry.c)
 *     HvpCountSetRangesInVector @ 0x140967A9C (HvpCountSetRangesInVector.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR a1, char a2, char a3)
{
  bool v3; // zf
  void *v5; // r12
  PVOID *v6; // r14
  unsigned int v7; // r13d
  unsigned int *v8; // r15
  PVOID *v9; // rsi
  unsigned int v10; // eax
  ULONG_PTR v11; // rdi
  void *Pool2; // rax
  int v13; // eax
  unsigned int SizeOfBitMap; // edi
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  void *v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int128 v24; // xmm1
  unsigned int *v25; // rax
  __int64 v26; // rdi
  void *v27; // r8
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // eax
  PVOID v31; // rax
  unsigned int v32; // eax
  PVOID *v33; // rdi
  __int64 v34; // r12
  PVOID *v35; // rdi
  __int64 v36; // r14
  int v37; // [rsp+40h] [rbp-39h] BYREF
  unsigned int Size; // [rsp+44h] [rbp-35h]
  int Size_4; // [rsp+48h] [rbp-31h] BYREF
  int v40; // [rsp+4Ch] [rbp-2Dh]
  int v41; // [rsp+50h] [rbp-29h] BYREF
  PVOID v42; // [rsp+58h] [rbp-21h] BYREF
  PVOID P; // [rsp+60h] [rbp-19h]
  _RTL_BITMAP BitMapHeader; // [rsp+68h] [rbp-11h] BYREF
  void *v45; // [rsp+78h] [rbp-1h] BYREF
  __int128 v46; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v47; // [rsp+E0h] [rbp+67h]
  unsigned int v50; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (*(_DWORD *)(a1 + 160) & 0x8000) == 0;
  v45 = 0LL;
  Size_4 = 0;
  v5 = 0LL;
  v37 = 0;
  v6 = 0LL;
  v42 = 0LL;
  v7 = 0;
  v50 = 0;
  v8 = 0LL;
  v41 = 0;
  v9 = 0LL;
  v47 = 0;
  P = 0LL;
  v46 = 0LL;
  BitMapHeader = 0LL;
  if ( !v3 )
    return 1;
  *(_DWORD *)(a1 + 1728) = (unsigned __int8)HvpTruncateBins(a1);
  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 )
    return 1;
  v10 = *(_DWORD *)(a1 + 108);
  v11 = v10;
  Size = v10;
  if ( *(_DWORD *)(a1 + 104) )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v10, 0x30354D43u);
    v5 = Pool2;
    if ( !Pool2 )
      return 2;
    memmove(Pool2, *(const void **)(a1 + 96), (unsigned int)v11);
    v40 = *(_DWORD *)(a1 + 88);
    LODWORD(v46) = v40;
    *((_QWORD *)&v46 + 1) = v5;
    v13 = HvpGenerateLogEntry(a1, &v42, &v50, &v41);
    v6 = (PVOID *)v42;
    v7 = v50;
    if ( v13 < 0 )
    {
      v18 = 2;
      goto LABEL_46;
    }
  }
  else
  {
    v40 = v46;
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v20 = (void *)ExAllocatePool2(0x100uLL, 0x1000uLL, 0x30354D43u);
  P = v20;
  if ( !v20 )
  {
LABEL_48:
    v18 = 2;
    goto LABEL_16;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = *(_DWORD *)(a1 + 280);
  v21 = v20;
  v22 = *(_OWORD **)(a1 + 64);
  v23 = 4LL;
  do
  {
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    v21[6] = v22[6];
    v21 += 8;
    v24 = v22[7];
    v22 += 8;
    *(v21 - 1) = v24;
    --v23;
  }
  while ( v23 );
  if ( a3 )
  {
    v25 = (unsigned int *)ExAllocatePool2(0x100uLL, v11, 0x30354D43u);
    v8 = v25;
    if ( v25 )
    {
      memmove(v25, *(const void **)(a1 + 120), v11);
      LODWORD(v42) = *(_DWORD *)(a1 + 112);
      BitMapHeader.SizeOfBitMap = (unsigned int)v42;
      BitMapHeader.Buffer = v8;
      if ( *(_DWORD *)(a1 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, (unsigned int *)&v46);
      v47 = HvpCountSetRangesInVector(&BitMapHeader);
      v9 = (PVOID *)ExAllocatePool2(0x100uLL, 24LL * v47, 0x32354D43u);
      if ( v9 )
      {
        v26 = 0LL;
        v50 = 0;
        while ( (unsigned int)v26 < v47
             && (unsigned __int8)HvpFindNextDirtyBlock(
                                   a1,
                                   (unsigned int)&BitMapHeader,
                                   (unsigned int)&v50,
                                   (unsigned int)&v45,
                                   (__int64)&Size_4,
                                   (__int64)&v37,
                                   1) )
        {
          v27 = v45;
          if ( !v45 )
            goto LABEL_48;
          v28 = v37;
          v29 = 3 * v26;
          v30 = Size_4;
          LODWORD(v9[v29]) = v37;
          v37 = v30 + v28;
          v26 = (unsigned int)(v26 + 1);
          LODWORD(v9[v29 + 2]) = v30;
          v9[v29 + 1] = v27;
        }
        memmove(v8, *(const void **)(a1 + 120), Size);
        SizeOfBitMap = (unsigned int)v42;
        goto LABEL_9;
      }
    }
    goto LABEL_48;
  }
LABEL_8:
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
  v15 = *(_DWORD *)(a1 + 280);
  if ( *(_DWORD *)(a1 + 1792) < v15 || *(_DWORD *)(a1 + 1728) )
    *(_DWORD *)(a1 + 1792) = v15;
  if ( *(_DWORD *)(a1 + 104) )
  {
    *(_DWORD *)(a1 + 1688) = v40;
    v16 = Size;
    *(_QWORD *)(a1 + 1696) = v5;
    v5 = 0LL;
    *(_DWORD *)(a1 + 1704) = v16;
    v17 = v41;
    *(_QWORD *)(a1 + 1712) = v6;
    v6 = 0LL;
    *(_DWORD *)(a1 + 1724) = v17;
    *(_DWORD *)(a1 + 1720) = v7;
    HvResetDirtyData(a1);
  }
  if ( a2 || a3 )
  {
    v31 = P;
    P = 0LL;
    v3 = *(_BYTE *)(a1 + 195) == 0;
    *(_QWORD *)(a1 + 1776) = v31;
    if ( !v3 )
      *(_BYTE *)(a1 + 1732) = 1;
    if ( a3 )
    {
      v32 = Size;
      *(_QWORD *)(a1 + 1744) = v8;
      v8 = 0LL;
      *(_DWORD *)(a1 + 1736) = SizeOfBitMap;
      *(_QWORD *)(a1 + 1760) = v9;
      v9 = 0LL;
      *(_DWORD *)(a1 + 1752) = v32;
      *(_DWORD *)(a1 + 1768) = v47;
      if ( *(_QWORD *)(a1 + 120) )
      {
        RtlClearAllBits((PRTL_BITMAP)(a1 + 112));
        *(_DWORD *)(a1 + 128) = 0;
        *(_BYTE *)(a1 + 195) = 0;
      }
    }
  }
  v18 = 0;
LABEL_16:
  if ( v5 )
LABEL_46:
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
  {
    if ( v7 )
    {
      v33 = v6 + 1;
      v34 = v7;
      do
      {
        if ( *v33 )
        {
          ExFreePoolWithTag(*v33, 0);
          *v33 = 0LL;
        }
        v33 += 3;
        --v34;
      }
      while ( v34 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
  {
    if ( v47 )
    {
      v35 = v9 + 1;
      v36 = v47;
      do
      {
        if ( *v35 )
          ExFreePoolWithTag(*v35, 0);
        v35 += 3;
        --v36;
      }
      while ( v36 );
    }
    ExFreePoolWithTag(v9, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v18;
}
