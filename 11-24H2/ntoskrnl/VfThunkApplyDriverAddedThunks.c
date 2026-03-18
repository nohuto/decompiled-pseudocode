/*
 * XREFs of VfThunkApplyDriverAddedThunks @ 0x140B97018
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x140B8A8E4 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x140B975F8 (ViThunkFindAllSpecialTables.c)
 *     ViThunkFindDriverImportEntry @ 0x140B97768 (ViThunkFindDriverImportEntry.c)
 *     MmApplyVerifierToRunningImage @ 0x140BA4790 (MmApplyVerifierToRunningImage.c)
 */

__int64 __fastcall VfThunkApplyDriverAddedThunks(ULONG_PTR a1)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  void *Pool2; // rdi
  __int64 result; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // r14d
  __int64 *AllSpecialTables; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 DriverImportEntry; // rdx
  int v13; // r11d
  __int64 v14; // rcx
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0;
  v2 = 0LL;
  v3 = 0;
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 24LL * (unsigned int)VfNumberOfClassDriverThunks, 0x6D4D7644uLL);
  if ( !Pool2 )
    return 3221225495LL;
  memset_0(Pool2, 0, 24LL * (unsigned int)VfNumberOfClassDriverThunks);
  result = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 0xCu, &v16);
  v6 = (_QWORD *)result;
  if ( result )
  {
    v7 = v16 >> 3;
    AllSpecialTables = (__int64 *)ViThunkFindAllSpecialTables(result, v16 >> 3);
    if ( !v7 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( AllSpecialTables )
      {
        v9 = *AllSpecialTables;
        LODWORD(v10) = 0;
        if ( *AllSpecialTables )
          break;
      }
LABEL_10:
      DriverImportEntry = ViThunkFindDriverImportEntry(&ViVerifierDriverAddedThunkListHead, *v6);
      if ( DriverImportEntry )
        goto LABEL_11;
LABEL_12:
      ++v6;
      if ( v13 + 1 >= v7 )
      {
        if ( (_DWORD)v2 )
          v3 = MmApplyVerifierToRunningImage(a1);
LABEL_15:
        if ( AllSpecialTables )
          ExFreePoolWithTag(AllSpecialTables, 0);
        ExFreePoolWithTag(Pool2, 0);
        return v3;
      }
    }
    v11 = *v6;
    while ( 1 )
    {
      DriverImportEntry = ViThunkFindDriverImportEntry(v9 + 24, v11);
      if ( DriverImportEntry )
        break;
      v10 = (unsigned int)(v10 + 1);
      v9 = AllSpecialTables[v10];
      if ( !v9 )
        goto LABEL_10;
    }
LABEL_11:
    v14 = 3 * v2;
    v2 = (unsigned int)(v2 + 1);
    *((_DWORD *)Pool2 + 2 * v14) = v13;
    *((_QWORD *)Pool2 + v14 + 1) = DriverImportEntry;
    goto LABEL_12;
  }
  return result;
}
