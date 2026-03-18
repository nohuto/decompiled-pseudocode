/*
 * XREFs of MiAllocateMostlyContiguousPagesForMdl @ 0x140413798
 * Callers:
 *     MiFindPagesForMdl @ 0x140412AB4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiAllocateSlabPageForMdl @ 0x140413A24 (MiAllocateSlabPageForMdl.c)
 */

unsigned __int64 __fastcall MiAllocateMostlyContiguousPagesForMdl(__int64 a1, unsigned int a2, int a3)
{
  _BYTE *v3; // r12
  __int64 v4; // r13
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned int v9; // eax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // r12
  int *v13; // r8
  unsigned __int32 v14; // eax
  unsigned __int64 SlabPageForMdl; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // edx
  unsigned __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _BYTE *v22; // rax
  int *i; // [rsp+70h] [rbp-78h]
  ULONG_PTR v24; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR v25; // [rsp+80h] [rbp-68h]
  unsigned __int64 v26; // [rsp+88h] [rbp-60h]
  __int128 v27; // [rsp+90h] [rbp-58h] BYREF
  int v28; // [rsp+F0h] [rbp+8h]
  int v29; // [rsp+F8h] [rbp+10h] BYREF
  int v30; // [rsp+100h] [rbp+18h]
  _BYTE *v31; // [rsp+108h] [rbp+20h]

  v30 = a3;
  v3 = *(_BYTE **)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v24 = -1LL;
  v29 = 0;
  v25 = BugCheckParameter3;
  v9 = *(_DWORD *)(a1 + 148);
  v31 = v3;
  v28 = (v9 >> 2) & 1;
  v27 = 0LL;
  MiInitializePageColorBase(0LL, 3, a2 + 1, (__int64)&v27);
  v10 = *((_QWORD *)&v27 + 1);
  v26 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v11 = v26;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 148) & 2) == 0 )
    {
      v12 = (unsigned __int64 *)(v4 + 48 + 8 * v11);
      v13 = &dword_140E2DBC0[(v10 >> 16) & 3];
      for ( i = v13; ; v13 = i )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v27, 1u);
        v10 = *((_QWORD *)&v27 + 1);
        SlabPageForMdl = MiAllocateSlabPageForMdl(
                           *(_QWORD *)a1,
                           DWORD2(v27) ^ (unsigned int)(unsigned __int8)(BYTE8(v27) ^ (v14 % *v13)),
                           v30,
                           v28,
                           (__int64)&v29);
        if ( SlabPageForMdl == -1LL )
          break;
        if ( SlabPageForMdl > v6 )
        {
          MiReleaseFreshPage(48 * SlabPageForMdl - 0x220000000000LL, v16, v17);
          *(_DWORD *)(a1 + 148) |= 2u;
          break;
        }
        *v12 = SlabPageForMdl;
        ++v5;
        ++v12;
        v18 = *(_DWORD *)(v4 + 40) + 4096;
        ++v11;
        *(_DWORD *)(v4 + 40) = v18;
        if ( v11 == *(_QWORD *)(a1 + 32) )
          goto LABEL_10;
      }
      v3 = v31;
    }
    MiFindContiguousPagesEx(
      *(_QWORD *)a1,
      v3,
      v6,
      0LL,
      0,
      *(_QWORD *)(a1 + 32) - v11,
      *(_DWORD *)(a1 + 144),
      a2,
      255,
      v30 | 0x60002000,
      0,
      v4,
      0LL,
      &v24);
    v18 = *(_DWORD *)(v4 + 40);
    v11 = (unsigned __int64)v18 >> 12;
    if ( v11 == *(_QWORD *)(a1 + 32) )
      break;
    v21 = *(_QWORD *)(a1 + 24);
    if ( !v21 )
      break;
    v22 = &v3[v21];
    if ( &v3[v21] <= v3 || (unsigned __int64)v22 > v25 )
      break;
    v3 += v21;
    v31 = v22;
    if ( v21 + v6 <= v6 || v21 + v6 > v25 )
      v6 = v25;
    else
      v6 += v21;
  }
LABEL_10:
  result = *(unsigned int *)(a1 + 148);
  if ( (result & 2) == 0 )
  {
    result = ((unsigned __int64)v18 >> 12) - v26;
    if ( result )
    {
      v20 = *(_QWORD *)a1;
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)a1 + 16728LL), result);
      if ( v5 )
        _InterlockedAdd64((volatile signed __int64 *)(v20 + 16736), v5);
    }
  }
  return result;
}
