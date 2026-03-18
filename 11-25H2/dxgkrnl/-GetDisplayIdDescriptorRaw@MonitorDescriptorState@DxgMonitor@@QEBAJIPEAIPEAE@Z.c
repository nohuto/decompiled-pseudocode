/*
 * XREFs of ?GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x1403242AC
 * Callers:
 *     ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x140324404 (-MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetDisplayIdDescriptorRaw(
        DxgMonitor::MonitorDescriptorState *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rcx
  void *Src; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 232LL))(v4, &Src);
    if ( Src )
    {
      if ( a4 && a2 && a2 >= *a3 )
      {
        memmove(a4, Src, *a3);
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
        return 0LL;
      }
      else
      {
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
        return 3221225507LL;
      }
    }
    else
    {
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
      return 3221225495LL;
    }
  }
  else
  {
    *a3 = 0;
    return 3223126017LL;
  }
}
