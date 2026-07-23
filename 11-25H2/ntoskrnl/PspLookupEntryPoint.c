/*
 * XREFs of PspLookupEntryPoint @ 0x140C24690
 * Callers:
 *     PspInitializeSystemDlls @ 0x140C245C8 (PspInitializeSystemDlls.c)
 *     ?PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEADPEAX_K@Z @ 0x140C24DC4 (-PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEADPEAX_K@Z.c)
 * Callees:
 *     RtlFindExportedRoutineByName @ 0x1408E85B0 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall PspLookupEntryPoint(__int64 a1, const CHAR *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  char *ExportedRoutineByName; // rax

  v5 = 0;
  ExportedRoutineByName = (char *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 32), a2);
  *a3 = ExportedRoutineByName;
  if ( ExportedRoutineByName )
    *a3 = &ExportedRoutineByName[*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 32)];
  else
    return (unsigned int)-1073741702;
  return v5;
}
