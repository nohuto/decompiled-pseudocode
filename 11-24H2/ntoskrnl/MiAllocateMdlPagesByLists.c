/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140412C40
 * Callers:
 *     MiFindPagesForMdl @ 0x140412AB4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiAllocateSlabPageForMdl @ 0x140413A24 (MiAllocateSlabPageForMdl.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        volatile signed __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7)
{
  char v7; // r12
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
  __int64 v21; // rdx
  __int64 v22; // r8
  ULONG_PTR Page; // r15
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned __int32 v27; // eax
  __int64 v28; // r8
  unsigned int v29; // [rsp+30h] [rbp-40h]
  unsigned __int64 v30; // [rsp+38h] [rbp-38h]
  unsigned __int64 v31; // [rsp+40h] [rbp-30h]
  __int64 v32; // [rsp+48h] [rbp-28h]
  ULONG_PTR *v33; // [rsp+50h] [rbp-20h]
  __int128 v34; // [rsp+58h] [rbp-18h] BYREF
  int v37; // [rsp+C8h] [rbp+58h] BYREF

  v37 = 0;
  v7 = a3;
  v8 = 0LL;
  v34 = 0LL;
  MiInitializePageColorBase(0LL, 3, a7 + 1, (__int64)&v34);
  DWORD2(v34) = DWORD2(v34) & 0xFFF3FFFF | ((*(_DWORD *)(a4 + 144) & 3) << 18);
  v12 = DWORD2(v34);
  v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v34, 1u);
  v14 = *(_DWORD *)(a4 + 148);
  v15 = DWORD2(v34);
  v16 = v12 ^ (unsigned __int8)(v12 ^ (v13 % *(&MiState + (HIWORD(v12) & 3) + 1120)));
  v17 = (16 * (((v7 & 1) == 0) + 8)) | 1;
  v18 = (v14 >> 2) & 1;
  a7 = v18;
  if ( !v18 )
    v17 = 16 * (((v7 & 1) == 0) + 8);
  v32 = 0LL;
  v19 = 0LL;
  v29 = v17;
  v30 = 0LL;
  v31 = 0LL;
  v20 = ~(4 * (_BYTE)v14) & 8 | 3;
  v33 = (ULONG_PTR *)(a2 + 8 * (((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12) + 6));
  while ( 1 )
  {
    if ( (v20 & 2) != 0 )
    {
      v20 &= ~2u;
      v37 = 0;
    }
    v20 &= ~4u;
    if ( (v20 & 8) == 0 || (Page = MiAllocateSlabPageForMdl((_DWORD)a1, v16, a3, v18, (__int64)&v37), Page == -1LL) )
    {
      Page = MiGetPage((__int64)a1, v16, v29);
      if ( Page == -1LL )
        goto LABEL_8;
    }
    else
    {
      v20 |= 4u;
    }
    if ( Page > a5 )
      break;
    v25 = MiPageToNode(Page);
    if ( v25 != ((v16 >> 9) & 0x3F) )
    {
      v28 = v32;
      v20 |= 2u;
      LOBYTE(v26) = !_bittest64(&v28, v25);
      if ( ((unsigned __int8)v26 & ((v20 & 8) != 0)) != 0 )
      {
        v32 |= 1LL << v25;
        v15 ^= ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)v25 << 9)) & 0x7E00;
        DWORD2(v34) = v15;
        MiReleaseFreshPage(48 * Page - 0x220000000000LL, v26, v32);
        v19 = v30;
        goto LABEL_23;
      }
    }
    if ( (v20 & 4) != 0 )
    {
      ++v31;
    }
    else if ( (v20 & 8) == 0 )
    {
      v19 = ++v30;
      goto LABEL_21;
    }
    v19 = v30;
LABEL_21:
    ++v8;
    *v33++ = Page;
    if ( v8 == a6 )
      goto LABEL_8;
    v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v34, 1u);
    v15 = DWORD2(v34);
    v16 = DWORD2(v34) ^ (unsigned __int8)(BYTE8(v34) ^ (v27 % *(&MiState + ((*((_QWORD *)&v34 + 1) >> 16) & 3LL) + 1120)));
LABEL_23:
    v18 = a7;
  }
  MiReleaseFreshPage(48 * Page - 0x220000000000LL, v21, v22);
  v19 = v30;
  LOBYTE(v20) = -2;
LABEL_8:
  if ( v8 )
  {
    _InterlockedAdd64(a1 + 2088, v8);
    if ( v31 )
      _InterlockedAdd64(a1 + 2089, v31);
    if ( v19 )
      _InterlockedAdd64(a1 + 2090, v19);
  }
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  return v20 & 1;
}
