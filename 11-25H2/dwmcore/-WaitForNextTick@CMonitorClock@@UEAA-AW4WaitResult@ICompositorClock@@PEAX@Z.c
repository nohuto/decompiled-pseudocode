/*
 * XREFs of ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF400
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z @ 0x180141350 (-GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?TranslateWaitResult@CMonitorClock@@IEAA?AW4WaitResult@ICompositorClock@@K@Z @ 0x1801BF794 (-TranslateWaitResult@CMonitorClock@@IEAA-AW4WaitResult@ICompositorClock@@K@Z.c)
 *     ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801C0B90 (-GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801C0BA0 (-SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801C0CE0 (-GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801C10E0 (-SetSyncRefreshCountWaitTarget@CDDisplayRenderTarget@@UEAAJIPEAPEAX@Z.c)
 *     ?CalcTimeoutTimeMs@CClockBase@@IEBAIXZ @ 0x1801C1168 (-CalcTimeoutTimeMs@CClockBase@@IEBAIXZ.c)
 *     ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x1801C1214 (-GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z.c)
 *     McTemplateU0xn_EventWriteTransfer @ 0x180258FFC (McTemplateU0xn_EventWriteTransfer.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281DC0 (-GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMonitorClock::WaitForNextTick(__int64 a1, void *a2)
{
  CLegacyRenderTarget *v4; // rcx
  __int64 (*v5)(void); // rax
  const struct tagCOMPOSITION_TARGET_ID *TargetId; // rax
  CDDisplayRenderTarget *v7; // rcx
  bool (__fastcall *v8)(CDDisplayRenderTarget *, struct MonitorTime *, struct MonitorTime *, char); // rax
  bool LastMonitorTime; // al
  int v10; // edx
  int v11; // ecx
  int v12; // r9d
  unsigned __int64 DefaultVBlankDuration; // rax
  LARGE_INTEGER v14; // rcx
  DWORD v15; // edi
  DWORD v16; // eax
  unsigned int v17; // ebx
  struct MonitorTime *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v22; // r10
  int v23; // r11d
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  char v26; // bl
  CLegacyRenderTarget *v27; // rcx
  int (*v28)(CDDisplayRenderTarget *__hidden, unsigned int, void **); // rax
  int refreshed; // eax
  DWORD v30; // eax
  DWORD v31; // eax
  LARGE_INTEGER v32; // r8
  unsigned __int64 *v33; // r10
  HANDLE Handles; // [rsp+30h] [rbp-38h] BYREF
  void *v35; // [rsp+38h] [rbp-30h]
  int v36; // [rsp+40h] [rbp-28h]
  void *v37; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp+18h] BYREF

  v4 = (CLegacyRenderTarget *)(*(_QWORD *)(a1 + 80) + 8LL);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 32LL);
  if ( (char *)v5 == (char *)CLegacyRenderTarget::GetTargetId )
  {
    TargetId = (const struct tagCOMPOSITION_TARGET_ID *)CLegacyRenderTarget::GetTargetId(v4);
  }
  else if ( (char *)v5 == (char *)CLegacyRenderTarget::GetTargetId )
  {
    TargetId = CLegacyRenderTarget::GetTargetId(v4);
  }
  else if ( (char *)v5 == (char *)CDDisplayRenderTarget::GetTargetId )
  {
    TargetId = CDDisplayRenderTarget::GetTargetId(v4);
  }
  else
  {
    TargetId = (const struct tagCOMPOSITION_TARGET_ID *)v5();
  }
  *(_OWORD *)(a1 + 40) = *(_OWORD *)TargetId;
  *(_QWORD *)(a1 + 56) = *((_QWORD *)TargetId + 2);
  *(_DWORD *)(a1 + 64) = *((_DWORD *)TargetId + 6);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v7 = *(CDDisplayRenderTarget **)(a1 + 80);
  Handles = 0LL;
  v35 = 0LL;
  v36 = 0;
  v8 = *(bool (__fastcall **)(CDDisplayRenderTarget *, struct MonitorTime *, struct MonitorTime *, char))(*(_QWORD *)v7 + 216LL);
  if ( v8 == CLegacyRenderTarget::GetLastMonitorTime )
  {
    LastMonitorTime = CTargetStats::GetLastMonitorTime(
                        (CDDisplayRenderTarget *)((char *)v7 + 33352),
                        (struct MonitorTime *)(a1 + 88),
                        (struct MonitorTime *)&Handles,
                        0);
  }
  else
  {
    v18 = (struct MonitorTime *)(a1 + 88);
    if ( v8 == CDDisplayRenderTarget::GetLastMonitorTime )
      LastMonitorTime = CTargetStats::GetLastMonitorTime(
                          (CDDisplayRenderTarget *)((char *)v7 + 33368),
                          v18,
                          (struct MonitorTime *)&Handles,
                          0);
    else
      LastMonitorTime = v8(v7, v18, (struct MonitorTime *)&Handles, 0);
  }
  if ( LastMonitorTime )
  {
    DefaultVBlankDuration = *(_QWORD *)(a1 + 96);
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 96) = 0LL;
    DefaultVBlankDuration = CScheduler::GetDefaultVBlankDuration(*(const struct IMonitorTarget **)(a1 + 80));
  }
  *(_QWORD *)(a1 + 24) = DefaultVBlankDuration;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0xn_EventWriteTransfer(v11, v10, DefaultVBlankDuration, v12, a1 + 40);
  v14 = *(LARGE_INTEGER *)(a1 + 88);
  if ( !v14.QuadPart )
    goto LABEL_10;
  v32 = *(LARGE_INTEGER *)(a1 + 16);
  v37 = 0LL;
  if ( *(_BYTE *)(a1 + 72) )
    v32.QuadPart -= *(_QWORD *)(a1 + 24);
  if ( PerformanceCount.QuadPart >= (unsigned __int64)v32.QuadPart )
  {
    v25 = 0LL;
    v26 = 0;
  }
  else
  {
    v33 = (unsigned __int64 *)(a1 + 96);
    if ( v14.QuadPart >= (unsigned __int64)PerformanceCount.QuadPart
      || (unsigned int)((PerformanceCount.QuadPart - v14.QuadPart) / *v33) <= 3 )
    {
      v22 = *v33;
      v23 = *(_DWORD *)(a1 + 104);
      v24 = v32.QuadPart + (v22 >> 1);
      if ( v24 < v14.QuadPart )
        v25 = v23 - (unsigned int)((v14.QuadPart - v24) / v22) - 1;
      else
        v25 = v23 + (unsigned int)((v24 - v14.QuadPart) / v22);
    }
    else
    {
      v25 = 0LL;
    }
    v26 = 1;
  }
  v27 = *(CLegacyRenderTarget **)(a1 + 80);
  v28 = *(int (**)(CDDisplayRenderTarget *__hidden, unsigned int, void **))(*(_QWORD *)v27 + 208LL);
  if ( (char *)v28 == (char *)CLegacyRenderTarget::SetSyncRefreshCountWaitTarget )
  {
    refreshed = CLegacyRenderTarget::SetSyncRefreshCountWaitTarget(v27, v25, &v37);
  }
  else if ( v28 == CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget )
  {
    refreshed = CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget(v27, v25, &v37);
  }
  else
  {
    refreshed = ((__int64 (__fastcall *)(CLegacyRenderTarget *, __int64, void **))v28)(v27, v25, &v37);
  }
  if ( refreshed < 0 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 80) + 200LL))(*(_QWORD *)(a1 + 80), a2);
    v17 = CMonitorClock::TranslateWaitResult(v20, v19);
    if ( v17 )
      goto LABEL_20;
LABEL_10:
    v15 = CClockBase::CalcTimeoutTimeMs((CClockBase *)a1);
    v16 = WaitForSingleObject(a2, v15);
    if ( v16 )
    {
      if ( v16 != 258 )
      {
        v17 = 0;
        Sleep(v15);
        goto LABEL_20;
      }
      goto LABEL_25;
    }
    goto LABEL_35;
  }
  if ( refreshed == 142213121 )
    goto LABEL_10;
  if ( v26 )
  {
    v35 = v37;
    Handles = a2;
    v30 = CClockBase::CalcTimeoutTimeMs((CClockBase *)a1);
    v31 = WaitForMultipleObjects(2u, &Handles, 0, v30);
    if ( !v31 )
    {
LABEL_35:
      v17 = 3;
      goto LABEL_20;
    }
    if ( v31 != 1 )
    {
      if ( v31 == 258 )
      {
LABEL_25:
        v17 = 4;
        goto LABEL_20;
      }
      goto LABEL_10;
    }
    v17 = 1;
  }
  else
  {
    v17 = 2;
    WaitForSingleObject(a2, 0);
  }
LABEL_20:
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0t_EventWriteTransfer(
      (__int64)Microsoft_Windows_Dwm_Compositor_Context,
      (__int64)&WaitForVerticalBlank_Stop,
      v17);
  return v17;
}
