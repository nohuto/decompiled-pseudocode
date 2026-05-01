/*
 * XREFs of ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x1801BE92C
 * Callers:
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801BE834 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801BE890 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18005D440 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall QueryCpuCyclesUsedByWindow(HWND a1, unsigned __int64 *a2)
{
  char *v3; // rax
  wil::details *v4; // rcx
  void *v5; // rbx
  signed int LastErrorFailHr; // edi
  char *v7; // rbp
  char *v8; // rsi
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  if ( !a1 )
  {
    LastErrorFailHr = -2147024809;
    goto LABEL_13;
  }
  dwProcessId = 0;
  GetWindowThreadProcessId(a1, &dwProcessId);
  v3 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v13 = v3;
  v5 = v3;
  if ( !v3 )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
    v7 = 0LL;
    v8 = 0LL;
    if ( LastErrorFailHr >= 0 )
      goto LABEL_4;
LABEL_13:
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v13);
    return (unsigned int)LastErrorFailHr;
  }
  v8 = v3;
  v7 = v3;
LABEL_4:
  if ( !QueryProcessCycleTime(v5, a2) )
  {
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0xC8A,
                        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                        v9);
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
    return (unsigned int)LastErrorFailHr;
  }
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  return 0LL;
}
