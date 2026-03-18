/*
 * XREFs of PipAttemptDependentsStart @ 0x140A80F40
 * Callers:
 *     IoResolveDependency @ 0x1404BA310 (IoResolveDependency.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14083216C (PnpStartedDeviceNodeDependencyCheck.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1404F5E64 (PiListEntryToDependencyEdge.c)
 *     PipAttemptDependentStart @ 0x140712470 (PipAttemptDependentStart.c)
 */

_QWORD *__fastcall PipAttemptDependentsStart(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  _QWORD *v5; // rcx

  result = *(_QWORD **)(a1 + 32);
  if ( result && (result = (_QWORD *)result[39], (v2 = result[10]) != 0) )
    v3 = (__int64 *)(v2 + 32);
  else
    v3 = &PiDependencyNodeEmptyList;
  v4 = (__int64 *)*v3;
  while ( v4 != v3 )
  {
    result = (_QWORD *)PiListEntryToDependencyEdge((__int64)v4, 1);
    v4 = (__int64 *)*v4;
    v5 = *(_QWORD **)(result[5] + 48LL);
    if ( v5 )
      result = (_QWORD *)PipAttemptDependentStart(v5);
  }
  return result;
}
