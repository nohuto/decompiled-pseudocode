/*
 * XREFs of MiReturnExcessPoolCharges @ 0x140378924
 * Callers:
 *     MiReturnExcessPoolCommit @ 0x1402C3C24 (MiReturnExcessPoolCommit.c)
 *     MiGetLargePoolPages @ 0x140378D28 (MiGetLargePoolPages.c)
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140377D44 (MiReturnPoolCharges.c)
 */

unsigned __int64 __fastcall MiReturnExcessPoolCharges(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v3 = a1;
  v5 = a1;
  v7 = 0LL;
  return MiReturnPoolCharges((unsigned __int64 *)&v3, a2, 0);
}
