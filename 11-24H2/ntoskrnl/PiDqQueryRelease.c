/*
 * XREFs of PiDqQueryRelease @ 0x1408D3FB0
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqDispatch @ 0x1409F9680 (PiDqDispatch.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1409F999C (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1404C9154 (McTemplateK0p_EtwWriteTransfer.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     PiDqQueryFreeActiveData @ 0x1408D3C80 (PiDqQueryFreeActiveData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( byte_140EEFD22 < 0 )
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
