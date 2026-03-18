/*
 * XREFs of MiDeleteExtentPfns @ 0x14066EFA0
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiPurgeBadFileOnlyPages @ 0x1406701CC (MiPurgeBadFileOnlyPages.c)
 *     MiWaitForExtentDeletions @ 0x140670670 (MiWaitForExtentDeletions.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiDeleteExtentPfns(__int64 a1)
{
  __int64 *v2; // rax
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rbx

  if ( a1 )
  {
    v2 = KeAbPreAcquire((__int64)&qword_140E2D3A0, 0LL);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
  }
  do
  {
    while ( qword_140E2D378 )
      MiRemovePhysicalMemory(0LL, 0LL, 98LL);
    v3 = ExAcquireSpinLockExclusive(dword_140E3A560);
    v6 = qword_140E2D368;
    if ( a1 )
    {
      if ( !qword_140E2D368 )
      {
        v8 = qword_140E2D3A0;
        qword_140E2D3A0 = 0LL;
        byte_140E2D3C1 = 0;
        MiReleaseSpinLockExclusive(dword_140E3A560, v3);
        if ( v8 )
        {
          do
          {
            v9 = *(_QWORD *)v8;
            KeSignalGate((_DWORD *)(v8 + 8), 1);
            v8 = v9;
          }
          while ( v9 );
        }
        MiPurgeBadFileOnlyPages();
        return KeAbPostRelease((ULONG_PTR)&qword_140E2D3A0);
      }
    }
    else if ( qword_140E2D368 || byte_140E2D3C1 )
    {
      LOBYTE(v4) = v3;
      return MiWaitForExtentDeletions(v5, v4);
    }
    result = MiReleaseSpinLockExclusive(dword_140E3A560, v3);
  }
  while ( v6 );
  if ( !a1 )
    return result;
  return KeAbPostRelease((ULONG_PTR)&qword_140E2D3A0);
}
