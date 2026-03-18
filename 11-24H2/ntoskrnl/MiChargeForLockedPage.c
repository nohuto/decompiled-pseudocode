/*
 * XREFs of MiChargeForLockedPage @ 0x140211B30
 * Callers:
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14023BCDC (MiRelockProtoPoolPage.c)
 *     MiDoubleLockMdlPage @ 0x14023BD94 (MiDoubleLockMdlPage.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  int v2; // edx
  __int64 v3; // rdi
  char v4; // si
  char v5; // dl
  ULONG *v6; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v9; // ett
  unsigned int v10; // edi
  __int64 result; // rax
  unsigned __int64 v12; // rcx

  v2 = a2 & 1;
  v3 = (unsigned int)-(v2 != 0);
  v4 = 0;
  v5 = 4 * (v2 ^ 1) + 4;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 40);
    goto LABEL_15;
  }
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 40);
LABEL_15:
      v4 = 1;
      v6 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((v12 >> 43) & 0x3FF));
      result = MiChargeCommit((__int64)v6, 1uLL, v5);
      if ( !(_DWORD)result )
        return result;
      goto LABEL_5;
    }
    v6 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  }
  else
  {
    v6 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  }
LABEL_5:
  if ( v6 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v9 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v9 == CachedResidentAvailable )
        return 1;
    }
  }
  v10 = MiChargePartitionResidentAvailable(v6, 1LL, v3);
  if ( !v10 )
  {
    if ( v4 )
      MiReturnCommit(v6, 1LL, 0LL);
  }
  return v10;
}
