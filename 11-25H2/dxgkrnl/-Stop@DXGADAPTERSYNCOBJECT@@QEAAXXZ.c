/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x14033E138
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019D7E8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x14033DFDC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x14033E314 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x14001F680 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14003EB70 (-VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     Feature_Servicing_TVSFixesInVidSch__private_IsEnabledDeviceUsageNoInline @ 0x140078B30 (Feature_Servicing_TVSFixesInVidSch__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1401A186C (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 *     ?DdiDestroyNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYNATIVEFENCE@@@Z @ 0x1401A1FAC (-DdiDestroyNativeFence@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYNATIVEFENCE@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v2; // r8
  signed __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // rdx
  ADAPTER_RENDER *v6; // rcx
  __int64 v7; // rax
  void *v8; // rdx
  ADAPTER_RENDER *v9; // rcx
  _OWORD v10[3]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v11[3]; // [rsp+50h] [rbp-48h] BYREF

  if ( (unsigned int)Feature_Servicing_TVSFixesInVidSch__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = _InterlockedExchange64((volatile __int64 *)this + 4, 0LL);
    if ( !v3 )
      return;
    v7 = *((_QWORD *)this + 5);
    if ( v7 )
    {
      v8 = *(void **)(v7 + 32);
      if ( v8 )
        ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 2), v8, v2);
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(*((struct DXG_SIGNAL_GUEST_CPU_EVENT **)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( *((_QWORD *)this + 6) )
    {
      if ( !g_NativeFenceDebugTest )
      {
        v9 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v11[0] = *((unsigned __int64 *)this + 6);
        memset(&v11[1], 0, 32);
        if ( (int)ADAPTER_RENDER::DdiDestroyNativeFence(v9, (struct _DXGKARG_DESTROYNATIVEFENCE *)v11, v2) < 0 )
        {
          WdLogSingleEntry1(3LL, this);
          WdLogGlobalForLineNumber = 2253;
        }
      }
    }
  }
  else
  {
    v3 = *((_QWORD *)this + 4);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)this + 4, 0LL, v3) )
      return;
    v4 = *((_QWORD *)this + 5);
    if ( v4 )
    {
      v5 = *(void **)(v4 + 32);
      if ( v5 )
        ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 2), v5, v2);
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(*((struct DXG_SIGNAL_GUEST_CPU_EVENT **)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    if ( *((_QWORD *)this + 6) && !g_NativeFenceDebugTest )
    {
      v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v10[0] = *((unsigned __int64 *)this + 6);
      memset(&v10[1], 0, 32);
      if ( (int)ADAPTER_RENDER::DdiDestroyNativeFence(v6, (struct _DXGKARG_DESTROYNATIVEFENCE *)v10, v2) < 0 )
      {
        WdLogSingleEntry1(3LL, this);
        WdLogGlobalForLineNumber = 2289;
      }
    }
  }
  (*(void (__fastcall **)(signed __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 624LL))(v3);
  VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
    (DXGADAPTERSYNCOBJECT *)((char *)this + 56),
    *((_BYTE *)this + 27) != 0);
}
