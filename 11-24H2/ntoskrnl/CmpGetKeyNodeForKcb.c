/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140879FC0
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408E3094 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, unsigned int *a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // rsi
  signed __int64 *v11; // rdi
  char *v12; // rsi
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // rdx
  __int64 CellPaged; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx

  v5 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v5, a2);
  else
    CellFlat = HvpGetCellPaged(v7, v5, a2);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = CellFlat;
  if ( a3 )
  {
    if ( (*(_DWORD *)(v9 + 160) & 0x8001) == 0
      && ((unsigned __int8)CmpAccessBitForPhase & *(_BYTE *)(CellFlat + 12)) == 0
      && (int)HvpMarkCellDirty(v9, *(unsigned int *)(a1 + 40), 0) >= 0 )
    {
      *(_BYTE *)(v10 + 12) |= CmpAccessBitForPhase;
      return v10;
    }
    return v10;
  }
  if ( (*(_DWORD *)(v9 + 160) & 0x8001) != 0 || (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) != 0 )
    return v10;
  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v9, a2);
  else
    HvpReleaseCellPaged(v9, a2);
  v11 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 72LL);
  v12 = (char *)KeAbPreAcquire((__int64)v11, 0LL);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, 0, v12, (__int64)v11);
  if ( v12 )
    v12[10] = 1;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(unsigned int *)(a1 + 40);
  if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v13, v14, a2);
  else
    CellPaged = HvpGetCellPaged(v13, v14, a2);
  v16 = *(_QWORD *)(a1 + 32);
  v17 = CellPaged;
  if ( (*(_DWORD *)(v16 + 160) & 0x8001) == 0
    && ((unsigned __int8)CmpAccessBitForPhase & *(_BYTE *)(CellPaged + 12)) == 0
    && (int)HvpMarkCellDirty(v16, *(unsigned int *)(a1 + 40), 0) >= 0 )
  {
    *(_BYTE *)(v17 + 12) |= CmpAccessBitForPhase;
  }
  v18 = *(_QWORD *)(a1 + 32);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v18 + 72));
  KeAbPostRelease(v18 + 72);
  return v17;
}
