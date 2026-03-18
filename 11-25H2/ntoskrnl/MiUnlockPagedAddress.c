/*
 * XREFs of MiUnlockPagedAddress @ 0x140459E94
 * Callers:
 *     MiFreeClonePool @ 0x140459590 (MiFreeClonePool.c)
 *     MiFreeCombinePool @ 0x140459E30 (MiFreeCombinePool.c)
 *     MiLockPagedRange @ 0x140A50D1C (MiLockPagedRange.c)
 *     MiFreeCloneDescriptor @ 0x140A71A4C (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // r9

  v1 = 48 * ((*(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v2 = MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1, v3, v4, v5);
  return MiUnlockPage(v1, v2);
}
