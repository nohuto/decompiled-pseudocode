/*
 * XREFs of ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x14000F72C
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x14000E2C4 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CompositionSurfaceObject::SignalPresentLimitSemaphore(CompositionSurfaceObject *this, __int64 a2)
{
  CompositionSurfaceObject *i; // rax
  HANDLE CurrentThreadId; // rax
  char *v6; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  if ( *((_DWORD *)this + 34) )
  {
    for ( i = (CompositionSurfaceObject *)*((_QWORD *)this + 15);
          i != (CompositionSurfaceObject *)((char *)this + 120);
          i = *(CompositionSurfaceObject **)i )
    {
      if ( *((_QWORD *)i - 1) == a2 )
      {
        (*(void (__fastcall **)(__int64))(*((_QWORD *)i - 3) + 120LL))((__int64)i - 24);
        break;
      }
    }
  }
  CurrentThreadId = PsGetCurrentThreadId();
  v6 = (char *)this + 48;
  if ( CurrentThreadId == *((HANDLE *)this + 7) )
  {
    *((_QWORD *)this + 7) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v6, 0LL);
  }
  KeLeaveCriticalRegion();
}
