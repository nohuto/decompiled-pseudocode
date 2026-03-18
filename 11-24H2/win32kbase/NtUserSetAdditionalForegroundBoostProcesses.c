/*
 * XREFs of NtUserSetAdditionalForegroundBoostProcesses @ 0x1401709B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C7D0 (-Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     _GetTopLevelWindow @ 0x14012BDFC (_GetTopLevelWindow.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtUserSetAdditionalForegroundBoostProcesses(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  PVOID *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (*v8)(void); // rax
  int v9; // eax
  __int64 v11; // r13
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE **v17; // rcx
  struct _EPROCESS **v18; // r9
  __int64 v19; // rdi
  unsigned int i; // eax
  __int64 v21; // rax
  bool v22; // zf
  _QWORD *v23; // r15
  char *v24; // r12
  NTSTATUS v25; // eax
  unsigned __int8 v26; // al
  PVOID *v27; // r15
  PVOID Object; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v29[8]; // [rsp+48h] [rbp-170h] BYREF
  __int64 v30; // [rsp+50h] [rbp-168h]
  __int64 v31; // [rsp+60h] [rbp-158h]
  _BYTE v32[24]; // [rsp+68h] [rbp-150h] BYREF
  _QWORD v33[32]; // [rsp+80h] [rbp-138h] BYREF

  v3 = a2;
  v5 = 0LL;
  v31 = 0LL;
  memset(v33, 0, sizeof(v33));
  v8 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 5208LL);
  if ( v8 )
    v9 = v8();
  else
    v9 = 50;
  if ( v9 )
  {
    UserSetLastError(v9);
    return 0LL;
  }
  LODWORD(Object) = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v32, 0LL);
  v11 = ValidateHwndEx(a1, 1, 0);
  if ( v11 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v29);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    v16 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v15 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v16 = v15 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 464LL) != v16
      || GetTopLevelWindow(v11, v15) != (__int64 (__fastcall *)(__int64))v11
      || (unsigned int)v3 > 0x20 )
    {
      v12 = 0;
      UserSetLastError(87);
      v22 = v29[0] == 0;
LABEL_43:
      if ( !v22 )
        --*(_DWORD *)(v30 + 28);
      goto LABEL_45;
    }
    if ( !(_DWORD)v3 )
    {
LABEL_33:
      v26 = GroupedProcessForegroundBoost::Update(
              (GroupedProcessForegroundBoost *)v11,
              (struct tagWND *)(unsigned int)v3,
              v5,
              v18);
      v12 = v26;
      if ( !v26 && (_DWORD)v3 )
      {
        v27 = v5;
        do
        {
          if ( *v27 )
            ObfDereferenceObject(*v27);
          ++v27;
          --v3;
        }
        while ( v3 );
      }
      goto LABEL_39;
    }
    v19 = 8 * v3;
    if ( 8 * v3 )
    {
      if ( ((unsigned __int8)a3 & (PsGetCurrentProcessWow64Process() == 0 ? 3 : 0)) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (_BYTE **)MmUserProbeAddress;
      if ( v19 + a3 <= MmUserProbeAddress )
      {
        v17 = (_BYTE **)(v19 + a3);
        if ( v19 + a3 >= a3 )
          goto LABEL_21;
        v17 = (_BYTE **)MmUserProbeAddress;
      }
      LOBYTE(v17) = **v17;
    }
LABEL_21:
    for ( i = 0; i < (unsigned int)v3; ++i )
    {
      v17 = *(_BYTE ***)(a3 + 8LL * i);
      v33[i] = v17;
    }
    v21 = Win32AllocPoolWithQuotaZInitImpl((__int64)v17, 8 * v3, 0x67667355u);
    v5 = (PVOID *)v21;
    v12 = 0;
    if ( !v21 )
    {
      UserSetLastError(8);
      v22 = v29[0] == 0;
      goto LABEL_43;
    }
    v23 = (_QWORD *)v21;
    v24 = (char *)v33 - v21;
    while ( 1 )
    {
      Object = 0LL;
      v25 = ObReferenceObjectByHandle(
              *(HANDLE *)((char *)v23 + (_QWORD)v24),
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              1,
              &Object,
              0LL);
      *v23 = Object;
      if ( v25 < 0 )
        break;
      ++v12;
      ++v23;
      if ( v12 >= (unsigned int)v3 )
        goto LABEL_33;
    }
    while ( v12 )
      ObfDereferenceObject(v5[--v12]);
    UserSetLastError(87);
LABEL_39:
    if ( v5 )
      GreDeleteFastMutex((char *)v5);
    v22 = v29[0] == 0;
    goto LABEL_43;
  }
  v12 = 0;
LABEL_45:
  UserSessionSwitchLeaveCritWithNonPaged();
  return (int)v12;
}
