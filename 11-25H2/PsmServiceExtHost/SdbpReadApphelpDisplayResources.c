/*
 * XREFs of SdbpReadApphelpDisplayResources @ 0x180095978
 * Callers:
 *     SdbpApphelpExeInfo @ 0x180095104 (SdbpApphelpExeInfo.c)
 * Callees:
 *     SdbOpenApphelpResourceFile @ 0x180095034 (SdbOpenApphelpResourceFile.c)
 *     SdbpConvertResourcesToStrings @ 0x180095450 (SdbpConvertResourcesToStrings.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180098128 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpReadApphelpDisplayResources(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // esi
  unsigned int FirstTag; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  HMODULE hLibModule; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h]

  v15 = 0LL;
  v8 = 0;
  hLibModule = SdbOpenApphelpResourceFile();
  if ( hLibModule )
  {
    FirstTag = SdbFindFirstTag(a1, a3, 16420LL);
    if ( FirstTag )
      LODWORD(v15) = SdbReadDWORDTag(a1, FirstTag, 0LL);
    v10 = SdbFindFirstTag(a1, a3, 16421LL);
    if ( v10 )
      DWORD1(v15) = SdbReadDWORDTag(a1, v10, 0LL);
    v11 = SdbFindFirstTag(a1, a3, 16422LL);
    if ( v11 )
      DWORD2(v15) = SdbReadDWORDTag(a1, v11, 0LL);
    v12 = SdbFindFirstTag(a1, a3, 16425LL);
    if ( v12 )
      HIDWORD(v15) = SdbReadDWORDTag(a1, v12, 0LL);
    if ( (unsigned int)SdbpConvertResourcesToStrings(a1, a2, &hLibModule, a4) )
      v8 = 1;
    if ( hLibModule )
      FreeLibrary(hLibModule);
  }
  return v8;
}
