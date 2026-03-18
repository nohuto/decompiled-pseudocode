/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x14035ED18
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1403EA0B8 (SepCleanupMarkedForDeletionEntries.c)
 *     SepInitSingletonEntry @ 0x1404923DC (SepInitSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F4924 (SepValidateAndCopyGlobalEntry.c)
 *     SepSetSingletonEntry @ 0x1405FCF90 (SepSetSingletonEntry.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  char v1; // si
  __int64 v2; // rdi
  unsigned int v3; // ebx
  KIRQL v4; // al

  v1 = a1;
  v2 = 0LL;
  v3 = a1 >> 6;
  v4 = ExAcquireSpinLockShared(SepSingletonGlobal);
  if ( v3 < *((_DWORD *)SepSingletonGlobal + 1) )
    v2 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8LL * v3) + 24LL * (v1 & 0x3F);
  ExReleaseSpinLockShared(SepSingletonGlobal, v4);
  return v2;
}
