/*
 * XREFs of CmpFreeExtraParameter @ 0x1409E41A0
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1409271B4 (VrpPreOpenOrCreate.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     VrpPostOpenOrCreate @ 0x140AE85D0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046DC50 (VrpOriginalKeyNameParameterCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CmpFreeExtraParameter(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v4)(__int64, _QWORD *); // rax
  _QWORD *v6; // rdx
  __int64 v7; // rcx

  v4 = (void (__fastcall *)(__int64, _QWORD *))a1[4];
  if ( v4 )
  {
    v6 = a1 + 6;
    v7 = (__int64)(a1 + 2);
    if ( v4 == VrpOriginalKeyNameParameterCleanup )
      VrpOriginalKeyNameParameterCleanup(v7, v6);
    else
      guard_dispatch_icall_no_overrides(v7, v6, VrpOriginalKeyNameParameterCleanup, a4);
  }
  CmpFreeTransientPoolWithTag(a1, 0x50454D43u);
}
