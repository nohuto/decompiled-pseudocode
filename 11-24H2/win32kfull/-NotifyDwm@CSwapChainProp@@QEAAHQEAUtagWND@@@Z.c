/*
 * XREFs of ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x1402BEF70
 * Callers:
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     UserSetWindowedSwapChain @ 0x140169708 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x140169910 (UserRemoveWindowedSwapChain.c)
 * Callees:
 *     DwmAsyncDxBindSwapChain @ 0x1401FFB18 (DwmAsyncDxBindSwapChain.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CSwapChainProp::NotifyDwm(CSwapChainProp *this, struct tagWND *const a2)
{
  struct tagWND *v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  void *v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct tagWND *)*((_QWORD *)this + 2);
  v3 = 0;
  if ( v2 && v2 != a2 )
  {
    LODWORD(v12) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 62);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a2) )
  {
    v7 = (void *)*((_QWORD *)this + 3);
    v8 = 0LL;
    v12 = 0LL;
    if ( v7 )
    {
      if ( (int)DxgkOpenDwmHandleForCompositionObjectReference(v7, (void **)&v12) < 0 )
        return v3;
      v8 = v12;
    }
    if ( a2 )
      v9 = *(_QWORD *)a2;
    else
      v9 = 0LL;
    v10 = (void *)ReferenceDwmApiPort(v7, v6);
    LOBYTE(v3) = (int)DwmAsyncDxBindSwapChain(v10, v9, v8) >= 0;
  }
  return v3;
}
