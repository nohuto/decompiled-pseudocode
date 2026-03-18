/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x14034EBE4
 * Callers:
 *     MmPurgeSection @ 0x1402C5AB8 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x14034EB80 (MmCanFileBeTruncated.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFindLastSubsection @ 0x1402BC450 (MiFindLastSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x14034E3B8 (MiAttemptSectionDelete.c)
 *     MiEndingOffset @ 0x14034EDF8 (MiEndingOffset.c)
 */

__int64 __fastcall MiCanFileBeTruncatedInternal(__int64 *a1, unsigned __int64 *a2, int a3, int a4, KIRQL *a5)
{
  bool v9; // zf
  KIRQL v10; // al
  KIRQL v11; // di
  __int64 v12; // rbx
  __int64 LastSubsection; // rax
  __int64 i; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int8 v18; // dl
  KIRQL v19; // al
  __int64 v20; // rdi
  unsigned __int8 v21; // bl

  while ( 1 )
  {
    v9 = a1[2] == 0;
    *a5 = 17;
    if ( !v9 )
    {
      while ( 1 )
      {
        v19 = ExAcquireSpinLockExclusive(&SpinLock);
        v20 = a1[2];
        v21 = v19;
        if ( !v20 )
        {
          MiReleaseSpinLockExclusive(&SpinLock, v19);
LABEL_25:
          v11 = ExAcquireSpinLockExclusive(&SpinLock);
          goto LABEL_3;
        }
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
          break;
        v18 = v21;
LABEL_22:
        MiReleaseSpinLockExclusive(&SpinLock, v18);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
      if ( MiAttemptSectionDelete(v20, v21, 0) )
        goto LABEL_25;
      return 0LL;
    }
    v10 = ExAcquireSpinLockExclusive(&SpinLock);
    v11 = v10;
    if ( a1[2] )
    {
      v18 = v10;
      goto LABEL_22;
    }
LABEL_3:
    v12 = *a1;
    if ( !*a1 )
    {
      MiReleaseSpinLockExclusive(&SpinLock, v11);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      break;
    MiReleaseSpinLockExclusive(&SpinLock, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  if ( !(*(_DWORD *)(v12 + 56) & 1 | ((*(_DWORD *)(v12 + 56) & 2) != 0))
    && (*(_QWORD *)(v12 + 112) <= 1uLL || (*(_DWORD *)(v12 + 56) & 8) != 0 || a4) )
  {
    if ( !*(_QWORD *)(v12 + 48) || a3 && (!*(_QWORD *)(v12 + 40) || a4) )
      goto LABEL_17;
    if ( a2 )
    {
      LastSubsection = v12 + 128;
      if ( *(_QWORD *)(v12 + 64) )
        LastSubsection = MiFindLastSubsection(v12, 1);
      for ( i = *(_QWORD *)(LastSubsection + 16); i; i = *(_QWORD *)(i + 16) )
        LastSubsection = i;
      v15 = MiEndingOffset(LastSubsection);
      if ( *a2 >= v15 )
      {
        v16 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( *a2 < v16 )
          *a2 = v16;
LABEL_17:
        *a5 = v11;
        return v12;
      }
    }
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v12 + 72), v11);
  return 0LL;
}
