/*
 * XREFs of EtwpQueueReply @ 0x1408320AC
 * Callers:
 *     EtwpSendNoReplyReply @ 0x1407AA98C (EtwpSendNoReplyReply.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KiInsertQueue @ 0x1402C55A0 (KiInsertQueue.c)
 *     EtwpAllocDataBlock @ 0x140832D04 (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140836678 (EtwpUnreferenceDataBlock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueReply(__int64 a1, unsigned int *a2)
{
  int v3; // edi
  __int64 *Pool2; // rax

  v3 = EtwpAllocDataBlock(a2[1], a2);
  if ( v3 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
  }
  else
  {
    Pool2 = (__int64 *)ExAllocatePool2(0x40uLL, 0x38uLL, 0x72777445u);
    if ( Pool2 )
    {
      Pool2[2] = 0LL;
      KiInsertQueue(a1, Pool2, 0LL, 0);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
      EtwpUnreferenceDataBlock(0LL);
    }
  }
  return (unsigned int)v3;
}
