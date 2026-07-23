/*
 * XREFs of MiCreatePfnBitMaps @ 0x1407FAF3C
 * Callers:
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiWalkPagesOnLists @ 0x14026E7E0 (MiWalkPagesOnLists.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiDeletePfnBitMaps @ 0x1407FB37C (MiDeletePfnBitMaps.c)
 *     MiSplitPfnBitMaps @ 0x1407FB5D0 (MiSplitPfnBitMaps.c)
 */

__int64 __fastcall MiCreatePfnBitMaps(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rsi
  __int64 i; // rdi
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  __int64 v12; // rax
  _QWORD *v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rbp
  unsigned __int64 v19; // rdi
  __int64 j; // rdi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rsi
  unsigned __int64 v31; // rdi
  unsigned int k; // edi
  __int64 v33; // [rsp+30h] [rbp-58h]
  _OWORD v34[5]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v35; // [rsp+A0h] [rbp+18h]
  _QWORD *v36; // [rsp+A0h] [rbp+18h]
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v34[0] = 0LL;
  v2 = qword_140E2DD20 + 1;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v6 = v2 / MiPageSizes[i] + (v2 % MiPageSizes[i] != 0);
    v7 = (((unsigned __int64)(v6 + 7) >> 3) + 4095) >> 12;
    v8 = MiReservePtes((__int64)&qword_140E376A8, v7);
    if ( !v8 )
      goto LABEL_8;
    v35 = (_QWORD *)(a1 + 16LL * (unsigned int)i + 16328);
    if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)v35, v8 << 25 >> 16, v6, 2) )
    {
      v9 = v7;
      v10 = (_QWORD *)v8;
      goto LABEL_7;
    }
    *v35 = 0LL;
  }
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v12 = MiReservePtes((__int64)&qword_140E376A8, (2 * ((v2 >> 4) + ((v2 & 0xF) != 0)) + 4095) >> 12);
    v13 = (_QWORD *)v12;
    if ( !v12 )
      goto LABEL_8;
    v14 = v12 << 25 >> 16;
    if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)v34, v14, 16 * ((v2 >> 4) + ((v2 & 0xF) != 0)), 2) )
    {
      v9 = (2 * ((v2 >> 4) + ((v2 & 0xF) != 0)) + 4095) >> 12;
LABEL_14:
      v10 = v13;
LABEL_7:
      MiReleasePtes((__int64)&qword_140E376A8, v10, v9);
      goto LABEL_8;
    }
    *(_QWORD *)(a1 + 16376) = v14;
  }
  v15 = ((v2 & 0x1FF) != 0) + (v2 >> 9);
  v16 = (2 * v15 + 4095) >> 12;
  v17 = MiReservePtes((__int64)&qword_140E376A8, v16);
  v18 = (_QWORD *)v17;
  if ( !v17 )
  {
LABEL_8:
    MiDeletePfnBitMaps(a1);
    return 0LL;
  }
  v33 = 16 * v15;
  v19 = v17 << 25 >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)v34, v19, 16 * v15, 2) )
  {
    v9 = v16;
    v10 = v18;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 0x4000) = v19;
  for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
  {
    v36 = (_QWORD *)(a1 + 16LL * (unsigned int)j + 16392);
    v21 = 1LL << MiLargePageCoalesceCandidateBitmapShifts[j];
    v37 = v2 / v21 + (v2 % v21 != 0);
    v22 = (((unsigned __int64)(v37 + 7) >> 3) + 4095) >> 12;
    v23 = MiReservePtes((__int64)&qword_140E376A8, v22);
    v13 = (_QWORD *)v23;
    if ( !v23 )
      goto LABEL_8;
    if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)v36, v23 << 25 >> 16, v37, 2) )
    {
      v9 = v22;
      goto LABEL_14;
    }
    *v36 = 0LL;
  }
  v24 = 4 * ((v2 >> 18) + ((v2 & 0x3FFFF) != 0));
  v25 = (v24 + 4095) >> 12;
  v26 = MiReservePtes((__int64)&qword_140E376A8, v25);
  v13 = (_QWORD *)v26;
  if ( !v26 )
    goto LABEL_8;
  v27 = v26 << 25 >> 16;
  if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)v34, v27, 8 * v24, 2) )
  {
    v9 = v25;
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 16440) = v27;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    v29 = MiReservePtes((__int64)&qword_140E376A8, v16);
    v30 = (_QWORD *)v29;
    if ( v29 )
    {
      v31 = v29 << 25 >> 16;
      if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)v34, v31, v33, 2) )
      {
        v9 = v16;
        v10 = v30;
        goto LABEL_7;
      }
      *(_QWORD *)(a1 + 17728) = v31;
      goto LABEL_33;
    }
    goto LABEL_8;
  }
LABEL_33:
  if ( a2 )
  {
    for ( k = 0; k < *a2; ++k )
    {
      if ( !(unsigned int)MiSplitPfnBitMaps(a1, *(_QWORD *)&a2[4 * k + 4], *(_QWORD *)&a2[4 * k + 6]) )
        return 0LL;
    }
  }
  *(_BYTE *)(a1 + 16102) = 1;
  if ( a2 )
    MiWalkPagesOnLists(0LL, a1, 0, v28, 0);
  *(_BYTE *)(a1 + 16102) = 2;
  return 1LL;
}
