/*
 * XREFs of ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x140034BE0
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005EA40 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

char __fastcall CompositionSurfaceObject::StartCompositionEarly(CompositionSurfaceObject *this, __int64 a2)
{
  char *v4; // rbx
  _QWORD **v5; // rdi
  _QWORD *i; // rax
  char v7; // di

  KeEnterCriticalRegion();
  v4 = (char *)this + 48;
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  if ( *((_DWORD *)this + 34) )
  {
    v5 = (_QWORD **)((char *)this + 120);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 40LL))(i - 3);
        goto LABEL_6;
      }
    }
  }
  v7 = 0;
LABEL_6:
  if ( PsGetCurrentThreadId() == *((HANDLE *)v4 + 1) )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v4, 0LL);
  }
  KeLeaveCriticalRegion();
  return v7;
}
