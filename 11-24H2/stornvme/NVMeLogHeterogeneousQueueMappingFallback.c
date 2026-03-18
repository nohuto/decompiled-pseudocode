/*
 * XREFs of NVMeLogHeterogeneousQueueMappingFallback @ 0x14001E3D4
 * Callers:
 *     IoSqToIoCqMapping @ 0x14001AEE8 (IoSqToIoCqMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeLogHeterogeneousQueueMappingFallback(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    return StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return result;
}
