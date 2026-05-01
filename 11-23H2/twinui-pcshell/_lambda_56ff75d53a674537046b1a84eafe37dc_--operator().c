/*
 * XREFs of _lambda_56ff75d53a674537046b1a84eafe37dc_::operator() @ 0x180597200
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805972D0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ??1?$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ @ 0x18005B67C (--1-$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall lambda_56ff75d53a674537046b1a84eafe37dc_::operator()(_BYTE *a1)
{
  bool v1; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( a1[8] && (*(int (__fastcall **)(_QWORD, __int64 *))(***(_QWORD ***)a1 + 48LL))(**(_QWORD **)a1, &v3) >= 0 )
    v1 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 88LL))(v3, 4LL) != 0;
  ATL::CComPtr<IWICImagingFactory>::~CComPtr<IWICImagingFactory>(&v3);
  return v1;
}
