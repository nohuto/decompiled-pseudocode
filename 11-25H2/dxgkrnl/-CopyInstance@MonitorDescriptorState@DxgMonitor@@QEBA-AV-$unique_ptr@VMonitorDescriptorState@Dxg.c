/*
 * XREFs of ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x140272308
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140183B00 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x140059E3C (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x14005AF38 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x140090804 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x140186188 (--0MonitorDescriptorState@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@.c)
 */

_QWORD *__fastcall DxgMonitor::MonitorDescriptorState::CopyInstance(
        __int64 a1,
        _QWORD *a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorDescriptorState *v8; // rax
  __int64 v9; // r9
  DxgMonitor::MonitorDescriptorState *v10; // rdi
  __int64 v11; // rcx
  struct DxgMonitor::IMonitorDescriptor **v12; // r14
  __int64 (__fastcall ****v13)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rdx
  __int64 v15; // rcx
  __int64 (__fastcall ****v16)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v17)(_QWORD, __int64); // rdx
  DxgMonitor::MultiMonitorDescriptor *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _ERESOURCE *v22; // [rsp+20h] [rbp-18h] BYREF
  __int64 (__fastcall ***v23[2])(_QWORD, __int64); // [rsp+28h] [rbp-10h] BYREF

  v8 = (DxgMonitor::MonitorDescriptorState *)operator new(0xB8uLL, 0x4D677844u, 256LL, (__int64)a4);
  if ( v8 )
    v10 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(v8, a3, a4);
  else
    v10 = 0LL;
  v22 = (struct _ERESOURCE *)v10;
  if ( !v10 )
    goto LABEL_5;
  v11 = *(_QWORD *)(a1 + 128);
  v12 = (struct DxgMonitor::IMonitorDescriptor **)((char *)v10 + 128);
  if ( v11 )
  {
    v13 = (__int64 (__fastcall ****)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 16LL))(
                                                        v11,
                                                        v23);
    v14 = *v13;
    *v13 = 0LL;
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v10 + 16,
      v14);
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      v23,
      0LL);
    if ( !*v12 )
      goto LABEL_5;
  }
  v15 = *(_QWORD *)(a1 + 136);
  if ( v15 )
  {
    v16 = (__int64 (__fastcall ****)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 16LL))(
                                                        v15,
                                                        v23);
    v17 = *v16;
    *v16 = 0LL;
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v10 + 17,
      v17);
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      v23,
      0LL);
    if ( !*((_QWORD *)v10 + 17) )
      goto LABEL_5;
    *((_BYTE *)v10 + 152) = *(_BYTE *)(a1 + 152);
  }
  if ( !*(_QWORD *)(a1 + 144) )
    goto LABEL_15;
  v18 = (DxgMonitor::MultiMonitorDescriptor *)operator new(0x28uLL, 0x4D677844u, 256LL, v9);
  if ( v18 )
    v18 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
            v18,
            *v12,
            *((struct DxgMonitor::IMonitorDescriptor **)v10 + 17));
  wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))v10 + 18,
    (__int64 (__fastcall ***)(_QWORD, __int64))v18);
  if ( *((_QWORD *)v10 + 18) )
  {
LABEL_15:
    v19 = *(_QWORD *)(a1 + 160);
    if ( v19 == *(_QWORD *)(a1 + 128) )
    {
      v20 = *((_QWORD *)v10 + 16);
    }
    else if ( v19 == *(_QWORD *)(a1 + 136) )
    {
      v20 = *((_QWORD *)v10 + 17);
    }
    else
    {
      if ( v19 != *(_QWORD *)(a1 + 144) )
      {
LABEL_22:
        wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
          (__int64)a2,
          (__int64 *)&v22);
        goto LABEL_23;
      }
      v20 = *((_QWORD *)v10 + 18);
    }
    *((_QWORD *)v10 + 20) = v20;
    goto LABEL_22;
  }
LABEL_5:
  *a2 = 0LL;
LABEL_23:
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    &v22,
    0LL);
  return a2;
}
