/*
 * XREFs of Interrupter_D0ExitPreInterruptsDisabled @ 0x14002227C
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140037D50 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Interrupter_ReleaseEventRingLock @ 0x140022364 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140022440 (Interrupter_AcquireEventRingLock.c)
 */

__int64 __fastcall Interrupter_D0ExitPreInterruptsDisabled(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  char v6; // al
  __int64 v7; // rdx
  int v8; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 92); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(v3 + 8 * i);
    if ( v4 && *(_QWORD *)(v4 + 216) )
    {
      v6 = Interrupter_AcquireEventRingLock(*(_QWORD *)(v3 + 8 * i));
      *(_DWORD *)(v4 + 112) |= 2u;
      LOBYTE(v7) = v6;
      Interrupter_ReleaseEventRingLock(v4, v7);
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject((PVOID)(v4 + 192), Executive, 0, 0, &Timeout) == 258 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v8,
            9,
            36,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            i);
        }
      }
    }
  }
  return 0LL;
}
