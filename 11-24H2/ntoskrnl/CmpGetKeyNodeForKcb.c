/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140875C90
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14090B974 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140913E28 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, unsigned int *a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // rsi
  signed __int64 *v11; // rdi
  _QWORD *v12; // rsi
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
  v12 = KeAbPreAcquire((__int64)v11, 0LL);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, 0, v12, (__int64)v11);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
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
