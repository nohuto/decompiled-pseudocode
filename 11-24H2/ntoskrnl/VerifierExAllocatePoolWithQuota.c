/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x140B93480
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuota @ 0x140652560 (ExAllocatePoolWithQuota.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T a2)
{
  POOL_TYPE v2; // r10d
  __int32 v3; // ebx
  __int64 result; // rax

  v2 = PoolType & 0xFFFFFFF7;
  v3 = PoolType & 8;
  if ( (PoolType & 8) == 0 )
    v2 = PoolType;
  if ( (char *)VfExAllocPoolInternal == (char *)pXdvExAllocatePoolWithTagPriority || !pXdvExAllocatePoolWithTagPriority )
    result = (__int64)ExAllocatePoolWithQuota(v2, a2);
  else
    result = guard_dispatch_icall_no_overrides(v2 | 0x80u, 0LL);
  if ( !result && !v3 )
    RtlRaiseStatus(-1073741670);
  return result;
}
