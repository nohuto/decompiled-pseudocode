/*
 * XREFs of NvmeControllerGetAuthSequenceNumber @ 0x1400EDE98
 * Callers:
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400F86D8 (NvmeFabricControllerQueueSendAuthReply.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerGetAuthSequenceNumber(__int64 a1)
{
  ULONG v2; // ecx
  __int64 result; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  Seed = MEMORY[0xFFFFF78000000320];
  v2 = RtlRandomEx(&Seed);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1684), v2, 0) )
    return v2;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1684));
  if ( !(_DWORD)result )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1684));
  return result;
}
