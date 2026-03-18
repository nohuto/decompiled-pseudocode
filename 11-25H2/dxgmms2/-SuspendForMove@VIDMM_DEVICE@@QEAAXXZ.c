/*
 * XREFs of ?SuspendForMove@VIDMM_DEVICE@@QEAAXXZ @ 0x14010EB14
 * Callers:
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010EA94 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x140104EA0 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::SuspendForMove(VIDMM_DEVICE *this)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 **v4; // rcx

  if ( (*((_BYTE *)this + 312) & 7) == 0 )
  {
    v2 = (__int64 *)((char *)this + 296);
    if ( !*((_QWORD *)this + 37) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
        WdLogGlobalForLineNumber = 1009;
      }
      VIDMM_DEVICE::SuspendSchedulerDevice(this);
      v3 = *(_QWORD *)this + 44752LL;
      v4 = *(__int64 ***)(*(_QWORD *)this + 44760LL);
      if ( *v4 != (__int64 *)v3 )
        __fastfail(3u);
      *v2 = v3;
      v2[1] = (__int64)v4;
      *v4 = v2;
      *(_QWORD *)(v3 + 8) = v2;
    }
  }
}
