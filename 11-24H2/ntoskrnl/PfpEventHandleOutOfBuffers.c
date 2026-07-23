/*
 * XREFs of PfpEventHandleOutOfBuffers @ 0x140473AE0
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x140473B10 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpEventHandleOutOfBuffers(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 result; // rax

  result = PfFbBufferListAllocateTemporary(a2);
  if ( (int)result < 0 )
    ++*(_DWORD *)(a1 + 692);
  return result;
}
