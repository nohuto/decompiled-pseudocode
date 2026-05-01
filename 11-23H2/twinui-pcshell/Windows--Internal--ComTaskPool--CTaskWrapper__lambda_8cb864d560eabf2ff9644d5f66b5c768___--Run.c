/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x1804EF8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180187820 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801878C0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run(
        __int64 a1)
{
  _BYTE v2[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v2, 0);
  v3 = 0LL;
  if ( (int)CoreQueryWindowService(
              *(_QWORD *)(a1 + 16),
              &GUID_592e523e_f578_42d3_9b29_307fc423ae43,
              &GUID_67b602d0_b85e_4f98_881f_7df997231b5b,
              &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v3);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v2);
}
