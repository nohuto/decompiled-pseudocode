/*
 * XREFs of WheapDefaultErrSrcCreateRecord @ 0x14065C230
 * Callers:
 *     <none>
 * Callees:
 *     WheapCreateRecordFromGenericErrorData @ 0x14065BEC4 (WheapCreateRecordFromGenericErrorData.c)
 */

__int64 __fastcall WheapDefaultErrSrcCreateRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( *(_DWORD *)(a2 + 56) == 7 )
    return WheapCreateRecordFromGenericErrorData(a1, a2, a3, a4);
  else
    return 3221225474LL;
}
