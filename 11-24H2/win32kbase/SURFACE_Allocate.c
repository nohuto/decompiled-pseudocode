/*
 * XREFs of SURFACE_Allocate @ 0x1400CE250
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400EBA90 (--$FreeIsolatedType@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1401D0D14 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

_QWORD *__fastcall SURFACE_Allocate(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rcx
  void *v6; // rax

  v1 = **(_QWORD **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL);
  if ( !v1 )
    return 0LL;
  v3 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 48));
  if ( !v3 )
    return 0LL;
  v4 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v2) + 88)
                                                                       + 5704LL);
  if ( v4 )
  {
    v6 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v4, v3);
    if ( v6 )
    {
      v3[85] = v6;
    }
    else
    {
      FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<180224,704>>(v3);
      return 0LL;
    }
  }
  else
  {
    v3[85] = 0LL;
  }
  return v3;
}
