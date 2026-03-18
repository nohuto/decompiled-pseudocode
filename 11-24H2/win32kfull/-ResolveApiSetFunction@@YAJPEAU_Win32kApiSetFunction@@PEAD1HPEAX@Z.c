/*
 * XREFs of ?ResolveApiSetFunction@@YAJPEAU_Win32kApiSetFunction@@PEAD1HPEAX@Z @ 0x14033F4D0
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x140228CAC (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResolveApiSetFunction(struct _Win32kApiSetFunction *a1, char *a2, char *a3, int a4, void *a5)
{
  __int64 ExportedRoutineByName; // rdi
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rax

  ExportedRoutineByName = RtlFindExportedRoutineByName(a5, a2);
  if ( !ExportedRoutineByName || *(_DWORD *)RtlFindExportedRoutineByName(a5, a3) != a4 )
    return 3221225524LL;
  v9 = 0;
  v10 = ExportedRoutineByName - (_QWORD)a1;
  while ( v9 < a4 )
  {
    v11 = *(_QWORD *)((char *)a1 + v10);
    *(_QWORD *)a1 = v11;
    if ( !v11 )
      return 3221225524LL;
    ++v9;
    a1 = (struct _Win32kApiSetFunction *)((char *)a1 + 8);
  }
  return 0LL;
}
