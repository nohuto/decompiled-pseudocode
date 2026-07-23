/*
 * XREFs of MiLockPagableImageSection @ 0x1402BBC20
 * Callers:
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     MiLockPagableSections @ 0x140C5DB28 (MiLockPagableSections.c)
 * Callees:
 *     MiUnlockImageSection @ 0x1402BBCB0 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x140A31B38 (MiLockImageSection.c)
 */

__int64 __fastcall MiLockPagableImageSection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx

  BugCheckParameter4 = *(unsigned int *)(a1 + 296);
  v6 = *(_QWORD *)(a1 + 288);
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a2 - v6) >> 3);
  if ( a2 < v6 || (unsigned int)v7 >= (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x1013uLL, a2 | a3, (unsigned int)v7, BugCheckParameter4);
  v8 = *(_QWORD *)(a1 + 200) + 12LL * (unsigned int)v7;
  if ( a3 == 1 )
    return MiLockImageSection(a1, v8);
  else
    return MiUnlockImageSection(a1, v8, a2);
}
