/*
 * XREFs of DpiFdoInitializeDisplayDiagnostics @ 0x14007CFE8
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupDisplayDiagnostics @ 0x14007CE58 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiQueryMiniportInterface @ 0x140188CC4 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeDisplayDiagnostics(__int64 a1)
{
  __int64 v1; // rdi
  int MiniportInterface; // eax
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  if ( !*(_WORD *)(v1 + 5728) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DISPLAY_DIAGNOSTICS_INTERFACE, 48, 1);
    if ( MiniportInterface >= 0 && (*(_WORD *)(v1 + 5728) != 48 || !*(_QWORD *)(v1 + 5760) || !*(_QWORD *)(v1 + 5768)) )
    {
      v3 = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 13768;
LABEL_8:
      DpiFdoCleanupDisplayDiagnostics(v1);
      return v3;
    }
  }
  v3 = MiniportInterface;
  if ( MiniportInterface < 0 )
    goto LABEL_8;
  return v3;
}
