/*
 * XREFs of ?SendHeadReport@SpatialRimDeviceCollection@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800321F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x180032310 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendHeadReport(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        const struct Windows::UI::Input::Spatial::Internal::HeadInputDataMsg *a3)
{
  int v6; // ebx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-BE8h]
  int v16[12]; // [rsp+30h] [rbp-BD8h] BYREF
  char v17; // [rsp+60h] [rbp-BA8h]
  __int128 v18; // [rsp+B70h] [rbp-98h]
  __int128 v19; // [rsp+B80h] [rbp-88h]
  __int128 v20; // [rsp+B90h] [rbp-78h]
  __int128 v21; // [rsp+BA0h] [rbp-68h]
  __int128 v22; // [rsp+BB0h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+C08h] [rbp+0h]

  memset_0(v16, 0, 0xBC0uLL);
  v16[6] = 3008;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, 8LL, 0x20000LL, a2, v16);
  if ( v6 < 0 )
  {
    v13 = 793LL;
    goto LABEL_4;
  }
  v7 = *(_OWORD *)a3;
  v8 = *((_QWORD *)this + 2);
  v9 = *((_OWORD *)a3 + 1);
  v17 = 1;
  v18 = v7;
  v10 = *((_OWORD *)a3 + 2);
  v19 = v9;
  v11 = *((_OWORD *)a3 + 3);
  v20 = v10;
  v12 = *((_OWORD *)a3 + 4);
  v21 = v11;
  v22 = v12;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, v16);
  if ( v6 < 0 )
  {
    v13 = 799LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6,
      v15);
    return (unsigned int)v6;
  }
  return 0LL;
}
