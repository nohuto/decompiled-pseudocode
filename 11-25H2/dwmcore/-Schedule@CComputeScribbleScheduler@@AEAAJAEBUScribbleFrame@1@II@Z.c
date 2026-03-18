/*
 * XREFs of ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x180174E9C
 * Callers:
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x180174D44 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z @ 0x180174BA0 (-ReadyWakeupFence@CComputeScribbleScheduler@@AEAAJ_K@Z.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x180174C58 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x180175150 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x1801FE7A8 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211C0C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

__int64 __fastcall CComputeScribbleScheduler::Schedule(
        RTL_SRWLOCK *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // r15
  __int64 v7; // rbp
  char *Ptr; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  int ready; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = this + 13;
  v5 = a4;
  v7 = a3;
  AcquireSRWLockExclusive(this + 13);
  Ptr = (char *)this[16].Ptr;
  v18 = v4;
  while ( Ptr != this[17].Ptr )
  {
    if ( !*(_BYTE *)(*(_QWORD *)Ptr + 256LL) )
      goto LABEL_5;
    Ptr += 8;
  }
  if ( (int)v7 - LODWORD(this[22].Ptr) > 5 )
  {
    CComputeScribbleScheduler::StopInternal((CComputeScribbleScheduler *)this);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xqq_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_WORKERHANG,
        *(_QWORD *)a2,
        v7,
        (char)this[22].Ptr);
  }
LABEL_5:
  if ( this[14].Ptr )
    goto LABEL_6;
  ready = CComputeScribbleScheduler::SetupWakeupFence((CComputeScribbleScheduler *)this, a2);
  v15 = ready;
  if ( ready < 0 )
  {
    v16 = 331LL;
    goto LABEL_16;
  }
  ready = CComputeScribbleScheduler::ReadyWakeupFence((CComputeScribbleScheduler *)this, v7);
  v15 = ready;
  if ( ready < 0 )
  {
    v16 = 332LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)ready);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
    return v15;
  }
LABEL_6:
  v10 = (char *)this[19].Ptr;
  v11 = 32 * v5;
  v12 = *((_OWORD *)a2 + 1);
  *(_OWORD *)&v10[v11] = *(_OWORD *)a2;
  *(_OWORD *)&v10[v11 + 16] = v12;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
