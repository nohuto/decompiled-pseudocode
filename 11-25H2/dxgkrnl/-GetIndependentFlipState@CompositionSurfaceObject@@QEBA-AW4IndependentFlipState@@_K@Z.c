/*
 * XREFs of ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x140037CB4
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005EA40 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipState(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  _QWORD **v5; // rdi
  _QWORD *i; // rax
  unsigned int v7; // edi

  KeEnterCriticalRegion();
  v4 = a1 + 48;
  ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  if ( *(_DWORD *)(a1 + 136) )
  {
    v5 = (_QWORD **)(a1 + 120);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 192LL))(i - 3);
        goto LABEL_6;
      }
    }
  }
  v7 = 0;
LABEL_6:
  if ( PsGetCurrentThreadId() == *(HANDLE *)(v4 + 8) )
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v4, 0LL);
  }
  KeLeaveCriticalRegion();
  return v7;
}
