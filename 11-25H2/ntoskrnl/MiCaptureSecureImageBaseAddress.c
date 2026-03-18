/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x140AA3598
 * Callers:
 *     MiValidateSectionCreate @ 0x140945124 (MiValidateSectionCreate.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1403D7814 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14045BEC8 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     SeSetImageBaseAddress @ 0x140941BC0 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rdi

  v1 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_QWORD *)(v1 + 40);
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v2);
  LODWORD(v3) = SeSetImageBaseAddress(v3 & 0xFFFFFFFFFFFFFFF8uLL);
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v2);
  return (unsigned int)v3;
}
