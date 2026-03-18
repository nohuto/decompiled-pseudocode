/*
 * XREFs of PspLookupEntryPoint @ 0x140C3595C
 * Callers:
 *     PspInitializeSystemDlls @ 0x140C35894 (PspInitializeSystemDlls.c)
 *     ?PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEADPEAX_K@Z @ 0x140C36090 (-PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEADPEAX_K@Z.c)
 * Callees:
 *     RtlFindExportedRoutineByName @ 0x1408B0E30 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall PspLookupEntryPoint(__int64 a1, unsigned __int8 *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  unsigned __int64 ExportedRoutineByName; // rax

  v5 = 0;
  ExportedRoutineByName = RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 32), a2);
  *a3 = ExportedRoutineByName;
  if ( ExportedRoutineByName )
    *a3 = ExportedRoutineByName + *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 32);
  else
    return (unsigned int)-1073741702;
  return v5;
}
