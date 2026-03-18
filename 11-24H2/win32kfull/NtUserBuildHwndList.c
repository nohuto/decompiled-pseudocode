/*
 * XREFs of NtUserBuildHwndList @ 0x140240A10
 * Callers:
 *     <none>
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     MapDesktop @ 0x14016A320 (MapDesktop.c)
 *     GetThreadDesktopWindow @ 0x140176140 (GetThreadDesktopWindow.c)
 *     CallerCanSeeImmersiveWindows @ 0x14023DB04 (CallerCanSeeImmersiveWindows.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned int *a8)
{
  struct tagBWL *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned int v16; // r14d
  struct tagWND *ThreadDesktopWindow; // rax
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  ULONG64 v26; // rdx
  struct tagBWL *v27; // rax
  unsigned int v28; // ebx
  _DWORD *v29; // r8
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-98h]
  _QWORD v33[2]; // [rsp+40h] [rbp-78h] BYREF
  int v34; // [rsp+50h] [rbp-68h]
  int v35; // [rsp+54h] [rbp-64h]
  __int64 CurrentProcess; // [rsp+58h] [rbp-60h]
  PVOID v37; // [rsp+60h] [rbp-58h]
  int v38; // [rsp+68h] [rbp-50h]
  int v39; // [rsp+6Ch] [rbp-4Ch]
  __int64 v40; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v41[56]; // [rsp+80h] [rbp-38h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF
  int v43; // [rsp+D0h] [rbp+18h]

  v43 = a3;
  Object = 0LL;
  v11 = 0LL;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v35 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v40, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v41);
  v15 = *(_DWORD **)(W32GetUserSessionState(v13, v12) + 19928);
  v16 = 2 * (*v15 & 4 | 1);
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows((__int64)v15) )
    v16 |= 0x10u;
  if ( a2 )
  {
    ThreadDesktopWindow = (struct tagWND *)ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
    {
LABEL_6:
      v18 = -1073741816;
      goto LABEL_38;
    }
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v19 = PtiFromThreadId(a5);
    v20 = v19;
    if ( !v19 )
      goto LABEL_22;
    v21 = *(_QWORD *)(v19 + 496);
    if ( !v21 )
      goto LABEL_22;
    ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL) + 112LL);
  }
  else
  {
    v20 = 0LL;
  }
  if ( a1 )
  {
    LOBYTE(v14) = 1;
    if ( (int)ValidateHdesk(a1, v14, 1LL, &Object) < 0 )
      goto LABEL_6;
    v38 = 0;
    v39 = 0;
    v37 = Object;
    v34 = 1;
    CurrentProcess = PsGetCurrentProcess(v22);
    v18 = MapDesktop((__int64)v33, v23, v24);
    if ( v18 < 0 )
    {
      v25 = 6;
      goto LABEL_17;
    }
    ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
  }
  if ( ThreadDesktopWindow )
  {
    if ( v43 )
    {
      v16 |= 1u;
LABEL_25:
      ThreadDesktopWindow = (struct tagWND *)*((_QWORD *)ThreadDesktopWindow + 14);
    }
  }
  else if ( !Object )
  {
    ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(v20, v14);
    if ( !ThreadDesktopWindow )
    {
LABEL_22:
      v18 = -1073741816;
      UserSetLastError(87);
      goto LABEL_38;
    }
    goto LABEL_25;
  }
  v27 = BuildHwndList(ThreadDesktopWindow, v16, v20, 0);
  v11 = v27;
  if ( v27 )
  {
    v28 = ((*((_QWORD *)v27 + 1) - (_QWORD)v27 - 32LL) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v29 = a8;
    v26 = MmUserProbeAddress;
    if ( (unsigned __int64)a8 >= MmUserProbeAddress )
      v29 = (_DWORD *)MmUserProbeAddress;
    *v29 = *v29;
    if ( v28 > a6 )
    {
      v32 = -1073741789;
    }
    else
    {
      RtlCopyVolatileMemory((void *)Address, (char *)v11 + 32, 8LL * v28);
      v32 = 0;
    }
    *a8 = v28;
    v18 = v32;
    goto LABEL_34;
  }
  v18 = -1073741816;
  v25 = 8;
LABEL_17:
  UserSetLastError(v25);
LABEL_34:
  if ( v11 )
    FreeHwndList(v11, v26);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_38:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v41);
  UserSessionSwitchLeaveCrit(v30);
  return (unsigned int)v18;
}
