/*
 * XREFs of StorAdapterInitializeDlrmIfSupported @ 0x1401B2EF0
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidGetLinkConfigInterface @ 0x14008C608 (RaidGetLinkConfigInterface.c)
 *     RaidQueryDlrmSupportStatus @ 0x14008D7E4 (RaidQueryDlrmSupportStatus.c)
 *     Feature_GeDlrmFixInitRace__private_IsEnabledDeviceUsageNoInline @ 0x1401391B4 (Feature_GeDlrmFixInitRace__private_IsEnabledDeviceUsageNoInline.c)
 *     StorLogDLRMInitialization @ 0x14013A208 (StorLogDLRMInitialization.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     StorDlrmCreateSystemThread @ 0x1401B3394 (StorDlrmCreateSystemThread.c)
 *     StorDlrmTerminateSystemThread @ 0x1401B3494 (StorDlrmTerminateSystemThread.c)
 */

void __fastcall StorAdapterInitializeDlrmIfSupported(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // r12d
  int SystemThread; // edi
  __int64 v7; // r9
  __int64 Pool; // rax
  __int64 v9; // r15
  int LinkConfigInterface; // eax
  char v11; // al
  unsigned int v12; // eax
  unsigned int i; // edi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  ULONGLONG v16; // rax
  ULONGLONG UnbiasedInterruptTime; // rax
  int v18; // eax
  _QWORD **v19; // rdi
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  char v22; // [rsp+80h] [rbp+40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  if ( !a1 )
    return;
  *(_BYTE *)(a1 + 113) &= ~2u;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v3 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v5 = 0;
  if ( (int)RaidQueryDlrmSupportStatus(v2, &v22) < 0 )
    return;
  if ( !v22 )
  {
    SystemThread = -1073741637;
    goto LABEL_35;
  }
  v7 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 113) |= 2u;
  Pool = RaidAllocatePool(64LL, 288LL, 1296851282LL, v7);
  v3 = Pool;
  if ( !Pool )
    goto LABEL_6;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool + 112));
  KeInitializeEvent((PRKEVENT)(v3 + 88), SynchronizationEvent, 0);
  v9 = v3 + 120;
  *(_QWORD *)(v3 + 152) = v3 + 144;
  *(_QWORD *)(v3 + 144) = v3 + 144;
  *(_QWORD *)(v3 + 128) = v3 + 120;
  *(_QWORD *)(v3 + 120) = v3 + 120;
  KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 160));
  KeInitializeSpinLock((PKSPIN_LOCK)(v3 + 136));
  LinkConfigInterface = RaidGetLinkConfigInterface(*(_QWORD *)(a1 + 8), &v23);
  v4 = v23;
  SystemThread = LinkConfigInterface;
  if ( LinkConfigInterface >= 0 )
  {
    SystemThread = (*(__int64 (__fastcall **)(_QWORD, __int64))(v23 + 40))(*(_QWORD *)(v23 + 8), v3);
    if ( SystemThread >= 0 )
    {
      v11 = *(_QWORD *)v3;
      if ( (v11 & 0x20) != 0 )
      {
        v12 = 5;
      }
      else if ( (v11 & 0x10) != 0 )
      {
        v12 = 4;
      }
      else if ( (v11 & 8) != 0 )
      {
        v12 = 3;
      }
      else if ( (v11 & 4) != 0 )
      {
        v12 = 2;
      }
      else if ( (v11 & 2) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v12 = (*(_QWORD *)v3 & 1) == 0 ? 6 : 0;
      }
      *(_DWORD *)(v3 + 56) = v12;
      *(_DWORD *)(v3 + 60) = v12;
      if ( v12 >= 6 )
      {
        SystemThread = -1073741823;
        goto LABEL_35;
      }
      for ( i = 0; i < 4; ++i )
      {
        v14 = (_QWORD *)RaidAllocatePool(64LL, 24LL, 1296851282LL, *(_QWORD *)(a1 + 8));
        if ( !v14 )
          break;
        v15 = *(_QWORD **)(v3 + 128);
        if ( *v15 != v9 )
LABEL_42:
          __fastfail(3u);
        *v14 = v9;
        ++v5;
        v14[1] = v15;
        *v15 = v14;
        *(_QWORD *)(v3 + 128) = v14;
      }
      if ( !v5 )
      {
LABEL_6:
        SystemThread = -1073741670;
        goto LABEL_35;
      }
      if ( (unsigned int)Feature_GeDlrmFixInitRace__private_IsEnabledDeviceUsageNoInline() )
      {
        *(_QWORD *)(v3 + 40) = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 48) = KeQueryUnbiasedInterruptTime();
        UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 256) = -1LL;
        *(_QWORD *)(v3 + 168) = UnbiasedInterruptTime;
        *(_QWORD *)(a1 + 6216) = v4;
        *(_QWORD *)(v3 + 16) = a1;
        SystemThread = StorDlrmCreateSystemThread((PVOID)v3);
        if ( SystemThread < 0 )
        {
          *(_QWORD *)(a1 + 6216) = 0LL;
          goto LABEL_35;
        }
        *(_QWORD *)(a1 + 6224) = v3;
      }
      else
      {
        SystemThread = StorDlrmCreateSystemThread((PVOID)v3);
        if ( SystemThread < 0 )
          goto LABEL_35;
        *(_QWORD *)(v3 + 40) = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 48) = KeQueryUnbiasedInterruptTime();
        v16 = KeQueryUnbiasedInterruptTime();
        *(_QWORD *)(v3 + 256) = -1LL;
        *(_QWORD *)(v3 + 168) = v16;
        *(_QWORD *)(a1 + 6216) = v4;
        *(_QWORD *)(a1 + 6224) = v3;
        *(_QWORD *)(v3 + 16) = a1;
      }
      *(_DWORD *)(v3 + 12) |= 1u;
      v18 = PoRegisterForEffectivePowerModeNotifications(
              2LL,
              DlrmEffectivePowerModeCallback,
              *(_QWORD *)(a1 + 6224),
              v3 + 64,
              *(_QWORD *)(a1 + 8));
      v4 = v23;
      SystemThread = v18;
      if ( v18 < 0 )
        SystemThread = 0;
    }
  }
LABEL_35:
  StorLogDLRMInitialization(a1, v3, SystemThread);
  if ( SystemThread < 0 )
  {
    if ( v3 )
    {
      StorDlrmTerminateSystemThread(v3);
      v19 = (_QWORD **)(v3 + 120);
      while ( 1 )
      {
        v20 = *v19;
        if ( *v19 == v19 )
          break;
        if ( (_QWORD **)v20[1] != v19 )
          goto LABEL_42;
        v21 = (_QWORD *)*v20;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 )
          goto LABEL_42;
        *v19 = v21;
        v21[1] = v19;
        ExFreePoolWithTag(v20, 0x4D4C6152u);
      }
      ExFreePoolWithTag((PVOID)v3, 0x4D4C6152u);
      *(_QWORD *)(a1 + 6224) = 0LL;
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(v4 + 24))(*(_QWORD *)(v4 + 8));
      *(_QWORD *)(a1 + 6216) = 0LL;
      ExFreePoolWithTag((PVOID)v4, 0x4D4C6152u);
    }
  }
}
