/*
 * XREFs of EtwpDestructIptData @ 0x1407B1BCC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDestructIptData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx

  v4 = *(_QWORD **)(a1 + 1080);
  if ( v4 )
  {
    if ( v4[2] )
    {
      if ( *v4 )
      {
        _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
        guard_dispatch_icall_no_overrides(*v4, a2, a3, a4);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)EtwpHwTraceExtensionHost);
    }
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 1080) = 0LL;
  }
}
