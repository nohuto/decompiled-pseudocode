/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140B57820
 * Callers:
 *     PnprWakeProcessors @ 0x140B55254 (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140B575C0 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140C2984C (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1404677F0 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v1; // [rsp+28h] [rbp-20h]
  void *v2; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  if ( byte_140F10110 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v2 = &KiTargetPhase;
    LODWORD(v1) = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
}
