/*
 * XREFs of ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180010CC0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18000F628 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180010C88 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180010D34 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180011638 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800116A4 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800118A8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A99B0 (-NotifyFailure@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800E5EA0 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rbx
  PSRWLOCK *p_SRWLock; // rax
  char v5; // di
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK v8; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(SRWLock) = 0;
  v3 = *(RTL_SRWLOCK **)(a1 + 312);
  if ( v3 )
  {
    v3 += 32;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &v8;
    v5 = 1;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v5 = 2;
  }
  *p_SRWLock = 0LL;
  *a2 = v3;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v5 & 1) != 0 && v8 )
    ReleaseSRWLockExclusive(v8);
  return a2;
}
