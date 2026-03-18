/*
 * XREFs of NtUserBuildHwndList @ 0x1C00B1800
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C00448C0 (MapDesktop.c)
 *     LeaveEditionCrit @ 0x1C00A0030 (LeaveEditionCrit.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C00B2934 (CallerCanSeeImmersiveWindows.c)
 *     GetThreadDesktopWindow @ 0x1C00E9600 (GetThreadDesktopWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        ULONG64 a8)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  AtomicExecutionCheck *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentThreadWin32Thread; // rax
  ULONG64 v19; // rdx
  ShellWindowManagement *ThreadDesktopWindow; // rax
  PVOID v21; // rcx
  _DWORD *v22; // r8
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // esi
  _DWORD *v30; // r15
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD v36[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 CurrentProcess; // [rsp+50h] [rbp-58h]
  PVOID v38; // [rsp+58h] [rbp-50h]
  int v39; // [rsp+60h] [rbp-48h]
  int v40; // [rsp+64h] [rbp-44h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  int v43; // [rsp+C0h] [rbp+18h]
  char v44; // [rsp+C8h] [rbp+20h] BYREF

  v43 = a3;
  Object = 0LL;
  v10 = 0LL;
  v36[1] = 0;
  if ( (unsigned __int8)ShouldRunShared(2LL) )
    EnterSharedCrit(v12, v11, v13);
  else
    EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::EnforceConsistency(v14);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v16, v15, v17);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v44 = 1;
  if ( a4 )
    CallerCanSeeImmersiveWindows();
  if ( a2 )
  {
    ThreadDesktopWindow = (ShellWindowManagement *)ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
    {
LABEL_8:
      v23 = -1073741816;
      goto LABEL_39;
    }
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v24 = PtiFromThreadId(a5);
    v25 = v24;
    if ( !v24 )
      goto LABEL_24;
    v26 = *(_QWORD *)(v24 + 456);
    if ( !v26 )
      goto LABEL_24;
    ThreadDesktopWindow = *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 24LL) + 112LL);
  }
  else
  {
    v25 = 0LL;
  }
  if ( a1 )
  {
    LOBYTE(v19) = 1;
    if ( (int)ValidateHdesk(a1, v19, 1LL, &Object) < 0 )
      goto LABEL_8;
    v39 = 0;
    v40 = 0;
    v38 = Object;
    v36[0] = 1;
    CurrentProcess = PsGetCurrentProcess(v21, v19, v22);
    v23 = MapDesktop((__int64)v36);
    if ( v23 < 0 )
    {
      v27 = 6LL;
      goto LABEL_19;
    }
    ThreadDesktopWindow = *(ShellWindowManagement **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
  }
  if ( ThreadDesktopWindow )
  {
    if ( v43 )
LABEL_26:
      ThreadDesktopWindow = (ShellWindowManagement *)*((_QWORD *)ThreadDesktopWindow + 14);
  }
  else if ( !Object )
  {
    ThreadDesktopWindow = (ShellWindowManagement *)GetThreadDesktopWindow(v25);
    if ( !ThreadDesktopWindow )
    {
LABEL_24:
      v23 = -1073741816;
      UserSetLastError(87LL);
      goto LABEL_39;
    }
    goto LABEL_26;
  }
  v28 = BuildHwndList(ThreadDesktopWindow);
  v10 = v28;
  if ( v28 )
  {
    v29 = ((*(_QWORD *)(v28 + 8) - v28 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v30 = (_DWORD *)a8;
    v19 = MmUserProbeAddress;
    v22 = (_DWORD *)a8;
    if ( a8 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = *v22;
    if ( v29 > a6 )
    {
      v23 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v10 + 32), 8LL * v29);
      v23 = 0;
    }
    *v30 = v29;
    goto LABEL_35;
  }
  v23 = -1073741816;
  v27 = 8LL;
LABEL_19:
  UserSetLastError(v27);
LABEL_35:
  if ( v10 )
    FreeHwndList(v10);
  v21 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_39:
  v31 = PsGetCurrentThreadWin32Thread(v21, v19, v22);
  --*(_DWORD *)(v31 + 48);
  LeaveEditionCrit((__int64)&v44, v32, v33, v34);
  return (unsigned int)v23;
}
