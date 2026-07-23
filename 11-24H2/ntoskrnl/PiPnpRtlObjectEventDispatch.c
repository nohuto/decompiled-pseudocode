/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x1408CA5A8
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 * Callees:
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140A28F20 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140A28F80 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDcHandleObjectEvent @ 0x140A37C9C (PiDcHandleObjectEvent.c)
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
