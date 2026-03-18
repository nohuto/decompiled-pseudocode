/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x1408CCBB0
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1408CC158 (PiPnpRtlEndOperation.c)
 * Callees:
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140A34F10 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140A34F70 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDcHandleObjectEvent @ 0x140A4245C (PiDcHandleObjectEvent.c)
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
