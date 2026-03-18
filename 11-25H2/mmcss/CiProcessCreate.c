/*
 * XREFs of CiProcessCreate @ 0x1C000DAC0
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000C240 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 * Callees:
 *     memset @ 0x1C0005300 (memset.c)
 *     CiProcessComparer @ 0x1C000DDB0 (CiProcessComparer.c)
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiProcessCreate(volatile signed __int64 **a1)
{
  volatile signed __int64 *Pool2; // rax
  volatile signed __int64 *v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rax
  volatile signed __int64 *v9; // rbx
  __int64 result; // rax

  Pool2 = (volatile signed __int64 *)ExAllocatePool2(65LL, 96LL, 1349739341LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset((void *)Pool2, 0, 0x60uLL);
  *(_DWORD *)v3 = 1;
  *((_QWORD *)v3 + 4) = 1LL;
  *((_QWORD *)v3 + 10) = PsGetCurrentProcess();
  *((_QWORD *)v3 + 9) = v3 + 8;
  *((_QWORD *)v3 + 8) = v3 + 8;
  ObfReferenceObject(*((PVOID *)v3 + 10));
  CiSystemAcquirePushLock(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  v4 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  LOBYTE(v5) = 0;
  v6 = *((_QWORD *)v3 + 10);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
  {
LABEL_9:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue.Busy, v4, v5, v3 + 5);
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    goto LABEL_13;
  }
  while ( 1 )
  {
    v7 = CiProcessComparer(v6, v4, v5);
    if ( v7 > 0 )
    {
      v8 = (_QWORD *)v4[1];
      if ( !v8 )
      {
        v5 = 1LL;
        goto LABEL_9;
      }
      goto LABEL_6;
    }
    if ( v7 >= 0 )
      break;
    v8 = (_QWORD *)*v4;
    if ( !*v4 )
    {
      LOBYTE(v5) = 0;
      goto LABEL_9;
    }
LABEL_6:
    v4 = v8;
  }
  v9 = v4 - 5;
  if ( _InterlockedIncrement64(v9 + 4) <= 1 )
    __fastfail(0xEu);
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v9 )
  {
    ObfDereferenceObject(*((PVOID *)v3 + 10));
    ExFreePoolWithTag((PVOID)v3, 0x5073634Du);
    v3 = v9;
  }
LABEL_13:
  result = 0LL;
  *a1 = v3;
  return result;
}
