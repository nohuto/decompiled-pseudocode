/*
 * XREFs of ndisCmCleanupSessionState @ 0x1400CF358
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1401522A0 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState()
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
  v1 = dword_140126990;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)qword_140126A30 + 3 * i + 1) )
    {
      KeReleaseSpinLock(&qword_1401269E0, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
      v1 = dword_140126990;
    }
  }
  KeReleaseSpinLock(&qword_1401269E0, v0);
}
