/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x140036F00
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A264 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?NotifyDwm@CFlipContentToken@@UEBA_NXZ @ 0x140036E90 (-NotifyDwm@CFlipContentToken@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipNotifyDwm(
        CompositionSurfaceObject *this,
        __int64 a2,
        bool *a3)
{
  CompositionSurfaceObject *i; // rax
  char v7; // al
  HANDLE CurrentThreadId; // rax
  char *v9; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 48, 0LL);
  if ( *((_DWORD *)this + 44) )
  {
    for ( i = (CompositionSurfaceObject *)*((_QWORD *)this + 20);
          i != (CompositionSurfaceObject *)((char *)this + 160);
          i = *(CompositionSurfaceObject **)i )
    {
      if ( *((_QWORD *)i - 1) == a2 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)i - 3) + 200LL))((__int64)i - 24);
        goto LABEL_6;
      }
    }
  }
  v7 = 0;
LABEL_6:
  *a3 = v7;
  CurrentThreadId = PsGetCurrentThreadId();
  v9 = (char *)this + 48;
  if ( CurrentThreadId == *((HANDLE *)this + 7) )
  {
    *((_QWORD *)this + 7) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v9, 0LL);
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
