/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1402FAA68
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019FC38 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1402FA90C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1402FAB74 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140013690 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003E560 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401A3D88 (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiDestroyNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYNATIVEFENCE@@@Z @ 0x1401A44C8 (-DdiDestroyNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYNATIVEFENCE@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rdx
  ADAPTER_RENDER *v7; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  v4 = _InterlockedExchange64((volatile __int64 *)this + 4, 0LL);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
    {
      v6 = *(void **)(v5 + 32);
      if ( v6 )
        ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 2), v6, a3);
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(*((struct DXG_SIGNAL_GUEST_CPU_EVENT **)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( *((_QWORD *)this + 6) && !g_NativeFenceDebugTest )
    {
      v7 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v8[0] = *((unsigned __int64 *)this + 6);
      memset(&v8[1], 0, 32);
      if ( (int)ADAPTER_RENDER::DdiDestroyNativeFence(v7, (struct _DXGKARG_DESTROYNATIVEFENCE *)v8, a3) < 0 )
      {
        WdLogSingleEntry1(3LL, this);
        WdLogGlobalForLineNumber = 2251;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 624LL))(v4);
    VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
      (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
      *((_BYTE *)this + 27) != 0);
  }
}
