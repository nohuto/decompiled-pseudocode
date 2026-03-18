/*
 * XREFs of ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1800F7810
 * Callers:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1800F5EBC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800F775C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::ClearCustomAnimation(CInteractionTracker *this, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx

  v2 = a2;
  if ( (unsigned __int64)a2 < 2 )
  {
    v4 = *((_QWORD *)this + a2 + 44);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + v2 + 44) = 0LL;
    }
  }
  if ( (_DWORD)v2 == 1 )
    *((_BYTE *)this + 541) &= ~2u;
}
