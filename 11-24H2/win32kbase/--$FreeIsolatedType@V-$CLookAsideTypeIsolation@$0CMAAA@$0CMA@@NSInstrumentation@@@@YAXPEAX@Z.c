/*
 * XREFs of ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400EBA90
 * Callers:
 *     SURFACE_Allocate @ 0x1400CE250 (SURFACE_Allocate.c)
 * Callees:
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<180224,704>>(void *a1)
{
  __int64 v2; // rdi

  v2 = **(_QWORD **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL);
  if ( v2 )
  {
    memset(a1, 0, 0x2C0uLL);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v2 + 48), a1);
  }
}
