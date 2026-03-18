/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x1409F5390
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x14090D0F0 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1409F52E4 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampContextPruneModules @ 0x140ACF5C8 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409F53E0 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampModuleCleanup(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    EtwpCovSampModuleNameInfoCleanup(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
