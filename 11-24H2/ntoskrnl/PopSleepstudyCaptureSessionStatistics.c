/*
 * XREFs of PopSleepstudyCaptureSessionStatistics @ 0x140AB8D74
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopCalculateTotalHwDripsResidency @ 0x1404F609C (PopCalculateTotalHwDripsResidency.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1407665B4 (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceCsExitReason @ 0x1407666F8 (SshSessionManagerTraceCsExitReason.c)
 */

struct _KTHREAD *__fastcall PopSleepstudyCaptureSessionStatistics(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // r10d
  __int64 v11; // r14
  unsigned __int8 *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  int v17; // r10d
  unsigned __int8 *v18; // rbx
  __int64 v19; // rdx

  PopWdiCurrentScenario = (__int64)a2;
  PopWdiCurrentScenarioInstanceId = a3;
  memset_0(a5, 0, 0x1B0uLL);
  v8 = *a2 - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
  if ( *a2 == *(_QWORD *)&CPER_EMPTY_GUID.Data1 )
    v8 = a2[1] - *(_QWORD *)CPER_EMPTY_GUID.Data4;
  if ( v8 )
  {
    SshSessionManagerTraceCsEnterReason(&byte_140F0A370[112 * dword_140F0A368]);
  }
  else
  {
    v9 = 0LL;
    v10 = 1;
    v11 = 0LL;
    while ( v10 <= 2 )
    {
      v12 = &byte_140F0A370[112 * (((_BYTE)dword_140F0A368 - (_BYTE)v10) & 7)];
      *((_BYTE *)a5 + 388) = v12[58];
      v13 = *((_QWORD *)v12 + 12) - *((_QWORD *)v12 + 10);
      v14 = PopCalculateTotalHwDripsResidency(
              *((_QWORD *)v12 + 9),
              *((_QWORD *)v12 + 11),
              (*((_QWORD *)v12 + 3) - *((_QWORD *)v12 + 2)) / 0xAuLL);
      if ( *v16 == 2 )
      {
        *((_BYTE *)a5 + 288) = 1;
        v11 = (__int64)v16;
        *((_QWORD *)a5 + 40) = v15;
        *((_DWORD *)a5 + 82) = v16[10];
        *((_DWORD *)a5 + 84) = v16[12];
        *((_DWORD *)a5 + 83) = v16[11];
        *((_DWORD *)a5 + 85) = v16[13];
        *((_QWORD *)a5 + 52) = v13;
        *((_QWORD *)a5 + 53) = v14;
      }
      else if ( *v16 == 1 )
      {
        *((_QWORD *)a5 + 37) = v15;
        v9 = (__int64)v16;
        *((_DWORD *)a5 + 76) = v16[10];
        *((_DWORD *)a5 + 78) = v16[12];
        *((_DWORD *)a5 + 77) = v16[11];
        *((_DWORD *)a5 + 79) = v16[13];
        *((_QWORD *)a5 + 50) = v13;
        *((_QWORD *)a5 + 51) = v14;
        break;
      }
      v10 = v17 + 1;
    }
    v18 = &byte_140F0A370[112 * dword_140F0A368];
    SshSessionManagerTraceCsExitReason(v9, v11, (__int64)v18);
    if ( *(_DWORD *)v18 == 3 && qword_140E676F8 )
      guard_dispatch_icall_no_overrides(1LL, v19);
  }
  PopReleaseRwLock(&PopSleepstudySessionLock);
  PopCaptureSleepStudyStatistics(a2, a3, a4, (__int64)a5);
  if ( qword_140E676B0 )
    guard_dispatch_icall_no_overrides(a2, a3);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock);
}
