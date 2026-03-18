/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04
 * Callers:
 *     RIMReadInput @ 0x14005C200 (RIMReadInput.c)
 *     rimDoHandleAnyPnpRemovePendingDevicesWorkItem @ 0x14019D300 (rimDoHandleAnyPnpRemovePendingDevicesWorkItem.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A2390 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1401EA080 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(struct RawInputManagerObject *a1)
{
  char *v2; // r15
  unsigned int v3; // r14d
  int v4; // r12d
  __int64 i; // rbx
  int v6; // eax
  int v7; // eax
  bool v8; // si
  bool v9; // bp
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // si
  bool v14; // bp
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  v2 = (char *)a1 + 760;
  v3 = 0;
  while ( 2 )
  {
    v4 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    for ( i = *((_QWORD *)a1 + 53); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (*(_DWORD *)(i + 168) & 0x40) == 0 )
      {
        v6 = *(_DWORD *)(i + 172);
        if ( (v6 & 8) != 0 )
        {
          *(_DWORD *)(i + 172) = v6 & 0xFFFFFFF7;
          v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v11) = v9;
            LOBYTE(v12) = v8;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v12,
              v11,
              *(_QWORD *)(UserSessionState + 19392),
              4,
              1,
              37,
              (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
              i);
          }
        }
        v7 = *(_DWORD *)(i + 184);
        if ( ((v7 & 1) != 0 || (v7 & 2) != 0) && (*(_DWORD *)(i + 172) & 0x10) == 0 && !*(_QWORD *)(i + 176) )
        {
          if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
          {
            v4 = 1;
            v3 = (*(_DWORD *)(i + 184) & 2u) >> 1;
            *(_DWORD *)(i + 184) &= 0xFFFFFFFC;
            v13 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v16) = v14;
              LOBYTE(v17) = v13;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v17,
                v16,
                *(_QWORD *)(v15 + 19392),
                4,
                1,
                38,
                (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
                i);
            }
            break;
          }
          if ( !*((_DWORD *)a1 + 279) )
            rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(a1);
        }
      }
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 )
    {
      if ( v3 )
      {
        RIMLockExclusive((__int64)v2);
        *((_DWORD *)a1 + 269) |= 2u;
      }
      rimDoRimDevChange((__int64)a1, i, 3u);
      RIMFreeDev(a1, (struct RIMDEV *)i);
      if ( v3 )
      {
        *((_DWORD *)a1 + 269) &= ~2u;
        RIMUnlockExclusive((__int64)v2);
      }
      continue;
    }
    break;
  }
}
