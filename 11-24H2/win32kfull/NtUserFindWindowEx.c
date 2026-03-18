/*
 * XREFs of NtUserFindWindowEx @ 0x140295160
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBG@Z @ 0x140046EE0 (-_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBG@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, ULONG64 a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // r12
  __int64 v11; // rdi
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rax
  struct tagWND **v14; // r13
  int v15; // edx
  char *v16; // rcx
  ULONG64 v17; // r8
  int **v18; // rax
  int *v19; // rax
  int v20; // edi
  const void *v21; // r14
  ULONG64 v22; // rcx
  __int64 v23; // r15
  struct tagWND *Window; // rax
  __int64 v25; // rcx
  char v27; // [rsp+20h] [rbp-2B8h]
  __int16 Atom; // [rsp+24h] [rbp-2B4h]
  unsigned __int16 *v29; // [rsp+30h] [rbp-2A8h]
  __int64 v30; // [rsp+70h] [rbp-268h] BYREF
  _BYTE v31[16]; // [rsp+80h] [rbp-258h] BYREF
  char v32[512]; // [rsp+90h] [rbp-248h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v30, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v31);
  if ( a1 == -3 )
  {
    v10 = 0LL;
    v12 = PtiCurrent(v9, v8);
    if ( v12 )
    {
      v13 = *((_QWORD *)v12 + 62);
      if ( v13 )
        v10 = *(struct tagWND **)(v13 + 112);
    }
  }
  else if ( a1 )
  {
    v10 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v10 )
    {
LABEL_4:
      v11 = 0LL;
      goto LABEL_59;
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 )
  {
    v14 = (struct tagWND **)ValidateHwnd(a2);
    if ( !v14 )
      goto LABEL_4;
  }
  else
  {
    v14 = 0LL;
  }
  Atom = 0;
  v29 = 0LL;
  v27 = 0;
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v15 = *(_DWORD *)a3;
  v16 = *(char **)(a3 + 8);
  if ( ((unsigned __int64)v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( ((unsigned __int8)v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (ULONG64)&v16[(unsigned __int16)v15 + 2];
    if ( v17 <= (unsigned __int64)v16 || (v18 = (int **)MmUserProbeAddress, v17 >= MmUserProbeAddress) )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v15 > (unsigned __int16)HIWORD(*(_DWORD *)a3) || (v15 & 1) != 0 )
    {
      if ( (v15 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10006);
      ExRaiseAccessViolation();
    }
  }
  else
  {
    v18 = (int **)MmUserProbeAddress;
  }
  if ( v16 && ((unsigned __int64)v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (int)RtlStringCchCopyW(v32, 256LL, v16) >= 0 )
      Atom = UserFindAtom(v32);
    if ( !Atom )
    {
      v11 = 0LL;
      goto LABEL_59;
    }
    v18 = (int **)MmUserProbeAddress;
  }
  else
  {
    Atom = *(_QWORD *)(a3 + 8);
  }
  v19 = *v18;
  if ( a4 >= v19 )
    a4 = v19;
  v20 = *a4;
  v21 = (const void *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = (ULONG64)v21 + (unsigned __int16)v20 + 2;
  if ( v22 <= (unsigned __int64)v21 || v22 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v20 > (unsigned __int16)HIWORD(*a4) )
  {
    if ( (v20 & 1) == 0 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( (v20 & 1) != 0 )
  {
LABEL_54:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10031);
LABEL_55:
    ExRaiseAccessViolation();
  }
  if ( v21 )
  {
    v23 = (unsigned __int16)v20 >> 1;
    if ( (unsigned int)(v23 + 1) > 0x100 )
    {
      v29 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v20 + 2LL, 2020897621LL);
      if ( !v29 )
        ExRaiseStatus(-1073741801);
      v27 = 1;
    }
    else
    {
      v29 = (unsigned __int16 *)v32;
    }
    memmove(v29, v21, (unsigned __int16)v20);
    v29[v23] = 0;
  }
  Window = _FindWindowEx(v10, v14, Atom, v29);
  if ( Window )
    v11 = *(_QWORD *)Window;
  else
    v11 = 0LL;
  if ( v27 )
    Win32FreePool(v29);
LABEL_59:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v31);
  UserSessionSwitchLeaveCrit(v25);
  return v11;
}
