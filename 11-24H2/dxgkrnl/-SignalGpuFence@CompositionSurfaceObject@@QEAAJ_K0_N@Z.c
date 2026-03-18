/*
 * XREFs of ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x14001EAC8
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001C630 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x14001D79C (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009CC00 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::SignalGpuFence(
        CompositionSurfaceObject *this,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // r8
  unsigned int v9; // esi
  CompositionSurfaceObject *i; // rax
  HANDLE CurrentThreadId; // rax
  char *v12; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  v9 = -1073741275;
  if ( *((_DWORD *)this + 44) )
  {
    for ( i = (CompositionSurfaceObject *)*((_QWORD *)this + 20);
          i != (CompositionSurfaceObject *)((char *)this + 160);
          i = *(CompositionSurfaceObject **)i )
    {
      if ( *((_QWORD *)i - 1) == a2 )
      {
        LOBYTE(v8) = a4;
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*((_QWORD *)i - 3) + 112LL))(
               (__int64)i - 24,
               a3,
               v8);
        break;
      }
    }
  }
  CurrentThreadId = PsGetCurrentThreadId();
  v12 = (char *)this + 48;
  if ( CurrentThreadId == *((HANDLE *)this + 7) )
  {
    *((_QWORD *)this + 7) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v12, 0LL);
  }
  KeLeaveCriticalRegion();
  return v9;
}
