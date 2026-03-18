/*
 * XREFs of ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1402794A8
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140185E50 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14005983C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x14005A938 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x140091B50 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1401883E0 (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 */

_QWORD *__fastcall DxgMonitor::MonitorDescriptorState::CopyInstance(
        __int64 a1,
        _QWORD *a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorDescriptorState *v8; // rax
  DxgMonitor::MonitorDescriptorState *v9; // rdi
  __int64 v10; // rcx
  struct DxgMonitor::IMonitorDescriptor **v11; // r14
  __int64 (__fastcall ****v12)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rdx
  __int64 v14; // rcx
  __int64 (__fastcall ****v15)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v16)(_QWORD, __int64); // rdx
  DxgMonitor::MultiMonitorDescriptor *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct _ERESOURCE *v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 (__fastcall ***v22[2])(_QWORD, __int64); // [rsp+28h] [rbp-10h] BYREF

  v8 = (DxgMonitor::MonitorDescriptorState *)operator new(0xB8uLL, 0x4D677844u, 256LL);
  if ( v8 )
    v9 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(v8, a3, a4);
  else
    v9 = 0LL;
  v21 = (struct _ERESOURCE *)v9;
  if ( !v9 )
    goto LABEL_5;
  v10 = *(_QWORD *)(a1 + 128);
  v11 = (struct DxgMonitor::IMonitorDescriptor **)((char *)v9 + 128);
  if ( v10 )
  {
    v12 = (__int64 (__fastcall ****)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 16LL))(
                                                        v10,
                                                        v22);
    v13 = *v12;
    *v12 = 0LL;
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v9 + 16,
      v13);
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      v22,
      0LL);
    if ( !*v11 )
      goto LABEL_5;
  }
  v14 = *(_QWORD *)(a1 + 136);
  if ( v14 )
  {
    v15 = (__int64 (__fastcall ****)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 16LL))(
                                                        v14,
                                                        v22);
    v16 = *v15;
    *v15 = 0LL;
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v9 + 17,
      v16);
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      v22,
      0LL);
    if ( !*((_QWORD *)v9 + 17) )
      goto LABEL_5;
    *((_BYTE *)v9 + 152) = *(_BYTE *)(a1 + 152);
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_15;
  v17 = (DxgMonitor::MultiMonitorDescriptor *)operator new(0x28uLL, 0x4D677844u, 256LL);
  if ( v17 )
    v17 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
            v17,
            *v11,
            *((struct DxgMonitor::IMonitorDescriptor **)v9 + 17));
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))v9 + 18,
    (__int64 (__fastcall ***)(_QWORD, __int64))v17);
  if ( *((_QWORD *)v9 + 18) )
  {
LABEL_15:
    v18 = *(_QWORD *)(a1 + 160);
    if ( v18 == *(_QWORD *)(a1 + 128) )
    {
      v19 = *((_QWORD *)v9 + 16);
    }
    else if ( v18 == *(_QWORD *)(a1 + 136) )
    {
      v19 = *((_QWORD *)v9 + 17);
    }
    else
    {
      if ( v18 != *(_QWORD *)(a1 + 144) )
      {
LABEL_22:
        wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
          (__int64)a2,
          (__int64 *)&v21);
        goto LABEL_23;
      }
      v19 = *((_QWORD *)v9 + 18);
    }
    *((_QWORD *)v9 + 20) = v19;
    goto LABEL_22;
  }
LABEL_5:
  *a2 = 0LL;
LABEL_23:
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    &v21,
    0LL);
  return a2;
}
