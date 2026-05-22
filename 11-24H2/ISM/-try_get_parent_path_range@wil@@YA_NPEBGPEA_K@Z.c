/*
 * XREFs of ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x1800D9830
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D5BE8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::try_get_parent_path_range(LPCWSTR lpStringSource, unsigned __int16 *a2, unsigned __int64 *a3)
{
  char v3; // bl
  __int64 v6; // r8
  __int64 v7; // rbx
  int StringOrdinal; // eax
  const WCHAR *v9; // rax
  __int64 v10; // rax
  PCWSTR v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  *(_QWORD *)a2 = 0LL;
  v12 = 0LL;
  if ( PathCchSkipRoot(lpStringSource, &v12) >= 0 && *v12 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( lpStringSource[v6] );
    v7 = v6;
    if ( v6 && lpStringSource[v7 - 1] == 92 )
      LODWORD(v6) = v6 - 1;
    StringOrdinal = FindStringOrdinal(0x800000u, lpStringSource, v6, L"\\", 1, 1);
    if ( StringOrdinal == -1 )
      v9 = &lpStringSource[v7];
    else
      v9 = &lpStringSource[StringOrdinal + 1];
    v10 = v9 - lpStringSource;
    *(_QWORD *)a2 = v10;
    return v10 != 0;
  }
  return v3;
}
