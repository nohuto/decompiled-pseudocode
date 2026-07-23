/*
 * XREFs of RtlCheckHeldCriticalSections @ 0x1800EDA90
 * Callers:
 *     RtlCheckForOrphanedCriticalSections @ 0x1800EDA60 (RtlCheckForOrphanedCriticalSections.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpGetStackTraceAddressEx @ 0x1800F0600 (RtlpGetStackTraceAddressEx.c)
 *     RtlApplicationVerifierStop @ 0x180130220 (RtlApplicationVerifierStop.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 */

void __fastcall RtlCheckHeldCriticalSections(HANDLE ThreadHandle, _QWORD *a2)
{
  void *UniqueThread; // r14
  _UNKNOWN **i; // r12
  _UNKNOWN **v6; // rsi
  __int64 v7; // r15
  _QWORD *j; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-128h]
  __int64 StackTraceAddress; // [rsp+40h] [rbp-118h]
  __int128 ThreadInformation; // [rsp+78h] [rbp-E0h] BYREF
  _QWORD *v14; // [rsp+88h] [rbp-D0h]
  __int128 v15; // [rsp+90h] [rbp-C8h]
  __int128 v16; // [rsp+A0h] [rbp-B8h]
  __int64 v17; // [rsp+B0h] [rbp-A8h]
  __int128 v18; // [rsp+B8h] [rbp-A0h]
  __int128 v19; // [rsp+C8h] [rbp-90h]
  __int128 v20; // [rsp+D8h] [rbp-80h]
  __int128 v21; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v22; // [rsp+F8h] [rbp-60h]
  __int64 v23; // [rsp+108h] [rbp-50h]
  int v24; // [rsp+110h] [rbp-48h]
  int v25; // [rsp+170h] [rbp+18h] BYREF
  void *v26; // [rsp+178h] [rbp+20h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v18 = 0LL;
  v20 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v25 = 0;
  ThreadInformation = 0LL;
  if ( RtlpCriticalSectionVerifier && !RtlpCsVerifyDoNotBreak && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( ThreadHandle == (HANDLE)-2LL )
    {
      if ( !NtCurrentTeb()->CountOfOwnedCriticalSections )
        return;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    }
    else
    {
      *(_QWORD *)&ThreadInformation = &v25;
      *((_QWORD *)&ThreadInformation + 1) = 0x40000006CLL;
      if ( ZwQueryInformationThread(ThreadHandle, ThreadTebInformation, &ThreadInformation, 0x10u, 0LL) < 0
        || !v25
        || ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, &v21, 0x30u, 0LL) < 0 )
      {
        return;
      }
      UniqueThread = (void *)*((_QWORD *)&v22 + 1);
    }
    v26 = UniqueThread;
    RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
    for ( i = (_UNKNOWN **)RtlCriticalSectionList; i != &RtlCriticalSectionList; i = (_UNKNOWN **)*i )
    {
      v6 = i - 2;
      v7 = (__int64)*(i - 1);
      if ( a2 )
      {
        for ( j = a2; ; ++j )
        {
          v14 = j;
          v9 = *j;
          if ( !*j )
            break;
          if ( v7 == v9 )
          {
            if ( v9 )
              goto LABEL_24;
            break;
          }
        }
      }
      v15 = *(_OWORD *)v7;
      v16 = *(_OWORD *)(v7 + 16);
      v17 = *(_QWORD *)(v7 + 32);
      if ( (_UNKNOWN **)v15 == v6 )
      {
        if ( (void *)v16 == UniqueThread )
        {
          StackTraceAddress = RtlpGetStackTraceAddressEx(*((unsigned __int16 *)v6 + 1), *((unsigned __int16 *)v6 + 22));
          RtlApplicationVerifierStop(
            512,
            (unsigned int)"Thread is in a state in which it cannot own a critical section",
            (_DWORD)UniqueThread,
            (unsigned int)"Thread identifier",
            v7,
            (__int64)"Critical section address",
            (__int64)(i - 2),
            (__int64)"Critical section debug info address",
            StackTraceAddress,
            (__int64)"Initialization stack trace. Use dps to dump it if non-NULL.");
        }
      }
      else
      {
        v18 = *(_OWORD *)v15;
        v19 = *(_OWORD *)(v15 + 16);
        v20 = *(_OWORD *)(v15 + 32);
        v10 = RtlpGetStackTraceAddressEx(WORD1(v18), WORD6(v20));
        v11 = RtlpGetStackTraceAddressEx(*((unsigned __int16 *)i - 7), *((unsigned __int16 *)i + 14));
        RtlApplicationVerifierStop(
          515,
          (unsigned int)"double initialized or corrupted critical section",
          v7,
          (unsigned int)"Critical section address.",
          (__int64)(i - 2),
          (__int64)"Address of the debug info found in the active list.",
          v11,
          (__int64)"First initialization stack trace. Use dps to dump it if non-NULL.",
          v10,
          (__int64)"Second initialization stack trace. Use dps to dump it if non-NULL.");
      }
LABEL_24:
      ;
    }
    RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  }
}
