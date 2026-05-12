/*
 * XREFs of StorPortPauseDevice @ 0x140014A50
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1401C16C0 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x140014D40 (RaidPauseUnitQueue.c)
 *     RaidQueueDeferredItem @ 0x140014EC4 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 *     McTemplateK0pqquuu_EtwWriteTransfer @ 0x140071ACC (McTemplateK0pqquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortPauseDevice(__int64 a1, unsigned __int8 a2, int *a3, unsigned __int8 a4, unsigned int a5)
{
  int *v5; // rsi
  int **v6; // rax
  int *v7; // r10
  unsigned int v8; // r12d
  int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r15d
  int v13; // ecx
  int *v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // r11
  int v17; // ecx
  __int64 Unit; // rax
  __int64 v19; // r14
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v22; // [rsp+80h] [rbp+8h]

  HIBYTE(v22) = 0;
  v5 = 0LL;
  v6 = *(int ***)(a1 - 16);
  v7 = 0LL;
  v8 = a2;
  v9 = a1;
  v10 = a4;
  LODWORD(v11) = 1314275652;
  v12 = (unsigned __int8)a3;
  if ( v6 && *v6 )
  {
    v13 = **v6;
    if ( ((_BYTE)v6[31] & 1) != 0 )
    {
      if ( v13 == 1314275652 )
        v7 = *v6;
    }
    else if ( v13 == 1094997074 )
    {
      v5 = *v6;
    }
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v14 = v5;
    a3 = v5;
    if ( !v5 )
    {
      v14 = v7;
      a3 = v7;
    }
    if ( v14 )
    {
      if ( *v14 != 1314275652 )
      {
        v15 = v14[1233];
        if ( v15 )
        {
          v16 = *((_QWORD *)v14 + 617);
          if ( v16 )
          {
            v11 = v16 + 48LL * (_InterlockedIncrement(v14 + 1232) % v15);
            *(_DWORD *)v11 = 16;
            *(_QWORD *)(v11 + 40) = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v11 + 8) = retaddr;
            *(_QWORD *)(v11 + 16) = a3;
            *(_QWORD *)(v11 + 24) = a5;
            *(_QWORD *)(v11 + 32) = v10 | ((v12 | (v8 << 8)) << 8);
          }
        }
      }
    }
  }
  if ( v5 )
  {
    v17 = v5[14];
  }
  else if ( v7 )
  {
    v17 = v7[14];
  }
  else
  {
    v17 = 255;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pqquuu_EtwWriteTransfer(v17, v11, (_BYTE)a3, v9, a5, v17, v8, v12, v10);
  if ( !v5 )
    return 0;
  LOBYTE(v22) = v8;
  BYTE1(v22) = v12;
  BYTE2(v22) = v10;
  Unit = RaidAdapterFindUnit(v5, v22);
  v19 = Unit;
  if ( !Unit )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_DDD(
        WPP_GLOBAL_Control->AttachedDevice,
        16LL,
        &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids,
        v8,
        v12,
        v10);
    }
    return 0;
  }
  ++*(_DWORD *)(Unit + 2272);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids, v8, v12, v10);
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 1440), 134684676, 134684677) != 134684677
    || v19 == -1424 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140170460 & 0x800) != 0 )
      DbgLogRequest((_DWORD)v5, 22, (_DWORD)retaddr, 594, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(v19 + 1456) = 5;
  *(_DWORD *)(v19 + 1460) = v22;
  *(_DWORD *)(v19 + 1464) = a5;
  RaidPauseUnitQueue(v19);
  RaidQueueDeferredItem(v5 + 252);
  return 1;
}
