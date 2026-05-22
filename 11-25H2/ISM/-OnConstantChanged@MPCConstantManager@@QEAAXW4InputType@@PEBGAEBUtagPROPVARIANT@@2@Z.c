/*
 * XREFs of ?OnConstantChanged@MPCConstantManager@@QEAAXW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x1800B67E4
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B59C8 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@QEAAJP6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@Z_N1233@Z @ 0x1800B4E7C (--$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@Q.c)
 */

__int64 __fastcall MPCConstantManager::OnConstantChanged(
        __int64 a1,
        Microsoft::BamoImpl::BamoImplObject *a2,
        __int64 a3,
        __int128 *a4,
        __int128 *a5)
{
  __int64 v5; // xmm1_8
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = *((_QWORD *)a5 + 2);
  v10 = *a5;
  v6 = *a4;
  v11 = v5;
  v7 = *((_QWORD *)a4 + 2);
  v12 = v6;
  v13 = v7;
  result = BamoMPCConstantManagerClientPrincipal::EnumerateStubs<enum InputType,unsigned short const *,tagPROPVARIANT,tagPROPVARIANT>(
             a1,
             a2,
             a3,
             (unsigned int)a2,
             a3,
             (__int64)&v12,
             (__int64)&v10);
  if ( (int)result < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x15D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      (const char *)(unsigned int)result,
      v9);
  return result;
}
