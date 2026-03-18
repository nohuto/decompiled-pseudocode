/*
 * XREFs of DrvGetWDDMAdapterInfo @ 0x1401079F0
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F4428 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     DrvGetAdapterInfoFromGraphicsDevice @ 0x140107A4C (DrvGetAdapterInfoFromGraphicsDevice.c)
 */

__int64 __fastcall DrvGetWDDMAdapterInfo(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  if ( a1
    && (a2 || (*(_DWORD *)(a1 + 40) & 0x400) == 0)
    && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
    && (v4 = *(_QWORD *)(a1 + 2568), ((v4 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0)
    && (*(_DWORD *)(v4 + 160) & 0x800000) != 0 )
  {
    return DrvGetAdapterInfoFromGraphicsDevice(v4, a3, a4);
  }
  else
  {
    return 0LL;
  }
}
