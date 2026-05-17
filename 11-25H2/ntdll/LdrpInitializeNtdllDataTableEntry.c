/*
 * XREFs of LdrpInitializeNtdllDataTableEntry @ 0x1800F6570
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpInsertDataTableEntry @ 0x18006EAC0 (LdrpInsertDataTableEntry.c)
 *     LdrpResolvePatchDllName @ 0x18006EF88 (LdrpResolvePatchDllName.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpRecordModuleDependency @ 0x1800DAF80 (LdrpRecordModuleDependency.c)
 *     LdrpInsertModuleToIndex @ 0x1800F67F0 (LdrpInsertModuleToIndex.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeNtdllDataTableEntry(unsigned __int64 a1, __int64 *a2, __int64 a3, _OWORD *a4)
{
  __int64 ModuleEntry; // rax
  __int64 v9; // rbx
  unsigned __int16 *v10; // rsi
  int v11; // edi
  char v13; // [rsp+28h] [rbp-270h]
  __int64 v14; // [rsp+30h] [rbp-268h] BYREF
  __int64 v15; // [rsp+38h] [rbp-260h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-258h] BYREF
  _WORD Src[264]; // [rsp+50h] [rbp-248h] BYREF

  v14 = 0LL;
  memset_thunk_772440563353939046(v16, 0, 0x218uLL);
  v15 = 0LL;
  RtlImageNtHeaderEx(3, a1, 0LL, &v14);
  ModuleEntry = LdrpAllocateModuleEntry(0LL);
  v9 = ModuleEntry;
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      4958,
      (__int64)"LdrpInitializeNtdllDataTableEntry",
      0,
      "Allocating a data table entry for the system DLL failed\n",
      v13);
    return (unsigned int)-1073741801;
  }
  *(_DWORD *)(*(_QWORD *)(ModuleEntry + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(ModuleEntry + 152) - 52LL) = -1;
  *(_DWORD *)(ModuleEntry + 104) |= 0x204u;
  if ( !a3 )
    *(_QWORD *)(ModuleEntry + 248) -= qword_1801EC450;
  if ( a4 )
  {
    v10 = (unsigned __int16 *)(ModuleEntry + 72);
    *(_OWORD *)(ModuleEntry + 72) = *a4;
    RtlAppendUnicodeStringToString((unsigned __int16 *)(ModuleEntry + 72), &NtDllName);
    *(_OWORD *)(v9 + 88) = *(_OWORD *)&NtDllName;
  }
  else
  {
    v11 = ZwQueryVirtualMemory(-1LL, *(_QWORD *)LdrpNtdllHotPatchContext, 2LL, v16, 536LL, &v15);
    if ( v11 < 0 )
      goto LABEL_11;
    v10 = (unsigned __int16 *)(v9 + 72);
    v11 = LdrpResolvePatchDllName(Src, v9 + 88, v9 + 72);
    if ( v11 < 0 )
      goto LABEL_11;
  }
  *(_QWORD *)(v9 + 48) = a1;
  if ( a3 )
    *(_DWORD *)(v9 + 268) = 9;
  LdrpInsertDataTableEntry(v9);
  LdrpLogDllState(*(_QWORD *)(v9 + 48), v10, 5285);
  LdrpInsertModuleToIndex(v9, v14);
  LODWORD(v14) = LdrpProcessMappedModule(v9, 0, 1);
  v11 = v14;
  if ( (int)v14 >= 0 )
  {
    LdrpLogDllState(*(_QWORD *)(v9 + 48), v10, 5294);
    if ( a3 )
    {
      LdrpRecordModuleDependency(LdrpNtDllDataTableEntry, v9, 0LL, &v14);
      v11 = v14;
      if ( (int)v14 < 0 )
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
