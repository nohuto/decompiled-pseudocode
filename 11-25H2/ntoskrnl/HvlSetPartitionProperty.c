/*
 * XREFs of HvlSetPartitionProperty @ 0x140584CE8
 * Callers:
 *     HvlResumePartition @ 0x1405849C0 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x140585020 (HvlSuspendPartition.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int16 v7; // bx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 24LL);
  *v6 = a1;
  *((_DWORD *)v6 + 2) = 0x20000;
  v6[2] = a3;
  v7 = HvcallInitiateHypercall(69);
  HvlpReleaseHypercallPage((unsigned int *)&v8);
  return v7 != 0 ? 0xC0000001 : 0;
}
