/*
 * XREFs of NtUserSetCalibrationData @ 0x14029C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     _SetCalibrationData @ 0x14027280C (_SetCalibrationData.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  const struct tagUIPI_INFO *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  int v14; // ecx
  struct tagTHREADINFO *v15; // rax
  const struct tagUIPI_INFO *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v24; // rcx
  void *v27; // [rsp+28h] [rbp-70h]
  _BYTE v28[16]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v29[4]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v30[4]; // [rsp+58h] [rbp-40h] BYREF

  v5 = a2;
  v27 = 0LL;
  v30[0] = 0x2000;
  v30[1] = -1;
  v30[2] = 0;
  v29[0] = 12288;
  v29[1] = -1;
  v29[2] = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v28);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_28;
  if ( (_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_28;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_28;
  }
  if ( a4 == 3 )
  {
    v15 = PtiCurrent(v8, v7);
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*((_QWORD *)v15 + 58) + 872LL),
            (const struct tagUIPI_INFO *)v30,
            v16) )
      goto LABEL_10;
  }
  else
  {
    v9 = PtiCurrent(v8, v7);
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*((_QWORD *)v9 + 58) + 872LL),
            (const struct tagUIPI_INFO *)v29,
            v10) )
    {
LABEL_10:
      v13 = PtiCurrent(v12, v11);
      EtwTraceUIPISystemError(*((_QWORD *)v13 + 58), 0LL, 11LL);
      v14 = 5;
LABEL_29:
      v21 = 0;
      UserSetLastError(v14);
      goto LABEL_30;
    }
  }
  if ( (unsigned int)v5 > 0xCA0 )
  {
LABEL_28:
    v14 = 87;
    goto LABEL_29;
  }
  LOBYTE(v11) = 19;
  v17 = HMValidateHandleWithDescriptor(a1, v11);
  v20 = v17;
  if ( !v17 )
  {
LABEL_24:
    UserSetLastError(6);
    v21 = 0;
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v17 + 168) & 0x2000) == 0 )
  {
    v22 = *(_QWORD *)(v17 + 456);
    if ( (*(_DWORD *)(v17 + 184) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v22 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v22, v18, v19);
        ProbeForRead(a3, v5, CurrentProcessWow64Process != 0 ? 1 : 4);
        v27 = (void *)Win32AllocPoolWithQuotaZInit(v5, 1633907541LL);
        if ( !v27 )
          ExRaiseStatus(-1073741801);
        memmove(v27, (const void *)a3, v5);
      }
      v21 = SetCalibrationData(v20, v5, v27, a4);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  UserSetLastError(6);
  v21 = 0;
  UserSetLastError(0);
LABEL_25:
  if ( v27 && !v21 )
    Win32FreePool(v27);
LABEL_30:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v28);
  UserSessionSwitchLeaveCrit(v24);
  return v21;
}
