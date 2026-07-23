/*
 * XREFs of MiDecrementAweMapCount @ 0x140682AFC
 * Callers:
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140683C60 (MiReferenceIncomingPhysicalPages.c)
 *     MiUnmapLegacyAwePage @ 0x1406842DC (MiUnmapLegacyAwePage.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiSetPteTimeStamp @ 0x140444FC4 (MiSetPteTimeStamp.c)
 *     MiCompareTbFlushTimeStamp @ 0x14044D95C (MiCompareTbFlushTimeStamp.c)
 *     MiValidateAndLockAweMapCountPage @ 0x1404AE114 (MiValidateAndLockAweMapCountPage.c)
 */

__int64 __fastcall MiDecrementAweMapCount(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  char v5; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v10; // r8
  unsigned __int64 *v11; // rdi
  int v12; // r15d
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h]
  unsigned __int64 v23; // [rsp+78h] [rbp+10h]
  int v24; // [rsp+80h] [rbp+18h]

  v23 = *(_QWORD *)(a1 + 16);
  v5 = a3;
  v7 = a2 / v23;
  v8 = 0LL;
  v22 = *(_QWORD *)(a1 + 32);
  v21 = 0LL;
  if ( !(unsigned int)MiValidateAndLockAweMapCountPage(a1, a2, ((a3 >> 1) & 1) == 0, (__int64)&v21) )
    return -1LL;
  v10 = 0x4000000000000000LL;
  if ( DWORD2(v21) )
  {
    v8 = v21;
    v11 = 0LL;
    if ( (_QWORD)v21 )
    {
      v12 = v5 & 1;
      if ( v12 && (*(_QWORD *)(v21 + 24) & 0x4000000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return -1LL;
      }
      v13 = (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v21 + 24) = v13 ^ (v13 ^ *(_QWORD *)(v21 + 24)) & 0xC000000000000000uLL;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = (unsigned __int64 *)v21;
  }
  if ( (*v11 & 0x8000) != 0 && (v5 & 1) != 0 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v11 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v11 - qword_140E30100) >> 3) & 0x1F)));
    return -1LL;
  }
  v14 = ((*v11 & 0xFFFFFFFFFFFE0000uLL) - 0x20000) ^ (*v11 ^ ((*v11 & 0xFFFFFFFFFFFE0000uLL) - 0x20000)) & 0xFFFFFF800001FFFFuLL;
  *v11 = v14;
  v13 = (v14 >> 17) & 0x3FFFFF;
  v12 = v5 & 1;
LABEL_13:
  if ( v12 )
  {
    if ( v8 )
    {
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      if ( v13 )
        goto LABEL_46;
      if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
        goto LABEL_25;
      v15 = *(_QWORD *)(v8 + 16);
      if ( qword_140E2DCC0 && (v15 & 0x10) == 0 )
        v15 &= ~qword_140E2DCC0;
      v16 = HIDWORD(v15);
      if ( !(_DWORD)v16 || !MiCompareTbFlushTimeStamp(v16) )
        goto LABEL_25;
      goto LABEL_31;
    }
    *v11 |= 0x8000uLL;
LABEL_24:
    if ( v13 )
      goto LABEL_45;
    goto LABEL_25;
  }
  if ( !v8 || (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
    goto LABEL_24;
  if ( v13 )
  {
    if ( v13 == 1 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) == 0 )
    {
      v18 = *(_DWORD *)(a4 + 16);
      while ( !v18 )
      {
        MiIssueFlushTbEntire(2LL, 1LL, v10);
        _InterlockedOr(v20, 0);
        v18 = KiTbFlushTimeStamp;
        *(_DWORD *)(a4 + 16) = KiTbFlushTimeStamp;
      }
      *(_QWORD *)(v8 + 16) = MiSetPteTimeStamp(0LL, v18);
    }
    goto LABEL_46;
  }
LABEL_31:
  *(_BYTE *)(a4 + 20) = 1;
LABEL_25:
  _InterlockedAnd((volatile signed __int32 *)(v22 + 4 * (v7 >> 5)), ~(1 << (v7 & 0x1F)));
  if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
  {
    v17 = *(_QWORD *)a4;
    if ( *(_QWORD *)a4 )
      v17 = (v17 - qword_140E30100) >> 3;
    else
      *(_QWORD *)(a4 + 8) = v11;
    *v11 = (v17 << 17) ^ (*v11 ^ (v17 << 17)) & 0xFFFFFF800001FFFFuLL;
    *(_QWORD *)a4 = v11;
  }
  else
  {
    if ( v23 != 1 )
    {
      v24 = *(_DWORD *)(v8 + 32);
      BYTE2(v24) = BYTE2(v24) & 0xF8 | 5;
      *(_DWORD *)(v8 + 32) = v24;
    }
    v19 = *(_QWORD *)a4;
    if ( !*(_QWORD *)a4 )
      *(_QWORD *)(a4 + 8) = v8;
    *(_QWORD *)v8 = (v19 >> 3) ^ (*(_QWORD *)v8 ^ (v19 >> 3)) & 0xFFFFF00000000001uLL;
    *(_QWORD *)a4 = v8;
  }
LABEL_45:
  if ( !v8 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v11 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v11 - qword_140E30100) >> 3) & 0x1F)));
    return v13;
  }
LABEL_46:
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v13;
}
