/*
 * XREFs of ExpWorkQueueDestroy @ 0x1407C0528
 * Callers:
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     ExpPartitionCreatePoolInternal @ 0x1408F7C7C (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeRundownPriQueue @ 0x1405C6B64 (KeRundownPriQueue.c)
 */

void __fastcall ExpWorkQueueDestroy(char *SystemArgument1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int16 v4; // bx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *((_QWORD *)SystemArgument1 + 91) = &Event;
  _m_prefetchw(SystemArgument1 + 712);
  v2 = *((_DWORD *)SystemArgument1 + 178);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)SystemArgument1 + 178, v2 | 0x8000, v2);
  }
  while ( v3 != v2 );
  v4 = v2;
  KeRundownPriQueue((unsigned __int64)SystemArgument1);
  if ( (v4 & 0x3FFF) != 0 )
    KeWaitForSingleObject(*((PVOID *)SystemArgument1 + 91), Executive, 0, 0, 0LL);
}
