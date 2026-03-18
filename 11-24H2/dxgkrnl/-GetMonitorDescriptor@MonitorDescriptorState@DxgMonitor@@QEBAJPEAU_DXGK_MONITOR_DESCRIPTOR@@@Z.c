/*
 * XREFs of ?GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x14027967C
 * Callers:
 *     ?GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140271660 (-GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetMonitorDescriptor(
        DxgMonitor::MonitorDescriptorState *this,
        struct _DXGK_MONITOR_DESCRIPTOR *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1683;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 16);
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
    {
      WdLogSingleEntry1(2LL, *(int *)a2);
      result = 3221225659LL;
      WdLogGlobalForLineNumber = 1698;
      return result;
    }
    v4 = (__int64 *)*((_QWORD *)this + 17);
  }
  if ( v4 )
  {
    v5 = *v4;
    LODWORD(Size) = 0;
    (*(void (__fastcall **)(__int64 *, void **, size_t *))(v5 + 232))(v4, &Src, &Size);
    v6 = (void *)*((_QWORD *)a2 + 1);
    if ( v6 )
    {
      v7 = *((unsigned int *)a2 + 1);
      if ( (unsigned int)Size > (unsigned int)v7 )
      {
        WdLogSingleEntry2(2LL, v7, (unsigned int)Size);
        WdLogGlobalForLineNumber = 1713;
        wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
        return 3221225507LL;
      }
      memmove(v6, Src, (unsigned int)Size);
    }
    *((_DWORD *)a2 + 1) = Size;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
  }
  else
  {
    *((_DWORD *)a2 + 1) = 0;
  }
  return 0LL;
}
