/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14000F050 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x14000F46C (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z @ 0x140033098 (-SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005EA40 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 *     Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline @ 0x14009847C (Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x140099D60 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipToken::InFrame(CompositionSurfaceObject **this, struct CCompositionFrame *a2, bool *a3)
{
  int CanReleaseToFrame; // ebx
  CompositionSurfaceObject *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  bool v11; // [rsp+58h] [rbp+10h] BYREF

  CanReleaseToFrame = CFlipToken::CanReleaseToFrame(
                        (CFlipToken *)this,
                        (struct CCompositionFrame *)((char *)a2 + 32),
                        a3);
  if ( CanReleaseToFrame >= 0 && *a3 )
  {
    v11 = 0;
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged((CFlipToken *)this);
    v7 = this[6];
    v8 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
    CanReleaseToFrame = CompositionSurfaceObject::NotifyTokenInFrame(v7, (const struct CToken *)this, &v11, v8);
    if ( CanReleaseToFrame >= 0 )
    {
      *((_BYTE *)this + 577) = v11;
      if ( !(unsigned int)Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline()
        || !*((_BYTE *)this + 579) )
      {
        v9 = (*((__int64 (__fastcall **)(CompositionSurfaceObject **, CompositionSurfaceObject *, _QWORD, _QWORD))*this
              + 17))(
               this,
               this[14],
               *((_QWORD *)a2 + 14),
               *((_QWORD *)a2 + 15));
        CompositionSurfaceObject::SetSyncRefreshTime(this[6], v9);
      }
      CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)this, 0);
    }
  }
  else
  {
    ++*((_DWORD *)this + 10);
  }
  return (unsigned int)CanReleaseToFrame;
}
