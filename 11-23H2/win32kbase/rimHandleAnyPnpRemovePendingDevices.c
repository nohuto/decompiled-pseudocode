/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C00752D4
 * Callers:
 *     RIMReadInput @ 0x1C0077620 (RIMReadInput.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x1C019A700 (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMFreeDev @ 0x1C0170F30 (RIMFreeDev.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1C019AEE4 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  int v4; // r14d
  __int64 v5; // rdx
  PDEVICE_OBJECT v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // rbx
  int v10; // eax
  int v11; // eax

  v2 = a1 + 760;
  v3 = 0;
  while ( 2 )
  {
    v4 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x40) == 0 )
      {
        v11 = *(_DWORD *)(i + 188);
        if ( (v11 & 8) != 0 )
        {
          *(_DWORD *)(i + 188) = v11 & 0xFFFFFFF7;
          v6 = WPP_GLOBAL_Control;
          LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v5,
              v7,
              (_DWORD)gRimLog,
              4,
              1,
              37,
              (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
              i);
        }
        v10 = *(_DWORD *)(i + 200);
        if ( ((v10 & 1) != 0 || (v10 & 2) != 0) && (*(_DWORD *)(i + 188) & 0x10) == 0 && !*(_QWORD *)(i + 192) )
        {
          if ( IS_USERCRIT_OWNED_AT_ALL((__int64)v6, v5, v7, v8) )
          {
            v4 = 1;
            v3 = (*(_DWORD *)(i + 200) & 2u) >> 1;
            *(_DWORD *)(i + 200) &= 0xFFFFFFFC;
            LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v5,
                v7,
                (_DWORD)gRimLog,
                4,
                1,
                38,
                (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
                i);
            }
            break;
          }
          if ( !*(_DWORD *)(a1 + 1116) )
            rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(a1);
        }
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      if ( v3 )
      {
        RIMLockExclusive(v2);
        *(_DWORD *)(a1 + 1076) |= 2u;
      }
      rimDoRimDevChange(a1, i, 3u);
      RIMFreeDev(a1, i);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 1076) &= ~2u;
        *(_QWORD *)(v2 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v2, 0LL);
        KeLeaveCriticalRegion();
      }
      continue;
    }
    break;
  }
}
