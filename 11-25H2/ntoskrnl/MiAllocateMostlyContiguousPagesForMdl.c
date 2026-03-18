/*
 * XREFs of MiAllocateMostlyContiguousPagesForMdl @ 0x140416F94
 * Callers:
 *     MiFindPagesForMdl @ 0x140416014 (MiFindPagesForMdl.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiAllocateSlabPageForMdl @ 0x14022AE68 (MiAllocateSlabPageForMdl.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 */

unsigned __int64 __fastcall MiAllocateMostlyContiguousPagesForMdl(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned int v9; // eax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // r12
  int *v13; // r8
  unsigned __int32 v14; // eax
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  unsigned __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  ULONG_PTR v20; // rax
  int *i; // [rsp+70h] [rbp-78h]
  ULONG_PTR v22; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR v23; // [rsp+80h] [rbp-68h]
  unsigned __int64 v24; // [rsp+88h] [rbp-60h]
  __int128 v25; // [rsp+90h] [rbp-58h] BYREF
  int v26; // [rsp+F0h] [rbp+8h]
  int v27; // [rsp+F8h] [rbp+10h] BYREF
  int v28; // [rsp+100h] [rbp+18h]
  unsigned __int64 v29; // [rsp+108h] [rbp+20h]

  v28 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v22 = -1LL;
  v27 = 0;
  v23 = BugCheckParameter3;
  v9 = *(_DWORD *)(a1 + 148);
  v29 = v3;
  v26 = (v9 >> 2) & 1;
  v25 = 0LL;
  MiInitializePageColorBase(0LL, 3, a2 + 1, (__int64)&v25);
  v10 = *((_QWORD *)&v25 + 1);
  v24 = (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12;
  v11 = v24;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 148) & 2) == 0 )
    {
      v12 = (unsigned __int64 *)(v4 + 48 + 8 * v11);
      v13 = &dword_140E2D980[(v10 >> 16) & 3];
      for ( i = v13; ; v13 = i )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v25, 1u);
        v10 = *((_QWORD *)&v25 + 1);
        v15 = MiAllocateSlabPageForMdl(
                *(_QWORD *)a1,
                DWORD2(v25) ^ (unsigned int)(unsigned __int8)(BYTE8(v25) ^ (v14 % *v13)),
                v28,
                v26,
                &v27);
        if ( v15 == -1LL )
          break;
        if ( v15 > v6 )
        {
          MiReleaseFreshPage(48 * v15 - 0x220000000000LL);
          *(_DWORD *)(a1 + 148) |= 2u;
          break;
        }
        *v12 = v15;
        ++v5;
        ++v12;
        v16 = *(_DWORD *)(v4 + 40) + 4096;
        ++v11;
        *(_DWORD *)(v4 + 40) = v16;
        if ( v11 == *(_QWORD *)(a1 + 32) )
          goto LABEL_10;
      }
      v3 = v29;
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
      v28 | 0x60002000,
      0,
      v4,
      0LL,
      &v22);
    v16 = *(_DWORD *)(v4 + 40);
    v11 = (unsigned __int64)v16 >> 12;
    if ( v11 == *(_QWORD *)(a1 + 32) )
      break;
    v19 = *(_QWORD *)(a1 + 24);
    if ( !v19 )
      break;
    v20 = v19 + v3;
    if ( v19 + v3 <= v3 || v20 > v23 )
      break;
    v3 += v19;
    v29 = v20;
    if ( v19 + v6 <= v6 || v19 + v6 > v23 )
      v6 = v23;
    else
      v6 += v19;
  }
LABEL_10:
  result = *(unsigned int *)(a1 + 148);
  if ( (result & 2) == 0 )
  {
    result = ((unsigned __int64)v16 >> 12) - v24;
    if ( result )
    {
      v18 = *(_QWORD *)a1;
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)a1 + 16728LL), result);
      if ( v5 )
        _InterlockedAdd64((volatile signed __int64 *)(v18 + 16736), v5);
    }
  }
  return result;
}
