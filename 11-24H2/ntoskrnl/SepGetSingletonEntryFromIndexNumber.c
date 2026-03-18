/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x140357308
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140356E98 (SepCleanupMarkedForDeletionEntries.c)
 *     SepInitSingletonEntry @ 0x140357184 (SepInitSingletonEntry.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1404F721C (SepValidateAndCopyGlobalEntry.c)
 *     SepSetSingletonEntry @ 0x140609480 (SepSetSingletonEntry.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
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
