/*
 * XREFs of MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x140673760
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 MiDeletePendingBadPageNodesAwaitingDeleteList()
{
  KIRQL i; // al
  _QWORD *v1; // rcx
  PVOID *v2; // rax
  PVOID v3; // rbx
  unsigned __int8 v4; // dl

  for ( i = ExAcquireSpinLockExclusive(&dword_140E2FED0); ; i = ExAcquireSpinLockExclusive(&dword_140E2FED0) )
  {
    v3 = qword_140E2FEE0;
    v4 = i;
    if ( qword_140E2FEE0 == &qword_140E2FEE0 )
      break;
    v1 = *(_QWORD **)qword_140E2FEE0;
    if ( *(PVOID *)(*(_QWORD *)qword_140E2FEE0 + 8LL) != qword_140E2FEE0
      || (v2 = (PVOID *)*((_QWORD *)qword_140E2FEE0 + 1), *v2 != qword_140E2FEE0) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    v1[1] = v2;
    --qword_140E2FEF0;
    MiReleaseSpinLockExclusive(&dword_140E2FED0, v4);
    ExFreePoolWithTag(v3, 0);
  }
  byte_140E2FEF8 = 0;
  return MiReleaseSpinLockExclusive(&dword_140E2FED0, i);
}
