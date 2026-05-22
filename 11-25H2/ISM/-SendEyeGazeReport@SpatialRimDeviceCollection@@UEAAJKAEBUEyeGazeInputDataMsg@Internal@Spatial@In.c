/*
 * XREFs of ?SendEyeGazeReport@SpatialRimDeviceCollection@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800D5150
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x180032310 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendEyeGazeReport(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct Windows::UI::Input::Spatial::Internal::EyeGazeInputDataMsg *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int128 v11; // xmm1
  int v12[12]; // [rsp+30h] [rbp-BD8h] BYREF
  char v13; // [rsp+60h] [rbp-BA8h]
  __int128 v14; // [rsp+BC0h] [rbp-48h]
  __int128 v15; // [rsp+BD0h] [rbp-38h]
  __int64 v16; // [rsp+BE0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  memset_0(v12, 0, 0xBC0uLL);
  v12[6] = 3008;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 12, 0x200000, a2, (__int64)v12);
  if ( v6 < 0 )
  {
    v7 = 810LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *(_OWORD *)a3;
  v10 = *((_QWORD *)this + 2);
  v11 = *((_OWORD *)a3 + 1);
  v13 = 1;
  v14 = v9;
  v16 = *((_QWORD *)a3 + 4);
  v15 = v11;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 24LL))(v10, v12);
  if ( v6 < 0 )
  {
    v7 = 816LL;
    goto LABEL_3;
  }
  return 0LL;
}
