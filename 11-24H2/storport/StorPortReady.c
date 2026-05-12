/*
 * XREFs of StorPortReady @ 0x1400561E0
 * Callers:
 *     StorPortReadyVrfy @ 0x1401C1700 (StorPortReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     RaidAllocateDeferredItem @ 0x14006AFA8 (RaidAllocateDeferredItem.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  char **v1; // rax
  char *v2; // rdi
  char *v3; // r10
  int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 DeferredItem; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = *(char ***)(a1 - 16);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 && *v1 )
  {
    v4 = *(_DWORD *)*v1;
    if ( ((_BYTE)v1[31] & 1) != 0 )
    {
      if ( v4 == 1314275652 )
        v3 = *v1;
    }
    else if ( v4 == 1094997074 )
    {
      v2 = *v1;
    }
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v5 = (__int64)v2;
    v6 = (__int64)v2;
    if ( !v2 )
    {
      v5 = (__int64)v3;
      v6 = (__int64)v3;
    }
    DbgLogRequest(v6, 19, retaddr, v5, 0LL, 0LL, 0LL);
  }
  if ( !v2 )
    return 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x16u,
      (__int64)&WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids,
      v2);
  }
  DeferredItem = RaidAllocateDeferredItem(v2 + 1008);
  if ( !DeferredItem )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140170460 & 0x800) != 0 )
      DbgLogRequest((__int64)v2, 22, retaddr, 1154LL, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(DeferredItem + 32) = 8;
  RaidQueueDeferredItem(v2 + 1008, (struct _SLIST_ENTRY *)DeferredItem);
  return 1;
}
