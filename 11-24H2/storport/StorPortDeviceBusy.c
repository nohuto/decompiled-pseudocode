/*
 * XREFs of StorPortDeviceBusy @ 0x14003DC40
 * Callers:
 *     StorPortDeviceBusyVrfy @ 0x1401C1190 (StorPortDeviceBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     WPP_SF_dddd @ 0x140075ED8 (WPP_SF_dddd.c)
 */

char __fastcall StorPortDeviceBusy(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // r10
  __int64 v8; // r15
  int v9; // edi
  unsigned int v10; // r14d
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 *Unit; // rax
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+8h]

  HIBYTE(v16) = 0;
  v5 = 0LL;
  v6 = *(__int64 **)(a1 - 16);
  v7 = 0LL;
  v8 = a4;
  v9 = (unsigned __int8)a3;
  v10 = (unsigned __int8)a2;
  if ( v6 && *v6 )
  {
    a2 = *(unsigned int *)*v6;
    if ( (v6[31] & 1) != 0 )
    {
      if ( (_DWORD)a2 == 1314275652 )
        v7 = *v6;
    }
    else if ( (_DWORD)a2 == 1094997074 )
    {
      v5 = *v6;
    }
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v11 = v5;
    v12 = v5;
    if ( !v5 )
    {
      v11 = v7;
      v12 = v7;
    }
    DbgLogRequest(v12, 20, retaddr, v11, a5, v8 | (((unsigned __int8)a3 | (v10 << 8)) << 8), 0LL);
  }
  if ( v5 )
  {
    LOBYTE(v16) = v10;
    BYTE1(v16) = v9;
    BYTE2(v16) = v8;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v10, v9, v8, a5);
    }
    Unit = RaidAdapterFindUnit(v5, v16);
    if ( Unit )
    {
      ++*((_DWORD *)Unit + 569);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)Unit + 400, 134684676, 134684677) == 134684677
        && Unit != (__int64 *)-1584LL )
      {
        *((_DWORD *)Unit + 404) = 9;
        *((_DWORD *)Unit + 405) = v16;
        *((_DWORD *)Unit + 406) = a5;
        RaidQueueDeferredItem((char *)(v5 + 1008), (struct _SLIST_ENTRY *)Unit + 99);
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_140170460 & 0x800) != 0 )
        DbgLogRequest(v5, 22, retaddr, 916LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
