/*
 * XREFs of RtlpHpEnvQueryVA @ 0x1800BCBEC
 * Callers:
 *     RtlpHpHeapValidateProtection @ 0x1800BAD10 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall RtlpHpEnvQueryVA(PVOID BaseAddress, PVOID MemoryInformation, int a3, unsigned __int64 a4)
{
  if ( a3 == 5 )
    return ((__int64 (__fastcall *)(unsigned __int64, __int64, PVOID, _QWORD, PVOID, __int64, _QWORD))(a4 ^ *(_QWORD *)(a4 + 24) ^ RtlpHpHeapGlobals))(
             a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4,
             -1LL,
             BaseAddress,
             0LL,
             MemoryInformation,
             48LL,
             0LL);
  else
    return ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL);
}
