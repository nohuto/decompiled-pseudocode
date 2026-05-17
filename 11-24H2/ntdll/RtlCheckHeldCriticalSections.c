/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x1800F31A0
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x1800F3170 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpGetStackTraceAddressEx @ 0x1800F60A0 (RtlpGetStackTraceAddressEx.c)
 *     RtlApplicationVerifierStop @ 0x180131FF0 (RtlApplicationVerifierStop.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 */

struct _PEB *__fastcall RtlCheckHeldCriticalSections(__int64 a1, _QWORD *a2)
{
  struct _PEB *result; // rax
  void *UniqueThread; // r14
  _UNKNOWN **i; // r12
  _UNKNOWN **v7; // rsi
  __int64 v8; // r15
  _QWORD *j; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-128h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-118h]
  __int128 v14; // [rsp+78h] [rbp-E0h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp-D0h]
  __int128 v16; // [rsp+90h] [rbp-C8h]
  __int128 v17; // [rsp+A0h] [rbp-B8h]
  __int64 v18; // [rsp+B0h] [rbp-A8h]
  __int128 v19; // [rsp+B8h] [rbp-A0h]
  __int128 v20; // [rsp+C8h] [rbp-90h]
  __int128 v21; // [rsp+D8h] [rbp-80h]
  __int128 v22; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v23; // [rsp+F8h] [rbp-60h]
  __int64 v24; // [rsp+108h] [rbp-50h]
  int v25; // [rsp+110h] [rbp-48h]
  int v26; // [rsp+170h] [rbp+18h] BYREF
  void *v27; // [rsp+178h] [rbp+20h]

  result = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v26 = 0;
  v14 = 0LL;
  if ( RtlpCriticalSectionVerifier )
  {
    if ( !RtlpCsVerifyDoNotBreak )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
      {
        if ( a1 == -2 )
        {
          result = (struct _PEB *)NtCurrentTeb();
          if ( !HIDWORD(result->ApiSetMap) )
            return result;
          UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        }
        else
        {
          *(_QWORD *)&v14 = &v26;
          *((_QWORD *)&v14 + 1) = 0x40000006CLL;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 26LL, &v14, 16LL, 0LL);
          if ( (int)result < 0 )
            return result;
          if ( !v26 )
            return result;
          result = (struct _PEB *)ZwQueryInformationThread(a1, 0LL, &v22, 48LL, 0LL);
          if ( (int)result < 0 )
            return result;
          UniqueThread = (void *)*((_QWORD *)&v23 + 1);
        }
        v27 = UniqueThread;
        RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
        for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
        {
          v7 = i - 2;
          v8 = (__int64)*(i - 1);
          if ( a2 )
          {
            for ( j = a2; ; ++j )
            {
              v15 = j;
              v10 = *j;
              if ( !*j )
                break;
              if ( v8 == v10 )
              {
                if ( v10 )
                  goto LABEL_24;
                break;
              }
            }
          }
          v16 = *(_OWORD *)v8;
          v17 = *(_OWORD *)(v8 + 16);
          v18 = *(_QWORD *)(v8 + 32);
          if ( (_UNKNOWN **)v16 == v7 )
          {
            if ( (void *)v17 == UniqueThread )
            {
              StackTraceAddress = RtlpGetStackTraceAddressEx(
                                    *((unsigned __int16 *)v7 + 1),
                                    *((unsigned __int16 *)v7 + 22));
              RtlApplicationVerifierStop(
                512,
                (unsigned int)"Thread is in a state in which it cannot own a critical section",
                (_DWORD)UniqueThread,
                (unsigned int)"Thread identifier",
                v8,
                (__int64)"Critical section address",
                (__int64)(i - 2),
                (__int64)"Critical section debug info address",
                StackTraceAddress,
                (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
            }
          }
          else
          {
            v19 = *(_OWORD *)v16;
            v20 = *(_OWORD *)(v16 + 16);
            v21 = *(_OWORD *)(v16 + 32);
            v11 = RtlpGetStackTraceAddressEx(WORD1(v19), WORD6(v21));
            v12 = RtlpGetStackTraceAddressEx(*((unsigned __int16 *)i - 7), *((unsigned __int16 *)i + 14));
            RtlApplicationVerifierStop(
              515,
              (unsigned int)"double initialized or corrupted critical section",
              v8,
              (unsigned int)"Critical section address.",
              (__int64)(i - 2),
              (__int64)"Address of the debug info found in the active list.",
              v12,
              (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
              v11,
              (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
          }
LABEL_24:
          ;
        }
        return (struct _PEB *)RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
      }
    }
  }
  return result;
}
