/*
 * XREFs of FsRtlAllocatePoolWithQuotaTag @ 0x140580480
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14048CAC0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuotaTag(POOL_TYPE a1, unsigned int a2, ULONG a3)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, a3);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
