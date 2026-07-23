/*
 * XREFs of MiGetInPageAutoBoostLock @ 0x1402770DC
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 */

_QWORD *MiGetInPageAutoBoostLock()
{
  volatile CCHAR v0; // al
  ULONG_PTR v1; // r9
  _QWORD *result; // rax
  __int64 v3; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+48h] [rbp-10h]
  int v5; // [rsp+4Ch] [rbp-Ch]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  v0 = KeNumberProcessorsGroup0[9];
  v1 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v1) = v1 | 0x80000000;
  if ( (v0 & 8) != 0 )
  {
    v3 = 1LL;
    v4 = 32;
    result = (_QWORD *)VfHandlePoolAlloc(
                         NonPagedPool,
                         0x40uLL,
                         8uLL,
                         0x4149694Du,
                         LowPoolPriority,
                         (__int64)&v3,
                         1,
                         retaddr);
  }
  else
  {
    result = (_QWORD *)ExpAllocatePoolWithTagFromNode(0x40uLL, 8uLL, 0x4149694DuLL, v1);
  }
  if ( result )
    *result = 1LL;
  return result;
}
