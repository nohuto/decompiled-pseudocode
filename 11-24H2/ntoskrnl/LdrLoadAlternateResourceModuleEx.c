/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x14044EDC4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14044E290 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14044EC90 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x140908A90 (LdrResSearchResource.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x1402C830C (LdrpKrnGetDataTableEntry.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14044EF40 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 *     DownLevelLangIDToLanguageName @ 0x1404B167C (DownLevelLangIDToLanguageName.c)
 *     LdrpGetResourceFileName @ 0x1405E7918 (LdrpGetResourceFileName.c)
 *     LdrpMapResourceFile @ 0x1405E7AAC (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405E7D14 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmUnmapViewInSystemSpace @ 0x140A4AE00 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModuleEx(__int64 a1, unsigned __int16 a2, _QWORD *a3, __int64 *a4, int a5)
{
  int v7; // r13d
  unsigned __int64 v9; // rsi
  __int64 DataTableEntry; // rax
  __int64 v12; // rdx
  int ResourceFileName; // edi
  __int64 v14; // rsi
  int v15; // edi
  const wchar_t *v16; // r8
  __int64 v17; // r8
  PVOID MappedBase; // [rsp+40h] [rbp-348h] BYREF
  __int64 v19; // [rsp+48h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-338h] BYREF
  int v21; // [rsp+58h] [rbp-330h]
  __int128 v22; // [rsp+60h] [rbp-328h] BYREF
  __int64 v23; // [rsp+78h] [rbp-310h]
  _BYTE v24[176]; // [rsp+80h] [rbp-308h] BYREF
  char v25; // [rsp+130h] [rbp-258h] BYREF

  v7 = a2;
  MappedBase = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  memset_0(v24, 0, 0xAAuLL);
  v19 = 0LL;
  if ( !a1 || !(_WORD)v7 || !a3 )
    return 3221225485LL;
  v9 = LdrpGetFromMUIMemCache(a1, (unsigned __int16)v7, &v19, 4LL);
  if ( v9 == -1LL )
  {
    *a3 = 0LL;
    return 3221946374LL;
  }
  if ( v9 )
  {
    *a3 = v9;
    if ( a4 )
      *a4 = v19;
    v21 = 0;
    return 0LL;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  v23 = DataTableEntry;
  if ( !DataTableEntry )
    goto LABEL_12;
  *((_QWORD *)&v22 + 1) = &v25;
  LODWORD(v22) = 34078720;
  v15 = a5 & 0x1000000;
  if ( (a5 & 0x1000000) != 0 )
  {
LABEL_25:
    v16 = L".mun";
    if ( !v15 )
      v16 = L".mui";
    LOBYTE(v12) = v15 != 0;
    ResourceFileName = LdrpGetResourceFileName(DataTableEntry, v12, v16, v24, &v22);
    if ( ResourceFileName >= 0 )
    {
      ResourceFileName = LdrpMapResourceFile(
                           a1,
                           (unsigned int)&v22,
                           (unsigned int)&Handle,
                           (unsigned int)&MappedBase,
                           (__int64)&v19);
      if ( ResourceFileName >= 0 )
      {
        v9 = (unsigned __int64)MappedBase | 1;
        if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(a1, (unsigned __int64)MappedBase | 1, v17, v24, a5) )
        {
          MmUnmapViewInSystemSpace(MappedBase);
          ZwClose(Handle);
          Handle = 0LL;
          v9 = 0LL;
          ResourceFileName = -1073020926;
        }
      }
    }
    goto LABEL_13;
  }
  if ( (unsigned int)DownLevelLangIDToLanguageName((unsigned __int16)v7, v24, 85LL) )
  {
    DataTableEntry = v23;
    goto LABEL_25;
  }
  DbgPrintEx(v15 + 85, v15 + 1, "LDR: No Locale name for LangId %d \n", v7);
LABEL_12:
  ResourceFileName = -1073020927;
LABEL_13:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v14 = v19;
  LdrpSetAlternateResourceModuleHandle(
    a1,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v7,
    1,
    ResourceFileName,
    v19);
  if ( MappedBase == (PVOID)-1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = MappedBase;
    if ( a4 )
      *a4 = v14;
    return 0;
  }
  return (unsigned int)ResourceFileName;
}
