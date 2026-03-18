/*
 * XREFs of PopSleepstudyInitialize @ 0x140C66E70
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x1403BF498 (KiInitializeTimer2.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404B06D0 (SleepstudyHelperCreateLibraryEx.c)
 *     wcslen @ 0x1404FFED0 (wcslen.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140A79E90 (PopSleepstudySendSessionChangeWnf.c)
 *     SleepstudyHelperCreateBlockerData @ 0x140ABB280 (SleepstudyHelperCreateBlockerData.c)
 */

char __fastcall PopSleepstudyInitialize(int a1)
{
  unsigned __int8 *v1; // rbx
  int v2; // eax
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  int v9; // [rsp+38h] [rbp-79h] BYREF
  __int64 v10; // [rsp+3Ch] [rbp-75h]
  GUID v11; // [rsp+48h] [rbp-69h] BYREF
  _WORD v12[2]; // [rsp+58h] [rbp-59h] BYREF
  int v13; // [rsp+5Ch] [rbp-55h]
  const wchar_t *v14; // [rsp+60h] [rbp-51h]
  void *v15; // [rsp+68h] [rbp-49h]
  NTSTATUS (__fastcall *v16)(unsigned int *, UNICODE_STRING *); // [rsp+70h] [rbp-41h]
  __int64 v17; // [rsp+78h] [rbp-39h]
  const wchar_t *v18; // [rsp+80h] [rbp-31h]
  void *v19; // [rsp+88h] [rbp-29h]
  NTSTATUS (__fastcall *v20)(_QWORD *, UNICODE_STRING *); // [rsp+90h] [rbp-21h]
  __int64 v21; // [rsp+98h] [rbp-19h]
  const wchar_t *v22; // [rsp+A0h] [rbp-11h]
  void *v23; // [rsp+A8h] [rbp-9h]
  NTSTATUS (__fastcall *v24)(unsigned int *, UNICODE_STRING *); // [rsp+B0h] [rbp-1h]
  __int64 v25; // [rsp+B8h] [rbp+7h]
  const wchar_t *v26; // [rsp+C0h] [rbp+Fh]
  void *v27; // [rsp+C8h] [rbp+17h]
  NTSTATUS (__fastcall *v28)(_QWORD *, UNICODE_STRING *); // [rsp+D0h] [rbp+1Fh]
  __int64 v29; // [rsp+D8h] [rbp+27h]
  const wchar_t *v30; // [rsp+E0h] [rbp+2Fh]
  void *v31; // [rsp+E8h] [rbp+37h]
  NTSTATUS (__fastcall *v32)(unsigned int *, UNICODE_STRING *); // [rsp+F0h] [rbp+3Fh]

  v1 = &byte_140F0A030[112 * dword_140F0A028];
  if ( a1 )
  {
    PopSleepstudySendSessionChangeWnf(*((_QWORD *)v1 + 1), *(_DWORD *)v1, *((_DWORD *)v1 + 8));
    v10 = 1145918291LL;
    v9 = 1;
    v2 = SleepstudyHelperCreateLibraryEx(&v9, &PopSleepstudyMetadataLibraryHandle);
    if ( v2 < 0 )
    {
      PopSleepstudyMetadataLibraryHandle = 0LL;
    }
    else
    {
      v13 = 0;
      v14 = L"Settings.IdleWakeSkipPolicy";
      v3 = 2 * wcslen(L"Settings.IdleWakeSkipPolicy");
      v16 = PopSleepstudyUlongFormatter;
      v17 = 0LL;
      v18 = L"Info.TotalWcmEngagedTime";
      if ( v3 >= 0xFFFE )
        LOWORD(v3) = -4;
      v12[0] = v3;
      v12[1] = v3 + 2;
      v15 = &unk_140F0A7A0;
      v4 = 2 * wcslen(L"Info.TotalWcmEngagedTime");
      v20 = PopSleepstudyUlong64Formatter;
      if ( v4 >= 0xFFFE )
        LOWORD(v4) = -4;
      LOWORD(v17) = v4;
      WORD1(v17) = v4 + 2;
      v21 = 0LL;
      v19 = &unk_140F0A7A8;
      v22 = L"Info.TotalWcmEngagedCount";
      v5 = 2 * wcslen(L"Info.TotalWcmEngagedCount");
      v24 = PopSleepstudyUlongFormatter;
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v21) = v5;
      WORD1(v21) = v5 + 2;
      v25 = 0LL;
      v23 = &unk_140F0A7B0;
      v26 = L"Info.TotalNqmEngagedTime";
      v6 = 2 * wcslen(L"Info.TotalNqmEngagedTime");
      v28 = PopSleepstudyUlong64Formatter;
      if ( v6 >= 0xFFFE )
        LOWORD(v6) = -4;
      LOWORD(v25) = v6;
      WORD1(v25) = v6 + 2;
      v29 = 0LL;
      v27 = &unk_140F0A7B8;
      v30 = L"Info.TotalNqmEngagedCount";
      v7 = 2 * wcslen(L"Info.TotalNqmEngagedCount");
      v32 = PopSleepstudyUlongFormatter;
      v11 = GUID_SPR_SESSION_METADATA_CONTAINER;
      if ( v7 >= 0xFFFE )
        LOWORD(v7) = -4;
      LOWORD(v29) = v7;
      WORD1(v29) = v7 + 2;
      v31 = &unk_140F0A7C0;
      LOBYTE(v2) = SleepstudyHelperCreateBlockerData(
                     PopSleepstudyMetadataLibraryHandle,
                     (__int128 *)&v11,
                     5u,
                     (__int64)v12,
                     (__int64 *)&v9);
    }
  }
  else
  {
    qword_140F09F48 = 0LL;
    qword_140F09F68 = (__int64)PopSleepstudySessionContext;
    PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
    PopSleepstudySessionLock = 0LL;
    v1[35] = 0;
    *((_DWORD *)v1 + 8) &= 0xFF000000;
    *(_DWORD *)v1 = 0;
    *((_QWORD *)v1 + 2) = RtlGetInterruptTimePrecise((unsigned __int64 *)&v9);
    stru_140F0A008.Parameter = 0LL;
    stru_140F0A008.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
    stru_140F0A008.List.Flink = 0LL;
    word_140F09F82 = 0;
    LOBYTE(v2) = KiInitializeTimer2(
                   (unsigned __int64)&unk_140F09F80,
                   (__int64)PopSleepstudyScenarioStopTimerCallback,
                   0LL,
                   8);
  }
  return v2;
}
