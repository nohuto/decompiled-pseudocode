/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x180031CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x180031F00 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180031F40 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAULegacyInputInfo@@@Z @ 0x180032074 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialCo.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800D3A48 (-InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z @ 0x1800D3AB4 (-InputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendInputReport(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // ebx
  unsigned int v10; // r14d
  __int64 v12; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // cl
  __int64 v17; // rcx
  RawInputProvidersContinuousTracing *v18; // rcx
  RawInputProvidersContinuousTracing *v19; // rcx
  _BYTE v20[24]; // [rsp+40h] [rbp-C08h] BYREF
  int v21; // [rsp+58h] [rbp-BF0h]

  v7 = 0;
  v10 = a2;
  if ( (*(_BYTE *)(a7 + 4) & 8) != 0 )
  {
    memset_0(v20, 0, 0xBC0uLL);
    LOBYTE(v14) = a5;
    v21 = 3008;
    v7 = MPCInputInfoHelper::PopulateAugmentedInput(v10, a3, a4, v14, a6, a7, v20);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v20);
    if ( RawInputProvidersContinuousTracing::IsEnabled(v16, v15) )
    {
      wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
        v17,
        _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
      RawInputProvidersContinuousTracing::InputReportProcessed_(v18, a3, v7, (struct InputInfo *)v20);
    }
  }
  else if ( RawInputProvidersContinuousTracing::IsEnabled(a1, a2) )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v12,
      _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    RawInputProvidersContinuousTracing::InputReportIgnored_(v19, a3, L"No select");
  }
  return (unsigned int)v7;
}
