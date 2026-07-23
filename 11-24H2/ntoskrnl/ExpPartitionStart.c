/*
 * XREFs of ExpPartitionStart @ 0x1407C0484
 * Callers:
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x140C45050 (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     ExpWorkQueueManagerStart @ 0x1407C0748 (ExpWorkQueueManagerStart.c)
 */

__int64 __fastcall ExpPartitionStart(__int64 a1)
{
  unsigned __int16 i; // bx
  USHORT *v3; // rcx
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    Affinity = 0LL;
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 824 * i) )
      v3 = (USHORT *)KeNodeBlock[i];
    KeQueryNodeActiveAffinity(*v3, &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      result = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * i));
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
