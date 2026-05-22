/*
 * XREFs of ?OnConnectedUnderLockThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800CA090
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCallEpilogUnderLock@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CA03C (-OnCallEpilogUnderLock@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     ?OnCallPrologUnderLock@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CA060 (-OnCallPrologUnderLock@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessStubImpl::OnConnectedUnderLockThunk(
        BamoImpl::BamoInputProcessStubImpl *this)
{
  BamoInputProcessPrincipal *v2; // rbx
  int v3; // eax
  const char *v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (BamoInputProcessPrincipal *)(*((_QWORD *)this + 3) - 16LL);
  v3 = BamoInputProcessPrincipal::OnCallPrologUnderLock(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5E1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v3,
      v9);
  v5 = *((_QWORD *)v2 + 7);
  if ( !v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE927,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v4);
  v6 = (*(__int64 (__fastcall **)(__int64, BamoInputProcessPrincipal *, char *))(*(_QWORD *)v5 + 16LL))(
         v5,
         v2,
         (char *)this - 16);
  v7 = BamoInputProcessPrincipal::OnCallEpilogUnderLock(v2);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5E5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  return v6;
}
