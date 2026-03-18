/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1401C9CC0
 * Callers:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6978 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140023454 (--$GreAcquireSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 *i; // r9
  _DWORD *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi

  v4 = **(_QWORD **)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))EngAcquireSemaphoreShared, v4);
  for ( i = *(__int64 **)(*(_QWORD *)(W32GetSessionState(v5) + 88) + 3848LL); i; i = (__int64 *)*i )
  {
    if ( (i[5] & 0x401) == 1 )
    {
      v7 = (_DWORD *)i[321];
      if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v8 = v7[40];
        if ( (v8 & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (v8 & 4) != 0 )
              goto LABEL_8;
          }
          else if ( *(_DWORD *)(a1 + 8) == v7[60] && *(_DWORD *)(a1 + 12) == v7[61] && *(_DWORD *)(a1 + 16) == v7[62] )
          {
LABEL_8:
            *(_QWORD *)(a1 + 20) = i[315];
            *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 632);
            break;
          }
        }
      }
    }
  }
  v9 = i == 0LL ? 0xC000000D : 0;
  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v4);
  return v9;
}
