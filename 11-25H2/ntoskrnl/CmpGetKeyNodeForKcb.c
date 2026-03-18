/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x140879920
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1409EE0AC (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, unsigned int *a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // rsi
  signed __int64 *v11; // rsi
  __int64 *v12; // rdi
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
    ExfAcquirePushLockSharedEx(v11, 0, v12, (unsigned __int64)v11);
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
