/*
 * XREFs of ?GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x1403241F4
 * Callers:
 *     ?MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x1403244C4 (-MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetEdidDescriptorRaw(
        DxgMonitor::MonitorDescriptorState *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  void *v10; // rdx
  unsigned int v11; // eax
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !a3 || !a4 || !a2 )
    return 3221225485LL;
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 232LL))(v8, &Src);
    v10 = Src;
    if ( Src )
    {
      v11 = *a3;
      if ( a2 < *a3 )
      {
        *a3 = a2;
        v4 = -2147483643;
        v11 = a2;
      }
      memmove(a4, v10, v11);
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
      return v4;
    }
    else
    {
      Src = 0LL;
      return 3221225495LL;
    }
  }
  else
  {
    *a3 = 0;
    return 3223126017LL;
  }
}
