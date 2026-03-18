/*
 * XREFs of ?OnHideAppStartCursor@@YAXXZ @ 0x1C00EF020
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00F0570 (zzzUpdateCursorImage.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void OnHideAppStartCursor(void)
{
  AtomicExecutionCheck *v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _W32PROCESS **v7; // r10
  struct _W32PROCESS *v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _DWORD *v14; // rbx
  struct _W32PROCESS **v15; // r11

  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
  {
    v0 = (AtomicExecutionCheck *)gptiRit;
    if ( gptiCurrent != gptiRit )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2552LL);
    AtomicExecutionCheck::EnforceConsistency(v0);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v2, v1, v3);
    v7 = &gpwpCalcFirst;
    ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
    v8 = gpwpCalcFirst;
    HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gpwpCalcFirst )
      goto LABEL_5;
    while ( 1 )
    {
      v14 = (_DWORD *)((char *)v8 + 12);
      v5 = *((unsigned int *)v8 + 3);
      if ( (*((_DWORD *)v8 + 3) & 6) == 4 )
      {
        v6 = *((unsigned int *)v8 + 6);
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) < (unsigned int)v6 )
          HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = *((_DWORD *)v8 + 6);
        v15 = (struct _W32PROCESS **)((char *)v8 + 32);
        v8 = (struct _W32PROCESS *)*((_QWORD *)v8 + 4);
        if ( (int)v9 - (int)v6 <= 0 )
        {
          v7 = v15;
          goto LABEL_14;
        }
        v5 = (unsigned int)v5 & 0xFFFFFFFB;
        *v14 = v5;
      }
      else
      {
        v8 = (struct _W32PROCESS *)*((_QWORD *)v8 + 4);
      }
      *v7 = v8;
LABEL_14:
      if ( !v8 )
      {
        if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) > (unsigned int)v9 )
        {
LABEL_6:
          zzzUpdateCursorImage(v8, v5, v6);
          v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
          --*(_DWORD *)(v13 + 48);
          return;
        }
LABEL_5:
        HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
        goto LABEL_6;
      }
    }
  }
}
