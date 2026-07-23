/*
 * XREFs of ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit @ 0x140B9B850
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return VfDeadlockAcquireResource(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
  return result;
}
