/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801C10E0
 * Callers:
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF400 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CDDisplayRenderTarget *this,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 6);
  v5 = -2003304442;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 536);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
      v5 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D5,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\ddisplayswapchain.cpp",
          (const char *)(unsigned int)v7);
      }
      else
      {
        v5 = 0;
        *a3 = *(void **)(v3 + 544);
      }
    }
    else
    {
      return (unsigned int)-2003304309;
    }
  }
  return v5;
}
