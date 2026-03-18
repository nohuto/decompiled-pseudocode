/*
 * XREFs of _anonymous_namespace_::SwitchMouseCursors @ 0x1402A3D68
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     ?ForceHidePenCursor@@YAXH@Z @ 0x1402A3BE0 (-ForceHidePenCursor@@YAXH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall anonymous_namespace_::SwitchMouseCursors(int a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx

  v2 = (unsigned __int8)a2;
  v3 = (unsigned int)(a1 - 2);
  if ( (_DWORD)v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(v4, a2) + 36368) + 100LL), 1u);
      else
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 457);
    }
    else
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(v4, a2) + 36368);
      _InterlockedAnd((volatile signed __int32 *)(v5 + 100), 0xFFFFF8FF);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(v5, v6) + 36368) + 100LL), 0x100u);
    }
  }
  else
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v3, a2) + 36368);
    _InterlockedAnd((volatile signed __int32 *)(v7 + 100), 0xFFFFF8FF);
    _InterlockedOr(
      (volatile signed __int32 *)(*(_QWORD *)(W32GetUserSessionState(v7, v8) + 36368) + 100LL),
      (v2 + 1) << 9);
  }
}
