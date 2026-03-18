/*
 * XREFs of xxxTrackMouseMove @ 0x1C0024474
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006474 (_SetSystemTimer.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010D64 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxResetTooltip @ 0x1C0016C70 (xxxResetTooltip.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0017A40 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     xxxHotTrack @ 0x1C0017B10 (xxxHotTrack.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C0024958 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ThreadLockExchangeAlways @ 0x1C0073040 (ThreadLockExchangeAlways.c)
 *     SetRITTimer @ 0x1C0086450 (SetRITTimer.c)
 *     xxxCancelMouseMoveTracking @ 0x1C0098298 (xxxCancelMouseMoveTracking.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00D80F8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     ?GetTooltipShowDelay@@YAIXZ @ 0x1C013CACC (-GetTooltipShowDelay@@YAIXZ.c)
 *     ?IsTooltipHittest2@@YA_NPEAUtagWND@@I@Z @ 0x1C013CAF4 (-IsTooltipHittest2@@YA_NPEAUtagWND@@I@Z.c)
 *     ?ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z @ 0x1C013CB70 (-ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ?xxxTooltipDestroyCallback@@YAXXZ @ 0x1C013CED8 (-xxxTooltipDestroyCallback@@YAXXZ.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0156B54 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B4EB0 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01B60AC (GetActiveTrackPwnd.c)
 *     ?xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z @ 0x1C0224EDC (-xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, unsigned int a2, int a3)
{
  const struct tagWND *v3; // rdi
  unsigned int v6; // esi
  char v7; // r15
  __int64 v8; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagWND **v10; // r13
  int v11; // r9d
  int IsEnabledDeviceUsage; // eax
  struct tagTHREADINFO *v13; // r10
  struct tagQ *v14; // rdx
  unsigned int v15; // ecx
  _DWORD *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int TooltipShowDelay; // eax
  int v21; // eax
  struct tagTOOLTIPWND *v22; // rax
  unsigned int v23; // r8d
  struct tagTOOLTIPWND *v24; // rsi
  __int64 v25; // r10
  unsigned __int16 *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 ActiveTrackPwnd; // rdi
  int *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD v36[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v37; // [rsp+58h] [rbp-19h] BYREF
  __int64 v38; // [rsp+68h] [rbp-9h]
  __int128 v39; // [rsp+70h] [rbp-1h] BYREF
  __int64 v40; // [rsp+80h] [rbp+Fh]
  __int128 v41; // [rsp+88h] [rbp+17h] BYREF
  __int64 v42; // [rsp+98h] [rbp+27h]
  const struct tagWND *v43; // [rsp+D8h] [rbp+67h]

  v3 = a1;
  v40 = 0LL;
  v38 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  v6 = 0;
  v37 = 0LL;
  v7 = 0;
  v41 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  ThreadLockAlways(a1, &v41);
  if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(v3) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
      if ( CompositionInputWindowUIOwner )
      {
        v3 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, &v41);
      }
    }
  }
  v10 = (struct tagWND **)(v8 + 192);
  v43 = *(const struct tagWND **)(v8 + 192);
  if ( (*(_DWORD *)(v8 + 48) & 0xDC0) != 0 && *(_QWORD *)(v8 + 192) )
  {
    IsEnabledDeviceUsage = Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage();
    v13 = (struct tagTHREADINFO *)*((_QWORD *)*v10 + 2);
    if ( IsEnabledDeviceUsage )
    {
      if ( *(_QWORD *)(gptiCurrent + 432LL) == *((_QWORD *)v13 + 54) )
      {
        v6 = 1024;
        if ( v13 != (struct tagTHREADINFO *)gptiCurrent && (*(_DWORD *)(v8 + 48) & 0x800) != 0 )
        {
          PostEventMessageWindow(*v10, 0x1Au, *(int *)(v8 + 200), 1LL);
          *(_DWORD *)(v8 + 48) &= ~0x800u;
          v7 = 1;
        }
      }
    }
    else
    {
      v14 = (struct tagQ *)*((_QWORD *)v13 + 54);
      if ( *(struct tagQ **)(gptiCurrent + 432LL) == v14 )
      {
        v6 = 1024;
      }
      else
      {
        v15 = *(_DWORD *)(v8 + 48);
        if ( (v15 & 0x500) != 0 )
        {
          PostEventMessageEx(v13, v14, 0xBu, *v10, v15, *(int *)(v8 + 200), 1024LL, 0LL);
          *(_DWORD *)(v8 + 48) &= 0xFFFFFAFF;
        }
      }
    }
    if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() )
    {
      if ( !v7 && (a2 == 1 || a3 != 512) )
        v6 |= 0x800u;
    }
    else if ( a2 == 1 || a3 != 512 )
    {
      v6 |= (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() != 0 ? 2048 : 256;
    }
    v16 = (_DWORD *)(v8 + 200);
    if ( v43 != v3 || (a2 == 1) != (*v16 == 1) )
      v6 |= 0xC0u;
    PushW32ThreadLock(v8, &v37, UserDereferenceObject);
    ObfReferenceObject((PVOID)v8);
    ThreadLockAlways(*v10, &v39);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v8 + 48), *v10, (unsigned int)*v16, v6);
    ThreadUnlock1(v18, v17, v19);
    *(_DWORD *)(v8 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v8, &v37, UserDereferenceObject);
    ObfReferenceObject((PVOID)v8);
  }
  if ( a2 != 1 && a3 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(v3, a2, 1) )
      *(_DWORD *)(v8 + 48) |= 0x400u;
    if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage() )
    {
      if ( IsTooltipHittest2(v3, (unsigned __int16)a2) )
      {
        if ( (*(_DWORD *)(v8 + 48) & 0x800) != 0 )
        {
          xxxTooltipDestroyCallback();
          xxxCreateTooltip2((struct tagDESKTOP *)v8, v3, a2);
        }
        else
        {
          TooltipShowDelay = GetTooltipShowDelay();
          *(_QWORD *)(v8 + 120) = SetRITTimer(*(_QWORD *)(v8 + 120), TooltipShowDelay, TooltipRitShowTimerCallback, 1LL);
        }
      }
      else
      {
        if ( *(_QWORD *)(v8 + 120) )
          ResetTooltipTimer((struct tagDESKTOP *)v8);
        v21 = *(_DWORD *)(v8 + 48);
        if ( (v21 & 0x800) != 0 )
        {
          *(_DWORD *)(v8 + 48) = v21 & 0xFFFFF7FF;
          xxxTooltipDestroyCallback();
        }
      }
    }
    else
    {
      v22 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v8 + 112));
      v24 = v22;
      if ( v22 && *(_QWORD *)v22 )
      {
        v26 = IsTooltipHittest(v3, (unsigned __int16)a2, v23);
        if ( v26 )
        {
          ThreadLockAlways(v25, &v39);
          if ( (unsigned int)xxxCreateTooltip(v24, v26) )
            *(_DWORD *)(v8 + 48) |= 0x300u;
        }
        else
        {
          ThreadLockAlways(v25, &v39);
          xxxResetTooltip(v24);
        }
        ThreadUnlock1(v28, v27, v29);
      }
    }
  }
  NotifyShell::HitTestPartUpdate((NotifyShell *)v8, v3, (struct tagWND *)a2, v11);
  if ( v43 != v3 )
  {
    v36[0] = v8 + 192;
    v36[1] = v3;
    HMAssignmentLock(v36, 1LL);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v3);
        if ( ActiveTrackPwnd )
        {
          v31 = (int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527, *v31, (int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v8 + 200) = a2;
  PopAndFreeW32ThreadLock(&v37);
  return ThreadUnlock1(v33, v32, v34);
}
