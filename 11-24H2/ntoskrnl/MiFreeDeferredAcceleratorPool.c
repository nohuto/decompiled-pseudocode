/*
 * XREFs of MiFreeDeferredAcceleratorPool @ 0x140353934
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void MiFreeDeferredAcceleratorPool()
{
  KIRQL v0; // al
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  if ( qword_140E37598 )
  {
    v0 = ExAcquireSpinLockExclusive(&dword_140E375A8);
    v1 = qword_140E37598;
    qword_140E37598 = 0LL;
    MiReleaseSpinLockExclusive(&dword_140E375A8, v0);
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
