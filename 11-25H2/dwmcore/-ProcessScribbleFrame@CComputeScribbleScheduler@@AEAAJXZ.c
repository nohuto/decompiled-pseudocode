/*
 * XREFs of ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x18017433C
 * Callers:
 *     ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x180174084 (-WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x180174654 (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 *     ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x180174BA0 (-ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x180174C58 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180174CB4 (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x180175150 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801751F8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180175264 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211C0C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleScheduler::ProcessScribbleFrame(
        CComputeScribbleScheduler *this,
        __int64 a2,
        __int64 a3)
{
  LARGE_INTEGER *v4; // rbx
  unsigned int v5; // edi
  RTL_SRWLOCK *QuadPart; // rbx
  __int64 v7; // r15
  __int64 i; // rcx
  int ready; // r14d
  __int64 v10; // rdx
  CComputeScribbleFramebuffer *v12; // r15
  int v13; // r14d
  CComputeScribbleFramebuffer *Ptr; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 *v17; // rbx
  struct CComputeScribbleStopwatch *v18; // r8
  struct ID3D12CommandQueue *v19; // rdx
  struct IDCompositionDirectInkSuperWetRenderer *v20; // rax
  int v21; // eax
  int v22; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-19h] BYREF
  CComputeScribbleFramebuffer *v24; // [rsp+40h] [rbp-11h] BYREF
  _OWORD v25[3]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v26; // [rsp+78h] [rbp+27h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP_RAW,
      a3,
      1u,
      &v27);
  v4 = (LARGE_INTEGER *)*((_QWORD *)this + 12);
  v5 = 0;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v4[6] = PerformanceCount;
  QuadPart = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  v7 = 0LL;
  PerformanceCount.QuadPart = (LONGLONG)this + 104;
  if ( *((_BYTE *)this + 216) )
    goto LABEL_4;
  v15 = *((_QWORD *)this + 14);
  if ( !v15 )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&PerformanceCount);
    return 0LL;
  }
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
  v7 = v16;
  if ( !v16 )
  {
LABEL_19:
    if ( QuadPart )
      ReleaseSRWLockExclusive(QuadPart);
    return 0LL;
  }
  if ( v16 == -1 )
  {
    CComputeScribbleScheduler::StopInternal(this);
    goto LABEL_35;
  }
LABEL_4:
  for ( i = *((_QWORD *)this + 16); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 17) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 14);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
      goto LABEL_19;
    }
    if ( *(_BYTE *)(*(_QWORD *)i + 256LL) )
      break;
  }
  *((_QWORD *)this + 22) = 1LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0x_EventWriteTransfer(i, &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP, 1LL);
  v24 = 0LL;
  v27.Ptr = 0LL;
  ready = CComputeScribbleScheduler::DecideBufferToDispatch(this, (struct CComputeScribbleFramebuffer **)&v27, &v24);
  if ( ready >= 0 )
  {
    ready = CComputeScribbleScheduler::ReadyWakeupFence(this, v7 + 1);
    if ( ready < 0 )
    {
      v10 = 677LL;
      goto LABEL_12;
    }
    v12 = v24;
    v13 = 0;
    if ( v24 )
    {
      v13 = CComputeScribbleScheduler::SetupWakeupFence(
              this,
              (const struct CComputeScribbleScheduler::ScribbleFrame *)(*((_QWORD *)this + 19)
                                                                      + 32LL * *((unsigned int *)v24 + 65)));
      if ( v13 < 0 )
        CComputeScribbleFramebuffer::ClearScribbles(v12);
    }
    Ptr = (CComputeScribbleFramebuffer *)v27.Ptr;
    if ( !v27.Ptr )
      goto LABEL_18;
    v17 = (unsigned __int64 *)(*((_QWORD *)this + 19) + 32LL * *(unsigned int *)(v27.Ptr + 260));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &PerformanceCount,
      0LL);
    v18 = (struct CComputeScribbleStopwatch *)*((_QWORD *)this + 12);
    v19 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 2);
    v26 = 0LL;
    v20 = (struct IDCompositionDirectInkSuperWetRenderer *)*((_QWORD *)this + 26);
    memset(v25, 0, sizeof(v25));
    v21 = CComputeScribbleFramebuffer::DispatchScribbles(
            Ptr,
            v19,
            v18,
            *v17,
            v20,
            (struct ComputeScribbleLatencyData *)v25);
    v22 = v21;
    if ( v21 >= 0 )
    {
      QuadPart = (RTL_SRWLOCK *)PerformanceCount.QuadPart;
LABEL_18:
      if ( v13 >= 0 )
        goto LABEL_19;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C9,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
        (const char *)(unsigned int)v13);
      v5 = v13;
      goto LABEL_35;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v21);
    v5 = v22;
LABEL_35:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&PerformanceCount);
    return v5;
  }
  v10 = 674LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    (const char *)(unsigned int)ready);
  if ( this != (CComputeScribbleScheduler *)-104LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
  return (unsigned int)ready;
}
