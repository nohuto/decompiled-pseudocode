/*
 * XREFs of HalpAcpiPrmFwBufferInit @ 0x140C0FC14
 * Callers:
 *     HalpAcpiInitSystem @ 0x140B4F150 (HalpAcpiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPrmFwBufferInit(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 240);
  HalpAcpiPrmFwHandlerBlock = *(PVOID *)(v1 + 3896);
  result = *(unsigned int *)(v1 + 3904);
  HalpAcpiPrmFwHandlerCount = *(_DWORD *)(v1 + 3904);
  return result;
}
