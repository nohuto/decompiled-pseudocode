/*
 * XREFs of MiLargeFreePageToMdl @ 0x14049FBFC
 * Callers:
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiChangePageHeatImmediate @ 0x14044039C (MiChangePageHeatImmediate.c)
 *     MiConvertLargeFreePageToActive @ 0x14049FCE4 (MiConvertLargeFreePageToActive.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(ULONG_PTR a1, unsigned int a2, __int64 a3, int a4, unsigned __int8 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int8 v12; // r14
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdx
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v9 = MiPageSizes[a2];
  v10 = 48 * a1 - 0x220000000000LL;
  MiUnlinkFreeOrZeroedPage(a1, 0LL, 0);
  MiUnlockPage(v10, a5);
  if ( (unsigned int)MiIsFreeZeroPfnCold(v10) && (a4 & 0x3000000) == 0 )
  {
    MiChangePageHeatImmediate(v8, a2, 1u);
    if ( a5 < 2u )
    {
      v12 = MiLockPageInline(v10);
    }
    else
    {
      v15 = 0;
      v12 = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    MiSetFreeZeroPfnCold(v10, 0);
    MiUnlockPage(v10, v12);
  }
  result = MiConvertLargeFreePageToActive(v10);
  if ( a3 )
  {
    v13 = ((unsigned __int64)*(unsigned int *)(a3 + 40) >> 12) + 6;
    result = (unsigned int)(*(_DWORD *)(a3 + 40) + ((_DWORD)v9 << 12));
    *(_DWORD *)(a3 + 40) = result;
    v14 = (_QWORD *)(a3 + 8 * v13);
    do
    {
      *v14++ = v8++;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
