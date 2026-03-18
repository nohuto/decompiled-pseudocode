/*
 * XREFs of ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x180174BA0
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x18017433C (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x180174E9C (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18019F9E0 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ReadyWakeupFence(CComputeScribbleScheduler *this, __int64 a2)
{
  __int64 *v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 216) )
    return 0LL;
  v4 = (__int64 *)((char *)this + 120);
  if ( *((_QWORD *)this + 15) )
  {
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=((char *)this + 112, (char *)this + 120);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v4);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 14) + 72LL))(
         *((_QWORD *)this + 14),
         a2,
         *((_QWORD *)this + 11));
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0x_EventWriteTransfer(v6, &EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTREADY, a2);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A7,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)(unsigned int)v5);
  return v7;
}
