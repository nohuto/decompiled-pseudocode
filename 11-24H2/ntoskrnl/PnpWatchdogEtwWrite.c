/*
 * XREFs of PnpWatchdogEtwWrite @ 0x1404C2730
 * Callers:
 *     PnpWatchdogSecondChanceCallback @ 0x1405A2730 (PnpWatchdogSecondChanceCallback.c)
 *     PnpWatchdogFirstChanceCallback @ 0x14071FFD0 (PnpWatchdogFirstChanceCallback.c)
 *     PnpDisableWatchdog @ 0x1409ED880 (PnpDisableWatchdog.c)
 * Callees:
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x1405A2074 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     McTemplateK0izzxqjddjz_EtwWriteTransfer @ 0x1405A2178 (McTemplateK0izzxqjddjz_EtwWriteTransfer.c)
 *     PnpTraceWatchdogViolation @ 0x1405A626C (PnpTraceWatchdogViolation.c)
 */

char __fastcall PnpWatchdogEtwWrite(__int64 a1, int a2)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int16 *v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // r11
  int v19; // ecx
  __int64 *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  _QWORD v24[2]; // [rsp+70h] [rbp-18h] BYREF

  v24[0] = 0x20000LL;
  v24[1] = &SourceString;
  v4 = 0LL;
  v5 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)a1;
  v6 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
  v7 = v5 / 0x2710;
  v8 = *(_DWORD *)(a1 + 16) - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            goto LABEL_43;
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        }
        else
        {
          v13 = *(_QWORD *)(a1 + 24);
          v12 = *(_QWORD *)(v13 + 24);
          v4 = *(_QWORD *)(v13 + 8);
        }
      }
      else
      {
        v12 = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
        v4 = **(_QWORD **)(a1 + 24);
      }
    }
    else
    {
      v12 = *(_QWORD *)&PnpDeviceActionThread;
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    }
  }
  else
  {
    v12 = *(_QWORD *)&PnpDeviceEventThread;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    if ( v14 )
      v4 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
  }
  LOBYTE(CurrentThread) = a1 + 40;
  v16 = &PnpEmptyUnicodeString;
  if ( *(_WORD *)(a1 + 40) )
    v16 = (__int16 *)(a1 + 40);
  if ( v4 )
    v17 = (_QWORD *)(v4 + 40);
  else
    v17 = v24;
  if ( v12 )
  {
    v18 = *(_QWORD *)(v12 + 1296);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v18 = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      LOBYTE(CurrentThread) = a2 - 2;
      if ( (unsigned int)(a2 - 2) <= 1 )
      {
        BYTE8(v6) = a2 == 2;
        LOBYTE(CurrentThread) = PnpTraceWatchdogViolation(
                                  *(_DWORD *)(a1 + 16),
                                  DWORD2(v6),
                                  v7,
                                  (_DWORD)v17,
                                  (__int64)v16);
        *(_BYTE *)(a1 + 33) = 1;
      }
      return (char)CurrentThread;
    }
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      v22 = *(_QWORD *)(a1 + 24);
      if ( (byte_140EEFF64 & 1) != 0 )
        LOBYTE(CurrentThread) = McTemplateK0izzxqjddjz_EtwWriteTransfer(
                                  (int)v22 + 44,
                                  (unsigned int)KMPnPEvt_Watchdog_EventWorker_Stop,
                                  v7,
                                  v18,
                                  v17[1],
                                  *((_QWORD *)v16 + 1),
                                  v7,
                                  *(_DWORD *)(v22 + 20),
                                  v22 + 28,
                                  *(_DWORD *)(v22 + 16),
                                  *(_DWORD *)(v22 + 24),
                                  v22 + 44,
                                  *(_QWORD *)(v22 + 72));
      return (char)CurrentThread;
    }
    v19 = *(_DWORD *)(a1 + 16) - 2;
    if ( *(_DWORD *)(a1 + 16) == 2 )
    {
      if ( (byte_140EEFF64 & 1) == 0 )
        return (char)CurrentThread;
      v20 = KMPnPEvt_Watchdog_CompletionQueue_Stop;
      goto LABEL_30;
    }
    v19 = *(_DWORD *)(a1 + 16) - 3;
    if ( *(_DWORD *)(a1 + 16) == 3 )
    {
      if ( (byte_140EEFF64 & 1) == 0 )
        return (char)CurrentThread;
      v20 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Stop;
      goto LABEL_30;
    }
    v19 = *(_DWORD *)(a1 + 16) - 4;
    if ( *(_DWORD *)(a1 + 16) == 4 )
    {
      if ( (byte_140EEFF64 & 1) == 0 )
        return (char)CurrentThread;
      v20 = KMPnPEvt_Watchdog_AddDevice_Stop;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(a1 + 16) == 5 )
    {
      if ( (byte_140EEFF64 & 1) == 0 )
        return (char)CurrentThread;
      v20 = KMPnPEvt_Watchdog_DriverEntry_Stop;
      goto LABEL_30;
    }
    goto LABEL_43;
  }
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    LOBYTE(CurrentThread) = byte_140EEFF63;
    v21 = *(_QWORD *)(a1 + 24);
    if ( byte_140EEFF63 < 0 )
      LOBYTE(CurrentThread) = McTemplateK0izzxqjddjz_EtwWriteTransfer(
                                (int)v21 + 44,
                                (unsigned int)KMPnPEvt_Watchdog_EventWorker_Start,
                                v7,
                                v18,
                                v17[1],
                                *((_QWORD *)v16 + 1),
                                v7,
                                *(_DWORD *)(v21 + 20),
                                v21 + 28,
                                *(_DWORD *)(v21 + 16),
                                *(_DWORD *)(v21 + 24),
                                v21 + 44,
                                *(_QWORD *)(v21 + 72));
    return (char)CurrentThread;
  }
  v19 = *(_DWORD *)(a1 + 16) - 2;
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    LOBYTE(CurrentThread) = byte_140EEFF63;
    if ( byte_140EEFF63 >= 0 )
      return (char)CurrentThread;
    v20 = KMPnPEvt_Watchdog_CompletionQueue_Start;
    goto LABEL_30;
  }
  v19 = *(_DWORD *)(a1 + 16) - 3;
  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    LOBYTE(CurrentThread) = byte_140EEFF63;
    if ( byte_140EEFF63 >= 0 )
      return (char)CurrentThread;
    v20 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Start;
    goto LABEL_30;
  }
  v19 = *(_DWORD *)(a1 + 16) - 4;
  if ( *(_DWORD *)(a1 + 16) != 4 )
  {
    if ( *(_DWORD *)(a1 + 16) == 5 )
    {
      LOBYTE(CurrentThread) = byte_140EEFF63;
      if ( byte_140EEFF63 < 0 )
      {
        v20 = KMPnPEvt_Watchdog_DriverEntry_Start;
LABEL_30:
        LOBYTE(CurrentThread) = McTemplateK0izzx_EtwWriteTransfer(
                                  v19,
                                  (_DWORD)v20,
                                  v7,
                                  v18,
                                  v17[1],
                                  *((_QWORD *)v16 + 1),
                                  v7);
        return (char)CurrentThread;
      }
      return (char)CurrentThread;
    }
LABEL_43:
    __fastfail(5u);
  }
  LOBYTE(CurrentThread) = byte_140EEFF63;
  if ( byte_140EEFF63 < 0 )
  {
    v20 = KMPnPEvt_Watchdog_AddDevice_Start;
    goto LABEL_30;
  }
  return (char)CurrentThread;
}
