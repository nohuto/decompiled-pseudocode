/*
 * XREFs of RtlDownlevelGetNtSystemRoot @ 0x1800A7634
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180092DBC (SdbpGetManifestedMergeStubAlloc.c)
 *     AslPathToSystemPathBuf @ 0x1800A411C (AslPathToSystemPathBuf.c)
 *     AslEnvVarQuery @ 0x1800A6924 (AslEnvVarQuery.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 RtlDownlevelGetNtSystemRoot()
{
  __int64 v0; // rbx
  HMODULE Library; // rax
  HMODULE v2; // rdi
  __int64 (*ProcAddress)(void); // rax

  v0 = qword_1800E97F8;
  if ( !qword_1800E97F8 )
  {
    v0 = 2147352624LL;
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    v2 = Library;
    if ( Library )
    {
      ProcAddress = GetProcAddress(Library, "RtlGetNtSystemRoot");
      if ( ProcAddress )
        v0 = ProcAddress();
      FreeLibrary(v2);
    }
    qword_1800E97F8 = v0;
  }
  return v0;
}
