/*
 * XREFs of PpmEventTracePreVetoAccounting @ 0x140480A8C
 * Callers:
 *     PpmEventPlatformVetoRundown @ 0x14048073C (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x14048088C (PpmEventProcessorVetoRundown.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTracePreVetoAccounting(
        PCEVENT_DESCRIPTOR EventDescriptor,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        __int64 a3)
{
  __int64 v6; // rbx
  _DWORD *Pool2; // rdi
  KIRQL v8; // r12
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // r10d
  struct _EVENT_DATA_DESCRIPTOR v15; // xmm0
  __int64 v16; // r10
  int v17; // [rsp+40h] [rbp-19h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v20; // [rsp+60h] [rbp+7h]
  int v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+6Ch] [rbp+13h]
  _DWORD *v23; // [rsp+70h] [rbp+17h]
  int v24; // [rsp+78h] [rbp+1Fh]
  int v25; // [rsp+7Ch] [rbp+23h]

  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      if ( a3 )
      {
        v6 = *(unsigned int *)(a3 + 28);
        if ( (_DWORD)v6 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, (unsigned int)(20 * v6), 0x654D5050u);
          if ( Pool2 )
          {
            v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
            v10 = 0LL;
            v17 = 0;
            v11 = 0LL;
            v12 = v6;
            do
            {
              v13 = *(_QWORD *)(a3 + 32);
              v14 = *(_DWORD *)(v11 + v13 + 16);
              if ( v14 )
              {
                Pool2[5 * v10] = v14;
                *(_QWORD *)&Pool2[5 * v17 + 1] = *(_QWORD *)(v11 + v13 + 24);
                *(_QWORD *)&Pool2[5 * v17 + 3] = *(_QWORD *)(v11 + v13 + 40);
                v16 = *(_QWORD *)(v11 + v13 + 32);
                if ( v16 )
                  *(_QWORD *)&Pool2[5 * v17 + 3] += InterruptTimePrecise.QuadPart - v16;
                v10 = (unsigned int)++v17;
              }
              v11 += 64LL;
              --v12;
            }
            while ( v12 );
            KeReleaseSpinLock(&PpmIdleVetoLock, v8);
            v15 = *a2;
            v22 = 0;
            v25 = 0;
            v20 = &v17;
            UserData = v15;
            v21 = 4;
            v23 = Pool2;
            v24 = 20 * v17;
            EtwWriteEx(PpmEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
            ExFreePoolWithTag(Pool2, 0x654D5050u);
          }
        }
      }
    }
  }
}
