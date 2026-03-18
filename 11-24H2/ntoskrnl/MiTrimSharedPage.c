/*
 * XREFs of MiTrimSharedPage @ 0x140370B4C
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiReferencePfBackedSection @ 0x14022EFF8 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x14022F600 (MiPreventControlAreaDeletion.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x140371D7C (MiDecrementSubsection.c)
 *     MiClusterVadFull @ 0x140454E04 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r12
  int v7; // edx
  int v8; // r8d
  unsigned __int64 v9; // r12
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // r13d
  int v14; // edx
  int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // edx
  int v22; // ecx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  _QWORD v31[5]; // [rsp+20h] [rbp-30h] BYREF
  int v32; // [rsp+48h] [rbp-8h]
  int v33; // [rsp+4Ch] [rbp-4h]
  _QWORD *v34; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v33 = 0;
  v7 = (a3 >> 18) & 1;
  v34 = 0LL;
  BugCheckParameter2 = 0LL;
  v8 = v7 | 2;
  v9 = v3 | 0x8000000000000000uLL;
  if ( (a3 & 0x80000) == 0 )
    v8 = v7;
  v10 = v8 | 4;
  if ( (a3 & 0x20000) == 0 )
    v10 = v8;
  v11 = v10 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v11 = v10;
  v12 = v11;
  v13 = a3 & 0x800000;
  if ( (a3 & 0x800000) != 0 && (a3 & 0x8000000) == 0 )
    v12 = v11 | 0x10;
  v14 = v12 | 0x40;
  if ( (a3 & 0x1000000) == 0 )
    v14 = v12;
  v15 = v14 | 0x80;
  if ( (a3 & 0x2000000) == 0 )
    v15 = v14;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v16 = MiPreventControlAreaDeletion(a1, (__int64 *)&BugCheckParameter2, &v34);
    if ( !v16 )
    {
      MiUnlockPage(a1, a2);
      ++dword_140EF4E10;
      return 0LL;
    }
    v17 = *(_QWORD *)(a1 + 16);
    if ( qword_140E2DB80 && (v17 & 0x10) == 0 )
      v17 &= ~qword_140E2DB80;
    v18 = v17 >> 16;
    MiUnlockPage(a1, a2);
    MiReleaseControlAreaWaiters(v34, v19, v20);
  }
  else
  {
    MiUnlockPage(a1, a2);
    v27 = (__int64 *)MiReferencePfBackedSection(v9);
    v18 = (__int64)v27;
    if ( !v27 )
    {
      ++dword_140EF4E14;
      return 0LL;
    }
    v16 = *v27;
    if ( v13 && *(int *)(v16 + 56) < 0 && (unsigned int)MiClusterVadFull(a1, 16LL, v27) )
    {
      ++dword_140EF4DEC;
      v28 = (_QWORD *)MiDecrementModifiedWriteCount(v16, 0LL);
      if ( v28 )
        MiReleaseControlAreaWaiters(v28, v29, v30);
      return 0LL;
    }
  }
  v32 = 0;
  v31[3] = v18;
  v31[4] = v18;
  v31[0] = v16;
  v31[1] = v9;
  v31[2] = v9;
  v21 = MiTrimSection(v31, 0LL, 1, v15);
  if ( v21 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 6 )
  {
    v21 = MiTrimSection(v31, 0LL, 1, v15);
    if ( v21 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 6 )
      ++dword_140EF4E24;
    else
      ++dword_140EF4D7C;
  }
  v22 = *(_DWORD *)(v16 + 56);
  if ( v21 )
  {
    if ( (v22 & 0x20) != 0 )
    {
      ++dword_140EF4E18;
    }
    else if ( (v22 & 0x80u) == 0 )
    {
      ++dword_140EF4E20;
    }
    else
    {
      ++dword_140EF4E1C;
    }
  }
  else if ( (v22 & 0x20) != 0 )
  {
    ++dword_140EF4D74;
  }
  else if ( (v22 & 0x80u) != 0 )
  {
    ++dword_140EF4D78;
  }
  else
  {
    ++dword_140EF4D80;
  }
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v23 = (_QWORD *)MiDecrementModifiedWriteCount(v16, 0LL);
  if ( v23 )
    MiReleaseControlAreaWaiters(v23, v24, v25);
  if ( (HIWORD(*(_DWORD *)(a1 + 32)) & 7) != 6 )
  {
    ++dword_140EF4D6C;
    return 2LL;
  }
  ++dword_140EF4E28;
  return 0LL;
}
