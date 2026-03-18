/*
 * XREFs of _RegisterDManipHook @ 0x1C0084750
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C0084700 (NtUserRegisterDManipHook.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x1C003B940 (RtlStringCopyWorkerW.c)
 *     AddHmodDependency @ 0x1C003D49C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C003D58C (GetHmodTableIndex.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C00848F0 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     IsPrivileged @ 0x1C0084A60 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 RegisterDManipHook()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  const wchar_t *NtSystemRoot; // rax
  size_t *v8; // r8
  unsigned __int64 v9; // rdx
  const unsigned __int16 *v10; // r8
  int HmodTableIndex; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v16; // rcx
  size_t v17; // [rsp+20h] [rbp-238h]
  size_t pszDest[66]; // [rsp+30h] [rbp-228h] BYREF

  if ( gihmodDManipHook >= 0 || (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_16;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  v2 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_DWORD *)(v2 + 780) != luidSystem[0] )
    goto LABEL_16;
  v3 = PsGetCurrentProcessWin32Process(luidSystem[0]);
  v4 = v3;
  if ( v3 )
    v4 = -(__int64)(*(_QWORD *)v3 != 0LL) & v3;
  if ( *(_DWORD *)(v4 + 784) != luidSystem[1] || !(unsigned int)IsPrivileged(psTcb) )
  {
LABEL_16:
    v16 = 5LL;
LABEL_17:
    UserSetLastError(v16);
    return 0LL;
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v6, v5);
  if ( RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)pszDest, 0x82uLL, v8, NtSystemRoot, v17) < 0
    || (int)RtlStringCbCatW((unsigned __int16 *)pszDest, v9, v10) < 0 )
  {
    v16 = 3LL;
    goto LABEL_17;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, pszDest);
  HmodTableIndex = GetHmodTableIndex((__int64)pszDest);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v16 = 126LL;
    goto LABEL_17;
  }
  AddHmodDependency(HmodTableIndex);
  v13 = PsGetCurrentProcessWin32Process(v12);
  v14 = v13;
  if ( v13 )
    v14 = -(__int64)(*(_QWORD *)v13 != 0LL) & v13;
  gppiDManipHook = v14;
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
