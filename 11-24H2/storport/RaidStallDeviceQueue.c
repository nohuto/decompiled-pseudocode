/*
 * XREFs of RaidStallDeviceQueue @ 0x1400131FC
 * Callers:
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x1400012E8 (RaidSetUnitPauseTimer.c)
 *     RiIsDeviceQueueBusy @ 0x1400146C4 (RiIsDeviceQueueBusy.c)
 *     RaidPauseDeviceQueue @ 0x140014E8C (RaidPauseDeviceQueue.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RiDisableDeviceQueueFastPath @ 0x140026CB0 (RiDisableDeviceQueueFastPath.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaidStallDeviceQueue(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  volatile LONG *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int8 v14; // cl
  int v15; // r13d
  KIRQL v16; // si
  char v17; // al
  __int64 v18; // rdx
  __int16 v19; // cx
  __int64 v20; // rcx
  __int64 v21; // r9
  KIRQL OldIrql; // [rsp+40h] [rbp-39h]
  _OWORD v23[2]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v24; // [rsp+68h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-1h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_42bc12a918843888f68018f88e1285b6_Traceguids, a2, a3);
  }
  if ( a2 && a3 )
  {
    v8 = (volatile LONG *)(a1 + 72);
    LOBYTE(v11) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    OldIrql = v11;
    if ( *(int *)(a1 + 24) > 0 || (unsigned int)RiIsDeviceQueueBusy(a1, v9, v10, v11) == 1 )
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v11);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_42bc12a918843888f68018f88e1285b6_Traceguids, a2, a3);
      }
    }
    else
    {
      if ( a2 == 1 )
      {
        v13 = *(_QWORD *)(a4 + 24);
        if ( v13 )
          v14 = *(_BYTE *)(v13 + 56);
        else
          v14 = -1;
        v15 = (unsigned __int8)BYTE2(*(_DWORD *)(a4 + 104)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a4 + 104)) | (((unsigned __int8)*(_DWORD *)(a4 + 104) | (v14 << 8)) << 8)) << 8);
        RaidPauseDeviceQueue(a1);
        memset(v23, 0, sizeof(v23));
        v25 = 0LL;
        v24 = 0LL;
        if ( *(_QWORD *)(a4 + 32) && (unsigned __int8)RaidIsUnitControlSupported(a4, 31LL) )
        {
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a4 + 32) + 24LL));
          ++*(_DWORD *)(*(_QWORD *)(a4 + 32) + 84LL);
          *(_QWORD *)&v23[0] = 0x3800000038LL;
          v17 = *(_BYTE *)(a4 + 104);
          WORD4(v24) = 1;
          v18 = *(_QWORD *)(a4 + 24);
          DWORD2(v23[0]) = 2;
          HIDWORD(v24) = 4;
          v19 = *(_WORD *)(v18 + 56);
          LOBYTE(v25) = v17;
          *(_WORD *)((char *)&v25 + 1) = *(_WORD *)(a4 + 105);
          WORD5(v24) = v19;
          if ( *(_DWORD *)v18 == 1094997074 )
          {
            v20 = v18 + 376;
          }
          else
          {
            v20 = v18 + 168;
            if ( *(_DWORD *)v18 != 1314275652 )
              v20 = 0LL;
          }
          RaCallMiniportUnitControl(v20, 31LL, v23);
          KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a4 + 32) + 24LL), v16);
        }
        if ( (qword_140170460 & 0x200) != 0 )
          DbgLogRequest(*(_QWORD *)(a4 + 24), 4, (_DWORD)retaddr, v15, *(int *)(a4 + 744), 0LL, 0LL);
      }
      else if ( a2 == 2 )
      {
        LOBYTE(v12) = 1;
        RiDisableDeviceQueueFastPath(a1, v12);
        if ( (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF) != 0 )
        {
          v21 = (unsigned __int64)(a3 * (((__int64)*(unsigned int *)(a1 + 88) >> 2) & 0x3FFFFFFF)) / 0x64;
          if ( !(_DWORD)v21 )
            v21 = 1LL;
          *(_DWORD *)(a1 + 28) = v21;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 13LL, &WPP_42bc12a918843888f68018f88e1285b6_Traceguids, v21);
          }
        }
      }
      ExReleaseSpinLockExclusive(v8, OldIrql);
      if ( a2 == 1 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_42bc12a918843888f68018f88e1285b6_Traceguids, a3);
        }
        RaidSetUnitPauseTimer(a4, a3);
      }
    }
  }
}
