/*
 * XREFs of FsRtlAllocatePoolWithQuota @ 0x140580450
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14048CAC0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuota(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
