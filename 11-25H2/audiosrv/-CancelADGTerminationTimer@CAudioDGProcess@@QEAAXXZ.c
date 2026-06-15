/*
 * XREFs of ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180056F88
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000E2AC (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1800567C8 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ??0CAPOWrapperClient@@QEAA@XZ @ 0x180056C40 (--0CAPOWrapperClient@@QEAA@XZ.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800AEF50 (s_adGetDeviceGraphWnfStateName.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800CEA40 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     AudioServerGetAudioStreamHandle @ 0x180109180 (AudioServerGetAudioStreamHandle.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::CancelADGTerminationTimer(struct _RTL_CRITICAL_SECTION *this)
{
  struct CAudioThreadPool *v2; // rdi
  HANDLE OwningThread; // rdx

  v2 = ThreadPool;
  EnterCriticalSection(this);
  OwningThread = this[3].OwningThread;
  if ( OwningThread )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 24LL))(
      v2,
      OwningThread,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v2 + 32LL))(
      v2,
      this[3].OwningThread,
      1LL);
  }
  LeaveCriticalSection(this);
}
