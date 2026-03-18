/*
 * XREFs of EngFindImageProcAddress @ 0x140322DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall EngFindImageProcAddress(HANDLE hModule, LPSTR lpProcName)
{
  char **i; // rax
  LPSTR v4; // rcx
  int v5; // r9d
  int v6; // edx
  __int64 v8; // rdi
  size_t v9; // r8

  if ( hModule )
  {
    v8 = *((_QWORD *)hModule + 2);
    v9 = -1LL;
    do
      ++v9;
    while ( lpProcName[v9] );
    if ( !strncmp(lpProcName, "DrvEnableDriver", v9) )
      return *(PVOID *)(v8 + 32);
    else
      return (PVOID)RtlFindExportedRoutineByName(*(_QWORD *)(v8 + 16), lpProcName);
  }
  else
  {
    for ( i = &off_14034C0A0; i != (char **)&off_14034C520; i += 2 )
    {
      v4 = lpProcName;
      do
      {
        v5 = (unsigned __int8)v4[*i - lpProcName];
        v6 = (unsigned __int8)*v4 - v5;
        if ( v6 )
          break;
        ++v4;
      }
      while ( v5 );
      if ( !v6 )
        return i[1];
    }
    return 0LL;
  }
}
