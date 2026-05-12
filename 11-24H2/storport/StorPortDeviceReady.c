/*
 * XREFs of StorPortDeviceReady @ 0x140073920
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1401C11B0 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // edi
  int v5; // ebp
  __int64 v6; // r14
  int *v7; // rsi
  int *v8; // rcx
  int *v9; // r9
  __int64 *Unit; // rax
  char *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+40h] [rbp-38h]
  int *v16; // [rsp+48h] [rbp-30h] BYREF
  int *v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  HIBYTE(v15) = 0;
  v4 = a3;
  v5 = a2;
  v6 = a4;
  RaidpPortGetAdapter(a1, &v16, &v17);
  v7 = v16;
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v8 = v17;
    v9 = v17;
    if ( v16 )
    {
      v9 = v16;
      v8 = v16;
    }
    DbgLogRequest((__int64)v8, 21, retaddr, (__int64)v9, 0LL, v6 | ((v4 | (unsigned int)(v5 << 8)) << 8), 0LL);
  }
  if ( v7 )
  {
    LOBYTE(v15) = v5;
    BYTE1(v15) = v4;
    BYTE2(v15) = v6;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v14) = v6;
      LODWORD(v13) = v4;
      WPP_SF_DDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x14u,
        (__int64)&WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids,
        v5,
        v13,
        v14);
    }
    Unit = RaidAdapterFindUnit((__int64)v7, v15);
    if ( Unit )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)Unit + 420, 134684676, 134684677) == 134684677
        && Unit != (__int64 *)-1664LL )
      {
        v11 = (char *)(v16 + 252);
        *((_DWORD *)Unit + 424) = 10;
        *((_DWORD *)Unit + 425) = v15;
        RaidQueueDeferredItem(v11, (struct _SLIST_ENTRY *)Unit + 104);
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_140170460 & 0x800) != 0 )
        DbgLogRequest((__int64)v16, 22, retaddr, 1008LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
