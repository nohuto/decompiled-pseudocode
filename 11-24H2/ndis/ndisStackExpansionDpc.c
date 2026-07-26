/*
 * XREFs of ndisStackExpansionDpc @ 0x14006D760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisStackExpansionDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        struct _KEVENT *SystemArgument2)
{
  unsigned int v6; // eax

  v6 = KeGetPcr()->Prcb.Number << 12;
  IoGetStackLimits((PULONG_PTR)(qword_14011D048 + v6), (PULONG_PTR)(v6 + qword_14011D040));
  if ( SystemArgument1 && _InterlockedExchangeAdd((volatile signed __int32 *)SystemArgument1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(SystemArgument1, 0x2020444Eu);
  if ( SystemArgument2 )
    KeSetEvent(SystemArgument2, 0, 0);
}
