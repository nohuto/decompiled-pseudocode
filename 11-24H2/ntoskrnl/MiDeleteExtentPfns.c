/*
 * XREFs of MiDeleteExtentPfns @ 0x14067B940
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 *     MiWaitForExtentDeletions @ 0x14067D010 (MiWaitForExtentDeletions.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
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
    v2 = KeAbPreAcquire((__int64)&qword_140E2D720, 0LL);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
  }
  do
  {
    while ( qword_140E2D6F8 )
      MiRemovePhysicalMemory(0LL, 0LL, 98LL);
    v3 = ExAcquireSpinLockExclusive(dword_140E3A8E0);
    v6 = qword_140E2D6E8;
    if ( a1 )
    {
      if ( !qword_140E2D6E8 )
      {
        v8 = qword_140E2D720;
        qword_140E2D720 = 0LL;
        byte_140E2D741 = 0;
        MiReleaseSpinLockExclusive(dword_140E3A8E0, v3);
        if ( v8 )
        {
          do
          {
            v9 = *(_QWORD *)v8;
            KeSignalGate((volatile signed __int32 *)(v8 + 8), 1LL);
            v8 = v9;
          }
          while ( v9 );
        }
        MiPurgeBadFileOnlyPages();
        return KeAbPostRelease((ULONG_PTR)&qword_140E2D720);
      }
    }
    else if ( qword_140E2D6E8 || byte_140E2D741 )
    {
      LOBYTE(v4) = v3;
      return MiWaitForExtentDeletions(v5, v4);
    }
    result = MiReleaseSpinLockExclusive(dword_140E3A8E0, v3);
  }
  while ( v6 );
  if ( !a1 )
    return result;
  return KeAbPostRelease((ULONG_PTR)&qword_140E2D720);
}
