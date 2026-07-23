/*
 * XREFs of RtlAreBitsClear @ 0x140442240
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     HvIsRangeDirty @ 0x1407E3B9C (HvIsRangeDirty.c)
 *     HvGetHiveLogFileStatus @ 0x1409678E0 (HvGetHiveLogFileStatus.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140B4E274 (HalpMmAllocCtxMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // rcx
  char v5; // r10
  unsigned int *v6; // rdx
  unsigned int v7; // ebx
  unsigned int *v8; // r11
  unsigned int *v9; // rdx
  BOOLEAN result; // al
  unsigned int v11; // r9d

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest(
                (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
                StartingIndex & 0x1F);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v5 = StartingIndex + Length - 1;
  v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v7 = *v6;
  v8 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v6 != v8 )
  {
    if ( (v7 & (-1 << StartingIndex)) == 0 )
    {
      v9 = v6 + 1;
      result = 0;
      while ( 1 )
      {
        v11 = *v9;
        if ( v9 == v8 )
          break;
        if ( v11 )
          return result;
        ++v9;
      }
      return (v11 & (0xFFFFFFFF >> ~v5)) == 0;
    }
    return 0;
  }
  return (v7 & (0xFFFFFFFF >> (32 - Length) << StartingIndex)) == 0;
}
