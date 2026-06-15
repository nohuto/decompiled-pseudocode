/*
 * XREFs of ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180057780
 * Callers:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180057504 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180057AB0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180057B28 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800664E8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     StringCopyWorkerW @ 0x18007D05C (StringCopyWorkerW.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A5F68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     StringLengthWorkerW_0 @ 0x1800A6D50 (StringLengthWorkerW_0.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::LaunchADGProcess(CAudioDGProcess *this, unsigned __int8 a2)
{
  int v2; // r13d
  size_t v4; // rdx
  const char *v5; // r9
  HRESULT LastError; // esi
  char *v7; // rcx
  char *v8; // rcx
  unsigned __int16 *v10; // r15
  unsigned __int64 v11; // r12
  wchar_t *v12; // r14
  size_t v13; // rbx
  void **v14; // rbx
  __int64 v15; // rdx
  void *v16; // rcx
  bool v17; // cc
  int ADGProcessSD; // eax
  const char *v19; // r9
  size_t bInheritHandles; // [rsp+28h] [rbp-E0h]
  size_t pcchLength; // [rsp+58h] [rbp-B0h] BYREF
  size_t pcchLength_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+88h] [rbp-80h]
  CAudioDGProcess *v25; // [rsp+90h] [rbp-78h]
  char v26; // [rsp+98h] [rbp-70h]
  struct _STARTUPINFOW StartupInfo; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t Buffer[264]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v2 = a2;
  v25 = this;
  v26 = 1;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetSystemDirectoryW(Buffer, 0x104u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x62,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v5);
    v7 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v7 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return (unsigned int)LastError;
    WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
    v8 = (char *)this + 88;
LABEL_4:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v8,
      0LL);
    *((_DWORD *)this + 24) = 0;
    return (unsigned int)LastError;
  }
  v10 = 0LL;
  v11 = 0LL;
  pcchLength = 0LL;
  LastError = StringLengthWorkerW_0(Buffer, v4, &pcchLength);
  if ( LastError >= 0 )
  {
    v12 = &Buffer[pcchLength];
    v13 = 260 - pcchLength;
    if ( pcchLength == 260 || pcchLength == 259 )
    {
      LastError = -2147024774;
LABEL_11:
      v10 = v12;
      v11 = 2 * v13;
      goto LABEL_12;
    }
    pcchLength = 0LL;
    LastError = StringCopyWorkerW(v12, v13, &pcchLength, L"\\AUDIODG.EXE", bInheritHandles);
    v12 += pcchLength;
    v13 -= pcchLength;
    if ( (int)(LastError + 0x80000000) < 0 || LastError == -2147024774 )
      goto LABEL_11;
  }
LABEL_12:
  v14 = (void **)((char *)this + 88);
  if ( LastError < 0 )
  {
    v15 = 102LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)LastError);
    v16 = *v14;
    v17 = (char *)*v14 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_15:
    if ( !v17 )
      return (unsigned int)LastError;
    WaitForSingleObjectEx(v16, 0xFFFFFFFF, 0);
    v8 = (char *)this + 88;
    goto LABEL_4;
  }
  LastError = StringCbPrintfW(v10, v11, L" 0x%p 0x%p", *((_QWORD *)this + 14), *((_QWORD *)this + 15));
  if ( LastError < 0 )
  {
    v15 = 104LL;
    goto LABEL_14;
  }
  memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
  StartupInfo.cb = 104;
  *(_OWORD *)pcchLength_8 = 0LL;
  LODWORD(pcchLength_8[0]) = 24;
  ProcessInformation.hProcess = 0LL;
  ADGProcessSD = CAudioDGProcess::GetADGProcessSD((void **)&pcchLength_8[1]);
  LastError = ADGProcessSD;
  if ( ADGProcessSD < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessSD);
LABEL_21:
    v16 = *v14;
    v17 = (char *)*v14 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_15;
  }
  *(_OWORD *)&ProcessInformation.hThread = 0LL;
  v24 = 0LL;
  if ( !CreateProcessW(
          0LL,
          Buffer,
          (LPSECURITY_ATTRIBUTES)pcchLength_8,
          0LL,
          1,
          v2 << 18,
          0LL,
          0LL,
          &StartupInfo,
          (LPPROCESS_INFORMATION)&ProcessInformation.hThread) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x76,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
                  v19);
    operator delete((void *)pcchLength_8[1]);
    pcchLength_8[1] = 0LL;
    goto LABEL_21;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 88,
    ProcessInformation.hThread);
  *((_DWORD *)this + 24) = v24;
  if ( (unsigned __int64)(*(_QWORD *)&ProcessInformation.dwProcessId - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(*(HANDLE *)&ProcessInformation.dwProcessId);
    *(_QWORD *)&ProcessInformation.dwProcessId = 0LL;
  }
  operator delete((void *)pcchLength_8[1]);
  return 0LL;
}
