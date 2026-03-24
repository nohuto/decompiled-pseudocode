/*
 * XREFs of KeyboardAddDeviceEx @ 0x1C00105B0
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000E010 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000FAE0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C00054C0 (WPP_RECORDER_SF_S.c)
 *     KeyboardClassLogError @ 0x1C0005970 (KeyboardClassLogError.c)
 *     memmove @ 0x1C0007380 (memmove.c)
 *     KbdSendConnectRequest @ 0x1C0010850 (KbdSendConnectRequest.c)
 */

__int64 __fastcall KeyboardAddDeviceEx(KSPIN_LOCK *a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v6; // edi
  KSPIN_LOCK *v7; // rsi
  __int64 i; // r15
  void *Pool2; // r13
  __int64 v11; // rcx
  char v12; // cl
  int v13; // edx
  int v14; // r8d
  int ValueData; // [rsp+20h] [rbp-68h]

  v6 = 0;
  KeInitializeSpinLock(a1 + 9);
  v7 = *(KSPIN_LOCK **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v7 = a1;
  a1[1] = *v7;
  if ( *(KSPIN_LOCK **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == a1 )
    goto LABEL_19;
  if ( *(KSPIN_LOCK **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v7 )
  {
    v6 = KbdSendConnectRequest(a1);
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    for ( i = 0LL; (unsigned int)i < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext); i = (unsigned int)(i + 1) )
    {
      if ( *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * i + 19) )
      {
        *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * i + 19) = 0;
        break;
      }
    }
    if ( (_DWORD)i == LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      Pool2 = (void *)ExAllocatePool2(
                        64LL,
                        24LL * (unsigned int)(LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 1),
                        1130652235LL);
      if ( !Pool2 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        return 3221225626LL;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        memmove(Pool2, WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext));
        ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
      }
      ++LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)Pool2;
    }
    *((_DWORD *)a1 + 49) = i;
    v11 = 24 * i;
    *(_QWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v11 + 8) = a1;
    *(_QWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + v11) = a3;
    v12 = *(_BYTE *)(*a1 + 76);
    if ( *(char *)(*v7 + 76) >= v12 )
      v12 = *(_BYTE *)(*v7 + 76);
    *(_BYTE *)(*v7 + 76) = v12;
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
LABEL_19:
    if ( a1 == v7 )
      goto LABEL_20;
    return (unsigned int)v6;
  }
  if ( a1 == v7 )
  {
    KbdSendConnectRequest(a1);
LABEL_20:
    v6 = RtlWriteRegistryValue(4u, DestinationString.Buffer, a2, 1u, P, (unsigned __int16)word_1C000B388 + 2);
    if ( v6 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 17, ValueData, (__int64)a2);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 16, ValueData, (__int64)a2);
      }
      KeyboardClassLogError(a1, -2147155963, 10014, v6, 0, 0LL, 0);
    }
  }
  return (unsigned int)v6;
}
