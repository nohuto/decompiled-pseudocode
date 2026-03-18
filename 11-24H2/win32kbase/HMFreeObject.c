/*
 * XREFs of HMFreeObject @ 0x1400632F0
 * Callers:
 *     HMDestroyObject @ 0x140063280 (HMDestroyObject.c)
 *     DestroyKL @ 0x14006379C (DestroyKL.c)
 *     DestroyMonitor @ 0x1400638E0 (DestroyMonitor.c)
 *     DestroyKF @ 0x140064130 (DestroyKF.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D000 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     UserCreateBaseWindowHandle @ 0x1401BE720 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001B87C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140041F94 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140062510 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1400D64AC (EtwTraceUserDestroyHandle.c)
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     HMCleanupObjectSecurity @ 0x140144D7C (HMCleanupObjectSecurity.c)
 *     SharedFree @ 0x140149BF0 (SharedFree.c)
 *     HMCleanupGrantedHandle @ 0x14014A694 (HMCleanupGrantedHandle.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x14014C2E0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401AA150 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B5E44 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 *     Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401B6020 (Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1401B6074 (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HMFreeObject(unsigned int *a1)
{
  Win32JobObject *v2; // r15
  ULONG_PTR v3; // rbx
  Win32JobObject ***BugCheckParameter4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  _QWORD **v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int16 v13; // bp
  Win32JobObject **v14; // r14
  __int64 UserSessionState; // rax
  unsigned int EtwUserHandleType; // eax
  struct _HANDLEENTRY *v17; // r8
  _BYTE *v18; // r14
  __int64 v19; // rcx
  bool v20; // zf
  unsigned int *v21; // r8
  void *v22; // rcx
  char v23; // al
  Win32JobObject *v24; // rcx
  __int16 v25; // ax
  _QWORD *v26; // rax
  Win32JobObject **v27; // rcx
  __int64 v28; // rbx
  _QWORD *v30; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v30 = *(_QWORD **)(W32GetUserSessionState(a1) + 42400);
  LockRefactorStagingAssertOwned((PERESOURCE *)&v30);
  v3 = HMPheFromObjectWorker((int *)a1);
  BugCheckParameter4 = (Win32JobObject ***)HMPkheFromObjectWorker(a1);
  if ( !(unsigned int)((__int64 (*)(void))Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline)() )
  {
    if ( (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *BugCheckParameter4 != (Win32JobObject **)a1 )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2504LL);
      }
      if ( (HIWORD(*a1) & 0x7FFF) != *(_WORD *)(v3 + 26) )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2505LL);
      }
    }
    if ( BugCheckParameter4[3] )
    {
      LOBYTE(v6) = *(_BYTE *)(v3 + 24);
      HMCleanupObjectSecurity(BugCheckParameter4, v6);
      GreDeleteFastMutex((char *)BugCheckParameter4[3]);
    }
  }
  if ( a1[2] )
  {
    v7 = *(unsigned __int8 *)(v3 + 24);
    if ( v7 > 0xC )
    {
      if ( v7 != 13 )
        goto LABEL_13;
      LODWORD(v30) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2541LL);
    }
    else if ( v7 > 5 || (v5 = *(unsigned __int8 *)(v3 + 24), *(_BYTE *)(v3 + 24)) )
    {
LABEL_13:
      KeBugCheckEx(0x164u, 0x1CuLL, (ULONG_PTR)a1, a1[2], *(unsigned __int8 *)(v3 + 24));
    }
  }
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline(v5) )
  {
    CheckForDoubleFree((struct _HANDLEENTRY *)v3, (struct _HEAD *)a1);
    if ( *BugCheckParameter4 != (Win32JobObject **)a1 )
LABEL_72:
      KeBugCheckEx(0x164u, 0x1FuLL, (ULONG_PTR)a1, v3, (ULONG_PTR)BugCheckParameter4);
  }
  else if ( !*(_BYTE *)(v3 + 24) )
  {
    HMDoubleFree((ULONG_PTR)a1);
  }
  if ( BugCheckParameter4[2] )
  {
    LODWORD(v30) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2610LL);
  }
  if ( *(_BYTE *)(v3 + 24) == 16 )
  {
    v9 = (_QWORD **)(W32GetUserSessionState(v8) + 57584);
    v10 = *v9;
    while ( v10 != v9 )
    {
      v8 = (unsigned int *)(v10 - 9);
      v10 = (_QWORD *)*v10;
      if ( v8 == a1 )
        goto LABEL_72;
    }
  }
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline(v8) && BugCheckParameter4[3] )
  {
    LOBYTE(v11) = *(_BYTE *)(v3 + 24);
    HMCleanupObjectSecurity(BugCheckParameter4, v11);
    GreDeleteFastMutex((char *)BugCheckParameter4[3]);
  }
  v12 = *(unsigned __int8 *)(v3 + 24);
  v13 = *((_WORD *)&unk_1402437BC + 12 * v12);
  if ( (v13 & 2) != 0 )
  {
    v14 = BugCheckParameter4[1];
  }
  else
  {
    if ( (v13 & 1) == 0 )
    {
      v14 = 0LL;
      goto LABEL_36;
    }
    v14 = (Win32JobObject **)BugCheckParameter4[1][58];
  }
  if ( v14 )
    --*((_DWORD *)v14 + 17);
LABEL_36:
  UserSessionState = W32GetUserSessionState(3 * v12);
  --*(_DWORD *)(UserSessionState + 19876);
  if ( v14 )
    PsGetProcessId(*v14);
  EtwUserHandleType = GetEtwUserHandleType(*(_BYTE *)(v3 + 24));
  EtwTraceUserDestroyHandle(**BugCheckParameter4, EtwUserHandleType);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    Win32JobObject::RemoveHandle(**BugCheckParameter4, (void *)v3, v17);
    v18 = (_BYTE *)(v3 + 25);
  }
  else
  {
    v18 = (_BYTE *)(v3 + 25);
    if ( (*(_BYTE *)(v3 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**BugCheckParameter4);
      *v18 &= ~0x20u;
    }
  }
  if ( (v13 & 0x10) != 0 )
  {
    v19 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = 0LL;
    v20 = (*v18 & 0x40) == 0;
    v30 = (_QWORD *)v19;
    if ( v20 )
    {
      v21 = (unsigned int *)*((_QWORD *)a1 + 5);
      if ( !v21 || v21 == a1 )
      {
        RtlFreeHeap(*(PVOID *)(v19 + 136), 0, a1);
        goto LABEL_50;
      }
      RtlFreeHeap(*(PVOID *)(v19 + 136), 0, v21);
    }
    else
    {
      GreDeleteFastMutex(*((char **)a1 + 5));
    }
    HMFreeUserOrIsolatedType(v13, *(_BYTE *)(v3 + 24), a1);
LABEL_50:
    DeferrableUnlockObjectAssignment<tagDESKTOP>(&v30);
    goto LABEL_63;
  }
  if ( (v13 & 0x40) != 0 )
  {
    v22 = (void *)*((_QWORD *)a1 + 5);
    if ( !v22 )
    {
      SharedFree(a1);
      goto LABEL_63;
    }
    SharedFree(v22);
    goto LABEL_59;
  }
  v23 = *(_BYTE *)(v3 + 24);
  if ( v23 == 19 )
  {
    v24 = (*BugCheckParameter4)[4];
  }
  else
  {
    if ( v23 != 22 )
    {
      if ( (v13 & 0x100) != 0 )
      {
        v30 = (_QWORD *)*((_QWORD *)a1 + 3);
        DeferrableUnlockObjectAssignment<tagDESKTOP>(&v30);
      }
LABEL_59:
      HMFreeUserOrIsolatedType(v13, *(_BYTE *)(v3 + 24), a1);
      goto LABEL_63;
    }
    v2 = (*BugCheckParameter4)[2];
    v24 = (Win32JobObject *)*((_QWORD *)v2 + 4);
  }
  ObfDereferenceObject(v24);
LABEL_63:
  v25 = (*(_WORD *)(v3 + 26) + 1) & 0x7FFF;
  if ( v25 == 0x7FFF )
    v25 = 1;
  *(_OWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  *((_OWORD *)BugCheckParameter4 + 1) = 0LL;
  BugCheckParameter4[4] = 0LL;
  *(_WORD *)(v3 + 26) = v25;
  v26 = (_QWORD *)W32GetUserSessionState(0LL);
  v28 = (__int64)(v3 - v26[2493]) >> 5;
  if ( (v28 & 1) != 0 )
  {
    v27 = (Win32JobObject **)v26[2470];
    *BugCheckParameter4 = v27;
    v26[2470] = v28;
  }
  else
  {
    *BugCheckParameter4 = (Win32JobObject **)v26[2469];
    v26[2469] = v28;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v27) + 19816) && v2 )
    HMUnlockObject((int *)v2);
  return 1LL;
}
