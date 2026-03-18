/*
 * XREFs of DrvGetHDEV @ 0x140016460
 * Callers:
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x140023540 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 */

PDEV *__fastcall DrvGetHDEV(const UNICODE_STRING *a1)
{
  PDEV *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DeviceFromName; // rbp
  __int64 v5; // rdi
  HSEMAPHORE v6; // rbx
  PDEV *i; // rdi
  __int64 v8; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    if ( DeviceFromName )
    {
      v5 = *(_QWORD *)(W32GetSessionState(v3, v2) + 88);
      v6 = *(HSEMAPHORE *)v5;
      GreAcquireSemaphoreInternal(*(HSEMAPHORE *)v5);
      GrepAcquireLockValidate<19>();
      for ( i = *(PDEV **)(v5 + 3848); i; i = *(PDEV **)i )
      {
        v8 = *((_QWORD *)i + 321);
        if ( v8 && v8 == DeviceFromName && (*((_DWORD *)i + 10) & 0x400) == 0 )
        {
          PDEV::IncrementClientReferenceCount(i);
          v1 = i;
          break;
        }
      }
      if ( v6 )
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)v6);
    }
  }
  return v1;
}
