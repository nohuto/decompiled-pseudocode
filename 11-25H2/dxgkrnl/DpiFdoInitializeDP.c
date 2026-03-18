/*
 * XREFs of DpiFdoInitializeDP @ 0x14007CEF0
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupDP @ 0x14007CE1C (DpiFdoCleanupDP.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiQueryMiniportInterface @ 0x140188CC4 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeDP(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rdi
  int MiniportInterface; // eax

  v1 = *(_QWORD **)(a1 + 64);
  LODWORD(v2) = 0;
  if ( !*((_WORD *)v1 + 2828) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DP_INTERFACE, 72, 1);
    v2 = MiniportInterface;
    if ( MiniportInterface < 0 )
    {
      memset(v1 + 707, 0, 0x48uLL);
      WdLogSingleEntry1(4LL, v2);
      WdLogGlobalForLineNumber = 13691;
    }
    else if ( *((_WORD *)v1 + 2828) != 72 || !v1[711] || !v1[712] || !v1[713] || !v1[714] || !v1[715] )
    {
      DpiFdoCleanupDP(v1);
      LODWORD(v2) = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 13683;
    }
  }
  return (unsigned int)v2;
}
