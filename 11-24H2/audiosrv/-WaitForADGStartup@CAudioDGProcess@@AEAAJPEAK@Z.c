/*
 * XREFs of ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180059EB4
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001FC34 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180059DCC (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

unsigned int __fastcall CAudioDGProcess::WaitForADGStartup(CAudioDGProcess *this, unsigned int *a2)
{
  void *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  void *v8; // rax
  const char *v9; // r9
  const char *v10; // r9
  unsigned int v11; // [rsp+20h] [rbp-28h]
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 11);
  if ( (((unsigned __int64)v4 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2004287472;
    v6 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)v5);
    return v5;
  }
  v8 = (void *)*((_QWORD *)this + 14);
  Handles[1] = v4;
  Handles[0] = v8;
  if ( WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0) != 1 )
    return 0;
  if ( !GetExitCodeProcess(*((HANDLE *)this + 11), a2) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xC1,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
             v9);
  v10 = (const char *)*a2;
  if ( (_DWORD)v10 == -1073740760 )
  {
    v5 = -2147024319;
    v6 = 195LL;
    goto LABEL_3;
  }
  if ( !(_DWORD)v10 )
    return 0;
  return wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0xC7,
           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
           v10,
           v11);
}
