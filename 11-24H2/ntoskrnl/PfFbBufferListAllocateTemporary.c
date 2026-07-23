/*
 * XREFs of PfFbBufferListAllocateTemporary @ 0x140473B10
 * Callers:
 *     PfpEventHandleOutOfBuffers @ 0x140473AE0 (PfpEventHandleOutOfBuffers.c)
 *     PfpSectInfoHandleOutOfBuffers @ 0x1407452A0 (PfpSectInfoHandleOutOfBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140473C20 (PfFbBufferListInsertInFree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfFbBufferListAllocateTemporary(PEX_RUNDOWN_REF RunRef, signed int a2)
{
  __int64 result; // rax
  void *Pool2; // rax

  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], a2) > SLODWORD(RunRef[11].Count) )
  {
    result = 3221225773LL;
LABEL_3:
    _InterlockedAdd((volatile signed __int32 *)&RunRef[14], -a2);
    return result;
  }
  Pool2 = (void *)ExAllocatePool2(RunRef[9].Count, a2, HIDWORD(RunRef[8].Ptr));
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  PfFbBufferListInsertInFree(RunRef, Pool2, 0);
  return 0LL;
}
