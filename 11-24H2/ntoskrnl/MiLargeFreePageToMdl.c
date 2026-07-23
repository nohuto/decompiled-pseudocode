/*
 * XREFs of MiLargeFreePageToMdl @ 0x1402EF600
 * Callers:
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiConvertLargeFreePageToActive @ 0x1402EDE58 (MiConvertLargeFreePageToActive.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiChangePageHeatImmediate @ 0x140435AC8 (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(ULONG_PTR a1, unsigned int a2, __int64 a3, int a4, unsigned __int8 a5)
{
  ULONG_PTR v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // r14
  int v18; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v9 = MiPageSizes[a2];
  v10 = 48 * a1 - 0x220000000000LL;
  MiUnlinkFreeOrZeroedPage(a1, 0LL, 0);
  MiUnlockPage(v10, a5);
  if ( (unsigned int)MiIsFreeZeroPfnCold(v10) && (a4 & 0x3000000) == 0 )
  {
    MiChangePageHeatImmediate(v8, a2, 1LL);
    if ( a5 < 2u )
    {
      v17 = MiLockPageInline(v10, v14, v15, v16);
    }
    else
    {
      v18 = 0;
      v17 = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    MiSetFreeZeroPfnCold(v10, 0LL);
    MiUnlockPage(v10, v17);
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
