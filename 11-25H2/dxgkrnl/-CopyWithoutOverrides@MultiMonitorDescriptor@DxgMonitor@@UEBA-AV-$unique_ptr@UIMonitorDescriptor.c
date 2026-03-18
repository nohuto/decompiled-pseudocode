/*
 * XREFs of ?CopyWithoutOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1400909E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@0@Z @ 0x1400907C0 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U-.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall DxgMonitor::MultiMonitorDescriptor::CopyWithoutOverrides(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 (__fastcall ***v12)(_QWORD, __int64); // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  LODWORD(v12) = 0;
  v7 = (_QWORD *)operator new(0x28uLL, 0x4D677844u, 256LL, a4);
  if ( v7 )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                     *(_QWORD *)(a1 + 16),
                     &v13);
    v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(
                      *(_QWORD *)(a1 + 8),
                      &v12);
    v10 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(v7, v9, v8);
    v4 = 3;
  }
  else
  {
    v10 = 0LL;
  }
  *a2 = v10;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      &v12,
      0LL);
  }
  if ( (v4 & 1) != 0 )
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      &v13,
      0LL);
  return a2;
}
