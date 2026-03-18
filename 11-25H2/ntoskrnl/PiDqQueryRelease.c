/*
 * XREFs of PiDqQueryRelease @ 0x140839334
 * Callers:
 *     PiDqDispatch @ 0x1408377C0 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140839848 (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1404C85C4 (McTemplateK0p_EtwWriteTransfer.c)
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( byte_140EEFA6A < 0 )
      McTemplateK0p_EtwWriteTransfer(
        (__int64)P,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_QueryStop,
        *((const GUID **)P + 3),
        P);
    PiDqQueryFreeActiveData((__int64)P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
