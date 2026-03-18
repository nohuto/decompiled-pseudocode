/*
 * XREFs of AlpcpFreeCompletionList @ 0x140A08300
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14098B834 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x140A073C0 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140A0835C (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}
