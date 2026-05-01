/*
 * XREFs of ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180290748
 * Callers:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18020F1E4 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180235794 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ?zInternalStart@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18028F5CC (-zInternalStart@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802906E0 (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?zInternalStart@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802B21AC (-zInternalStart@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B6EE8 (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x1805E40D0 (--R_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E561C (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 *     ?NotifyFailure@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1805E76B0 (-NotifyFailure@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto.c)
 *     ?Stop@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805E97D4 (-Stop@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Para.c)
 *     ?NotifyFailure@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180693130 (-NotifyFailure@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806959A4 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180695AAC (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rbx
  PSRWLOCK *p_SRWLock; // rax
  char v6; // di
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v9; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  v3 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v3 )
  {
    v4 = v3 + 33;
    AcquireSRWLockExclusive(v4);
    p_SRWLock = &v9;
    v6 = 1;
  }
  else
  {
    v4 = 0LL;
    p_SRWLock = &SRWLock;
    v6 = 2;
  }
  *p_SRWLock = 0LL;
  *a2 = v4;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v6 & 1) != 0 && v9 )
    ReleaseSRWLockExclusive(v9);
  return a2;
}
