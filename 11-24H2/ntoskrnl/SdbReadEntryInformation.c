/*
 * XREFs of SdbReadEntryInformation @ 0x140802F38
 * Callers:
 *     PiIsDriverBlocked @ 0x1409BA914 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SdbTagRefToTagID @ 0x14080642C (SdbTagRefToTagID.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbGetDatabaseID @ 0x140A60B48 (SdbGetDatabaseID.c)
 *     SdbReadBinaryTag @ 0x140A60C50 (SdbReadBinaryTag.c)
 *     SdbGetEntryFlags @ 0x140A9FFF0 (SdbGetEntryFlags.c)
 */

__int64 __fastcall SdbReadEntryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  const char *v5; // r9
  int v6; // r8d
  __int64 v7; // rsi
  unsigned int v8; // r15d
  unsigned int FirstTag; // eax
  int EntryFlags; // eax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  unsigned int v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h]

  v14 = 0;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = SdbTagRefToTagID(a1, a2, &v15, &v14);
  if ( !v4 )
  {
    v5 = "Failed to convert tagref 0x%x to tagid";
    v6 = 7347;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbReadEntryInformation", v6, (_DWORD)v5);
    return v4;
  }
  v7 = v15;
  v8 = v14;
  FirstTag = SdbFindFirstTag(v15, v14, 36868LL);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      7357,
      (unsigned int)"Failed to read TAG_EXE_ID for tiExe 0x%x");
    return 0;
  }
  v4 = SdbReadBinaryTag(v7, FirstTag, &v16, 16LL);
  if ( !v4 )
  {
    v5 = "Failed to read GUID referenced by 0x%x";
    v6 = 7367;
    goto LABEL_3;
  }
  if ( !(unsigned int)SdbGetDatabaseID(v7, (char *)&v17 + 8) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadEntryInformation",
      7375,
      (unsigned int)"Failed to read GUID of the database");
    return 0;
  }
  EntryFlags = SdbGetEntryFlags(&v16, &v17);
  LODWORD(v17) = EntryFlags != 0 ? v17 : 0;
  DWORD1(v17) = SdbFindFirstTag(v7, v8, 28687LL);
  if ( a3 )
  {
    v11 = v17;
    *(_OWORD *)a3 = v16;
    v12 = v18;
    *(_OWORD *)(a3 + 16) = v11;
    *(_QWORD *)(a3 + 32) = v12;
  }
  return 1;
}
