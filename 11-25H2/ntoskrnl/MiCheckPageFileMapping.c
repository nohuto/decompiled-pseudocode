/*
 * XREFs of MiCheckPageFileMapping @ 0x14066E934
 * Callers:
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiCheckPageFileMapping(__int64 a1)
{
  unsigned int v1; // ebx
  KIRQL v4; // dl
  _QWORD *v5; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 40) )
    return 0LL;
  v4 = ExAcquireSpinLockExclusive(&SpinLock);
  v5 = *(_QWORD **)(a1 + 40);
  if ( v5 && (*v5 || v5[2]) )
    v1 = -1073741747;
  MiReleaseSpinLockExclusive(&SpinLock, v4);
  return v1;
}
