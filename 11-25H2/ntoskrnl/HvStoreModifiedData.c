/*
 * XREFs of HvStoreModifiedData @ 0x14088302C
 * Callers:
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x140439210 (RtlMergeBitMaps.c)
 *     RtlClearAllBits @ 0x14044A700 (RtlClearAllBits.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpFindNextDirtyBlock @ 0x140882ACC (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140882E40 (HvpTruncateBins.c)
 *     HvpGenerateLogEntry @ 0x140A0C280 (HvpGenerateLogEntry.c)
 *     HvpCountSetRangesInVector @ 0x140A0C604 (HvpCountSetRangesInVector.c)
 *     HvResetDirtyData @ 0x140A4DDD0 (HvResetDirtyData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR a1, char a2, char a3)
{
  bool v3; // zf
  void *v5; // r12
  PVOID *v6; // r14
  unsigned int v7; // r13d
  unsigned int *v8; // r15
  PVOID *v9; // rsi
  size_t v10; // rdi
  void *Pool2; // rax
  int v12; // eax
  unsigned int SizeOfBitMap; // edi
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  void *v19; // rax
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int128 v23; // xmm1
  unsigned int *v24; // rax
  __int64 v25; // rdi
  void *v26; // r8
  int v27; // ecx
  __int64 v28; // rdx
  unsigned int v29; // eax
  PVOID v30; // rax
  unsigned int v31; // eax
  PVOID *v32; // rdi
  __int64 v33; // r12
  PVOID *v34; // rdi
  __int64 v35; // r14
  int v36; // [rsp+40h] [rbp-39h] BYREF
  unsigned int Size; // [rsp+44h] [rbp-35h]
  unsigned int Size_4; // [rsp+48h] [rbp-31h] BYREF
  int v39; // [rsp+4Ch] [rbp-2Dh]
  int v40; // [rsp+50h] [rbp-29h] BYREF
  PVOID v41; // [rsp+58h] [rbp-21h] BYREF
  PVOID P; // [rsp+60h] [rbp-19h]
  _RTL_BITMAP BitMapHeader; // [rsp+68h] [rbp-11h] BYREF
  void *v44; // [rsp+78h] [rbp-1h] BYREF
  __int128 v45; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v46; // [rsp+E0h] [rbp+67h]
  unsigned int v49; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (*(_DWORD *)(a1 + 160) & 0x8000) == 0;
  v44 = 0LL;
  Size_4 = 0;
  v5 = 0LL;
  v36 = 0;
  v6 = 0LL;
  v41 = 0LL;
  v7 = 0;
  v49 = 0;
  v8 = 0LL;
  v40 = 0;
  v9 = 0LL;
  v46 = 0;
  P = 0LL;
  v45 = 0LL;
  BitMapHeader = 0LL;
  if ( !v3 )
    return 1;
  *(_DWORD *)(a1 + 1728) = (unsigned __int8)HvpTruncateBins(a1);
  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 )
    return 1;
  v10 = *(unsigned int *)(a1 + 108);
  Size = *(_DWORD *)(a1 + 108);
  if ( *(_DWORD *)(a1 + 104) )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( !Pool2 )
      return 2;
    memmove(Pool2, *(const void **)(a1 + 96), (unsigned int)v10);
    v39 = *(_DWORD *)(a1 + 88);
    LODWORD(v45) = v39;
    *((_QWORD *)&v45 + 1) = v5;
    v12 = HvpGenerateLogEntry(a1, &v41, &v49, &v40);
    v6 = (PVOID *)v41;
    v7 = v49;
    if ( v12 < 0 )
    {
      v17 = 2;
      goto LABEL_46;
    }
  }
  else
  {
    v39 = v45;
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v19 = (void *)ExAllocatePool2(0x100uLL);
  P = v19;
  if ( !v19 )
  {
LABEL_49:
    v17 = 2;
    goto LABEL_16;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) = *(_DWORD *)(a1 + 280);
  v20 = v19;
  v21 = *(_OWORD **)(a1 + 64);
  v22 = 4LL;
  do
  {
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
    v20[3] = v21[3];
    v20[4] = v21[4];
    v20[5] = v21[5];
    v20[6] = v21[6];
    v20 += 8;
    v23 = v21[7];
    v21 += 8;
    *(v20 - 1) = v23;
    --v22;
  }
  while ( v22 );
  if ( a3 )
  {
    v24 = (unsigned int *)ExAllocatePool2(0x100uLL);
    v8 = v24;
    if ( v24 )
    {
      memmove(v24, *(const void **)(a1 + 120), v10);
      LODWORD(v41) = *(_DWORD *)(a1 + 112);
      BitMapHeader.SizeOfBitMap = (unsigned int)v41;
      BitMapHeader.Buffer = v8;
      if ( *(_DWORD *)(a1 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, (unsigned int *)&v45);
      v46 = HvpCountSetRangesInVector(&BitMapHeader);
      v9 = (PVOID *)ExAllocatePool2(0x100uLL);
      if ( v9 )
      {
        v25 = 0LL;
        v49 = 0;
        while ( (unsigned int)v25 < v46
             && HvpFindNextDirtyBlock(a1, (__int64)&BitMapHeader, &v49, &v44, &Size_4, &v36, 1) )
        {
          v26 = v44;
          if ( !v44 )
            goto LABEL_49;
          v27 = v36;
          v28 = 3 * v25;
          v29 = Size_4;
          LODWORD(v9[v28]) = v36;
          v36 = v29 + v27;
          v25 = (unsigned int)(v25 + 1);
          LODWORD(v9[v28 + 2]) = v29;
          v9[v28 + 1] = v26;
        }
        memmove(v8, *(const void **)(a1 + 120), Size);
        SizeOfBitMap = (unsigned int)v41;
        goto LABEL_9;
      }
    }
    goto LABEL_49;
  }
LABEL_8:
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
  v14 = *(_DWORD *)(a1 + 280);
  if ( *(_DWORD *)(a1 + 1792) < v14 || *(_DWORD *)(a1 + 1728) )
    *(_DWORD *)(a1 + 1792) = v14;
  if ( *(_DWORD *)(a1 + 104) )
  {
    *(_DWORD *)(a1 + 1688) = v39;
    v15 = Size;
    *(_QWORD *)(a1 + 1696) = v5;
    v5 = 0LL;
    *(_DWORD *)(a1 + 1704) = v15;
    v16 = v40;
    *(_QWORD *)(a1 + 1712) = v6;
    v6 = 0LL;
    *(_DWORD *)(a1 + 1724) = v16;
    *(_DWORD *)(a1 + 1720) = v7;
    HvResetDirtyData(a1);
  }
  if ( a2 || a3 )
  {
    v30 = P;
    P = 0LL;
    v3 = *(_BYTE *)(a1 + 195) == 0;
    *(_QWORD *)(a1 + 1776) = v30;
    if ( !v3 )
      *(_BYTE *)(a1 + 1732) = 1;
    if ( a3 )
    {
      v31 = Size;
      *(_QWORD *)(a1 + 1744) = v8;
      v8 = 0LL;
      *(_DWORD *)(a1 + 1736) = SizeOfBitMap;
      *(_QWORD *)(a1 + 1760) = v9;
      v9 = 0LL;
      *(_DWORD *)(a1 + 1752) = v31;
      *(_DWORD *)(a1 + 1768) = v46;
      if ( *(_QWORD *)(a1 + 120) )
      {
        RtlClearAllBits((PRTL_BITMAP)(a1 + 112));
        *(_DWORD *)(a1 + 128) = 0;
        *(_BYTE *)(a1 + 195) = 0;
      }
    }
  }
  v17 = 0;
LABEL_16:
  if ( v5 )
LABEL_46:
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
  {
    if ( v7 )
    {
      v32 = v6 + 1;
      v33 = v7;
      do
      {
        if ( *v32 )
        {
          ExFreePoolWithTag(*v32, 0);
          *v32 = 0LL;
        }
        v32 += 3;
        --v33;
      }
      while ( v33 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
  {
    if ( v46 )
    {
      v34 = v9 + 1;
      v35 = v46;
      do
      {
        if ( *v34 )
          ExFreePoolWithTag(*v34, 0);
        v34 += 3;
        --v35;
      }
      while ( v35 );
    }
    ExFreePoolWithTag(v9, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v17;
}
