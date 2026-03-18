/*
 * XREFs of ACPIFilterIrpQueryId @ 0x1400BCBE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x14001DF70 (ACPIDispatchForwardIrp.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1400B108C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 */

__int64 __fastcall ACPIFilterIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  char v3; // r8
  PIRP v4; // r9
  PDEVICE_OBJECT v5; // r10
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( (AcpiOverrideAttributes & 0x300000) == 0 )
    return ACPIDispatchForwardIrp(a1, a2);
  AcpiGetDriverProxyEndpoint(&v6, (__int64)ACPIFilterIrpQueryIdCompletion);
  return ACPIIrpSetPagableCompletionRoutineAndForward(v5, v4, v6, (__int64)v4, 1, v3, v3);
}
