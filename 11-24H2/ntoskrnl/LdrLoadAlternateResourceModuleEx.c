/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x1402DCE08
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1402DCCD4 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x14044EAD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1408E01B0 (LdrResSearchResource.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     LdrpKrnGetDataTableEntry @ 0x1402BA56C (LdrpKrnGetDataTableEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x1402DCFC0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     DownLevelLangIDToLanguageName @ 0x1404ABF0C (DownLevelLangIDToLanguageName.c)
 *     LdrpGetResourceFileName @ 0x1405E4F08 (LdrpGetResourceFileName.c)
 *     LdrpMapResourceFile @ 0x1405E509C (LdrpMapResourceFile.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405E5304 (LdrpVerifyAlternateResourceModuleEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmUnmapViewInSystemSpace @ 0x140A41A80 (MmUnmapViewInSystemSpace.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  int v7; // r13d
  unsigned __int64 v9; // rsi
  __int64 DataTableEntry; // rax
  __int64 v12; // rdx
  NTSTATUS ResourceFileName; // edi
  ULONG_PTR v14; // rsi
  ULONG v15; // edi
  const wchar_t *v16; // r8
  __int64 v17; // r8
  PVOID MappedBase; // [rsp+40h] [rbp-348h] BYREF
  ULONG_PTR v19; // [rsp+48h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-338h] BYREF
  int v21; // [rsp+58h] [rbp-330h]
  __int128 v22; // [rsp+60h] [rbp-328h] BYREF
  __int64 v23; // [rsp+78h] [rbp-310h]
  _BYTE v24[176]; // [rsp+80h] [rbp-308h] BYREF
  char v25; // [rsp+130h] [rbp-258h] BYREF

  v7 = LanguageId;
  MappedBase = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  memset_0(v24, 0, 0xAAuLL);
  v19 = 0LL;
  if ( !DllHandle || !(_WORD)v7 || !ResourceDllBase )
    return -1073741811;
  v9 = LdrpGetFromMUIMemCache(DllHandle);
  if ( v9 == -1LL )
  {
    *ResourceDllBase = 0LL;
    return -1073020922;
  }
  if ( v9 )
  {
    *ResourceDllBase = (PVOID)v9;
    if ( ResourceOffset )
      *ResourceOffset = v19;
    v21 = 0;
    return 0;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry((__int64)DllHandle);
  v23 = DataTableEntry;
  if ( !DataTableEntry )
    goto LABEL_12;
  *((_QWORD *)&v22 + 1) = &v25;
  LODWORD(v22) = 34078720;
  v15 = Flags & 0x1000000;
  if ( (Flags & 0x1000000) != 0 )
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
                           (_DWORD)DllHandle,
                           (unsigned int)&v22,
                           (unsigned int)&Handle,
                           (unsigned int)&MappedBase,
                           (__int64)&v19);
      if ( ResourceFileName >= 0 )
      {
        v9 = (unsigned __int64)MappedBase | 1;
        if ( !(unsigned __int8)LdrpVerifyAlternateResourceModuleEx(
                                 DllHandle,
                                 (unsigned __int64)MappedBase | 1,
                                 v17,
                                 v24,
                                 Flags) )
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
  if ( (unsigned int)DownLevelLangIDToLanguageName((unsigned __int16)v7, v24, 85LL, 2LL) )
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
    (_DWORD)DllHandle,
    (unsigned int)&MappedBase,
    (unsigned int)&Handle,
    0,
    v7,
    1,
    ResourceFileName,
    v19);
  if ( MappedBase == (PVOID)-1LL )
  {
    *ResourceDllBase = 0LL;
  }
  else
  {
    *ResourceDllBase = MappedBase;
    if ( ResourceOffset )
      *ResourceOffset = v14;
    return 0;
  }
  return ResourceFileName;
}
