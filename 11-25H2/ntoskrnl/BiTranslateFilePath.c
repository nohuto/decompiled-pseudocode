/*
 * XREFs of BiTranslateFilePath @ 0x140A26634
 * Callers:
 *     BiCreateBootEntry @ 0x140805084 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x140A253DC (BiCreateMergedBootEntry.c)
 *     BiGetDeviceFromEfiPath @ 0x140A264BC (BiGetDeviceFromEfiPath.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x14069EC20 (ZwTranslateFilePath.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiTranslateFilePath(PFILE_PATH InputFilePath, ULONG OutputType, _FILE_PATH **a3)
{
  _FILE_PATH *v5; // rdi
  NTSTATUS v7; // ebx
  NTSTATUS v9; // eax
  _FILE_PATH *Pool2; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  ULONG OutputFilePathLength; // [rsp+68h] [rbp+20h] BYREF

  v11[0] = 0LL;
  v5 = 0LL;
  v7 = BiAcquirePrivilege(22LL, v11);
  if ( v7 >= 0 )
  {
    OutputFilePathLength = 0;
    v9 = ZwTranslateFilePath(InputFilePath, OutputType, 0LL, &OutputFilePathLength);
    v7 = v9;
    if ( v9 == -1073741789 )
    {
      Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL);
      v5 = Pool2;
      if ( Pool2 )
        v7 = ZwTranslateFilePath(InputFilePath, OutputType, Pool2, &OutputFilePathLength);
      else
        v7 = -1073741670;
    }
    else if ( v9 >= 0 )
    {
      v7 = -1073741811;
    }
    BiReleasePrivilege(v11);
    if ( v7 < 0 )
    {
      if ( v5 )
        ExFreePoolWithTag(v5, 0x4B444342u);
    }
    else
    {
      *a3 = v5;
    }
  }
  return (unsigned int)v7;
}
