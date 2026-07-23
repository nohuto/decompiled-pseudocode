/*
 * XREFs of MiChargeForLockedPage @ 0x14033AE90
 * Callers:
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x140345A40 (MiRelockProtoPoolPage.c)
 *     MiDoubleLockMdlPage @ 0x140345AF8 (MiDoubleLockMdlPage.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  int v2; // edx
  __int64 v3; // rdi
  char v4; // si
  char v5; // dl
  unsigned __int64 v6; // r9
  ULONG *v7; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v10; // ett
  unsigned int v11; // edi
  __int64 result; // rax
  unsigned __int64 v13; // rcx

  v2 = a2 & 1;
  v3 = (unsigned int)-(v2 != 0);
  v4 = 0;
  v5 = 4 * (v2 ^ 1) + 4;
  if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 40);
    goto LABEL_15;
  }
  v6 = 0x8000000000000000uLL;
  if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 40);
LABEL_15:
      v4 = 1;
      v7 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((v13 >> 43) & 0x3FF));
      result = MiChargeCommit((__int64)v7, 1uLL, v5);
      if ( !(_DWORD)result )
        return result;
      goto LABEL_5;
    }
    v7 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  }
  else
  {
    v7 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  }
LABEL_5:
  if ( v7 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
    {
      v10 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - 1,
                                  CachedResidentAvailable);
      if ( v10 == CachedResidentAvailable )
        return 1;
    }
  }
  v11 = MiChargePartitionResidentAvailable(v7, 1LL, v3, v6);
  if ( !v11 )
  {
    if ( v4 )
      MiReturnCommit((__int64)v7, 1LL, 0);
  }
  return v11;
}
