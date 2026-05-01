/*
 * XREFs of SdbpGetMappedTagData @ 0x18009836C
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x1800977B8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180097930 (SdbpGetNextIndexedRecord.c)
 *     SdbGetBinaryTagData @ 0x180097D00 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x180098304 (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x180098568 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize(a1, a2);
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    v4 = 0LL;
LABEL_4:
    AslLogCallPrintf(1LL);
    return v4;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
    goto LABEL_4;
  return v4;
}
