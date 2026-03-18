/*
 * XREFs of MiDecrementAweMapCount @ 0x1406760EC
 * Callers:
 *     MiWriteAwePtes @ 0x1403FBB7C (MiWriteAwePtes.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140677250 (MiReferenceIncomingPhysicalPages.c)
 *     MiUnmapLegacyAwePage @ 0x1406778CC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x140239C5C (MiCompareTbFlushTimeStamp.c)
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     MiSetPteTimeStamp @ 0x14044EF40 (MiSetPteTimeStamp.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404B3F90 (MiValidateAndLockAweMapCountPage.c)
 */

__int64 __fastcall MiDecrementAweMapCount(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  char v5; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 *v10; // rdi
  int v11; // r15d
  __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h]
  unsigned __int64 v22; // [rsp+78h] [rbp+10h]
  int v23; // [rsp+80h] [rbp+18h]

  v22 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v7 = a2 / v22;
  v8 = 0LL;
  v21 = *(_QWORD *)(a1 + 32);
  v20 = 0LL;
  if ( !(unsigned int)MiValidateAndLockAweMapCountPage(a1, a2, ((a3 >> 1) & 1) == 0, (__int64)&v20) )
    return -1LL;
  if ( DWORD2(v20) )
  {
    v8 = v20;
    v10 = 0LL;
    if ( (_QWORD)v20 )
    {
      v11 = v5 & 1;
      if ( v11 && (*(_QWORD *)(v20 + 24) & 0x4000000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return -1LL;
      }
      v12 = (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v20 + 24) = v12 ^ (v12 ^ *(_QWORD *)(v20 + 24)) & 0xC000000000000000uLL;
      goto LABEL_13;
    }
  }
  else
  {
    v10 = (unsigned __int64 *)v20;
  }
  if ( (*v10 & 0x8000) != 0 && (v5 & 1) != 0 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E2FD88 + 4 * (((((__int64)v10 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v10 - qword_140E2FD80) >> 3) & 0x1F)));
    return -1LL;
  }
  v13 = ((*v10 & 0xFFFFFFFFFFFE0000uLL) - 0x20000) ^ (*v10 ^ ((*v10 & 0xFFFFFFFFFFFE0000uLL) - 0x20000)) & 0xFFFFFF800001FFFFuLL;
  *v10 = v13;
  v12 = (v13 >> 17) & 0x3FFFFF;
  v11 = v5 & 1;
LABEL_13:
  if ( v11 )
  {
    if ( v8 )
    {
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      if ( v12 )
        goto LABEL_46;
      if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
        goto LABEL_25;
      v14 = *(_QWORD *)(v8 + 16);
      if ( qword_140E2D940 && (v14 & 0x10) == 0 )
        v14 &= ~qword_140E2D940;
      v15 = HIDWORD(v14);
      if ( !(_DWORD)v15 || !MiCompareTbFlushTimeStamp(v15) )
        goto LABEL_25;
      goto LABEL_31;
    }
    *v10 |= 0x8000uLL;
LABEL_24:
    if ( v12 )
      goto LABEL_45;
    goto LABEL_25;
  }
  if ( !v8 || (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
    goto LABEL_24;
  if ( v12 )
  {
    if ( v12 == 1 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
    {
      v17 = *(_DWORD *)(a4 + 16);
      while ( !v17 )
      {
        MiIssueFlushTbEntire(2LL, 1);
        _InterlockedOr(v19, 0);
        v17 = KiTbFlushTimeStamp;
        *(_DWORD *)(a4 + 16) = KiTbFlushTimeStamp;
      }
      *(_QWORD *)(v8 + 16) = MiSetPteTimeStamp(0LL, v17);
    }
    goto LABEL_46;
  }
LABEL_31:
  *(_BYTE *)(a4 + 20) = 1;
LABEL_25:
  _InterlockedAnd((volatile signed __int32 *)(v21 + 4 * (v7 >> 5)), ~(1 << (v7 & 0x1F)));
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    v16 = *(_QWORD *)a4;
    if ( *(_QWORD *)a4 )
      v16 = (v16 - qword_140E2FD80) >> 3;
    else
      *(_QWORD *)(a4 + 8) = v10;
    *v10 = (v16 << 17) ^ (*v10 ^ (v16 << 17)) & 0xFFFFFF800001FFFFuLL;
    *(_QWORD *)a4 = v10;
  }
  else
  {
    if ( v22 != 1 )
    {
      v23 = *(_DWORD *)(v8 + 32);
      BYTE2(v23) = BYTE2(v23) & 0xF8 | 5;
      *(_DWORD *)(v8 + 32) = v23;
    }
    v18 = *(_QWORD *)a4;
    if ( !*(_QWORD *)a4 )
      *(_QWORD *)(a4 + 8) = v8;
    *(_QWORD *)v8 = (v18 >> 3) ^ (*(_QWORD *)v8 ^ (v18 >> 3)) & 0xFFFFF00000000001uLL;
    *(_QWORD *)a4 = v8;
  }
LABEL_45:
  if ( !v8 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E2FD88 + 4 * (((((__int64)v10 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v10 - qword_140E2FD80) >> 3) & 0x1F)));
    return v12;
  }
LABEL_46:
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
