/*
 * XREFs of EtwpGetFreeBuffer @ 0x18001DD08
 * Callers:
 *     EtwpSwitchBuffer @ 0x18001D9B0 (EtwpSwitchBuffer.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x18001E738 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x18001E890 (EtwpDequeueFreeBuffer.c)
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
