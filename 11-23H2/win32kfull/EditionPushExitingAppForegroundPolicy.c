/*
 * XREFs of EditionPushExitingAppForegroundPolicy @ 0x1C00EE0F0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::AppStarting_Clear @ 0x1C0030A4C (_anonymous_namespace_--AppStarting_Clear.c)
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C0043718 (_anonymous_namespace_--CheckAllowForeground.c)
 *     _anonymous_namespace_::RecordParentPidLegacyPolicy @ 0x1C00EE2B4 (_anonymous_namespace_--RecordParentPidLegacyPolicy.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall EditionPushExitingAppForegroundPolicy(__int64 a1)
{
  HANDLE ProcessId; // rax
  int v3; // ebx
  char v4; // si
  HANDLE v5; // rbp
  char v6; // bl
  int v7; // r8d
  unsigned int v8; // eax
  HANDLE *v9; // rbx
  int v10; // edx

  if ( *(_DWORD *)(a1 + 384) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 928LL);
  ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
  v3 = *(_DWORD *)(a1 + 12);
  v4 = 1;
  v5 = ProcessId;
  if ( (v3 & 0x8000) != 0 )
  {
    v6 = (*(_DWORD *)(a1 + 12) & 0x40) != 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    v6 = (v3 & 0x80100) != 0;
  }
  else
  {
    v6 = anonymous_namespace_::CheckAllowForeground(*(_QWORD *)a1);
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 )
    anonymous_namespace_::AppStarting_Clear(a1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&unk_1C035F388, 0LL);
  if ( v6 )
    anonymous_namespace_::RecordParentPidLegacyPolicy(v5);
  v8 = 5;
  v9 = (HANDLE *)&unk_1C035E228;
  while ( *v9 != v5 )
  {
    ++v8;
    v9 += 3;
    if ( v8 >= 0xF )
      goto LABEL_24;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 44;
    LOBYTE(v10) = v4;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v7,
      (_DWORD)gFullLog,
      4,
      2,
      44,
      (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
      (char)v5);
  }
  *(_OWORD *)v9 = 0LL;
  v9[2] = 0LL;
LABEL_24:
  ExReleasePushLockExclusiveEx(&unk_1C035F388, 0LL);
  KeLeaveCriticalRegion();
}
