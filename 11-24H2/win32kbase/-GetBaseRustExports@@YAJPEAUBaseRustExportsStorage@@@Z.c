/*
 * XREFs of ?GetBaseRustExports@@YAJPEAUBaseRustExportsStorage@@@Z @ 0x1401C5454
 * Callers:
 *     ?AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1401C51E0 (-AllocateAndGetBaseRustExports@@YAJPEBU_SYSTEM_GDI_DRIVER_INFORMATION@@PEAPEAUBaseRustExportsSto.c)
 *     ?AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z @ 0x1401C526C (-AllocateAndLoadBaseRustExports@@YAJPEBGPEAPEAUBaseRustExportsStorage@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetBaseRustExports(struct BaseRustExportsStorage *a1)
{
  int v2; // edi
  __int64 (__fastcall *SystemRoutineAddress)(_QWORD *, GUID *); // rbp
  GUID **v4; // rbx
  GUID *v5; // rdx
  __int64 ExportedRoutineByName; // rax
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 2359330LL;
  v9[1] = L"win32kbase_rs.sys";
  *(_QWORD *)&v8.Length = 3670070LL;
  v2 = 0;
  v8.Buffer = L"MmGetSystemRoutineAddressEx";
  SystemRoutineAddress = (__int64 (__fastcall *)(_QWORD *, GUID *))MmGetSystemRoutineAddress(&v8);
  v4 = (GUID **)&off_140258960;
  do
  {
    v5 = *v4;
    if ( SystemRoutineAddress )
      ExportedRoutineByName = SystemRoutineAddress(v9, v5);
    else
      ExportedRoutineByName = RtlFindExportedRoutineByName(*((_QWORD *)a1 + 2), v5);
    if ( ExportedRoutineByName )
    {
      *((_QWORD *)a1 + (_QWORD)v4[1] + 6) = ExportedRoutineByName;
    }
    else
    {
      DbgPrintEx(0x70u, 0, "failed to load win32kbase_rs.sys, because import %s is not found\n", (const char *)*v4);
      v2 = -1073741702;
    }
    v4 += 2;
  }
  while ( v4 != &off_140258E40 );
  if ( v2 < 0 )
    DbgPrintEx(0x70u, 0, "failed to loaded win32kbase_rs.sys: %08x\n", v2);
  return (unsigned int)v2;
}
