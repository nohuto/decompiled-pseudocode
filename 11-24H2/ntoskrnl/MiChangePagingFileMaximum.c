/*
 * XREFs of MiChangePagingFileMaximum @ 0x14067AF90
 * Callers:
 *     MiAttemptChangePagingFileMaximum @ 0x14067AF10 (MiAttemptChangePagingFileMaximum.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     RtlCopyBitMap @ 0x140455770 (RtlCopyBitMap.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140469F88 (MiDerefPageFileSpaceBitmaps.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiChangePagingFileMaximum(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int *v3; // rsi
  __int64 v4; // r14
  volatile LONG *v7; // r13
  KIRQL v8; // al
  __int64 v9; // rbx
  unsigned __int64 *v10; // r12
  _RTL_BITMAP *v11; // r9
  _QWORD *v12; // r15
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r14
  char *v17; // r12
  unsigned __int64 v18; // r13
  __int64 v19; // rbx
  unsigned __int64 i; // rcx
  __int128 v21; // xmm1
  _DWORD *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  unsigned __int8 v26; // r14
  _QWORD *v27; // [rsp+20h] [rbp-A8h]
  int v28; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+38h] [rbp-90h]
  volatile LONG *v31; // [rsp+40h] [rbp-88h]
  _RTL_BITMAP *v32; // [rsp+48h] [rbp-80h]
  _RTL_BITMAP *Destination; // [rsp+50h] [rbp-78h]
  _OWORD v34[7]; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int8 v38; // [rsp+E8h] [rbp+20h]

  v3 = (unsigned int *)(a2 + 8);
  v4 = a1;
  memset((char *)v34 + 8, 0, 32);
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  Destination = (_RTL_BITMAP *)(a2 + 24);
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  v7 = (volatile LONG *)(v4 + 200);
  v31 = (volatile LONG *)(v4 + 200);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 200));
  v9 = *(_QWORD *)(v4 + 80);
  v10 = (unsigned __int64 *)(v4 + 184);
  v38 = v8;
  v30 = v9;
  v29 = (unsigned __int64 *)(v4 + 184);
  v11 = (_RTL_BITMAP *)(v9 + 8);
  v32 = (_RTL_BITMAP *)(v9 + 8);
  if ( a3 )
  {
    v12 = (_QWORD *)(((*v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v27 = v12;
    v13 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = (((unsigned int)dword_140E373CC * (unsigned __int64)v11->SizeOfBitMap) >> 12)
        + ((((unsigned int)dword_140E373CC * (unsigned __int64)v11->SizeOfBitMap) & 0xFFF) != 0);
    v28 = v14;
    if ( v11->SizeOfBitMap >= *v3 )
      v15 = (((unsigned int)dword_140E373CC * (unsigned __int64)*v3) >> 12)
          + ((((unsigned int)dword_140E373CC * (unsigned __int64)*v3) & 0xFFF) != 0);
    else
      v15 = (((unsigned int)dword_140E373CC * (unsigned __int64)v11->SizeOfBitMap) >> 12)
          + ((((unsigned int)dword_140E373CC * (unsigned __int64)v11->SizeOfBitMap) & 0xFFF) != 0);
    if ( v15 )
    {
      v16 = (_QWORD *)v13;
      v17 = (char *)v12 - v13;
      v18 = v15;
      do
      {
        v19 = *(_QWORD *)((char *)v16 + (_QWORD)v17);
        if ( (v19 & 1) != 0
          && _bittest64(&MiFlags, 0x24u)
          && (v19 & 0x20) == 0
          && (unsigned __int64)v16 >= 0xFFFFF6C000000000uLL )
        {
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v16, *(_QWORD *)((char *)v16 + (_QWORD)v17), 128LL);
        }
        *v16++ = v19;
        --v18;
      }
      while ( v18 );
      v4 = a1;
      v10 = v29;
      v9 = v30;
      v7 = v31;
      v11 = v32;
    }
    for ( i = 0LL; i < v14; ++i )
      v12[i] = CLFS_LSN_NULL_EXT;
  }
  else
  {
    v12 = 0LL;
    LODWORD(v14) = 0;
    v13 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v15 = 0LL;
  }
  RtlCopyBitMap(v11, (PRTL_BITMAP)(a2 + 8), 0);
  RtlCopyBitMap((PRTL_BITMAP)(v9 + 24), Destination, 0);
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(a2 + 8);
  v21 = *(_OWORD *)(v9 + 16);
  *((_QWORD *)&v34[0] + 1) = *(_QWORD *)(v9 + 8);
  *(_QWORD *)&v34[0] = v9;
  *(_QWORD *)&v34[2] = *(_QWORD *)(v9 + 32);
  v34[1] = v21;
  v22 = MiDerefPageFileSpaceBitmaps(v4, (_DWORD **)v34, 1);
  *(_QWORD *)(v4 + 80) = a2;
  *v10 = a3;
  MiReleaseSpinLockExclusive(v7, v38);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( v12 )
  {
    if ( v15 )
    {
      do
      {
        if ( (*(_QWORD *)v13 & 1) != 0 )
        {
          v25 = 48 * ((*(_QWORD *)v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != v13 )
          {
            v26 = MiLockPageInline(v25, 0xFFFFDE0000000000uLL, v23, v24);
            ExAcquireSpinLockExclusiveAtDpcLevel(v7);
            if ( (*(_QWORD *)v13 & 1) != 0
              && v25 == 48 * ((*(_QWORD *)v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL
              && (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) != v13 )
            {
              MiSetPfnContainingFrame(
                v25,
                (*(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL);
              *(_QWORD *)(v25 + 8) = v13;
            }
            ExReleaseSpinLockExclusiveFromDpcLevel(v7);
            MiUnlockPage(v25, v26);
          }
        }
        v13 += 8LL;
        --v15;
      }
      while ( v15 );
      v12 = v27;
      LODWORD(v14) = v28;
    }
    MiReleasePtes((__int64)&qword_140E376A8, v12, v14);
  }
}
