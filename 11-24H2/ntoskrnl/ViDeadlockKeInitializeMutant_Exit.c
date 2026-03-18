/*
 * XREFs of ViDeadlockKeInitializeMutant_Exit @ 0x140B99710
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockInitializeResource @ 0x140B980B0 (VfDeadlockInitializeResource.c)
 *     VfDeadlockAcquireResource @ 0x140BA83C4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockKeInitializeMutant_Exit(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = VfDeadlockInitializeResource(*(_QWORD *)(a1 + 16), a2, *(void **)a1);
  if ( *(_BYTE *)(a1 + 8) )
    return VfDeadlockAcquireResource(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
  return result;
}
