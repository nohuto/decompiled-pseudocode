/*
 * XREFs of MiFreeDeferredAcceleratorPool @ 0x1402D26BC
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void MiFreeDeferredAcceleratorPool()
{
  KIRQL v0; // al
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  if ( qword_140E37458 )
  {
    v0 = ExAcquireSpinLockExclusive(&dword_140E37468);
    v1 = qword_140E37458;
    qword_140E37458 = 0LL;
    MiReleaseSpinLockExclusive(&dword_140E37468, v0);
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
