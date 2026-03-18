/*
 * XREFs of MiFreeDeferredAcceleratorPool @ 0x1404A6F24
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void MiFreeDeferredAcceleratorPool()
{
  KIRQL v0; // al
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  if ( qword_140E37218 )
  {
    v0 = ExAcquireSpinLockExclusive(&dword_140E37228);
    v1 = qword_140E37218;
    qword_140E37218 = 0LL;
    MiReleaseSpinLockExclusive(&dword_140E37228, v0);
    if ( v1 )
    {
      do
      {
        v2 = (_QWORD *)*v1;
        ExFreePoolWithTag(v1, 0);
        v1 = v2;
      }
      while ( v2 );
    }
  }
}
