/*
 * XREFs of PfFbBufferListAllocateTemporary @ 0x140477910
 * Callers:
 *     PfpEventHandleOutOfBuffers @ 0x1404778E0 (PfpEventHandleOutOfBuffers.c)
 *     PfpSectInfoHandleOutOfBuffers @ 0x14073AF90 (PfpSectInfoHandleOutOfBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140477A20 (PfFbBufferListInsertInFree.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfFbBufferListAllocateTemporary(PEX_RUNDOWN_REF RunRef, unsigned int a2)
{
  __int64 result; // rax
  void *Pool2; // rax

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], a2)) > SLODWORD(RunRef[11].Count) )
  {
    result = 3221225773LL;
LABEL_3:
    _InterlockedAdd((volatile signed __int32 *)&RunRef[14], -a2);
    return result;
  }
  Pool2 = (void *)ExAllocatePool2(RunRef[9].Count);
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  PfFbBufferListInsertInFree(RunRef, Pool2, 0);
  return 0LL;
}
