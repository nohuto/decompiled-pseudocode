/*
 * XREFs of ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E28F4
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1800E18B8 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 *     ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x1800E1D0C (-GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV-$function@$$A6AJPEBG@Z@st.c)
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800E289C (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800E28C8 (--1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A8C88 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ??1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCB6C (--1ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCC74 (--1RelaunchInputAppAfterTermination@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCCCC (--1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046CAFC (--1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BA64 (--1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18047BB40 (--1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800E2810 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_1800E2810.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801D4750 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        volatile signed __int32 **a1)
{
  volatile signed __int32 **v1; // rdi
  char v3; // si
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rdx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 35;
  v3 = 1;
  if ( !a1[35] )
    goto LABEL_8;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  if ( !*v1 || **v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_8:
    v4 = a1[34];
    if ( *v4 == 1 )
    {
      LODWORD(SRWLock) = *((_DWORD *)v4 + 22);
      v5 = 2147942974LL;
      if ( (int)SRWLock < 0 )
        v5 = (unsigned int)SRWLock;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v5,
        &SRWLock);
      (*((void (__fastcall **)(volatile signed __int32 **))*a1 + 1))(a1);
    }
  }
}
