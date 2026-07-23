/*
 * XREFs of MiTrimSharedPage @ 0x14025A33C
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x14025A644 (MiDecrementSubsection.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiReferencePfBackedSection @ 0x140302908 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x140302F10 (MiPreventControlAreaDeletion.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MiClusterVadFull @ 0x140449CA4 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // r12
  int v7; // edx
  int v8; // r8d
  unsigned __int64 v9; // r12
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // eax
  int v13; // r13d
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  __int64 *v22; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  _QWORD v26[5]; // [rsp+20h] [rbp-30h] BYREF
  int v27; // [rsp+48h] [rbp-8h]
  int v28; // [rsp+4Ch] [rbp-4h]
  __int64 v29; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v28 = 0;
  v7 = (a3 >> 18) & 1;
  v29 = 0LL;
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
    v17 = MiPreventControlAreaDeletion(a1, &BugCheckParameter2, &v29);
    if ( !v17 )
    {
      LOBYTE(v16) = a2;
      MiUnlockPage(a1, v16);
      ++dword_140EF5030;
      return 0LL;
    }
    v18 = *(_QWORD *)(a1 + 16);
    if ( qword_140E2DCC0 && (v18 & 0x10) == 0 )
      v18 &= ~qword_140E2DCC0;
    LOBYTE(v16) = a2;
    v19 = v18 >> 16;
    MiUnlockPage(a1, v16);
    MiReleaseControlAreaWaiters(v29);
  }
  else
  {
    LOBYTE(v14) = a2;
    MiUnlockPage(a1, v14);
    v24 = (__int64 *)MiReferencePfBackedSection(v9);
    v19 = (__int64)v24;
    if ( !v24 )
    {
      ++dword_140EF5034;
      return 0LL;
    }
    v17 = *v24;
    if ( v13 && *(int *)(v17 + 56) < 0 && (unsigned int)MiClusterVadFull(a1, 16LL, v24) )
    {
      ++dword_140EF500C;
      v25 = MiDecrementModifiedWriteCount(v17, 0);
      if ( v25 )
        MiReleaseControlAreaWaiters(v25);
      return 0LL;
    }
  }
  v27 = 0;
  v26[3] = v19;
  v26[4] = v19;
  v26[0] = v17;
  v26[1] = v9;
  v26[2] = v9;
  v20 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))MiTrimSection)(v26, 0LL, 1LL, v15);
  if ( v20 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 6 )
  {
    v20 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))MiTrimSection)(v26, 0LL, 1LL, v15);
    if ( v20 || (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 6 )
      ++dword_140EF5044;
    else
      ++dword_140EF4F9C;
  }
  v21 = *(_DWORD *)(v17 + 56);
  if ( v20 )
  {
    if ( (v21 & 0x20) != 0 )
    {
      ++dword_140EF5038;
    }
    else if ( (v21 & 0x80u) == 0 )
    {
      ++dword_140EF5040;
    }
    else
    {
      ++dword_140EF503C;
    }
  }
  else if ( (v21 & 0x20) != 0 )
  {
    ++dword_140EF4F94;
  }
  else if ( (v21 & 0x80u) != 0 )
  {
    ++dword_140EF4F98;
  }
  else
  {
    ++dword_140EF4FA0;
  }
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v22 = MiDecrementModifiedWriteCount(v17, 0);
  if ( v22 )
    MiReleaseControlAreaWaiters(v22);
  if ( (HIWORD(*(_DWORD *)(a1 + 32)) & 7) != 6 )
  {
    ++dword_140EF4F8C;
    return 2LL;
  }
  ++dword_140EF5048;
  return 0LL;
}
