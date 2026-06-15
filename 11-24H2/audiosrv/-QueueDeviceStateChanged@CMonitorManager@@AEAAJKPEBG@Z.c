/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18000B714
 * Callers:
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x18006CBF0 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18011AA80 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x18011AD10 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A940 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18000B620 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x18001B530 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?GetFreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXXZ @ 0x18004EA8C (-GetFreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPt.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(
        struct _RTL_CRITICAL_SECTION *pv,
        int a2,
        const unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rdi
  struct _TP_WORK *ThreadpoolWork; // r15
  struct _RTL_CRITICAL_SECTION *v9; // r14
  struct _RTL_CRITICAL_SECTION *v10; // r12
  struct _RTL_CRITICAL_SECTION_DEBUG *SpinCount; // rcx
  ULONG_PTR v12; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG **v13; // rax
  unsigned int v14; // ebx
  signed int LastError; // eax
  ATL::CAtlException *v17; // rbx
  CMonitorManager::DeviceStateChangedContext *v18; // [rsp+28h] [rbp-50h]
  ATL::CAtlException *v19; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v21; // [rsp+48h] [rbp-30h]
  int v23; // [rsp+98h] [rbp+20h]

  v5 = pv;
  v6 = (struct _LIST_ENTRY *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v6);
    LODWORD(v7->Blink) = a2;
    v7[1].Flink = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v18 = (CMonitorManager::DeviceStateChangedContext *)v7;
  if ( !v7 )
  {
    v14 = -2147024882;
    goto LABEL_9;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString(v7, a3);
  ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  v7[1].Flink = (struct _LIST_ENTRY *)ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    lpCriticalSection = v5 + 4;
    v21 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    try
    {
      v14 = 0;
      v9 = v5 + 5;
      v10 = *(struct _RTL_CRITICAL_SECTION **)&v5[5].LockCount;
      ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::GetFreeNode(&v5[5]);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v17 = v19;
      if ( *(_DWORD *)v19 == -1073741571 )
        _o__resetstkoflw();
      v23 = *(_DWORD *)v17;
      v14 = *(_DWORD *)v17;
      if ( v23 < 0 )
        goto LABEL_15;
      v5 = pv;
LABEL_25:
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      SubmitThreadpoolWork(ThreadpoolWork);
LABEL_15:
      if ( v21 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_9;
    }
    SpinCount = (struct _RTL_CRITICAL_SECTION_DEBUG *)v9->SpinCount;
    v12 = *(_QWORD *)&SpinCount->Type;
    v18 = 0LL;
    SpinCount->ProcessLocksList.Flink = v7;
    v9->SpinCount = v12;
    SpinCount->CriticalSection = v10;
    *(_QWORD *)&SpinCount->Type = 0LL;
    ++v9->OwningThread;
    v13 = *(struct _RTL_CRITICAL_SECTION_DEBUG ***)&v9->LockCount;
    if ( v13 )
      *v13 = SpinCount;
    else
      v9->DebugInfo = SpinCount;
    *(_QWORD *)&v9->LockCount = SpinCount;
    goto LABEL_25;
  }
  LastError = GetLastError();
  v14 = LastError;
  if ( LastError > 0 )
    v14 = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v14);
  }
LABEL_9:
  if ( v18 )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v18);
  return v14;
}
