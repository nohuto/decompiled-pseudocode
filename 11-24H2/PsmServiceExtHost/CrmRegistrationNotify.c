/*
 * XREFs of CrmRegistrationNotify @ 0x18002F240
 * Callers:
 *     CrmActivityStart @ 0x18002D8A0 (CrmActivityStart.c)
 *     CrmActivityUpdate @ 0x18002E0A0 (CrmActivityUpdate.c)
 *     CrmRegistrationReadyQueueRemoveAndNotify @ 0x18002E814 (CrmRegistrationReadyQueueRemoveAndNotify.c)
 *     CrmGlobalsPeriodicNotifier @ 0x1800309D0 (CrmGlobalsPeriodicNotifier.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmLogRegistrationNotify @ 0x18002F488 (CrmLogRegistrationNotify.c)
 *     CrmActivityTelemetryUpdate @ 0x18002F858 (CrmActivityTelemetryUpdate.c)
 */

__int64 __fastcall CrmRegistrationNotify(__int64 a1, __int64 a2, int a3)
{
  int v4; // ebp
  unsigned int v5; // esi
  int v7; // eax
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  v7 = *(_DWORD *)(a2 + 124);
  if ( v11 != v7 )
  {
    v5 = 1;
    if ( v7 )
    {
      if ( v7 == 1 && *(_DWORD *)(a2 + 64) == 1301 )
      {
        CrmActivityTelemetryUpdate(a2, 1LL);
        *(_QWORD *)(a2 + 256) = -1LL;
        *(_QWORD *)(a2 + 280) = -1LL;
      }
    }
    else if ( *(_DWORD *)(a2 + 64) == 1301 )
    {
      CrmActivityTelemetryUpdate(a2, 0LL);
      *(_QWORD *)(a2 + 248) = -1LL;
      *(_QWORD *)(a2 + 272) = -1LL;
    }
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        if ( *(_DWORD *)(a2 + 64) == 1301 )
        {
          UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
          *(_QWORD *)(a2 + 256) = UnbiasedInterruptTimeMs64;
          *(_QWORD *)(a2 + 280) = UnbiasedInterruptTimeMs64;
          ++*(_DWORD *)(a2 + 348);
          RtlAcquireSRWLockExclusive(&unk_1800EAA90);
          GetCurrentThreadId();
          ++dword_1800EAB0C;
          dword_1800EAA98 = 0;
          RtlReleaseSRWLockExclusive(&unk_1800EAA90);
        }
        *(_DWORD *)(a2 + 360) = 1;
      }
    }
    else
    {
      if ( *(_DWORD *)(a2 + 64) == 1301 )
      {
        v10 = CempQueryUnbiasedInterruptTimeMs64();
        *(_QWORD *)(a2 + 248) = v10;
        *(_QWORD *)(a2 + 272) = v10;
        ++*(_DWORD *)(a2 + 344);
        RtlAcquireSRWLockExclusive(&unk_1800EAA90);
        GetCurrentThreadId();
        ++dword_1800EAB08;
        dword_1800EAA98 = 0;
        RtlReleaseSRWLockExclusive(&unk_1800EAA90);
      }
      *(_DWORD *)(a2 + 356) = 1;
    }
    if ( *(_DWORD *)(a2 + 144) || *(_DWORD *)(a2 + 148) )
      v4 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 144), 0LL, &v11, 4LL, 0LL);
    *(_DWORD *)(a2 + 124) = v11;
  }
  *(_DWORD *)(a1 + 8) = 0;
  RtlReleaseSRWLockExclusive(a1);
  CrmLogRegistrationNotify(a1, a2, v5, v11, v4);
  return v5;
}
