/*
 * XREFs of ??0CLockProcessByPid@@QEAA@PEAXW4LockProcessOptions@@_K@Z @ 0x140275300
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x140188D44 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x14021ACC4 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 * Callees:
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027512C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 */

__int64 __fastcall CLockProcessByPid::CLockProcessByPid(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  CLockProcessByPid::CLockProcessByPid(a1, a2, 0, a4, a3);
  return a1;
}
