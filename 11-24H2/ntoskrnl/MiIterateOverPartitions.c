/*
 * XREFs of MiIterateOverPartitions @ 0x140489A44
 * Callers:
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140475D70 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiLockAllMemoryLists @ 0x140489A08 (MiLockAllMemoryLists.c)
 *     MiFinishResume @ 0x1404B3560 (MiFinishResume.c)
 *     MiMirrorBlackPhase @ 0x140672C9C (MiMirrorBlackPhase.c)
 *     MiResumeFromHibernate @ 0x140673010 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x140684FA4 (MiUnlockAllMemoryLists.c)
 *     MmEnumerateBadPages @ 0x1407ED198 (MmEnumerateBadPages.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiIterateOverPartitions(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 i; // r8
  int v5; // r10d
  __int64 v6; // r9
  char *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 result; // rax
  char *v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int SizeOfBitMap; // r8d

  v2 = 0;
  while ( 2 )
  {
    i = qword_140E2FF68->SizeOfBitMap - 1;
    v5 = ((__int64)qword_140E2FF68->Buffer & 4) != 0LL ? 0x20 : 0;
    v6 = v2 < qword_140E2FF68->SizeOfBitMap ? v2 : 0;
    v7 = (char *)qword_140E2FF68->Buffer - (((__int64)qword_140E2FF68->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v8 = v5 + i;
      v9 = v5 + v6;
      result = (unsigned int)(i - v6 + 1);
      if ( (_DWORD)i - (_DWORD)v6 != -1 )
      {
        v11 = &v7[8 * ((unsigned __int64)v9 >> 6)];
        result = ~*(_QWORD *)v11;
        for ( i = result | ((1LL << (v9 & 0x3F)) - 1); i == -1LL; i = ~*(_QWORD *)v11 )
        {
          v11 += 8;
          if ( v11 > &v7[8 * ((unsigned __int64)v8 >> 6)] )
            goto LABEL_16;
        }
        i = ~i;
        _BitScanForward64((unsigned __int64 *)&result, i);
        v12 = result + ((unsigned int)((v11 - v7) >> 3) << 6);
        if ( v12 <= v8 )
          break;
      }
LABEL_16:
      v12 = -1;
LABEL_17:
      if ( !(_DWORD)v6 )
        goto LABEL_11;
      SizeOfBitMap = v2 + 1;
      if ( v2 + 1 > qword_140E2FF68->SizeOfBitMap )
        SizeOfBitMap = qword_140E2FF68->SizeOfBitMap;
      i = SizeOfBitMap - 1;
      v6 = 0LL;
    }
    if ( v12 == -1 )
      goto LABEL_17;
    v12 -= v5;
LABEL_11:
    if ( v12 >= v2 && v12 != -1 )
    {
      v2 = v12 + 1;
      v13 = *((_QWORD *)qword_140E2FF88 + v12);
      if ( (*(_DWORD *)(v13 + 4) & 2) != 0 )
        guard_dispatch_icall_no_overrides(v13, a2, i, v6);
      continue;
    }
    return result;
  }
}
