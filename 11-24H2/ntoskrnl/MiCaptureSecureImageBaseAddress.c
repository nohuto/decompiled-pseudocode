/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x140AA8678
 * Callers:
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 * Callees:
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14045B1E0 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140460630 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     SeSetImageBaseAddress @ 0x1408F7330 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = a1[12] & 0xFFFFFFFFFFFFFFF8uLL;
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(_QWORD *)(v2 + 40);
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v3);
  LODWORD(v4) = SeSetImageBaseAddress(v4 & 0xFFFFFFFFFFFFFFF8uLL, *(_QWORD *)(*a1 + 32LL), v6, v7);
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v3);
  return (unsigned int)v4;
}
