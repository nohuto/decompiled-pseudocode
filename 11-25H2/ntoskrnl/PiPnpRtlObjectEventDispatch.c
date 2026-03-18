/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x1408D1334
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 * Callees:
 *     PiDcHandleObjectEvent @ 0x1408D1C4C (PiDcHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1408D1C9C (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1408D1CFC (PiDqObjectManagerHandleObjectEvent.c)
 */

__int64 __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent();
    result = PiDqGetObjectManagerForPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( result )
      return PiDqObjectManagerHandleObjectEvent(result, a1);
  }
  return result;
}
