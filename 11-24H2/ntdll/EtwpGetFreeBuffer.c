/*
 * XREFs of EtwpGetFreeBuffer @ 0x18003DA88
 * Callers:
 *     EtwpSwitchBuffer @ 0x18003D730 (EtwpSwitchBuffer.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x18003E4B8 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x18003E610 (EtwpDequeueFreeBuffer.c)
 */

__int64 __fastcall EtwpGetFreeBuffer(__int64 a1)
{
  __int64 v2; // rbx

  v2 = ((__int64 (*)(void))EtwpDequeueFreeBuffer)();
  if ( !v2 && (*(_DWORD *)(a1 + 308) & 0x400) == 0 )
  {
    do
    {
      if ( (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) != 1 )
        break;
      v2 = EtwpDequeueFreeBuffer(a1);
    }
    while ( !v2 );
  }
  return v2;
}
