/*
 * XREFs of ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18020F1E4
 * Callers:
 *     ??1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ @ 0x18068B010 (--1PinningActivity@TaskbarPinningTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18020F2B4 (-reset@-$shared_object@V-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180290748 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     ?SetStopResult@?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1802962AC (-SetStopResult@-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1 + 35;
  v3 = 1;
  if ( !a1[35] )
    goto LABEL_8;
  SRWLock = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_8:
    v4 = (_DWORD *)a1[34];
    if ( *v4 == 1 )
    {
      LODWORD(SRWLock) = v4[22];
      v5 = 2147942974LL;
      if ( (int)SRWLock < 0 )
        v5 = (unsigned int)SRWLock;
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v5,
        &SRWLock);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
