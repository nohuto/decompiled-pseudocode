/*
 * XREFs of ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1800E61B0
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1800E5790 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1800E5F5C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801E09AC (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::BoostCompositorClock(CInteractionTracker *this, bool a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax

  if ( ((*((_BYTE *)this + 541) & 4) != 0) != a2 )
  {
    v2 = *((_QWORD *)this + 3);
    v3 = *(_DWORD *)(v2 + 6380);
    if ( a2 )
    {
      v4 = v3 + 1;
    }
    else
    {
      if ( !v3 )
        goto LABEL_5;
      v4 = v3 - 1;
    }
    *(_DWORD *)(v2 + 6380) = v4;
LABEL_5:
    *((_BYTE *)this + 541) &= ~4u;
    *((_BYTE *)this + 541) |= 4 * a2;
    CInteractionTracker::LogBoostCompositorClock(this, a2);
  }
}
