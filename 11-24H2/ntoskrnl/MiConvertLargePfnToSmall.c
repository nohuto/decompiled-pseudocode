/*
 * XREFs of MiConvertLargePfnToSmall @ 0x1402EE180
 * Callers:
 *     MiConvertLargeFreePageToActive @ 0x1402EDE58 (MiConvertLargeFreePageToActive.c)
 *     MiConvertActiveLargePageToSmall @ 0x1402EDFDC (MiConvertActiveLargePageToSmall.c)
 *     MiInitializeMdlSinglePage @ 0x140393930 (MiInitializeMdlSinglePage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 * Callees:
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiConvertBaseLargePage @ 0x14044E488 (MiConvertBaseLargePage.c)
 */

__int64 __fastcall MiConvertLargePfnToSmall(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v4; // r11
  _QWORD *v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+18h]
  int v9; // [rsp+40h] [rbp+18h]
  int v10; // [rsp+40h] [rbp+18h]

  v3 = a3;
  v8 = *(_DWORD *)(a2 + 32);
  v4 = a2;
  HIBYTE(v8) &= 0xF8u;
  *(_DWORD *)(a2 + 32) = v8;
  v9 = *(_DWORD *)(a2 + 32);
  if ( (v9 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a2)
    && (*(_BYTE *)(v4 + 34) & 0x10) == 0
    && (*(_DWORD *)(v4 + 16) & 4) != 0 )
  {
    *(_QWORD *)(v4 + 16) &= ~4uLL;
  }
  BYTE2(v9) &= ~0x10u;
  *(_DWORD *)(v4 + 32) = v9;
  if ( v4 == a1 )
  {
    v6 = (_QWORD *)(v4 + 40);
    if ( (*(_QWORD *)(v4 + 40) & 0x20000000000LL) != 0 )
      *(_QWORD *)(v4 + 40) = *v6 & 0xFFFFFDFFFFFFFFFFuLL;
  }
  else
  {
    v10 = *(_DWORD *)(v4 + 32);
    v6 = (_QWORD *)(v4 + 40);
    BYTE2(v10) ^= (*(_BYTE *)(a1 + 34) ^ BYTE2(v10)) & 7;
    *(_DWORD *)(v4 + 32) = v10;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(a1 + 16);
  }
  if ( (*v6 & 0x20000000000LL) != 0 )
    *(_QWORD *)(v4 + 40) = *v6 & 0xFFFFFDFFFFFFFFFFuLL;
  *(_QWORD *)(v4 + 40) = *v6 & 0xFFFFFEFFFFFFFFFFuLL;
  result = *(_DWORD *)(v4 + 36) & 0xE7FFFFFF;
  *(_DWORD *)(v4 + 36) = result;
  if ( (v3 & 4) != 0 )
  {
    if ( v4 != a1 )
      return MiConvertBaseLargePage(v4, 0LL, a3, 0xFFFFFDFFFFFFFFFFuLL);
  }
  else if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
    LODWORD(result) = *(_DWORD *)(v4 + 32);
    LOWORD(result) = result - 2;
    result = (unsigned int)result;
    *(_DWORD *)(v4 + 32) = result;
  }
  return result;
}
