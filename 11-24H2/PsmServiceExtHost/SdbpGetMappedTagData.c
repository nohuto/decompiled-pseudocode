/*
 * XREFs of SdbpGetMappedTagData @ 0x1800987CC
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x180097C18 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180097D90 (SdbpGetNextIndexedRecord.c)
 *     SdbGetBinaryTagData @ 0x180098160 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x180098764 (SdbpGetMappedStringFromTable.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1800989C8 (SdbpGetTagHeadSize.c)
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
