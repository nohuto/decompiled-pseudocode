/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180105230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_1801CD208);
  while ( !(_DWORD)result );
  return result;
}
