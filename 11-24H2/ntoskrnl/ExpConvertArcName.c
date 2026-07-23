/*
 * XREFs of ExpConvertArcName @ 0x1407BB954
 * Callers:
 *     ExpTranslateArcPath @ 0x1407BD4BC (ExpTranslateArcPath.c)
 * Callees:
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     wcsncat_s @ 0x140502130 (wcsncat_s.c)
 *     ExpTranslateNtPath @ 0x1407BD944 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x140A5C5A4 (ExpTranslateSymbolicLink.c)
 *     ExpCreateOutputNT @ 0x140A5C754 (ExpCreateOutputNT.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpConvertArcName(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        wchar_t *Src,
        unsigned int MaxCount)
{
  unsigned int v9; // esi
  unsigned int v10; // r15d
  wchar_t *Pool2; // rax
  wchar_t *v12; // rdi
  int v14; // ebx
  int v15; // eax
  void *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  void *v21; // rsi
  __int64 v22; // r14
  wchar_t *v23; // r14
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF

  v9 = MaxCount + 10;
  v10 = 2 * (MaxCount + 10);
  v24 = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, v10, 0x72766E45u);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  wcscpy_s(Pool2, v9, L"\\ArcName\\");
  wcsncat_s(v12, v9, a4, MaxCount);
  v12[MaxCount + 9] = 0;
  if ( a1 != 3 )
  {
    v17 = v10 + 12;
    if ( Src )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( Src[v18] );
      v17 += 2 * v18;
    }
    v19 = v17 + 2;
    v20 = ExAllocatePool2(0x40uLL, v19, 0x72766E45u);
    v21 = (void *)v20;
    if ( !v20 )
    {
      ExFreePoolWithTag(v12, 0);
      return 3221225626LL;
    }
    v22 = v20 + 12;
    *(_DWORD *)v20 = 1;
    *(_DWORD *)(v20 + 4) = v19;
    *(_DWORD *)(v20 + 8) = 3;
    wcscpy_s((wchar_t *)(v20 + 12), (unsigned __int64)(v19 - 12) >> 1, v12);
    v23 = (wchar_t *)(v10 + v22);
    ExFreePoolWithTag(v12, 0);
    if ( Src )
      wcscpy_s(v23, (unsigned __int64)(v19 - v10 - 12) >> 1, Src);
    else
      *v23 = 0;
    v15 = ExpTranslateNtPath(v21, a1, a2, a3, v24);
    v16 = v21;
    goto LABEL_16;
  }
  v14 = ExpTranslateSymbolicLink(v12);
  ExFreePoolWithTag(v12, 0);
  if ( v14 >= 0 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, wchar_t *))ExpCreateOutputNT)(a2, a3, &v24, Src);
    v16 = (void *)*((_QWORD *)&v24 + 1);
LABEL_16:
    v14 = v15;
    ExFreePoolWithTag(v16, 0);
  }
  return (unsigned int)v14;
}
