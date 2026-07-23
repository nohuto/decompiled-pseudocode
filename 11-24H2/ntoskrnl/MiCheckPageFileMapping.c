/*
 * XREFs of MiCheckPageFileMapping @ 0x14067B3C0
 * Callers:
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  unsigned int v1; // ebx
  KIRQL v4; // dl
  _QWORD *v5; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v4 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
  v5 = *(_QWORD **)(a1 + 40);
  if ( v5 && (*v5 || v5[2]) )
    v1 = -1073741747;
  MiReleaseSpinLockExclusive(&dword_140E2CD40, v4);
  return v1;
}
