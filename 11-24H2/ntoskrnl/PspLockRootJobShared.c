/*
 * XREFs of PspLockRootJobShared @ 0x14085D1C0
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x14085CE84 (PspQueryJobHierarchyAccountingInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
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
