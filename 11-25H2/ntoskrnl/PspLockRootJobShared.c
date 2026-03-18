/*
 * XREFs of PspLockRootJobShared @ 0x1408DC5C0
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x1408DC284 (PspQueryJobHierarchyAccountingInformation.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PspLockRootJobShared(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v6 = *(_QWORD *)(a1 + 1312);
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
  while ( v6 != *(_QWORD *)(a1 + 1312) )
  {
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    v6 = *(_QWORD *)(a1 + 1312);
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
  }
  result = v6;
  *a3 = v6;
  return result;
}
