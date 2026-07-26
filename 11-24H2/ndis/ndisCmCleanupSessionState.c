/*
 * XREFs of ndisCmCleanupSessionState @ 0x1400C8248
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1401475E0 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState()
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
  v1 = dword_14011C950;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)qword_14011C9F0 + 3 * i + 1) )
    {
      KeReleaseSpinLock(&qword_14011C9A0, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
      v1 = dword_14011C950;
    }
  }
  KeReleaseSpinLock(&qword_14011C9A0, v0);
}
