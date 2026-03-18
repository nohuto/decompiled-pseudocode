/*
 * XREFs of xxxSetWindowData @ 0x1C00A8300
 * Callers:
 *     xxxSetWindowLong @ 0x1C00A76E4 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00A7D28 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 * Callees:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000B40C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     GetCPD @ 0x1C000ECE4 (GetCPD.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C004533C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C007A800 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C008D3BC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0094A20 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00A52DC (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     ValidateOwnerDepth @ 0x1C00A537C (ValidateOwnerDepth.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00A70B8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A88FC (MapClientNeuterToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C00A9DA0 (MapClientToServerPfn.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     IsParentBandValid @ 0x1C00AD30C (IsParentBandValid.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00E4714 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00E4A98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     xxxSetWindowStyle @ 0x1C00EF138 (xxxSetWindowStyle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MapServerToClientPfn @ 0x1C024BFA4 (MapServerToClientPfn.c)
 */

unsigned __int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 *v15; // rax
  _QWORD *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // ebx
  int v29; // ecx
  _DWORD *v30; // rax
  int v31; // ecx
  int v32; // edx
  int v33; // r8d
  int v34; // r12d
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int8 v41; // al
  char v42; // al
  __int64 DesktopWindow; // rax
  struct tagWND *v44; // r12
  struct tagWND *v45; // rsi
  __int64 v46; // r13
  unsigned __int64 **v47; // r13
  __int64 v48; // rcx
  struct tagWND *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  struct tagWND *v52; // r15
  int v53; // eax
  struct tagWND *v54; // rcx
  int v55; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r8d
  const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *v67; // rdx
  __int64 v68; // rcx
  __int64 CPD; // rax
  __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  void *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 *v76; // rax
  __int64 v77; // rax
  signed __int32 v78[8]; // [rsp+8h] [rbp-99h] BYREF
  int v79; // [rsp+28h] [rbp-79h]
  _QWORD *v80; // [rsp+30h] [rbp-71h] BYREF
  __int64 v81; // [rsp+38h] [rbp-69h] BYREF
  __int64 v82; // [rsp+40h] [rbp-61h]
  struct tagWND *v83; // [rsp+48h] [rbp-59h]
  int v84; // [rsp+50h] [rbp-51h]
  __int64 v85; // [rsp+58h] [rbp-49h]
  __int128 v86; // [rsp+68h] [rbp-39h] BYREF
  __int128 v87; // [rsp+78h] [rbp-29h] BYREF
  __int64 v88; // [rsp+88h] [rbp-19h]
  __int128 v89; // [rsp+90h] [rbp-11h] BYREF
  __int64 v90; // [rsp+A0h] [rbp-1h]
  __int128 v91; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v92; // [rsp+B8h] [rbp+17h]
  _QWORD v93[3]; // [rsp+C0h] [rbp+1Fh] BYREF
  int v94; // [rsp+110h] [rbp+6Fh]

  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v80 = (_QWORD *)gSmartObjNullRef;
  v81 = *(_QWORD *)(v5 + 1512);
  *(_QWORD *)(v5 + 1512) = &v81;
  v82 = 0LL;
  v90 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v87 = 0LL;
  if ( a2 == -21 )
  {
    v37 = *((_QWORD *)a1 + 5);
    v13 = *(_QWORD *)(v37 + 216);
    *(_QWORD *)(v37 + 216) = a3;
    goto LABEL_9;
  }
  if ( a2 == -40 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v39 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v39 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v39 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    {
      v40 = *((_QWORD *)a1 + 5);
      v41 = *(_BYTE *)(v40 + 232);
      v13 = ((unsigned __int64)v41 >> 5) & 1;
      if ( a3 )
        v42 = v41 | 0x20;
      else
        v42 = v41 & 0xDF;
      *(_BYTE *)(v40 + 232) = v42;
      goto LABEL_9;
    }
    goto LABEL_129;
  }
  if ( a2 == -20 || (v79 = -16, a2 == -16) )
  {
    v13 = (int)xxxSetWindowStyle(a1);
    goto LABEL_9;
  }
  if ( a2 != -2 )
  {
    if ( a2 == -4 )
    {
      v18 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 488LL);
      if ( (v18 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1034LL);
      v19 = PsGetCurrentProcessWin32Process(v18);
      v21 = v19;
      if ( v19 )
      {
        v20 = -(__int64)(*(_QWORD *)v19 != 0LL);
        v21 = v20 & v19;
      }
      if ( v21 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
      {
        v22 = *((_QWORD *)a1 + 5);
        v23 = *(unsigned __int16 *)(v22 + 42);
        if ( (v23 & 0x8000u) == 0 )
        {
          v24 = *(unsigned __int8 *)(v22 + 18);
          if ( (v24 & 4) == 0 )
          {
            if ( (v23 & 0xFFFF2FFF) == 0x2A5 )
            {
              v13 = *(_QWORD *)(v22 + 120);
            }
            else
            {
              v13 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v22 + 120), a4);
              if ( v13 != v25 )
                goto LABEL_26;
            }
            if ( a4 != ((v24 >> 3) & 1) )
            {
              CPD = GetCPD((__int64)a1, 34 - (a4 != 0), v13);
              if ( CPD )
                v13 = CPD;
            }
LABEL_26:
            if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
            {
              LOBYTE(v20) = 7;
              v64 = HMValidateHandleNoRip(a3, v20);
              if ( v64 )
              {
                v65 = *(_QWORD *)(v64 + 40);
                a3 = *(_QWORD *)(v65 + 16);
                a4 = *(_WORD *)(v65 + 24) & 2;
              }
            }
            v26 = MapClientToServerPfn(a3);
            if ( v26 )
            {
              SetOrClrWF(0LL, a1, 520LL, 1LL);
              SetOrClrWF(1LL, a1, 516LL, 1LL);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v26;
LABEL_36:
              _InterlockedOr(v78, 0);
              goto LABEL_9;
            }
            if ( a4 )
            {
              SetOrClrWF(1LL, a1, 520LL, 1LL);
              goto LABEL_33;
            }
            v27 = *((_QWORD *)a1 + 5);
            v28 = *(_DWORD *)(v27 + 28);
            v84 = *(_DWORD *)(v27 + 24);
            v29 = *(_DWORD *)(v27 + 232);
            *(_BYTE *)(v27 + 18) &= ~8u;
            LODWORD(v85) = v29;
            if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            {
LABEL_33:
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                SetOrClrWF(0LL, a1, 516LL, 1LL);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
              goto LABEL_36;
            }
            v30 = (_DWORD *)*((_QWORD *)a1 + 5);
            v31 = v30[7];
            v32 = v30[6];
            v33 = v30[58];
            v34 = v84 ^ v32;
            v35 = v85 ^ v33;
            v94 = v31;
            v36 = v28 ^ v31;
            LODWORD(v83) = v36;
            if ( !v36 )
            {
              if ( v34 )
              {
LABEL_97:
                if ( (v34 & 0x4E27A9) != 0 )
                {
                  v79 = -20;
                  v94 = v32;
                }
                else
                {
                  if ( (v35 & 0x12C0) == 0 )
                    goto LABEL_102;
                  v79 = -268435456;
                  v94 = v33;
                }
LABEL_101:
                DirtyVisRgnTrackers(a1);
                v70 = *(_QWORD *)a1;
                v73 = (void *)ReferenceDwmApiPort(v72, v71);
                DwmAsyncChildStyleChange(v73, v70, v79, v94);
LABEL_102:
                if ( (v34 & 0x200A0381) != 0 || ((unsigned int)v83 & 0xC40000) != 0 )
                  WindowMargins::CheckForChanges(a1, 1LL);
                goto LABEL_33;
              }
              if ( !v35 )
                goto LABEL_33;
            }
            if ( (v36 & 0xB1CF0000) != 0 )
              goto LABEL_101;
            goto LABEL_97;
          }
          v13 = MapServerToClientPfn(*(_QWORD *)(v22 + 120), a4);
          if ( v13 )
            goto LABEL_26;
LABEL_89:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v80);
          return 0LL;
        }
      }
      goto LABEL_129;
    }
    if ( a2 != -8 )
    {
      if ( a2 == -12 )
      {
        v75 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v75 + 31) & 0xC0) == 0x40 )
        {
          v13 = *(_QWORD *)(v75 + 320);
          *(_QWORD *)(v75 + 320) = a3;
        }
        else
        {
          v76 = (unsigned __int64 *)*((_QWORD *)a1 + 21);
          v13 = 0LL;
          if ( v76 )
            v13 = *v76;
          if ( a3 )
          {
            v77 = ValidateHmenu(a3);
            v82 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(&v80, v77);
            if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v80) )
            {
              v13 = 0LL;
            }
            else
            {
              if ( (unsigned int)IsWindowBeingDestroyed(a1) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1008LL);
              LockWndMenuWorker((__int64)a1, 0, &v80);
            }
          }
          else
          {
            UnlockWndMenuWorker(a1, 0);
          }
        }
        goto LABEL_9;
      }
      if ( a2 == -6 )
      {
        v74 = *((_QWORD *)a1 + 5);
        v13 = *(_QWORD *)(v74 + 32);
        *(_QWORD *)(v74 + 32) = a3;
        goto LABEL_9;
      }
      v68 = 1413LL;
      goto LABEL_88;
    }
    DesktopWindow = GetDesktopWindow(a1, v10);
    v44 = (struct tagWND *)*((_QWORD *)a1 + 13);
    v45 = (struct tagWND *)DesktopWindow;
    v85 = DesktopWindow;
    if ( v44 == (struct tagWND *)DesktopWindow )
      v83 = (struct tagWND *)*((_QWORD *)a1 + 15);
    else
      v83 = v44;
    v46 = 120LL;
    if ( v44 != (struct tagWND *)DesktopWindow )
      v46 = 104LL;
    v47 = (unsigned __int64 **)((char *)a1 + v46);
    v49 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v49 && a3 )
      goto LABEL_87;
    if ( v44 == v45 )
    {
      v50 = PsGetCurrentProcessWin32Process(v48);
      if ( v50 )
        v50 &= -(__int64)(*(_QWORD *)v50 != 0LL);
      if ( (unsigned int)ShouldSetNoOwner(v50, v49) )
        v49 = 0LL;
    }
    if ( !(unsigned int)IsParentBandValid(a1, v49) )
    {
LABEL_87:
      v68 = 87LL;
LABEL_88:
      UserSetLastError(v68);
      goto LABEL_89;
    }
    if ( !v49
      || !GetProp(a1, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1LL)
      && (v44 != v45 || !GetProp(v49, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1LL))
      && (v51 = *((_QWORD *)v49 + 5), *(char *)(v51 + 20) >= 0)
      && *(char *)(v51 + 19) >= 0 )
    {
      if ( *v47 )
        v13 = **v47;
      else
        v13 = 0LL;
      ThreadLock(v49, &v87);
      if ( v44 != (struct tagWND *)v85 )
      {
        v62 = -(__int64)(xxxSetParentWorker(a1, v49, 0LL, 0) != 0LL);
        v13 &= v62;
        goto LABEL_76;
      }
      v52 = v83;
      ThreadLock(v83, &v89);
      xxxHandleOwnerSwitch(a1, v49, v52);
      v53 = IsParentBandValid(a1, v49);
      v54 = a1;
      if ( !v53 || (LOBYTE(v55) = ValidateOwnerDepth((__int64)a1, (__int64)v49), v54 = a1, !v55) )
      {
        xxxHandleOwnerSwitch(v54, v52, v49);
        UserSetLastError(87LL);
        v13 = 0LL;
        goto LABEL_75;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
        goto LABEL_110;
      if ( !v49 )
      {
        HMAssignmentUnlock(v47);
        goto LABEL_74;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(v49) + 25) & 1) != 0 )
      {
LABEL_110:
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1270LL);
        if ( v49 && (*(_BYTE *)(_HMPheFromObject(v49) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1271LL);
        v13 = 0LL;
        goto LABEL_75;
      }
      *(_QWORD *)&v86 = v47;
      *((_QWORD *)&v86 + 1) = v49;
      v92 = 0LL;
      v91 = 0LL;
      HMAssignmentLock(&v86, 0LL);
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v49);
      v57 = a1;
      if ( WindowCloakStateComponentUIAware )
      {
        v66 = WindowCloakStateComponentUIAware;
        v67 = 0LL;
      }
      else
      {
        if ( !(unsigned int)IsWindowShellCloaked(a1, 1) )
        {
LABEL_74:
          v86 = *(_OWORD *)LockPointer(v93, (__int64)a1 + 120, *((_QWORD *)a1 + 15));
          HMAssignmentLock(&v86, 0LL);
          xxxInheritWindowMonitor(a1);
LABEL_75:
          ThreadUnlock1(v59, v58, v60);
LABEL_76:
          ThreadUnlock1(v62, v61, v63);
          goto LABEL_9;
        }
        v66 = 2;
        v67 = (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v91;
        v57 = a1;
      }
      zzzSetWindowCompositionCloak(v57, v67, v66);
      goto LABEL_74;
    }
LABEL_129:
    v68 = 5LL;
    goto LABEL_88;
  }
  v12 = *((_QWORD *)a1 + 5);
  v13 = *(_QWORD *)(v12 + 240);
  *(_QWORD *)(v12 + 240) = a3;
LABEL_9:
  v14 = 0LL;
  v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v15 )
    v14 = *v15;
  if ( v80 != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v80 + 2) )
  {
    if ( *((_BYTE *)v80 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v80);
  }
  v16 = *(_QWORD **)(v14 + 1512);
  if ( v16 )
    *(_QWORD *)(v14 + 1512) = *v16;
  return v13;
}
