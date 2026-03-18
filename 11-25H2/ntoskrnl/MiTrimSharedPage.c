/*
 * XREFs of MiTrimSharedPage @ 0x14035A2DC
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14066FCB4 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiReferencePfBackedSection @ 0x1402185B4 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x140218C70 (MiPreventControlAreaDeletion.c)
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiDecrementSubsection @ 0x14033F61C (MiDecrementSubsection.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     MiClusterVadFull @ 0x1404545A4 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r15
  int v7; // edx
  unsigned __int64 v8; // r15
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // edx
  _QWORD *v20; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rax
  _QWORD v24[5]; // [rsp+20h] [rbp-30h] BYREF
  int v25; // [rsp+48h] [rbp-8h]
  int v26; // [rsp+4Ch] [rbp-4h]
  _QWORD *v27; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v26 = 0;
  v27 = 0LL;
  v7 = (a3 >> 18) & 1;
  BugCheckParameter2 = 0LL;
  v8 = v3 | 0x8000000000000000uLL;
  v9 = v7 | 2;
  if ( (a3 & 0x80000) == 0 )
    v9 = v7;
  v10 = v9 | 4;
  if ( (a3 & 0x20000) == 0 )
    v10 = v9;
  v11 = v10 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v11 = v10;
  v12 = v11 | 0x10;
  if ( (a3 & 0x8800000) != 0x800000 )
    v12 = v11;
  v13 = v12 | 0x40;
  if ( (a3 & 0x1000000) == 0 )
    v13 = v12;
  v14 = v13 | 0x80;
  if ( (a3 & 0x2000000) == 0 )
    v14 = v13;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v15 = MiPreventControlAreaDeletion(a1, &BugCheckParameter2, &v27);
    if ( !v15 )
    {
      MiUnlockPage(a1, a2);
      ++dword_140EF4B30;
      return 0LL;
    }
    v16 = *(_QWORD *)(a1 + 16);
    if ( qword_140E2D940 && (v16 & 0x10) == 0 )
      v16 &= ~qword_140E2D940;
    v17 = v16 >> 16;
    MiUnlockPage(a1, a2);
    MiReleaseControlAreaWaiters(v27);
  }
  else
  {
    MiUnlockPage(a1, a2);
    v22 = (__int64 *)MiReferencePfBackedSection(v8);
    v17 = (__int64)v22;
    if ( !v22 )
    {
      ++dword_140EF4B34;
      return 0LL;
    }
    v15 = *v22;
    if ( (a3 & 0x800000) != 0 && *(int *)(v15 + 56) < 0 && (unsigned int)MiClusterVadFull(a1, 16LL, v22) )
    {
      ++dword_140EF4B0C;
      v23 = (_QWORD *)MiDecrementModifiedWriteCount(v15, 0LL);
      if ( v23 )
        MiReleaseControlAreaWaiters(v23);
      return 0LL;
    }
  }
  v25 = 0;
  v24[3] = v17;
  v24[4] = v17;
  v24[0] = v15;
  v24[1] = v8;
  v24[2] = v8;
  v18 = MiTrimSection(v24, 0LL, 1, v14);
  if ( v18 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 6 )
  {
    v18 = MiTrimSection(v24, 0LL, 1, v14);
    if ( v18 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 6 )
      ++dword_140EF4B44;
    else
      ++dword_140EF4A9C;
  }
  v19 = *(_DWORD *)(v15 + 56);
  if ( v18 )
  {
    if ( (v19 & 0x20) != 0 )
    {
      ++dword_140EF4B38;
    }
    else if ( (v19 & 0x80u) == 0 )
    {
      ++dword_140EF4B40;
    }
    else
    {
      ++dword_140EF4B3C;
    }
  }
  else if ( (v19 & 0x20) != 0 )
  {
    ++dword_140EF4A94;
  }
  else if ( (v19 & 0x80u) != 0 )
  {
    ++dword_140EF4A98;
  }
  else
  {
    ++dword_140EF4AA0;
  }
  if ( BugCheckParameter2 )
    MiDecrementSubsection((__int64 *)BugCheckParameter2);
  v20 = (_QWORD *)MiDecrementModifiedWriteCount(v15, 0LL);
  if ( v20 )
    MiReleaseControlAreaWaiters(v20);
  if ( (HIWORD(*(_DWORD *)(a1 + 32)) & 7) != 6 )
  {
    ++dword_140EF4A8C;
    return 2LL;
  }
  ++dword_140EF4B48;
  return 0LL;
}
