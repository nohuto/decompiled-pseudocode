/*
 * XREFs of MiDeletePendingBadPageNodesAwaitingDeleteList @ 0x140674930
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 MiDeletePendingBadPageNodesAwaitingDeleteList()
{
  KIRQL i; // al
  _QWORD *v1; // rcx
  PVOID *v2; // rax
  PVOID v3; // rbx
  unsigned __int8 v4; // dl

  for ( i = ExAcquireSpinLockExclusive(&dword_140E30010); ; i = ExAcquireSpinLockExclusive(&dword_140E30010) )
  {
    v3 = qword_140E30020;
    v4 = i;
    if ( qword_140E30020 == &qword_140E30020 )
      break;
    v1 = *(_QWORD **)qword_140E30020;
    if ( *(PVOID *)(*(_QWORD *)qword_140E30020 + 8LL) != qword_140E30020
      || (v2 = (PVOID *)*((_QWORD *)qword_140E30020 + 1), *v2 != qword_140E30020) )
    {
      __fastfail(3u);
    }
    *v2 = v1;
    v1[1] = v2;
    --qword_140E30030;
    MiReleaseSpinLockExclusive(&dword_140E30010, v4);
    ExFreePoolWithTag(v3, 0);
  }
  byte_140E30038 = 0;
  return MiReleaseSpinLockExclusive(&dword_140E30010, i);
}
