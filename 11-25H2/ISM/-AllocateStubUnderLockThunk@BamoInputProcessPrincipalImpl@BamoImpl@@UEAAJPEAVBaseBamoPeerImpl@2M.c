/*
 * XREFs of ?AllocateStubUnderLockThunk@BamoInputProcessPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800C9DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCallEpilogUnderLock@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CA03C (-OnCallEpilogUnderLock@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     ?OnCallPrologUnderLock@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800CA060 (-OnCallPrologUnderLock@BamoInputProcessPrincipal@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoInputProcessPrincipalImpl::AllocateStubUnderLockThunk(
        BamoImpl::BamoInputProcessPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        struct Microsoft::Bamo::BamoStub **a3)
{
  BamoInputProcessPrincipal *v5; // rax
  __int64 v6; // rbx
  BamoInputProcessPrincipal *v7; // rdi
  int v8; // eax
  const char *v9; // r9
  __int64 (__fastcall ***v10)(_QWORD, BamoInputProcessPrincipal *, __int64, struct Microsoft::Bamo::BamoStub **); // rcx
  int v11; // eax
  int v12; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::Bamo::BamoStub *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = (BamoInputProcessPrincipal *)(*(__int64 (__fastcall **)(BamoImpl::BamoInputProcessPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
  v6 = *((_QWORD *)a2 + 2);
  v16 = 0LL;
  v7 = v5;
  v8 = BamoInputProcessPrincipal::OnCallPrologUnderLock(v5);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v14);
  v10 = (__int64 (__fastcall ***)(_QWORD, BamoInputProcessPrincipal *, __int64, struct Microsoft::Bamo::BamoStub **))*((_QWORD *)v7 + 7);
  if ( !v10 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE909,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      v9);
  v11 = (**v10)(v10, v7, v6, &v16);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v11,
      v14);
  v12 = BamoInputProcessPrincipal::OnCallEpilogUnderLock(v7);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v12,
      v14);
  *a3 = v16;
  return 0LL;
}
