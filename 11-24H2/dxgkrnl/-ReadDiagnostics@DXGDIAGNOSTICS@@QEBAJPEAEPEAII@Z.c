/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x140072248
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071BE0 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1401BE4F0 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401BFD24 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1401E68F8 (OutputDuplGetDiagnosticBuffer.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x140024CC0 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x14006371C (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(
        DXGDIAGNOSTICS *this,
        unsigned __int8 *a2,
        unsigned int *a3,
        int CurrentProcessSessionId)
{
  unsigned int v9; // esi
  unsigned int DiagnosticsInternal; // ebx

  if ( !a3 )
    return 3221225485LL;
  if ( a2 )
  {
    v9 = *a3;
    if ( *a3 )
      memset(a2, 0, v9);
  }
  else
  {
    v9 = 0;
  }
  if ( CurrentProcessSessionId == -1 )
  {
    if ( IsCurrentProcessAdmin() )
      CurrentProcessSessionId = -1;
    else
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  DXGFASTMUTEX::Acquire((DXGDIAGNOSTICS *)((char *)this + 64));
  DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, CurrentProcessSessionId, v9, a2, a3);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 8);
  if ( *a3 > v9 )
    return (unsigned int)-2147483643;
  return DiagnosticsInternal;
}
