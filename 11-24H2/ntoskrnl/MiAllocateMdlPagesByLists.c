/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140395080
 * Callers:
 *     MiFindPagesForMdl @ 0x140394EF4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiAllocateSlabPageForMdl @ 0x14021CD30 (MiAllocateSlabPageForMdl.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        volatile signed __int64 *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v8; // rsi
  unsigned int v12; // r9d
  unsigned __int32 v13; // eax
  unsigned int v14; // ebx
  int v15; // r13d
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // edx
  unsigned __int64 v19; // r12
  int v20; // ebx
  ULONG_PTR Page; // r15
  unsigned int v23; // eax
  unsigned __int32 v24; // eax
  __int64 v25; // r8
  unsigned int v26; // [rsp+30h] [rbp-40h]
  unsigned __int64 v27; // [rsp+38h] [rbp-38h]
  unsigned __int64 v28; // [rsp+40h] [rbp-30h]
  __int64 v29; // [rsp+48h] [rbp-28h]
  ULONG_PTR *v30; // [rsp+50h] [rbp-20h]
  __int128 v31; // [rsp+58h] [rbp-18h] BYREF
  int v34; // [rsp+C8h] [rbp+58h] BYREF

  v34 = 0;
  v8 = 0LL;
  v31 = 0LL;
  MiInitializePageColorBase(0LL, 3, a7 + 1, (__int64)&v31);
  DWORD2(v31) = DWORD2(v31) & 0xFFF3FFFF | ((*(_DWORD *)(a4 + 144) & 3) << 18);
  v12 = DWORD2(v31);
  v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v31, 1u);
  v14 = *(_DWORD *)(a4 + 148);
  v15 = DWORD2(v31);
  v16 = v12 ^ (unsigned __int8)(v12 ^ (v13 % *(&MiState + (HIWORD(v12) & 3) + 1120)));
  v17 = (16 * (((a3 & 1) == 0) + 8)) | 1;
  v18 = (v14 >> 2) & 1;
  a7 = v18;
  if ( !v18 )
    v17 = 16 * (((a3 & 1) == 0) + 8);
  v29 = 0LL;
  v19 = 0LL;
  v26 = v17;
  v27 = 0LL;
  v28 = 0LL;
  v20 = ~(4 * (_BYTE)v14) & 8 | 3;
  v30 = (ULONG_PTR *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
  while ( 1 )
  {
    if ( (v20 & 2) != 0 )
    {
      v20 &= ~2u;
      v34 = 0;
    }
    v20 &= ~4u;
    if ( (v20 & 8) == 0 || (Page = MiAllocateSlabPageForMdl((int)a1, v16, a3, v18, &v34), Page == -1LL) )
    {
      Page = MiGetPage((__int64)a1, v16, v26);
      if ( Page == -1LL )
        goto LABEL_8;
    }
    else
    {
      v20 |= 4u;
    }
    if ( Page > a5 )
      break;
    v23 = MiPageToNode(Page);
    if ( v23 != ((v16 >> 9) & 0x3F) )
    {
      v25 = v29;
      v20 |= 2u;
      if ( !_bittest64(&v25, v23) && (v20 & 8) != 0 )
      {
        v29 |= 1LL << v23;
        v15 ^= ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)v23 << 9)) & 0x7E00;
        DWORD2(v31) = v15;
        MiReleaseFreshPage(48 * Page - 0x220000000000LL);
        v19 = v27;
        goto LABEL_23;
      }
    }
    if ( (v20 & 4) != 0 )
    {
      ++v28;
    }
    else if ( (v20 & 8) == 0 )
    {
      v19 = ++v27;
      goto LABEL_21;
    }
    v19 = v27;
LABEL_21:
    ++v8;
    *v30++ = Page;
    if ( v8 == a6 )
      goto LABEL_8;
    v24 = _InterlockedExchangeAdd((volatile signed __int32 *)v31, 1u);
    v15 = DWORD2(v31);
    v16 = DWORD2(v31) ^ (unsigned __int8)(BYTE8(v31) ^ (v24 % *(&MiState + ((*((_QWORD *)&v31 + 1) >> 16) & 3LL) + 1120)));
LABEL_23:
    v18 = a7;
  }
  MiReleaseFreshPage(48 * Page - 0x220000000000LL);
  v19 = v27;
  LOBYTE(v20) = -2;
LABEL_8:
  if ( v8 )
  {
    _InterlockedAdd64(a1 + 2088, v8);
    if ( v28 )
      _InterlockedAdd64(a1 + 2089, v28);
    if ( v19 )
      _InterlockedAdd64(a1 + 2090, v19);
  }
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  return v20 & 1;
}
