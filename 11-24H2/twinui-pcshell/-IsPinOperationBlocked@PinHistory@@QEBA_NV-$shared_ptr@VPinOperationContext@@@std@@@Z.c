/*
 * XREFs of ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1801E7618
 * Callers:
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028A488 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800BAC80 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$PinHistoryOperationBlockedChecked@W4PinHistoryOperationBlockedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAX$$QEAW4PinHistoryOperationBlockedCheckResult@0@@Z @ 0x180290594 (--$PinHistoryOperationBlockedChecked@W4PinHistoryOperationBlockedCheckResult@PinManagerTelemetry.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x1805E4768 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1805E485C (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 */

char __fastcall PinHistory::IsPinOperationBlocked(PSRWLOCK SRWLock, _QWORD **a2)
{
  std::_Ref_count_base *v4; // rcx
  _QWORD *Ptr; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  std::_Ref_count_base *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF
  RTL_SRWLOCK *v17; // [rsp+48h] [rbp-18h] BYREF

  AcquireSRWLockShared(SRWLock);
  v17 = SRWLock;
  if ( *std::chrono::steady_clock::now(&v14) >= (__int64)SRWLock[1].Ptr )
  {
    Ptr = SRWLock[2].Ptr;
    v7 = SRWLock[3].Ptr;
    while ( Ptr != v7 )
    {
      if ( *std::chrono::steady_clock::now(&v14) < Ptr[2] )
      {
        std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v15, *a2);
        v11 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v16, Ptr);
        if ( (unsigned __int8)AreEquivalentPinSources(v11, v15) )
        {
          LODWORD(v14) = 3;
LABEL_16:
          PinManagerTelemetry::PinHistoryOperationBlockedChecked<enum PinManagerTelemetry::PinHistoryOperationBlockedCheckResult>(&v14);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
          goto LABEL_3;
        }
      }
      Ptr += 3;
    }
    v8 = SRWLock[5].Ptr;
    v9 = SRWLock[6].Ptr;
    while ( v8 != v9 )
    {
      if ( *std::chrono::steady_clock::now(&v14) < v8[2] )
      {
        std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v16, a2);
        v12 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v15, v8);
        if ( (unsigned __int8)AreEquivalentPinOperations(v12, v13) )
        {
          LODWORD(v14) = 2;
          goto LABEL_16;
        }
      }
      v8 += 3;
    }
    LODWORD(v14) = 0;
    PinManagerTelemetry::PinHistoryOperationBlockedChecked<enum PinManagerTelemetry::PinHistoryOperationBlockedCheckResult>(&v14);
    ReleaseSRWLockShared(SRWLock);
    v10 = (std::_Ref_count_base *)a2[1];
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    return 0;
  }
  else
  {
    LODWORD(v14) = 1;
    PinManagerTelemetry::PinHistoryOperationBlockedChecked<enum PinManagerTelemetry::PinHistoryOperationBlockedCheckResult>(&v14);
    ReleaseSRWLockShared(SRWLock);
LABEL_3:
    v4 = (std::_Ref_count_base *)a2[1];
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    return 1;
  }
}
