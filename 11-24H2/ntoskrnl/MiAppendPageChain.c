/*
 * XREFs of MiAppendPageChain @ 0x140450568
 * Callers:
 *     MiReserveEnclavePages @ 0x140393C14 (MiReserveEnclavePages.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAppendPageChain(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    **(_QWORD **)(a1 + 8) = *a2;
    *(_QWORD *)(a1 + 8) = a2[1];
    result = a2[2];
    *(_QWORD *)(a1 + 16) += result;
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 16) = a2[2];
  }
  return result;
}
