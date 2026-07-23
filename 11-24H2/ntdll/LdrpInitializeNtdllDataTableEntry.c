/*
 * XREFs of LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpAllocateModuleEntry @ 0x18003D080 (LdrpAllocateModuleEntry.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     LdrpInsertDataTableEntry @ 0x180090B20 (LdrpInsertDataTableEntry.c)
 *     LdrpResolvePatchDllName @ 0x180090FE8 (LdrpResolvePatchDllName.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     LdrpFreeUnicodeString @ 0x180092B3C (LdrpFreeUnicodeString.c)
 *     LdrpRecordModuleDependency @ 0x1800D5E00 (LdrpRecordModuleDependency.c)
 *     LdrpInsertModuleToIndex @ 0x1800EF830 (LdrpInsertModuleToIndex.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeNtdllDataTableEntry(PVOID BaseOfImage, __int64 *a2, __int64 a3, _OWORD *a4)
{
  char *ModuleEntry; // rax
  __int64 v9; // rbx
  unsigned __int16 *v10; // rsi
  int v11; // edi
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-268h] BYREF
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-260h] BYREF
  _BYTE MemoryInformation[16]; // [rsp+40h] [rbp-258h] BYREF
  _WORD Src[264]; // [rsp+50h] [rbp-248h] BYREF

  OutHeaders = 0LL;
  memset_thunk_772440563353939046(MemoryInformation, 0, 0x218uLL);
  ReturnLength = 0LL;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v9 = (__int64)ModuleEntry;
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      4956,
      (__int64)"LdrpInitializeNtdllDataTableEntry",
      0,
      "Allocating a data table entry for the system DLL failed\n");
    return (unsigned int)-1073741801;
  }
  *(_DWORD *)(*((_QWORD *)ModuleEntry + 19) + 24LL) = -1;
  *(_WORD *)(**((_QWORD **)ModuleEntry + 19) - 52LL) = -1;
  *((_DWORD *)ModuleEntry + 26) |= 0x204u;
  if ( !a3 )
    *((_QWORD *)ModuleEntry + 31) -= LdrSystemDllInitBlock.SystemDllNativeRelocation;
  if ( a4 )
  {
    v10 = (unsigned __int16 *)(ModuleEntry + 72);
    *(_OWORD *)(ModuleEntry + 72) = *a4;
    RtlAppendUnicodeStringToString((PUNICODE_STRING)(ModuleEntry + 72), &NtDllName);
    *(UNICODE_STRING *)(v9 + 88) = NtDllName;
  }
  else
  {
    v11 = ZwQueryVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            *(PVOID *)LdrpNtdllHotPatchContext,
            MemoryMappedFilenameInformation,
            MemoryInformation,
            0x218uLL,
            &ReturnLength);
    if ( v11 < 0 )
      goto LABEL_11;
    v10 = (unsigned __int16 *)(v9 + 72);
    v11 = LdrpResolvePatchDllName(Src, v9 + 88, v9 + 72);
    if ( v11 < 0 )
      goto LABEL_11;
  }
  *(_QWORD *)(v9 + 48) = BaseOfImage;
  if ( a3 )
    *(_DWORD *)(v9 + 268) = 9;
  LdrpInsertDataTableEntry(v9);
  LdrpLogDllState(*(_QWORD *)(v9 + 48), v10, 5285);
  LdrpInsertModuleToIndex(v9, OutHeaders);
  LODWORD(OutHeaders) = LdrpProcessMappedModule(v9, 0, 1);
  v11 = (int)OutHeaders;
  if ( (int)OutHeaders >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v9 + 48), v10, 5294);
    if ( a3 )
    {
      LdrpRecordModuleDependency(LdrpNtDllDataTableEntry, v9, 0LL, &OutHeaders);
      v11 = (int)OutHeaders;
      if ( (int)OutHeaders < 0 )
        goto LABEL_17;
      *(_QWORD *)(v9 + 184) = *(_QWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 304) = 3;
      *(_QWORD *)(a3 + 296) = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 304) = 2;
    }
    *(_DWORD *)(*(_QWORD *)(v9 + 152) + 56LL) = 9;
    *a2 = v9;
  }
LABEL_11:
  if ( v11 < 0 )
LABEL_17:
    LdrpFreeUnicodeString(v9 + 72);
  return (unsigned int)v11;
}
