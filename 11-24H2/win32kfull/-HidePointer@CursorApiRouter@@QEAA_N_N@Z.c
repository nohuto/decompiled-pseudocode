/*
 * XREFs of ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398
 * Callers:
 *     EditionShowSystemCursor @ 0x14002B360 (EditionShowSystemCursor.c)
 *     _anonymous_namespace_::RenderCursor @ 0x140091F44 (_anonymous_namespace_--RenderCursor.c)
 *     SetPointerMetaVisibility @ 0x140131E3C (SetPointerMetaVisibility.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140132D94 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140132F80 (TransitionCursorSuppressionState.c)
 *     PowerOnGdi @ 0x140134F50 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140135140 (PowerOffGdi.c)
 * Callees:
 *     GreHidePointer @ 0x14002A43C (GreHidePointer.c)
 *     GreUpdatePointerState @ 0x14002B1B4 (GreUpdatePointerState.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x14002BD28 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14021E9EC (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402D9E20 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 */

bool __fastcall CursorApiRouter::HidePointer(CursorApiRouter *this, unsigned __int8 a2)
{
  unsigned int v2; // esi
  __int64 HDEV; // rax
  bool v5; // bp
  int v6; // r14d
  int updated; // eax

  v2 = a2;
  HDEV = UserGetHDEV();
  if ( !HDEV )
    return HDEV;
  v5 = 0;
  W32AcquirePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0);
  v6 = *((_DWORD *)this + 8);
  if ( v6 == 1 )
  {
    updated = GreUpdatePointerState(v2);
LABEL_5:
    v5 = updated != 0;
    if ( updated )
      *((_BYTE *)this + 12) = v2;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 8) == 2 )
  {
    updated = GreHidePointer((Gre::Base *)v2);
    goto LABEL_5;
  }
LABEL_7:
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  InputTraceLogging::Cursor::Api::HidePointer(v2, v5, *((_BYTE *)this + 12));
  if ( v5 && v6 == 1 )
  {
    if ( (_BYTE)v2 )
      CursorApiRouter::DwmSetPointer(this, 0LL);
    else
      CursorApiRouter::ForceSetCurrentCursorShape(this);
  }
  LOBYTE(HDEV) = 1;
  return HDEV;
}
