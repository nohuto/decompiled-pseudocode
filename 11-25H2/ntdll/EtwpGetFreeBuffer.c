/*
 * XREFs of EtwpGetFreeBuffer @ 0x180091478
 * Callers:
 *     EtwpSwitchBuffer @ 0x180091120 (EtwpSwitchBuffer.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x180091EA8 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x180092000 (EtwpDequeueFreeBuffer.c)
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
