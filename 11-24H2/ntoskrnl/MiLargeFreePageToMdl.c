/*
 * XREFs of MiLargeFreePageToMdl @ 0x14041F370
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIsFreeZeroPfnCold @ 0x14022418C (MiIsFreeZeroPfnCold.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiConvertLargeFreePageToActive @ 0x14041F464 (MiConvertLargeFreePageToActive.c)
 *     MiSetFreeZeroPfnCold @ 0x1404319A0 (MiSetFreeZeroPfnCold.c)
 *     MiChangePageHeatImmediate @ 0x14043F808 (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(ULONG_PTR a1, unsigned int a2, __int64 a3, int a4, unsigned __int8 a5)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdx
  unsigned __int8 v14; // r14
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v9 = MiPageSizes[a2];
  v10 = 48 * a1 - 0x220000000000LL;
  MiUnlinkFreeOrZeroedPage(a1, 0LL, 0LL);
  MiUnlockPage(v10, a5);
  if ( (unsigned int)MiIsFreeZeroPfnCold(v10) && (a4 & 0x3000000) == 0 )
  {
    MiChangePageHeatImmediate(v8, a2, 1LL);
    if ( a5 < 2u )
    {
      v14 = MiLockPageInline(v10);
    }
    else
    {
      v15 = 0;
      v14 = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v15);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    MiSetFreeZeroPfnCold(v10, 0LL);
    MiUnlockPage(v10, v14);
  }
  result = MiConvertLargeFreePageToActive(v10);
  if ( a3 )
  {
    v12 = ((unsigned __int64)*(unsigned int *)(a3 + 40) >> 12) + 6;
    result = (unsigned int)(*(_DWORD *)(a3 + 40) + ((_DWORD)v9 << 12));
    *(_DWORD *)(a3 + 40) = result;
    v13 = (_QWORD *)(a3 + 8 * v12);
    do
    {
      *v13++ = v8++;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
