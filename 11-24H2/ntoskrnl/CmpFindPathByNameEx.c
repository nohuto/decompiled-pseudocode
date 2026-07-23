/*
 * XREFs of CmpFindPathByNameEx @ 0x1408E289C
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407DC414 (CmpVirtualPathPresent.c)
 *     CmpVEExecuteOpenLogic @ 0x1408788D0 (CmpVEExecuteOpenLogic.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408E2144 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A57370 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpFindPathByNameEx(
        __int64 a1,
        __m128i *a2,
        UNICODE_STRING *a3,
        int a4,
        unsigned int *a5,
        ULONG_PTR *a6)
{
  unsigned int *v6; // r12
  unsigned __int16 v7; // r14
  ULONG_PTR *v11; // rcx
  __m128i v12; // xmm1
  unsigned __int16 v13; // bx
  unsigned __int64 v14; // xmm0_8
  unsigned __int16 epi16; // r15
  ULONG_PTR v16; // rsi
  unsigned int v17; // ecx
  wchar_t *v18; // rdi
  __int64 CellFlat; // rax
  __int64 v20; // rdx
  ULONG_PTR *v21; // rax
  unsigned __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // rax
  UNICODE_STRING v27; // [rsp+20h] [rbp-20h]
  _QWORD v28[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+50h] BYREF
  int v31; // [rsp+94h] [rbp+54h]
  int v32; // [rsp+98h] [rbp+58h]

  v32 = a4;
  v6 = a5;
  v7 = 0;
  v31 = 0;
  v28[0] = 0LL;
  v30 = -1;
  *a5 = -1;
  v11 = a6;
  *a6 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    v11 = a6;
  }
  v12 = *a2;
  v13 = _mm_cvtsi128_si32(*a2);
  v27 = (UNICODE_STRING)v12;
  if ( v13 )
  {
    v14 = _mm_srli_si128(v12, 8).m128i_u64[0];
    epi16 = _mm_extract_epi16(v12, 1);
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 32);
      *v11 = v16;
      v17 = *(_DWORD *)(a1 + 40);
      v18 = (wchar_t *)v14;
      *v6 = v17;
    }
    else
    {
      v16 = CmpMasterHive;
      v18 = (wchar_t *)v14;
      v17 = *(_DWORD *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *v18 != 92 )
          break;
        ++v18;
        v13 -= 2;
        epi16 -= 2;
        v27.Buffer = v18;
        v27.Length = v13;
        v27.MaximumLength = epi16;
      }
      while ( v13 );
      while ( v13 && *v18 != 92 )
      {
        ++v18;
        v13 -= 2;
        epi16 -= 2;
        v27.Buffer = v18;
        v27.MaximumLength = epi16;
        v27.Length = v13;
      }
    }
    do
    {
      while ( v13 && *v18 == 92 )
      {
        ++v18;
        v13 -= 2;
        epi16 -= 2;
        v27.Buffer = v18;
        v27.MaximumLength = epi16;
        v27.Length = v13;
      }
      if ( a3 )
        *a3 = v27;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v16, v17, &v30);
      else
        CellFlat = HvpGetCellPaged(v16, v17, &v30);
      v20 = CellFlat;
      if ( !CellFlat )
        return 0;
      v28[1] = v18;
      LOWORD(v28[0]) = 0;
      do
      {
        if ( v18[(unsigned __int64)v7 >> 1] == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v13 );
      LOWORD(v28[0]) = v7;
      if ( (*(_BYTE *)(CellFlat + 2) & 2) != 0 )
      {
        v23 = *(_DWORD *)(CellFlat + 28);
        v24 = v16;
        v16 = *(_QWORD *)(CellFlat + 36);
        if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v24, (__int64)&v30);
        else
          HvpReleaseCellPaged(v24, &v30);
        if ( v16 != CmpMasterHive && v32 && (v32 & *(_DWORD *)(v16 + 4112)) == 0 )
          return 0;
        v25 = (*(_BYTE *)(v16 + 140) & 1) != 0 ? HvpGetCellFlat(v16, v23, &v30) : HvpGetCellPaged(v16, v23, &v30);
        v20 = v25;
        if ( !v25 )
          return 0;
        v6 = a5;
      }
      v29 = 0;
      CmpFindSubKeyByNameWithStatus(v16, v20, (unsigned __int16 *)v28, &v29);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v16, (__int64)&v30);
      else
        HvpReleaseCellPaged(v16, &v30);
      v17 = v29;
      if ( v29 == -1 )
        return 0;
      v21 = a6;
      epi16 -= v7;
      v13 -= v7;
      *v6 = v29;
      v27.MaximumLength = epi16;
      v27.Length = v13;
      *v21 = v16;
      v22 = v7;
      v7 = 0;
      v18 += v22 >> 1;
      v27.Buffer = v18;
    }
    while ( v13 );
  }
  else
  {
    if ( !a1 )
      return 0;
    *v11 = *(_QWORD *)(a1 + 32);
    *v6 = *(_DWORD *)(a1 + 40);
  }
  return 1;
}
