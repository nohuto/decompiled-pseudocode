/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1401539E0
 * Callers:
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     UserIsConsoleConnection @ 0x140013950 (UserIsConsoleConnection.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserIsDisconnectConnection @ 0x14004DE60 (UserIsDisconnectConnection.c)
 *     DrvGetDisplayDriverNames @ 0x14011BBE0 (DrvGetDisplayDriverNames.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014273C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     HDXDrvEscape @ 0x1401CE760 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  unsigned int v8; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 SessionState; // rax
  unsigned int v16; // r12d
  unsigned int *DisplayDriverNames; // rbx
  unsigned int i; // r14d
  unsigned __int16 *v19; // rax
  __int64 v20; // r8
  int v21; // edx
  int v22; // ecx
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v8 = 0;
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 28543;
  if ( *(_DWORD *)(W32GetUserSessionState(v11) + 68960) )
  {
    WdLogSingleEntry1(5LL, a4);
    result = 1LL;
    WdLogGlobalForLineNumber = 28548;
  }
  else if ( UserIsDisconnectConnection(v12) || UserIsConsoleConnection() || !a3 )
  {
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), a4, a5, a6);
  }
  else
  {
    SessionState = W32GetSessionState(v14);
    SEMOBJ<1>::SEMOBJ<1>(&v25, *(_QWORD **)(SessionState + 88));
    v16 = 0;
    if ( *(_DWORD *)(a1 + 20) )
    {
      while ( 1 )
      {
        v24 = 56LL * v16;
        v23 = *(_QWORD *)(*(_QWORD *)(v24 + a1 + 40) + 2568LL);
        DisplayDriverNames = DrvGetDisplayDriverNames(v23);
        if ( DisplayDriverNames )
          break;
LABEL_18:
        if ( ++v16 >= *(_DWORD *)(a1 + 20) )
          goto LABEL_21;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *DisplayDriverNames )
        {
          GreDeleteFastMutex((char *)DisplayDriverNames);
          goto LABEL_18;
        }
        v19 = *(unsigned __int16 **)&DisplayDriverNames[4 * i + 4];
        v20 = a3 - (_QWORD)v19;
        do
        {
          v21 = *(unsigned __int16 *)((char *)v19 + v20);
          v22 = *v19 - v21;
          if ( v22 )
            break;
          ++v19;
        }
        while ( v21 );
        if ( !v22 && (*(_DWORD *)(v23 + 160) & 0x4000000) != 0 )
        {
          v6 = *(_QWORD *)(v24 + a1 + 40);
          v8 = HDXDrvEscape(v6, a4, a5, a6);
          if ( v8 != 1 )
            break;
        }
      }
      GreDeleteFastMutex((char *)DisplayDriverNames);
    }
LABEL_21:
    WdLogSingleEntry1(5LL, v6);
    WdLogGlobalForLineNumber = 28605;
    if ( v25 )
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v25);
    return v8;
  }
  return result;
}
