/*
 * XREFs of MiCanFileBeTruncatedInternal @ 0x1403F2224
 * Callers:
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 *     MmCanFileBeTruncated @ 0x1403F21C0 (MmCanFileBeTruncated.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEndingOffset @ 0x1403F2438 (MiEndingOffset.c)
 *     MiFindLastSubsection @ 0x1403F2490 (MiFindLastSubsection.c)
 *     MiAttemptSectionDelete @ 0x1403F25B4 (MiAttemptSectionDelete.c)
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
  KIRQL v21; // bl
  __int64 v22; // rdx

  while ( 1 )
  {
    v9 = a1[2] == 0;
    *a5 = 17;
    if ( !v9 )
    {
      while ( 1 )
      {
        v19 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
        v20 = a1[2];
        v21 = v19;
        if ( !v20 )
        {
          MiReleaseSpinLockExclusive(&dword_140E2CD40, v19);
LABEL_25:
          v11 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
          goto LABEL_3;
        }
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v20 + 72)) )
          break;
        v18 = v21;
LABEL_22:
        MiReleaseSpinLockExclusive(&dword_140E2CD40, v18);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CD40);
      LOBYTE(v22) = v21;
      if ( (unsigned __int8)MiAttemptSectionDelete(v20, v22, 0LL) )
        goto LABEL_25;
      return 0LL;
    }
    v10 = ExAcquireSpinLockExclusive(&dword_140E2CD40);
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
      MiReleaseSpinLockExclusive(&dword_140E2CD40, v11);
      *a5 = 0;
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v12 + 72)) )
      break;
    MiReleaseSpinLockExclusive(&dword_140E2CD40, v11);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CD40);
  if ( !(*(_DWORD *)(v12 + 56) & 1 | ((*(_DWORD *)(v12 + 56) & 2) != 0))
    && (*(_QWORD *)(v12 + 112) <= 1uLL || (*(_DWORD *)(v12 + 56) & 8) != 0 || a4) )
  {
    if ( !*(_QWORD *)(v12 + 48) || a3 && (!*(_QWORD *)(v12 + 40) || a4) )
      goto LABEL_17;
    if ( a2 )
    {
      LastSubsection = v12 + 128;
      if ( *(_QWORD *)(v12 + 64) )
        LastSubsection = MiFindLastSubsection(v12, 1LL);
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
