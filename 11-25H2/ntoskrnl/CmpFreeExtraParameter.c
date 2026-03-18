/*
 * XREFs of CmpFreeExtraParameter @ 0x1409471DC
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1409475FC (VrpPreOpenOrCreate.c)
 *     VrpPostOpenOrCreate @ 0x1409494F0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046F730 (VrpOriginalKeyNameParameterCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1)
{
  void (__fastcall *v1)(__int64, _QWORD *); // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx

  v1 = (void (__fastcall *)(__int64, _QWORD *))a1[4];
  if ( v1 )
  {
    v3 = a1 + 6;
    v4 = (__int64)(a1 + 2);
    if ( v1 == VrpOriginalKeyNameParameterCleanup )
      VrpOriginalKeyNameParameterCleanup(v4, v3);
    else
      guard_dispatch_icall_no_overrides(v4);
  }
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
