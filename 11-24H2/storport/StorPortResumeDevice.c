/*
 * XREFs of StorPortResumeDevice @ 0x140014F00
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1401C1720 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 *     McTemplateK0pquuu_EtwWriteTransfer @ 0x140071C74 (McTemplateK0pquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  char *v4; // rsi
  char **v5; // rax
  char *v6; // rdi
  __int64 v7; // rbp
  int v8; // r13d
  int v9; // r14d
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // ecx
  __int64 Unit; // rax
  int v15; // r9d
  int v16; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v18; // [rsp+60h] [rbp+8h]

  HIBYTE(v18) = 0;
  v4 = 0LL;
  v5 = *(char ***)(a1 - 16);
  v6 = 0LL;
  v7 = a4;
  v8 = a1;
  v9 = a3;
  v10 = a2;
  if ( v5 && *v5 )
  {
    v11 = *(_DWORD *)*v5;
    if ( ((_BYTE)v5[31] & 1) != 0 )
    {
      if ( v11 == 1314275652 )
        v6 = *v5;
    }
    else if ( v11 == 1094997074 )
    {
      v4 = *v5;
    }
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v15 = (int)v4;
    v16 = (int)v4;
    if ( !v4 )
    {
      v15 = (int)v6;
      v16 = (int)v6;
    }
    DbgLogRequest(v16, 17, (_DWORD)retaddr, v15, 0LL, v7 | ((a3 | (a2 << 8)) << 8), 0LL);
  }
  if ( v4 )
  {
    v12 = *((_DWORD *)v4 + 14);
  }
  else if ( v6 )
  {
    v12 = *((_DWORD *)v6 + 14);
  }
  else
  {
    v12 = 255;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pquuu_EtwWriteTransfer(v12, a2, a3, v8, v12, v10, v9, v7);
  if ( !v4 )
    return 0;
  LOBYTE(v18) = v10;
  BYTE1(v18) = v9;
  BYTE2(v18) = v7;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, v10, v9, v7);
  }
  Unit = RaidAdapterFindUnit(v4, v18);
  if ( !Unit )
    return 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1520), 134684676, 134684677) != 134684677
    || Unit == -1504 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140170460 & 0x800) != 0 )
      DbgLogRequest((_DWORD)v4, 22, (_DWORD)retaddr, 711, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(Unit + 1536) = 6;
  *(_DWORD *)(Unit + 1540) = v18;
  RaidQueueDeferredItem(v4 + 1008, (struct _SLIST_ENTRY *)(Unit + 1504));
  return 1;
}
