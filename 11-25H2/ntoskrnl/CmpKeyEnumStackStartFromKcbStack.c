/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x140975FC0
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     CmpGetKcbAtLayerHeight @ 0x140889590 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140973E5C (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpStartKeyNodeStack @ 0x1409741C0 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140975744 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x140975960 (CmpCleanupKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  _OWORD *v8; // r9
  __int64 v9; // r9
  __int64 v10; // r8
  int started; // ebx
  __int64 v12; // rbx
  _OWORD *v13; // rbp
  __int64 v14; // rdi
  _OWORD *v15; // rsi
  __int64 KcbAtLayerHeight; // rax
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rcx
  _DWORD *v19; // r8
  __int64 CellFlat; // rax
  unsigned __int16 v23; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v24[4]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-50h]

  v7 = a4;
  memset_0(&v23, 0, 0x50uLL);
  v8 = v24;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v8);
    v8 = (_OWORD *)(v9 + 32);
  }
  while ( v10 != 1 );
  started = CmpStartKeyNodeStack((__int64)&v23, *(_WORD *)(a2 + 2));
  if ( started >= 0 )
  {
    v12 = *(__int16 *)(a2 + 2);
    if ( (v12 & 0x8000u) == 0LL )
    {
      v13 = &v24[2 * v12];
      v14 = 32LL * (__int16)(v12 - 2);
      do
      {
        if ( (unsigned __int16)v12 < 2u )
          v15 = v13;
        else
          v15 = (_OWORD *)(v14 + v25);
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v12);
        v17 = *(unsigned int *)(KcbAtLayerHeight + 40);
        if ( (_DWORD)v17 != -1 )
        {
          v18 = *(_QWORD *)(KcbAtLayerHeight + 32);
          v19 = (_DWORD *)v15 + 6;
          *(_QWORD *)v15 = v18;
          *((_DWORD *)v15 + 2) = v17;
          if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v18, v17, v19);
          else
            CellFlat = HvpGetCellPaged(v18, v17, v19);
          *((_QWORD *)v15 + 2) = CellFlat;
        }
        v14 -= 32LL;
        v13 -= 2;
        LOWORD(v12) = v12 - 1;
      }
      while ( (v12 & 0x8000u) == 0LL );
      v7 = a4;
    }
    if ( a3 )
      *(_WORD *)(a1 + 2) = *(_WORD *)(a3 + 4);
    started = CmpKeyEnumStackStartFromKeyNodeStack(a1, &v23, v7);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)&v23);
  return (unsigned int)started;
}
