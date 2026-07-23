/*
 * XREFs of MiIterateOverPartitions @ 0x140484754
 * Callers:
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140471E10 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiLockAllMemoryLists @ 0x140484718 (MiLockAllMemoryLists.c)
 *     MiFinishResume @ 0x1404ADDD0 (MiFinishResume.c)
 *     MiMirrorBlackPhase @ 0x140673E6C (MiMirrorBlackPhase.c)
 *     MiResumeFromHibernate @ 0x1406741E0 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x1406860D0 (MiUnlockAllMemoryLists.c)
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiIterateOverPartitions(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // r8d
  int v5; // r10d
  unsigned int v6; // r9d
  char *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 result; // rax
  char *v11; // rdx
  __int64 i; // r8
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int SizeOfBitMap; // r8d

  v2 = 0;
  while ( 2 )
  {
    v4 = qword_140E300A8->SizeOfBitMap - 1;
    v5 = ((__int64)qword_140E300A8->Buffer & 4) != 0LL ? 0x20 : 0;
    v6 = v2 < qword_140E300A8->SizeOfBitMap ? v2 : 0;
    v7 = (char *)qword_140E300A8->Buffer - (((__int64)qword_140E300A8->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v8 = v5 + v4;
      v9 = v5 + v6;
      result = v4 - v6 + 1;
      if ( v4 - v6 != -1 )
      {
        v11 = &v7[8 * ((unsigned __int64)v9 >> 6)];
        result = ~*(_QWORD *)v11;
        for ( i = result | ((1LL << (v9 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v11 )
        {
          v11 += 8;
          if ( v11 > &v7[8 * ((unsigned __int64)v8 >> 6)] )
            goto LABEL_16;
        }
        _BitScanForward64((unsigned __int64 *)&result, ~i);
        v13 = result + ((unsigned int)((v11 - v7) >> 3) << 6);
        if ( v13 <= v8 )
          break;
      }
LABEL_16:
      v13 = -1;
LABEL_17:
      if ( !v6 )
        goto LABEL_11;
      SizeOfBitMap = v2 + 1;
      if ( v2 + 1 > qword_140E300A8->SizeOfBitMap )
        SizeOfBitMap = qword_140E300A8->SizeOfBitMap;
      v4 = SizeOfBitMap - 1;
      v6 = 0;
    }
    if ( v13 == -1 )
      goto LABEL_17;
    v13 -= v5;
LABEL_11:
    if ( v13 >= v2 && v13 != -1 )
    {
      v2 = v13 + 1;
      v14 = *((_QWORD *)qword_140E300C8 + v13);
      if ( (*(_DWORD *)(v14 + 4) & 2) != 0 )
        guard_dispatch_icall_no_overrides(v14, a2);
      continue;
    }
    return result;
  }
}
