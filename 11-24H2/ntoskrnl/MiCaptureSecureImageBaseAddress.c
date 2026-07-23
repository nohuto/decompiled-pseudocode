/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x140A8D9F4
 * Callers:
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 * Callees:
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404505E0 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140455510 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     SeSetImageBaseAddress @ 0x140A8DA70 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rdi

  v2 = a1[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(_QWORD *)(v2 + 40);
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v3);
  LODWORD(v4) = SeSetImageBaseAddress(v4 & 0xFFFFFFFFFFFFFFF8uLL, *(_QWORD *)(*a1 + 32LL));
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v3);
  return (unsigned int)v4;
}
