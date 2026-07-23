/*
 * XREFs of RtlpInitUppercaseTables @ 0x14077EB3C
 * Callers:
 *     ExInitializeNls @ 0x140ABC9FC (ExInitializeNls.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 */

__int64 RtlpInitUppercaseTables()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // rbx
  NTSTATUS NlsSectionPtr; // eax
  PVOID v3; // rcx
  PVOID SectionPointer; // [rsp+48h] [rbp+10h] BYREF

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  SectionPointer = 0LL;
  v1 = CurrentServerSiloGlobals;
  NlsSectionPtr = NtGetNlsSectionPtr(0xEu, 0, 0LL, &SectionPointer, 0LL);
  v3 = SectionPointer;
  if ( NlsSectionPtr < 0 )
    v3 = 0LL;
  SectionPointer = v3;
  if ( v3 )
  {
    _InterlockedExchange64((volatile __int64 *)&v1[75], (__int64)v3 + 4);
    _InterlockedExchange64(
      (volatile __int64 *)&v1[75].Blink,
      (__int64)SectionPointer + 2 * *((unsigned __int16 *)SectionPointer + 1) + 4);
    v1[74].Blink = (struct _LIST_ENTRY *)SectionPointer;
  }
  else
  {
    v1[75].Flink = 0LL;
    v1[75].Blink = 0LL;
    v1[74].Blink = 0LL;
  }
  return 0LL;
}
