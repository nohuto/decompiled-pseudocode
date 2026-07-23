/*
 * XREFs of SdbpGetExeEntryFlags @ 0x140804E40
 * Callers:
 *     SdbpCheckForMatch @ 0x140A04CB0 (SdbpCheckForMatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x140A60C50 (SdbReadBinaryTag.c)
 *     SdbGetEntryFlags @ 0x140A9FFF0 (SdbGetEntryFlags.c)
 */

__int64 __fastcall SdbpGetExeEntryFlags(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int FirstTag; // eax
  const char *v8; // r9
  int v9; // r8d
  int EntryFlags; // eax
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v16; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  v17 = 0LL;
  v16 = 0;
  v5 = a2;
  FirstTag = SdbFindFirstTag(a1, a2, 36868LL);
  if ( !FirstTag )
  {
    v8 = "Failed to read TAG_EXE_ID for tiExe 0x%x";
    v9 = 719;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetExeEntryFlags", v9, (_DWORD)v8);
    return v4;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, FirstTag, &v17, 16LL) )
  {
    v8 = "Failed to read the GUID for tiExe 0x%x";
    v9 = 724;
    goto LABEL_3;
  }
  EntryFlags = SdbGetEntryFlags(&v17, &v16);
  v11 = EntryFlags != 0 ? v16 : 0;
  v12 = SdbFindFirstTag(a1, v5, 28685LL);
  if ( v12 )
  {
    v11 |= 0x1000u;
    v13 = SdbFindFirstTag(a1, v12, 16400LL);
    if ( v13 )
    {
      if ( (unsigned int)SdbReadDWORDTag(a1, v13, 0LL) == 2 )
        v11 |= 0x2000u;
    }
  }
  v14 = SdbFindFirstTag(a1, v5, 16434LL);
  if ( v14 )
    v11 |= (unsigned int)SdbReadDWORDTag(a1, v14, 0LL) << 16;
  *a3 = v11;
  return 1;
}
