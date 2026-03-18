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

__int64 __fastcall BiTranslateFilePath(__int64 a1, unsigned int a2, _QWORD *a3)
{
  void *Pool2; // rdi
  int v7; // ebx
  int v9; // eax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = 0LL;
  Pool2 = 0LL;
  v7 = BiAcquirePrivilege(22LL, v10);
  if ( v7 >= 0 )
  {
    v9 = ZwTranslateFilePath(a1, a2);
    v7 = v9;
    if ( v9 == -1073741789 )
    {
      Pool2 = (void *)ExAllocatePool2(0x102uLL);
      if ( Pool2 )
        v7 = ZwTranslateFilePath(a1, a2);
      else
        v7 = -1073741670;
    }
    else if ( v9 >= 0 )
    {
      v7 = -1073741811;
    }
    BiReleasePrivilege(v10);
    if ( v7 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x4B444342u);
    }
    else
    {
      *a3 = Pool2;
    }
  }
  return (unsigned int)v7;
}
