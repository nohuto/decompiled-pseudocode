/*
 * XREFs of StorSetIoGatewayNotBusy @ 0x1400516EC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 *     StorSetIoGatewayBusy @ 0x1400013B4 (StorSetIoGatewayBusy.c)
 * Callees:
 *     StorSetAllIoGatewayNotBusy @ 0x1400A7088 (StorSetAllIoGatewayNotBusy.c)
 */

__int64 __fastcall StorSetIoGatewayNotBusy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL) > 1u && (_BYTE)a2 )
    {
      return StorSetAllIoGatewayNotBusy(*(_QWORD *)(a1 + 48), a2, a3);
    }
    else
    {
      result = *(unsigned int *)(a1 + 40);
      if ( (_DWORD)result )
      {
        result = *(unsigned int *)(a1 + 28);
        *(_DWORD *)(a1 + 32) = result;
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
  return result;
}
