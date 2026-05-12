/*
 * XREFs of StorPortBusy @ 0x140040270
 * Callers:
 *     StorPortBusyVrfy @ 0x1401C1150 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     WPP_SF_qD @ 0x140067D68 (WPP_SF_qD.c)
 *     RaidAllocateDeferredItem @ 0x14006AFA8 (RaidAllocateDeferredItem.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  char **v2; // rax
  char *v3; // rdi
  char *v4; // r10
  __int64 v5; // rbp
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 DeferredItem; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(char ***)(a1 - 16);
  v3 = 0LL;
  v4 = 0LL;
  v5 = a2;
  if ( v2 && *v2 )
  {
    v6 = *(_DWORD *)*v2;
    if ( ((_BYTE)v2[31] & 1) != 0 )
    {
      if ( v6 == 1314275652 )
        v4 = *v2;
    }
    else if ( v6 == 1094997074 )
    {
      v3 = *v2;
    }
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v7 = (__int64)v3;
    v8 = (__int64)v3;
    if ( !v3 )
    {
      v7 = (__int64)v4;
      v8 = (__int64)v4;
    }
    DbgLogRequest(v8, 18, retaddr, v7, v5, 0LL, 0LL);
  }
  if ( !v3 )
    return 0;
  ++*((_DWORD *)v3 + 1339);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qD(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, v3, v5);
  }
  DeferredItem = RaidAllocateDeferredItem(v3 + 1008);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140170460 & 0x800) != 0 )
      DbgLogRequest((__int64)v3, 22, retaddr, 1085LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(DeferredItem + 32) = 7;
  *(_DWORD *)(DeferredItem + 40) = v5;
  RaidQueueDeferredItem(v3 + 1008, (struct _SLIST_ENTRY *)DeferredItem);
  return 1;
}
