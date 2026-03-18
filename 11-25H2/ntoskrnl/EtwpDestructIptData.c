/*
 * XREFs of EtwpDestructIptData @ 0x1407A27FC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDestructIptData(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 1080);
  if ( v1 )
  {
    if ( v1[2] )
    {
      if ( *v1 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        guard_dispatch_icall_no_overrides(*v1);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 1080) = 0LL;
  }
}
