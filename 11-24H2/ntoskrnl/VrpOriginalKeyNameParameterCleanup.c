/*
 * XREFs of VrpOriginalKeyNameParameterCleanup @ 0x14046DC50
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpFreeExtraParameter @ 0x1409E41A0 (CmpFreeExtraParameter.c)
 * Callees:
 *     VrpDereferenceJobContext @ 0x140A357C8 (VrpDereferenceJobContext.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
