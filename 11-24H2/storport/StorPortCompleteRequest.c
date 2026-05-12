/*
 * XREFs of StorPortCompleteRequest @ 0x140073760
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1401C1170 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x140001948 (RaidResumeUnitQueue.c)
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     RaidPauseUnitQueue @ 0x140014D40 (RaidPauseUnitQueue.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 */

void __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  _BYTE *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // ebp
  int v9; // r14d
  __int64 RaidAdapter; // rdi
  __int64 *Unit; // rax
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+60h] [rbp+8h]

  v5 = *(_BYTE **)(a1 - 16);
  v6 = 0LL;
  HIBYTE(v15) = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( (v5[248] & 1) != 0 )
    return;
  RaidAdapter = RaMiniportGetRaidAdapter(v5);
  if ( !RaidAdapter )
    return;
  if ( (qword_140170460 & 0x40) != 0 )
    DbgLogRequest(
      RaidAdapter,
      12,
      RaidAdapter,
      v7 | (int)(*(_DWORD *)(RaidAdapter + 56) << 24) | (unsigned __int64)((v8 | (unsigned int)(v9 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( (_BYTE)v9 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
  {
    RaidPauseAdapterQueue(RaidAdapter);
  }
  else
  {
    LOBYTE(v15) = v9;
    BYTE1(v15) = v8;
    BYTE2(v15) = v7;
    Unit = RaidAdapterFindUnit(RaidAdapter, v15);
    v6 = (__int64)Unit;
    if ( !Unit )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        LODWORD(v13) = v7;
        LODWORD(v12) = v8;
        WPP_SF_DDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Au,
          (__int64)&WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids,
          v9,
          v12,
          v13);
      }
      return;
    }
    RaidPauseUnitQueue((__int64)Unit);
  }
  if ( !KeInsertQueueDpc((PRKDPC)(RaidAdapter + 1848), (PVOID)(v7 | ((v8 | (unsigned int)(v9 << 8)) << 8)), (PVOID)a5) )
  {
    if ( (_BYTE)v9 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
      RaidResumeAdapterQueue(RaidAdapter, 0, 0);
    else
      RaidResumeUnitQueue(v6);
  }
}
