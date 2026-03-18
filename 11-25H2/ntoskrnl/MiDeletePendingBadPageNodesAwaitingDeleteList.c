/*
 * XREFs of MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x140667D00
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 MiDeletePendingBadPageNodesAwaitingDeleteList()
{
  KIRQL i; // al
  _QWORD *v1; // rcx
  PVOID *v2; // rax
  PVOID v3; // rbx
  unsigned __int8 v4; // dl

  for ( i = ExAcquireSpinLockExclusive(&dword_140E2FC90); ; i = ExAcquireSpinLockExclusive(&dword_140E2FC90) )
  {
    v3 = qword_140E2FCA0;
    v4 = i;
    if ( qword_140E2FCA0 == &qword_140E2FCA0 )
      break;
    v1 = *(_QWORD **)qword_140E2FCA0;
    if ( *(PVOID *)(*(_QWORD *)qword_140E2FCA0 + 8LL) != qword_140E2FCA0
      || (v2 = (PVOID *)*((_QWORD *)qword_140E2FCA0 + 1), *v2 != qword_140E2FCA0) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    v1[1] = v2;
    --qword_140E2FCB0;
    MiReleaseSpinLockExclusive(&dword_140E2FC90, v4);
    ExFreePoolWithTag(v3, 0);
  }
  byte_140E2FCB8 = 0;
  return MiReleaseSpinLockExclusive(&dword_140E2FC90, i);
}
