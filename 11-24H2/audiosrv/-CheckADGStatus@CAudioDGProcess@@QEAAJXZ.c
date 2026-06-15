/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180058528
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18006449C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001FEB0 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rdi
  void *v2; // rcx
  unsigned int LockSemaphore; // ebx
  __int64 v4; // rdx
  const char *v6; // r9
  int LastError; // eax
  signed int v8; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD ExitCode; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]
  LONG *p_LockCount; // [rsp+58h] [rbp+10h]

  v13 = HIDWORD(this);
  v1 = g_ADGProcess;
  ExitCode = 0;
  v2 = *(void **)&g_ADGProcess[2].LockCount;
  if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LockSemaphore = -2004287472;
    v4 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)LockSemaphore);
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)LockSemaphore);
    return LockSemaphore;
  }
  Handles[0] = (HANDLE)g_ADGProcess[2].SpinCount;
  Handles[1] = v2;
  if ( WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0) == 1 )
  {
    if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, &ExitCode) )
    {
      if ( ExitCode == -1073740760 )
      {
        LockSemaphore = -2147024319;
        v4 = 195LL;
        goto LABEL_3;
      }
      if ( !ExitCode )
        goto LABEL_9;
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0xC7,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                    (const char *)ExitCode,
                    v9);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xC1,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                    v6);
    }
    LockSemaphore = LastError;
    if ( LastError < 0 )
      goto LABEL_4;
  }
LABEL_9:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  p_LockCount = &v1[1].LockCount;
  if ( !BYTE4(v1[2].OwningThread) )
  {
    if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, &ExitCode) )
    {
      v8 = ExitCode;
      if ( ExitCode == 259 )
      {
        v8 = CAudioDGProcess::CheckADGStartupStatus((HANDLE *)&v1->DebugInfo);
LABEL_26:
        LODWORD(v1[2].LockSemaphore) = v8;
        BYTE4(v1[2].OwningThread) = 1;
        goto LABEL_10;
      }
    }
    else
    {
      v8 = GetLastError();
      ExitCode = v8;
    }
    if ( v8 > 0 )
      v8 = (unsigned __int16)v8 | 0x80070000;
    goto LABEL_26;
  }
LABEL_10:
  LockSemaphore = (unsigned int)v1[2].LockSemaphore;
  if ( (LockSemaphore & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)LockSemaphore);
  if ( v1 != (LPCRITICAL_SECTION)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 48));
  return LockSemaphore;
}
