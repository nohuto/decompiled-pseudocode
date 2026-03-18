/*
 * XREFs of AlpcpFreeCompletionList @ 0x140A0B28C
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14088B7F4 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x140A0A340 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140A0B2E8 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
