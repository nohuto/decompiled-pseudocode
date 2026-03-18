/*
 * XREFs of xxxSetWindowLong @ 0x1C00A76E4
 * Callers:
 *     NtUserSetWindowLong @ 0x1C00A75E0 (NtUserSetWindowLong.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00A82E4 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00A8300 (xxxSetWindowData.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C00AA404 (safe_cast_wf_to_PDIALOG.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 CurrentProcess; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  char *v29; // r15
  _DWORD *v30; // rax
  __int64 v31; // rcx
  int v33; // ecx
  const signed __int16 *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _DWORD *v37; // rdx
  __int64 v38; // rsi
  BOOL v39; // ecx
  int v40; // eax
  __int64 v41; // rcx
  unsigned __int64 v42; // r8
  int v43; // edi
  __int64 v44; // r8
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // [rsp+20h] [rbp-68h] BYREF
  char *v48; // [rsp+28h] [rbp-60h]

  v6 = a2;
  v8 = 0;
  LOBYTE(v47) = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    goto LABEL_10;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    ThreadProcessId = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    if ( ThreadProcessId != (HANDLE)gpidLogon )
      goto LABEL_10;
  }
  if ( (unsigned __int8)Enforced(ThreadProcessId)
    || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13), (unsigned int)IsProcessDwm(CurrentProcess)) )
  {
    v14 = 1;
    goto LABEL_11;
  }
  v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  v17 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(v17 + 780) != *(_DWORD *)(v16 + 780) || (v14 = 1, *(_DWORD *)(v17 + 784) != *(_DWORD *)(v16 + 784)) )
LABEL_10:
    v14 = 0;
LABEL_11:
  if ( !v14 )
    goto LABEL_73;
  if ( (int)v6 >= 0 )
  {
    v18 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    if ( v6 + 4 > v18 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      v20 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v20 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v21 != v20 )
      {
        v22 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
        if ( (v22 & 0x10) == 0 )
        {
          v23 = v21 + 896;
          v24 = PsGetCurrentProcessWin32Process(v22);
          v25 = v24;
          if ( v24 )
            v25 = -(__int64)(*(_QWORD *)v24 != 0LL) & v24;
          if ( !(unsigned __int8)CheckAccess(v25 + 896, v23) )
          {
            v27 = PsGetCurrentProcessWin32Process(v26);
            v28 = v27;
            if ( v27 )
              v28 = -(__int64)(*(_QWORD *)v27 != 0LL) & v27;
            if ( *(int *)(v28 + 12) >= 0 )
              goto LABEL_73;
          }
          KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
          LOBYTE(v47) = 1;
        }
      }
    }
  }
  v29 = (char *)a1 + 40;
  v48 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_51;
  v30 = (_DWORD *)safe_cast_wf_to_PDIALOG(a1);
  if ( v30 )
  {
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 16 )
      {
        if ( (unsigned int)v6 <= 0x1D )
        {
          v31 = 1415LL;
LABEL_50:
          UserSetLastError(v31);
          goto LABEL_40;
        }
        goto LABEL_51;
      }
      if ( *(_DWORD *)(*(_QWORD *)v29 + 248LL) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 704LL);
      }
      else if ( *(int *)(*(_QWORD *)v29 + 200LL) >= 30 )
      {
        v8 = v30[4];
        HIDWORD(v47) = v8;
        *((_QWORD *)v30 + 2) = (int)a3;
LABEL_40:
        CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v47);
        return v8;
      }
      if ( *(int *)(*(_QWORD *)v29 + 200LL) < 30 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 705LL);
      goto LABEL_40;
    }
    v8 = *v30;
    HIDWORD(v47) = *v30;
    *(_QWORD *)v30 = (int)a3;
    goto LABEL_40;
  }
  if ( (int)v6 < 0 )
  {
LABEL_52:
    if ( (unsigned int)(v6 + 21) <= 9 )
    {
      v33 = 547;
      if ( _bittest(&v33, v6 + 21) )
      {
        v8 = xxxSetWindowData(a1);
        goto LABEL_40;
      }
    }
    goto LABEL_49;
  }
  if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(*(_QWORD *)v29 + 42LL) & 0x2FFFu) - 666) + 328) - 328 )
  {
    if ( (*(_WORD *)(*(_QWORD *)v29 + 42LL) & 0x2FFF) != 0x2A7 )
      goto LABEL_49;
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 8 )
        goto LABEL_49;
      HIDWORD(v47) = **(_DWORD **)(*(_QWORD *)v29 + 296LL);
      if ( HIDWORD(v47) )
      {
        if ( *(char *)(*(_QWORD *)v29 + 19LL) >= 0 )
          goto LABEL_49;
      }
    }
    goto LABEL_48;
  }
LABEL_51:
  if ( (int)v6 < 0 )
    goto LABEL_52;
LABEL_48:
  if ( (unsigned __int64)(unsigned int)v6 + 4 > (unsigned int)(*(_DWORD *)(*(_QWORD *)v29 + 248LL)
                                                             + *(_DWORD *)(*(_QWORD *)v29 + 200LL)) )
  {
LABEL_49:
    v31 = 1413LL;
    goto LABEL_50;
  }
  if ( !a5 )
    goto LABEL_67;
  v34 = *(const signed __int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( !_bittest16(v34 + 3, 8u) )
    goto LABEL_67;
  v35 = 0LL;
  v36 = *(unsigned __int16 *)v34;
  v37 = &gDefaultServerClasses;
  while ( (_WORD)v36 != *(_WORD *)(gpsi + 2LL * ((*v37 >> 3) & 0x1F) + 868) )
  {
    v35 = (unsigned int)(v35 + 1);
    v37 += 12;
    if ( (unsigned int)v35 >= 8 )
      goto LABEL_67;
  }
  v38 = 6LL * (unsigned int)v35;
  if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * (unsigned int)v35 + 6) )
    goto LABEL_67;
  v39 = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v35, v37, v36, gpsi, v47, v48) != 0;
  v40 = *((_DWORD *)&gDefaultServerClasses + 2 * v38) & 0xF8;
  if ( v39 )
  {
    if ( v40 == 176 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 784LL);
    goto LABEL_67;
  }
  if ( v40 == 176 && (unsigned __int64)((int)v6 + 4LL) <= 0xFFFFFFFFFFFFFEE8uLL )
  {
LABEL_67:
    v41 = *(_QWORD *)v29;
    v42 = *(unsigned int *)(*(_QWORD *)v29 + 248LL);
    if ( (int)v6 + 4LL <= v42 )
    {
      v46 = *((_QWORD *)a1 + 35);
      v8 = *(_DWORD *)((int)v6 + v46);
      *(_DWORD *)((int)v6 + v46) = a3;
    }
    else
    {
      v43 = v6 - v42;
      v44 = *(_QWORD *)(v41 + 296);
      if ( (*(_DWORD *)(v41 + 232) & 0x10) != 0 )
        v45 = (unsigned int *)(v44 + v43 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 136LL));
      else
        v45 = (unsigned int *)(v43 + v44);
      v8 = *v45;
      HIDWORD(v47) = *v45;
      *v45 = a3;
    }
    goto LABEL_40;
  }
LABEL_73:
  UserSetLastError(5LL);
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v47);
  return 0LL;
}
