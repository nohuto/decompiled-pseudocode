/*
 * XREFs of SpbCheckRect @ 0x1C000BF1C
 * Callers:
 *     SpbCheckPwnd @ 0x1C00138FC (SpbCheckPwnd.c)
 *     SpbCheckDce @ 0x1C00228B0 (SpbCheckDce.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     _ScrollDC @ 0x1C022E3B0 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C022E570 (xxxScrollWindowEx.c)
 * Callees:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C000BF9C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C000C15C (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     IsVisible @ 0x1C00E2A5C (IsVisible.c)
 */

char __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2, unsigned int a3)
{
  int v6; // eax
  struct tagSPB *v7; // rcx
  struct tagSPB *v8; // rbx

  v6 = IsVisible(a1);
  if ( v6 )
  {
    while ( 1 )
    {
      LOBYTE(v6) = gpDispInfo;
      v7 = *(struct tagSPB **)(gpDispInfo + 32LL);
      if ( !v7 )
        break;
      while ( 1 )
      {
        v8 = *(struct tagSPB **)v7;
        v6 = SpbCheckRect2(v7, a1, a2, a3);
        if ( !v6 )
        {
          LOBYTE(v6) = IsSpbPresentOrNull(v8);
          if ( !(_BYTE)v6 )
            break;
        }
        v7 = v8;
        if ( !v8 )
          return v6;
      }
    }
  }
  return v6;
}
