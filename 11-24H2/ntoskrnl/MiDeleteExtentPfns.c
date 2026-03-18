/*
 * XREFs of MiDeleteExtentPfns @ 0x14067A760
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E866C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 *     MiWaitForExtentDeletions @ 0x14067BE30 (MiWaitForExtentDeletions.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiDeleteExtentPfns(__int64 a1)
{
  _QWORD *v2; // rax
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rbx

  if ( a1 )
  {
    v2 = KeAbPreAcquire((__int64)&qword_140E2D5E0, 0LL);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
  }
  do
  {
    while ( qword_140E2D5B8 )
      MiRemovePhysicalMemory(0LL, 0LL, 98LL);
    v3 = ExAcquireSpinLockExclusive(dword_140E3A7A0);
    v6 = qword_140E2D5A8;
    if ( a1 )
    {
      if ( !qword_140E2D5A8 )
      {
        v8 = qword_140E2D5E0;
        qword_140E2D5E0 = 0LL;
        byte_140E2D601 = 0;
        MiReleaseSpinLockExclusive(dword_140E3A7A0, v3);
        if ( v8 )
        {
          do
          {
            v9 = *(_QWORD *)v8;
            KeSignalGate((_DWORD *)(v8 + 8), 1LL);
            v8 = v9;
          }
          while ( v9 );
        }
        MiPurgeBadFileOnlyPages();
        return KeAbPostRelease((ULONG_PTR)&qword_140E2D5E0);
      }
    }
    else if ( qword_140E2D5A8 || byte_140E2D601 )
    {
      LOBYTE(v4) = v3;
      return MiWaitForExtentDeletions(v5, v4);
    }
    result = MiReleaseSpinLockExclusive(dword_140E3A7A0, v3);
  }
  while ( v6 );
  if ( !a1 )
    return result;
  return KeAbPostRelease((ULONG_PTR)&qword_140E2D5E0);
}
