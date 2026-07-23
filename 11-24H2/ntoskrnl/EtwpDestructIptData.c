/*
 * XREFs of EtwpDestructIptData @ 0x1407B201C
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDestructIptData(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx

  v2 = *(_QWORD **)(a1 + 1080);
  if ( v2 )
  {
    if ( v2[2] )
    {
      if ( *v2 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        guard_dispatch_icall_no_overrides(*v2, a2);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1080) = 0LL;
  }
}
