/*
 * XREFs of CcForEachNumaNode @ 0x1402CBE88
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1402CA884 (CcInitializePrivateVolumeCacheMap.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1402CBE5C (CcGetActiveWorkerCountInPartition.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     CcInitializePartition @ 0x14057CD28 (CcInitializePartition.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcForEachNumaNode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  result = a2 + 16;
  v5 = (_QWORD **)(a3 + 48);
  if ( !a3 )
    v5 = (_QWORD **)(a2 + 16);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    result = guard_dispatch_icall_no_overrides(a2, a3, i - 4, a4);
    if ( !(_BYTE)result )
      break;
  }
  return result;
}
