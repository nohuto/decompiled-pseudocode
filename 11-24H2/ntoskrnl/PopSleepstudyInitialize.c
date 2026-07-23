/*
 * XREFs of PopSleepstudyInitialize @ 0x140C68FEC
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404AAF60 (SleepstudyHelperCreateLibraryEx.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140A74190 (PopSleepstudySendSessionChangeWnf.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140AB62A0 (SleepstudyHelperCreateBlockerData.c)
 */

char __fastcall PopSleepstudyInitialize(int a1)
{
  unsigned __int8 *v1; // rbx
  int Library; // eax
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  LARGE_INTEGER PerformanceCounter[2]; // [rsp+38h] [rbp-79h] BYREF
  GUID v10; // [rsp+48h] [rbp-69h] BYREF
  _WORD v11[2]; // [rsp+58h] [rbp-59h] BYREF
  int v12; // [rsp+5Ch] [rbp-55h]
  const wchar_t *v13; // [rsp+60h] [rbp-51h]
  void *v14; // [rsp+68h] [rbp-49h]
  NTSTATUS (__fastcall *v15)(unsigned int *, UNICODE_STRING *); // [rsp+70h] [rbp-41h]
  __int64 v16; // [rsp+78h] [rbp-39h]
  const wchar_t *v17; // [rsp+80h] [rbp-31h]
  void *v18; // [rsp+88h] [rbp-29h]
  NTSTATUS (__fastcall *v19)(_QWORD *, UNICODE_STRING *); // [rsp+90h] [rbp-21h]
  __int64 v20; // [rsp+98h] [rbp-19h]
  const wchar_t *v21; // [rsp+A0h] [rbp-11h]
  void *v22; // [rsp+A8h] [rbp-9h]
  NTSTATUS (__fastcall *v23)(unsigned int *, UNICODE_STRING *); // [rsp+B0h] [rbp-1h]
  __int64 v24; // [rsp+B8h] [rbp+7h]
  const wchar_t *v25; // [rsp+C0h] [rbp+Fh]
  void *v26; // [rsp+C8h] [rbp+17h]
  NTSTATUS (__fastcall *v27)(_QWORD *, UNICODE_STRING *); // [rsp+D0h] [rbp+1Fh]
  __int64 v28; // [rsp+D8h] [rbp+27h]
  const wchar_t *v29; // [rsp+E0h] [rbp+2Fh]
  void *v30; // [rsp+E8h] [rbp+37h]
  NTSTATUS (__fastcall *v31)(unsigned int *, UNICODE_STRING *); // [rsp+F0h] [rbp+3Fh]

  v1 = &byte_140F0A370[112 * dword_140F0A368];
  if ( a1 )
  {
    PopSleepstudySendSessionChangeWnf(*((_QWORD *)v1 + 1), *(_DWORD *)v1, *((_DWORD *)v1 + 8));
    *(LONGLONG *)((char *)&PerformanceCounter[0].QuadPart + 4) = 1145918291LL;
    PerformanceCounter[0].LowPart = 1;
    Library = SleepstudyHelperCreateLibraryEx(PerformanceCounter, &PopSleepstudyMetadataLibraryHandle);
    if ( Library < 0 )
    {
      PopSleepstudyMetadataLibraryHandle = 0LL;
    }
    else
    {
      v12 = 0;
      v13 = L"Settings.IdleWakeSkipPolicy";
      v3 = 2 * wcslen(L"Settings.IdleWakeSkipPolicy");
      v15 = PopSleepstudyUlongFormatter;
      v16 = 0LL;
      v17 = L"Info.TotalWcmEngagedTime";
      if ( v3 >= 0xFFFE )
        LOWORD(v3) = -4;
      v11[0] = v3;
      v11[1] = v3 + 2;
      v14 = &unk_140F0AB60;
      v4 = 2 * wcslen(L"Info.TotalWcmEngagedTime");
      v19 = PopSleepstudyUlong64Formatter;
      if ( v4 >= 0xFFFE )
        LOWORD(v4) = -4;
      LOWORD(v16) = v4;
      WORD1(v16) = v4 + 2;
      v20 = 0LL;
      v18 = &unk_140F0AB68;
      v21 = L"Info.TotalWcmEngagedCount";
      v5 = 2 * wcslen(L"Info.TotalWcmEngagedCount");
      v23 = PopSleepstudyUlongFormatter;
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v20) = v5;
      WORD1(v20) = v5 + 2;
      v24 = 0LL;
      v22 = &unk_140F0AB70;
      v25 = L"Info.TotalNqmEngagedTime";
      v6 = 2 * wcslen(L"Info.TotalNqmEngagedTime");
      v27 = PopSleepstudyUlong64Formatter;
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
      LOWORD(v24) = v6;
      WORD1(v24) = v6 + 2;
      v28 = 0LL;
      v26 = &unk_140F0AB78;
      v29 = L"Info.TotalNqmEngagedCount";
      v7 = 2 * wcslen(L"Info.TotalNqmEngagedCount");
      v31 = PopSleepstudyUlongFormatter;
      v10 = GUID_SPR_SESSION_METADATA_CONTAINER;
      if ( v7 >= 0xFFFE )
        LOWORD(v7) = -4;
      LOWORD(v28) = v7;
      WORD1(v28) = v7 + 2;
      v30 = &unk_140F0AB80;
      LOBYTE(Library) = SleepstudyHelperCreateBlockerData(
                          PopSleepstudyMetadataLibraryHandle,
                          (__int128 *)&v10,
                          5u,
                          (__int64)v11,
                          (__int64 *)PerformanceCounter);
    }
  }
  else
  {
    qword_140F0A288 = 0LL;
    qword_140F0A2A8 = (__int64)PopSleepstudySessionContext;
    PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
    PopSleepstudySessionLock = 0LL;
    v1[35] = 0;
    *((_DWORD *)v1 + 8) &= 0xFF000000;
    *(_DWORD *)v1 = 0;
    *((LARGE_INTEGER *)v1 + 2) = RtlGetInterruptTimePrecise(PerformanceCounter);
    stru_140F0A348.Parameter = 0LL;
    stru_140F0A348.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
    stru_140F0A348.List.Flink = 0LL;
    word_140F0A2C2 = 0;
    LOBYTE(Library) = KiInitializeTimer2(
                        (unsigned __int64)&unk_140F0A2C0,
                        (__int64)PopSleepstudyScenarioStopTimerCallback,
                        0LL,
                        8);
  }
  return Library;
}
