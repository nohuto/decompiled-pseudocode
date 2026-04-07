/*
 * XREFs of ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x180047248
 * Callers:
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18004716C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x180089D70 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CStoryboard::ShouldBlock(struct CStoryboard *a1, struct CStoryboard *a2)
{
  char v3; // di
  int v4; // esi
  int v5; // edx
  unsigned int i; // eax

  v3 = 0;
  v4 = *(_DWORD *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = *(_DWORD *)(*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a2 + 16LL))(a2);
  for ( i = 0; i < 2; ++i )
  {
    if ( v4 == *(_DWORD *)&asc_180106328[8 * i] && v5 == *(_DWORD *)&asc_180106328[8 * i + 4] )
      return 1;
  }
  return v3;
}
