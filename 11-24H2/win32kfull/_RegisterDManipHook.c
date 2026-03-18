/*
 * XREFs of _RegisterDManipHook @ 0x14021A630
 * Callers:
 *     NtUserRegisterDManipHook @ 0x14021A5E0 (NtUserRegisterDManipHook.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetHmodTableIndex @ 0x140083C34 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x140083E60 (AddHmodDependency.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlStringCopyWorkerW @ 0x140145920 (RtlStringCopyWorkerW.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1402633C0 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 RegisterDManipHook()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const wchar_t *NtSystemRoot; // rax
  size_t *v12; // r8
  unsigned __int64 v13; // rdx
  const unsigned __int16 *v14; // r8
  int HmodTableIndex; // eax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  size_t v22; // [rsp+20h] [rbp-238h]
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( (unsigned __int8)IsRestricted(KeGetCurrentThread()) )
    goto LABEL_17;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  v2 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_DWORD *)(v2 + 772) != luidSystem[0] )
    goto LABEL_17;
  v3 = PsGetCurrentProcessWin32Process(luidSystem[0]);
  v4 = v3;
  if ( v3 )
    v4 = -(__int64)(*(_QWORD *)v3 != 0LL) & v3;
  if ( *(_DWORD *)(v4 + 776) != luidSystem[1] || !(unsigned __int8)HasTcbPrivilege() )
  {
LABEL_17:
    v16 = 5;
    goto LABEL_18;
  }
  UserSessionState = W32GetUserSessionState(v6, v5);
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot(v9, v8, v10);
  if ( RtlStringCopyWorkerW(pszDest, 0x82uLL, v12, NtSystemRoot, v22) < 0 || (int)RtlStringCbCatW(pszDest, v13, v14) < 0 )
  {
    v16 = 3;
    goto LABEL_18;
  }
  RtlStringCchCopyW((char *)(UserSessionState + 65308), 260LL, (char *)pszDest);
  HmodTableIndex = GetHmodTableIndex((__int64)pszDest);
  *(_DWORD *)(UserSessionState + 65304) = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v16 = 126;
LABEL_18:
    UserSetLastError(v16);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v18 = PsGetCurrentProcessWin32Process(v17);
  if ( v18 )
  {
    v20 = -*(_QWORD *)v18;
    v19 = -(__int64)(*(_QWORD *)v18 != 0LL);
    v18 &= v19;
  }
  *(_QWORD *)(UserSessionState + 64224) = v18;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v20, v19) + 19928), 0x10u);
  return 1LL;
}
