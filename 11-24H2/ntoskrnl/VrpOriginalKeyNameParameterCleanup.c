/*
 * XREFs of VrpOriginalKeyNameParameterCleanup @ 0x140468510
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpFreeExtraParameter @ 0x1409DEC00 (CmpFreeExtraParameter.c)
 * Callees:
 *     VrpDereferenceJobContext @ 0x140A297D8 (VrpDereferenceJobContext.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VrpOriginalKeyNameParameterCleanup(__int64 a1, _QWORD *a2)
{
  void *v3; // rcx

  if ( *a2 )
    VrpDereferenceJobContext();
  v3 = (void *)a2[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
}
