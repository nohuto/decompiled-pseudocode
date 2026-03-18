/*
 * XREFs of DpiFdoInitializeMipiDsi @ 0x140061900
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupMipiDsi @ 0x14007CEA0 (DpiFdoCleanupMipiDsi.c)
 *     DpiQueryMiniportInterface @ 0x140188CC4 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeMipiDsi(__int64 a1)
{
  __int64 v1; // rsi
  int MiniportInterface; // edi
  _OWORD *v3; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  v3 = (_OWORD *)(v1 + 5600);
  if ( !*(_WORD *)(v1 + 5600) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_MIPI_DSI_INTERFACE, 56, 1);
    if ( MiniportInterface < 0 )
    {
      *v3 = 0LL;
      *(_OWORD *)(v1 + 5616) = 0LL;
      *(_OWORD *)(v1 + 5632) = 0LL;
      *(_QWORD *)(v1 + 5648) = 0LL;
      goto LABEL_9;
    }
    if ( *(_WORD *)v3 != 56 || !*(_QWORD *)(v1 + 5632) || !*(_QWORD *)(v1 + 5640) || !*(_QWORD *)(v1 + 5648) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 13598;
LABEL_9:
      DpiFdoCleanupMipiDsi(v1);
    }
  }
  return (unsigned int)MiniportInterface;
}
