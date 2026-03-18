/*
 * XREFs of ?SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z @ 0x140033098
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14000DDC4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005EB20 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CompositionSurfaceObject::SetSyncRefreshTime(CompositionSurfaceObject *this, __int64 a2)
{
  char *v3; // rsi

  v3 = (char *)this + 48;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = PsGetCurrentThreadId();
  *((_QWORD *)this + 18) = a2;
  if ( PsGetCurrentThreadId() == *((HANDLE *)v3 + 1) )
  {
    *((_QWORD *)v3 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
}
