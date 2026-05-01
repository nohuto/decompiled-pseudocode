/*
 * XREFs of RtlDownlevelGetNtSystemRoot @ 0x18016D080
 * Callers:
 *     AslEnvBuildBasic @ 0x1800EEA40 (AslEnvBuildBasic.c)
 *     AslEnvVarQuery @ 0x1800EF7CC (AslEnvVarQuery.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 RtlDownlevelGetNtSystemRoot()
{
  __int64 v0; // rbx
  HMODULE Library; // rax
  HMODULE v3; // rdi
  __int64 (*ProcAddress)(void); // rax

  v0 = qword_18098D710;
  if ( !qword_18098D710 )
  {
    v0 = 2147352624LL;
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    v3 = Library;
    if ( Library )
    {
      ProcAddress = GetProcAddress(Library, "RtlGetNtSystemRoot");
      if ( ProcAddress )
        v0 = ProcAddress();
      FreeLibrary(v3);
    }
    qword_18098D710 = v0;
  }
  return v0;
}
