/*
 * XREFs of ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x18008C740
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@PEAVIDCompositionInteractionStats@@PEAW4PointerResult@@@Z @ 0x18008C7FC (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::ProcessHandledInteractions(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6)
{
  __int64 result; // rax
  int v7; // r15d
  __int64 v11; // rsi

  result = 0LL;
  v7 = a4;
  if ( a6 )
    *a6 = 1;
  if ( a1[26] )
  {
    v11 = a1[207];
    if ( a3 )
    {
      if ( v11 )
        a5[45] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 120LL))(a1, *a5);
    }
    LOBYTE(a4) = a3;
    return CInteractionProcessor::ProcessHandledInteractions(
             a1 + 36,
             (a1[26] + 80LL) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[26] >> 64),
             a2,
             a4,
             v7,
             a5,
             v11,
             a6);
  }
  return result;
}
