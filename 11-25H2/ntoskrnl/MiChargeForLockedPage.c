/*
 * XREFs of MiChargeForLockedPage @ 0x14022E1E0
 * Callers:
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14033DFA0 (MiRelockProtoPoolPage.c)
 *     MiDoubleLockMdlPage @ 0x14033E058 (MiDoubleLockMdlPage.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // edx
  __int64 v5; // rdi
  char v6; // si
  unsigned int v7; // edx
  ULONG *v8; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v11; // ett
  unsigned int v12; // edi
  __int64 result; // rax
  unsigned __int64 v14; // rcx

  v4 = a2 & 1;
  v5 = (unsigned int)-(v4 != 0);
  v6 = 0;
  v7 = 4 * (v4 ^ 1) + 4;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 40);
    goto LABEL_15;
  }
  a4 = 0x8000000000000000uLL;
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 40);
LABEL_15:
      v6 = 1;
      v8 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((v14 >> 43) & 0x3FF));
      result = MiChargeCommit(v8, 1LL, v7, a4);
      if ( !(_DWORD)result )
        return result;
      goto LABEL_5;
    }
    v8 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  }
  else
  {
    v8 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  }
LABEL_5:
  if ( v8 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v11 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v11 == CachedResidentAvailable )
        return 1;
    }
  }
  v12 = MiChargePartitionResidentAvailable((__int64)v8, 1uLL, v5);
  if ( !v12 )
  {
    if ( v6 )
      MiReturnCommit(v8, 1LL, 0LL);
  }
  return v12;
}
