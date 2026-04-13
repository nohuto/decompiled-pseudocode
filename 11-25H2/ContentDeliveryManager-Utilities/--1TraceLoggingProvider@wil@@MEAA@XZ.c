/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18002AA74
 * Callers:
 *     ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002CF60 (--_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax
  REGHANDLE v2; // rcx

  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)v1 = 0;
    EventUnregister(v2);
  }
}
