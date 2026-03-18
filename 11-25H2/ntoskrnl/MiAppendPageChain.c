/*
 * XREFs of MiAppendPageChain @ 0x14045A4F0
 * Callers:
 *     MiReserveEnclavePages @ 0x1403BA138 (MiReserveEnclavePages.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
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
