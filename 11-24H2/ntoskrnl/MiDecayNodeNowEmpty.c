/*
 * XREFs of MiDecayNodeNowEmpty @ 0x14026FBA8
 * Callers:
 *     MiUnlinkProtectedStandbyPfn @ 0x14026F9E0 (MiUnlinkProtectedStandbyPfn.c)
 *     MiEmptyDecayClusterTimers @ 0x1402D4090 (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x140212898 (MiRemoveDecayClusterTimer.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall MiDecayNodeNowEmpty(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // rcx
  _BYTE *v8; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = HIBYTE(*(_DWORD *)(v2 + 32));
  if ( (*(_DWORD *)(v2 + 32) & 0x8000000) == 0 )
  {
    MiRemoveDecayClusterTimer(48 * a1 - 0x220000000000LL);
    v4 = MiSwizzleInvalidPte(((a1 & 0xFFFFFFFFFFLL) << 12) | 0x880);
    v5 = a1 - qword_140E35B00;
    *(_QWORD *)(v2 + 16) = v4;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35B20);
    v6 = 1;
    v7 = v5 & 7;
    v8 = (_BYTE *)(qword_140E35B30 + ((unsigned __int64)v5 >> 3));
    if ( (unsigned int)(v7 + 1) > 8 )
    {
      if ( !(_DWORD)v7 )
        goto LABEL_11;
      LOBYTE(v3) = byte_140012BB8[v7];
      v6 = v7 - 7;
      *v8++ |= v3;
      if ( (unsigned int)(v7 - 7) > 8 )
      {
        LOBYTE(v3) = (unsigned __int8)memset_0(v8, 255, (unsigned __int64)v6 >> 3);
        v8 += (unsigned __int64)v6 >> 3;
        v6 &= 7u;
      }
      if ( v6 )
      {
LABEL_11:
        LOBYTE(v3) = byte_14002B770[v6];
        *v8 |= v3;
      }
    }
    else
    {
      v3 = (char)*v8 | (1 << v7);
      *v8 = v3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v3) = PopHibernateInProgress, PopHibernateInProgress) )
      dword_140E35B20 = 0;
    else
      LOBYTE(v3) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35B20, retaddr);
  }
  return v3;
}
