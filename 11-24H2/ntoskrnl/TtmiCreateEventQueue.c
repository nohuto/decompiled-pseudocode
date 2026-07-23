/*
 * XREFs of TtmiCreateEventQueue @ 0x1407709D4
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x14076B6D8 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TtmiLogQueueCreated @ 0x14076D900 (TtmiLogQueueCreated.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r9
  int Object; // eax
  unsigned int v7; // ebx
  _QWORD *v8; // rcx
  _QWORD v10[3]; // [rsp+50h] [rbp-30h] BYREF
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  __int128 v13; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v12 = 0;
  v10[1] = 0LL;
  v10[2] = 0LL;
  v10[0] = 48LL;
  v11 = 32;
  v13 = 0LL;
  Object = ObCreateObjectEx(0, (_DWORD)TtmpQueueObjectType, (unsigned int)v10, PreviousMode);
  v7 = Object;
  if ( Object >= 0 )
  {
    memset_0(0LL, 0, 0xB0uLL);
    MEMORY[0xA0] = 152LL;
    MEMORY[0x98] = 152LL;
    ExInitializeResourceLite((PERESOURCE)0x18);
    KeInitializeEvent((PRKEVENT)0x80, NotificationEvent, 0);
    MEMORY[0xA8] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    MEMORY[0x10] = a1;
    v8 = *(_QWORD **)(a1 + 88);
    if ( *v8 != a1 + 80 )
      __fastfail(3u);
    MEMORY[8] = *(_QWORD *)(a1 + 88);
    MEMORY[0] = a1 + 80;
    *v8 = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    TtmiLogQueueCreated(0LL);
    *a2 = 0LL;
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateEventQueue", 566LL, (unsigned int)Object, (unsigned int)Object);
  }
  return v7;
}
