/*
 * XREFs of ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14021E9EC
 * Callers:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     EditionActivateMitInput @ 0x14023FBB0 (EditionActivateMitInput.c)
 * Callees:
 *     SetPointer @ 0x140131500 (SetPointer.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14021EA20 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 */

void __fastcall CursorApiRouter::ForceSetCurrentCursorShape(CursorApiRouter *this)
{
  bool v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 13) || *((_BYTE *)this + 12) )
    v1 = 1;
  InputTraceLogging::Cursor::Api::ForceSetCurrentCursorShape(v1);
  SetPointer(!v1);
}
