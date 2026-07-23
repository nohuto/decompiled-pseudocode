/*
 * XREFs of MiDecayNodeNowEmpty @ 0x140225138
 * Callers:
 *     MiUnlinkProtectedStandbyPfn @ 0x140224F70 (MiUnlinkProtectedStandbyPfn.c)
 *     MiEmptyDecayClusterTimers @ 0x140355310 (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x14033BBF8 (MiRemoveDecayClusterTimer.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall MiDecayNodeNowEmpty(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rcx
  _BYTE *v9; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = HIBYTE(*(_DWORD *)(v2 + 32));
  if ( (*(_DWORD *)(v2 + 32) & 0x8000000) == 0 )
  {
    MiRemoveDecayClusterTimer(48 * a1 - 0x220000000000LL);
    v5 = MiSwizzleInvalidPte(((a1 & 0xFFFFFFFFFFLL) << 12) | 0x880, v4);
    v6 = a1 - qword_140E35C40;
    *(_QWORD *)(v2 + 16) = v5;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C60);
    v7 = 1;
    v8 = v6 & 7;
    v9 = (_BYTE *)(qword_140E35C70 + ((unsigned __int64)v6 >> 3));
    if ( (unsigned int)(v8 + 1) > 8 )
    {
      if ( !(_DWORD)v8 )
        goto LABEL_11;
      LOBYTE(v3) = byte_140012870[v8];
      v7 = v8 - 7;
      *v9++ |= v3;
      if ( (unsigned int)(v8 - 7) > 8 )
      {
        LOBYTE(v3) = (unsigned __int8)memset_0(v9, 255, (unsigned __int64)v7 >> 3);
        v9 += (unsigned __int64)v7 >> 3;
        v7 &= 7u;
      }
      if ( v7 )
      {
LABEL_11:
        LOBYTE(v3) = byte_14002BBD0[v7];
        *v9 |= v3;
      }
    }
    else
    {
      v3 = (char)*v9 | (1 << v8);
      *v9 = v3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (LOBYTE(v3) = PopHibernateInProgress, PopHibernateInProgress) )
      dword_140E35C60 = 0;
    else
      LOBYTE(v3) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E35C60, retaddr);
  }
  return v3;
}
