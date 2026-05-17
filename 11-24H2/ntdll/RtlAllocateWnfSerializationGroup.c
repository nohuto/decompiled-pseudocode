/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x18010A300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_1801CE208);
  while ( !(_DWORD)result );
  return result;
}
