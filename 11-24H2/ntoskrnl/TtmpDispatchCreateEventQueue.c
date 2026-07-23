/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x14076B6D8
 * Callers:
 *     TtmDispatchApi @ 0x14099D9B8 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x14076A4D0 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14076B504 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateEventQueue @ 0x1407709D4 (TtmiCreateEventQueue.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, __int64 *a2)
{
  void *v2; // rcx
  PVOID v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  PVOID v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v11 = 0LL;
  v13 = 0LL;
  Object[0] = 0LL;
  v4 = 0LL;
  v12 = 0LL;
  inserted = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v11, Object);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v7 = 306LL;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateEventQueue", v7, (unsigned int)inserted, (unsigned int)inserted);
    goto LABEL_11;
  }
  v8 = TtmiCreateEventQueue(v11, &v12);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v4 = v12;
    inserted = TtmiWriteEnumerationEventsToQueue(v11, (__int64)v12);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 322LL;
      goto LABEL_3;
    }
    inserted = ObInsertObjectEx(v4, 0, 0LL, (__int64)&v13);
    v4 = 0LL;
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 340LL;
      goto LABEL_3;
    }
    v6 = 0;
    *a2 = v13;
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateEventQueue", 312LL, (unsigned int)v8, (unsigned int)v8);
    v4 = v12;
  }
LABEL_11:
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object[0] )
    ObfDereferenceObject(Object[0]);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v6;
}
