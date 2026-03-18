/*
 * XREFs of xxxSetWindowData @ 0x1402DD148
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x14015F628 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x14017BBD4 (xxxSetWindowLong.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140070748 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     IsParentBandValid @ 0x140089390 (IsParentBandValid.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x140092EAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140093708 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x14009A45C (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     GetCPD @ 0x1400B4E48 (GetCPD.c)
 *     MapClientToServerPfn @ 0x14019D504 (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1401B1164 (MapClientNeuterToClientPfn.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1401B9A28 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401BD73C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     ValidateOwnerDepth @ 0x14024CA00 (ValidateOwnerDepth.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x140255FF0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     MapServerToClientPfn @ 0x14026B0F8 (MapServerToClientPfn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D226C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 CPD; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 DesktopWindow; // rax
  struct tagWND *v27; // r13
  struct tagWND *v28; // rsi
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 UserSessionState; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  ULONG_PTR v41; // r12
  int v42; // eax
  struct tagWND *v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v55; // r8
  signed __int32 v56[8]; // [rsp+0h] [rbp-80h] BYREF
  struct tagWND *v57; // [rsp+20h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v59; // [rsp+40h] [rbp-40h] BYREF
  ULONG_PTR v60[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v61[4]; // [rsp+60h] [rbp-20h] BYREF

  v7 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v61, a2);
  if ( v7 == -40 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v55 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v55 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v55 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) )
    {
      v12 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 232LL) >> 5) & 1;
      SetOrClrWF(a3 != 0, a1, 0xD820u, 0);
      goto LABEL_100;
    }
    goto LABEL_13;
  }
  if ( v7 == -21 )
  {
    v53 = *((_QWORD *)a1 + 5);
    v12 = *(_QWORD *)(v53 + 216);
    *(_QWORD *)(v53 + 216) = a3;
    goto LABEL_100;
  }
  if ( ((v7 + 20) & 0xFFFFFFFB) == 0 )
  {
    v12 = (int)xxxSetWindowStyle(a1, v7, a3);
    goto LABEL_100;
  }
  switch ( v7 )
  {
    case -12:
      v50 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v50 + 31) & 0xC0) == 0x40 )
      {
        v12 = *(_QWORD *)(v50 + 320);
        *(_QWORD *)(v50 + 320) = a3;
      }
      else
      {
        v51 = (__int64 *)*((_QWORD *)a1 + 21);
        v12 = 0LL;
        if ( v51 )
          v12 = *v51;
        if ( a3 )
        {
          v52 = ValidateHmenu(a3, 1LL);
          v61[2] = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v61, v52);
          if ( SmartObjStackRef<tagMENU>::operator==((__int64)v61) )
            v12 = 0LL;
          else
            LockWndMenuWorker((__int64)a1, 0, v61);
        }
        else
        {
          UnlockWndMenuWorker(a1, 0);
        }
      }
      goto LABEL_100;
    case -8:
      DesktopWindow = GetDesktopWindow((__int64)a1);
      v27 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v28 = (struct tagWND *)DesktopWindow;
      *(_QWORD *)&v59 = DesktopWindow;
      v29 = v27 == (struct tagWND *)DesktopWindow;
      if ( v27 == (struct tagWND *)DesktopWindow )
        v57 = (struct tagWND *)*((_QWORD *)a1 + 15);
      else
        v57 = v27;
      v30 = 120LL;
      if ( !v29 )
        v30 = 104LL;
      BugCheckParameter3[0] = (ULONG_PTR)a1 + v30;
      v32 = ValidateHwnd(a3);
      if ( !v32 && a3 )
        goto LABEL_51;
      if ( v27 == v28 )
      {
        v33 = PsGetCurrentProcessWin32Process(v31);
        if ( v33 )
          v33 &= -(__int64)(*(_QWORD *)v33 != 0LL);
        if ( (unsigned int)ShouldSetNoOwner(v33, v32) )
          v32 = 0LL;
      }
      if ( !(unsigned int)IsParentBandValid((__int64)a1, v32) )
      {
LABEL_51:
        v14 = 87;
        goto LABEL_14;
      }
      if ( !v32
        || (UserSessionState = W32GetUserSessionState(v35, v34),
            !GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41418), 1u))
        && (v27 != v28 || (v39 = W32GetUserSessionState(v38, v37), !GetProp(v32, *(unsigned __int16 *)(v39 + 41418), 1u)))
        && (v40 = *(_QWORD *)(v32 + 40), *(char *)(v40 + 20) >= 0)
        && *(char *)(v40 + 19) >= 0
        && ((*(_DWORD *)(v32 + 384) & 0x10) != 0 || (*((_DWORD *)a1 + 96) & 0x10) == 0) )
      {
        v41 = BugCheckParameter3[0];
        if ( *(_QWORD *)BugCheckParameter3[0] )
          v12 = **(_QWORD **)BugCheckParameter3[0];
        else
          v12 = 0LL;
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v60, v32);
        if ( v27 != (struct tagWND *)v59 )
        {
          v12 &= -(__int64)(xxxSetParentWorker((struct tagWND **)a1, (struct tagWND *)v32, 0LL, 0) != 0LL);
          goto LABEL_84;
        }
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v57);
        xxxHandleOwnerSwitch(a1, (struct tagWND *)v32, v57);
        v42 = IsParentBandValid((__int64)a1, v32);
        v43 = a1;
        if ( v42 && (v44 = ValidateOwnerDepth((__int64)a1, v32), v43 = a1, v44) )
        {
          if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
          {
            if ( !v32 )
            {
              HMAssignmentUnlock(v41);
LABEL_74:
              v59 = *(_OWORD *)LockPointer(&v57, (__int64)a1 + 120, *((_QWORD *)a1 + 15));
              HMAssignmentLock(&v59, 0LL);
              xxxInheritWindowMonitor(a1, (struct tagWND *)v32, 0);
LABEL_82:
              Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v48);
LABEL_84:
              Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v60, v49);
              goto LABEL_100;
            }
            if ( (*(_BYTE *)(_HMPheFromObject(v32) + 25) & 1) == 0 )
            {
              *(_QWORD *)&v59 = v41;
              *((_QWORD *)&v59 + 1) = v32;
              HMAssignmentLock(&v59, 0LL);
              WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((const struct tagWND *)v32, v45);
              if ( WindowCloakStateComponentUIAware )
              {
                zzzSetWindowCompositionCloak((__int64)a1, WindowCloakStateComponentUIAware);
              }
              else
              {
                LOBYTE(v47) = 1;
                if ( IsWindowShellCloakedComponentUIAware(a1, v47) )
                  zzzUpdateWindowCompositionCloak((__int64)a1, 1, 2);
              }
              goto LABEL_74;
            }
          }
          if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1282);
          if ( v32 && (*(_BYTE *)(_HMPheFromObject(v32) + 25) & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1283);
        }
        else
        {
          xxxHandleOwnerSwitch(v43, v57, (struct tagWND *)v32);
          UserSetLastError(87);
        }
        v12 = 0LL;
        goto LABEL_82;
      }
LABEL_13:
      v14 = 5;
LABEL_14:
      UserSetLastError(v14);
LABEL_15:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v61, v15);
      return 0LL;
    case -6:
      v25 = *((_QWORD *)a1 + 5);
      v12 = *(_QWORD *)(v25 + 32);
      *(_QWORD *)(v25 + 32) = a3;
      goto LABEL_100;
    case -4:
      v13 = *((_QWORD *)a1 + 2);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 528), 0, 0) & 1) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1022);
      }
      else
      {
        v17 = PsGetCurrentProcessWin32Process(v13);
        v18 = v17;
        if ( v17 )
          v18 = -(__int64)(*(_QWORD *)v17 != 0LL) & v17;
        if ( v18 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) )
        {
          v19 = *((_QWORD *)a1 + 5);
          v15 = *(unsigned __int16 *)(v19 + 42);
          if ( (v15 & 0x8000u) == 0LL )
          {
            if ( (*(_BYTE *)(v19 + 18) & 4) != 0 )
            {
              v12 = MapServerToClientPfn(*(_QWORD *)(v19 + 120), a4);
              if ( !v12 )
                goto LABEL_15;
            }
            else
            {
              v12 = *(_QWORD *)(v19 + 120);
              if ( (v15 & 0xFFFF2FFF) == 0x2A5
                || (v20 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), v12, a4),
                    v19 = *((_QWORD *)a1 + 5),
                    v12 = v20,
                    v20 == *(_QWORD *)(v19 + 120)) )
              {
                if ( a4 != ((*(unsigned __int8 *)(v19 + 18) >> 3) & 1) )
                {
                  CPD = GetCPD((__int64)a1, 34 - (unsigned int)(a4 != 0), v12);
                  if ( CPD )
                    v12 = CPD;
                }
              }
            }
            if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
            {
              LOBYTE(v15) = 7;
              v22 = HMValidateHandleNoRip(a3, v15);
              if ( v22 )
              {
                v23 = *(_QWORD *)(v22 + 40);
                a3 = *(_QWORD *)(v23 + 16);
                a4 = *(_WORD *)(v23 + 24) & 2;
              }
            }
            v24 = MapClientToServerPfn(a3, v15);
            if ( v24 )
            {
              SetOrClrWF(0, a1, 0x208u, 1);
              SetOrClrWF(1, a1, 0x204u, 1);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v24;
            }
            else
            {
              SetOrClrWF(a4 != 0, a1, 0x208u, 1);
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                SetOrClrWF(0, a1, 0x204u, 1);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
            }
            _InterlockedOr(v56, 0);
            goto LABEL_100;
          }
        }
      }
      goto LABEL_13;
    case -2:
      v11 = *((_QWORD *)a1 + 5);
      v12 = *(_QWORD *)(v11 + 240);
      *(_QWORD *)(v11 + 240) = a3;
LABEL_100:
      v10 = v12;
      goto LABEL_101;
  }
  UserSetLastError(1413);
  v10 = 0LL;
LABEL_101:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v61, v8);
  return v10;
}
