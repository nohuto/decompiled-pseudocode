/*
 * XREFs of EtwpQueueReply @ 0x1409F6EB4
 * Callers:
 *     EtwpSendNoReplyReply @ 0x1407AA84C (EtwpSendNoReplyReply.c)
 *     EtwpSendReplyDataBlock @ 0x1409F6D68 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KiInsertQueue @ 0x14031CA10 (KiInsertQueue.c)
 *     EtwpUnreferenceDataBlock @ 0x140835FF0 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1409F6F3C (EtwpAllocDataBlock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
    Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
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
