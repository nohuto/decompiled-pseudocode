/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14001E4D0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x14001E8EC (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z @ 0x140032FCC (-SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z @ 0x14005F200 (-CanReleaseToFrame@CFlipToken@@IEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009BE80 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 *     Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline @ 0x14009BF78 (Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipToken::InFrame(CompositionSurfaceObject **this, struct CCompositionFrame *a2, bool *a3)
{
  int CanReleaseToFrame; // ebx
  CompositionSurfaceObject *v7; // rbx
  unsigned __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // r8
  __int64 v11; // rax
  bool v13; // [rsp+58h] [rbp+10h] BYREF

  CanReleaseToFrame = CFlipToken::CanReleaseToFrame(
                        (CFlipToken *)this,
                        (struct CCompositionFrame *)((char *)a2 + 32),
                        a3);
  if ( CanReleaseToFrame >= 0 && *a3 )
  {
    v13 = 0;
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged((CFlipToken *)this);
    v7 = this[6];
    v8 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
    CanReleaseToFrame = CompositionSurfaceObject::NotifyTokenInFrame(v7, (const struct CToken *)this, &v13, v8);
    if ( CanReleaseToFrame >= 0 )
    {
      v9 = *((_BYTE *)this + 579) == 0;
      *((_BYTE *)this + 577) = v13;
      if ( v9 )
      {
        if ( (unsigned int)Feature_ComposedFlipPerf__private_IsEnabledDeviceUsageNoInline() )
          v10 = *((_QWORD *)a2 + 6);
        else
          v10 = *((_QWORD *)a2 + 14);
        v11 = (*((__int64 (__fastcall **)(CompositionSurfaceObject **, CompositionSurfaceObject *, __int64, _QWORD))*this
               + 17))(
                this,
                this[14],
                v10,
                *((_QWORD *)a2 + 15));
        CompositionSurfaceObject::SetSyncRefreshTime(this[6], v11);
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
