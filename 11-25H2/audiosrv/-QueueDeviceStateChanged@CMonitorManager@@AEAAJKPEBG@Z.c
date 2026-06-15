/*
 * XREFs of ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x18002A798
 * Callers:
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x18007EE50 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x180112C20 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x180112EB0 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180029220 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18002BA30 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18002C510 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002CFAC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXXZ @ 0x18005D0EC (-GetFreeNode@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPt.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CMonitorManager::QueueDeviceStateChanged(struct _RTL_CRITICAL_SECTION *pv, int a2, char *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct _LIST_ENTRY *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  struct _LIST_ENTRY *v9; // rdi
  CMonitorManager::DeviceStateChangedContext *ThreadpoolWork; // r15
  struct _RTL_CRITICAL_SECTION *v11; // r14
  struct _RTL_CRITICAL_SECTION *v12; // r12
  struct _RTL_CRITICAL_SECTION_DEBUG *SpinCount; // rcx
  ULONG_PTR v14; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG **v15; // rax
  unsigned int v16; // ebx
  signed int LastError; // eax
  ATL::CAtlException *v19; // rbx
  __int64 v20; // [rsp+0h] [rbp-78h] BYREF
  CMonitorManager::DeviceStateChangedContext *v21; // [rsp+20h] [rbp-58h]
  CMonitorManager::DeviceStateChangedContext *v22; // [rsp+28h] [rbp-50h]
  ATL::CAtlException *v23; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v25; // [rsp+48h] [rbp-30h]
  int v27; // [rsp+98h] [rbp+20h]

  v5 = pv;
  v6 = (struct _LIST_ENTRY *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v6;
  if ( v6 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v6);
    LODWORD(v9->Blink) = a2;
    v9[1].Flink = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v21 = (CMonitorManager::DeviceStateChangedContext *)v9;
  v22 = (CMonitorManager::DeviceStateChangedContext *)v9;
  if ( !v9 )
  {
    v16 = -2147024882;
    goto LABEL_9;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v9, a3, v8);
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::OnHandleDeviceStateChanged, v5, 0LL);
  v9[1].Flink = (struct _LIST_ENTRY *)ThreadpoolWork;
  v21 = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    lpCriticalSection = v5 + 4;
    v25 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    try
    {
      v16 = 0;
      v11 = v5 + 5;
      v12 = *(struct _RTL_CRITICAL_SECTION **)&v5[5].LockCount;
      ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::GetFreeNode(&v5[5]);
    }
    catch ( ATL::CAtlException *v23 )
    {
      v7 = &v20;
      v19 = v23;
      if ( *(_DWORD *)v23 == -1073741571 )
        _o__resetstkoflw();
      v27 = *(_DWORD *)v19;
      v16 = *(_DWORD *)v19;
      if ( v27 < 0 )
        goto LABEL_15;
      v5 = pv;
      ThreadpoolWork = v21;
LABEL_25:
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
      SubmitThreadpoolWork(ThreadpoolWork);
LABEL_15:
      if ( v25 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_9;
    }
    SpinCount = (struct _RTL_CRITICAL_SECTION_DEBUG *)v11->SpinCount;
    v14 = *(_QWORD *)&SpinCount->Type;
    v22 = 0LL;
    SpinCount->ProcessLocksList.Flink = v9;
    v11->SpinCount = v14;
    SpinCount->CriticalSection = v12;
    *(_QWORD *)&SpinCount->Type = 0LL;
    ++v11->OwningThread;
    v15 = *(struct _RTL_CRITICAL_SECTION_DEBUG ***)&v11->LockCount;
    if ( v15 )
      *v15 = SpinCount;
    else
      v11->DebugInfo = SpinCount;
    *(_QWORD *)&v11->LockCount = SpinCount;
    goto LABEL_25;
  }
  LastError = GetLastError();
  v16 = LastError;
  if ( LastError > 0 )
    v16 = (unsigned __int16)LastError | 0x80070000;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v16);
  }
LABEL_9:
  if ( v22 )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v22, (unsigned int)v7);
  return v16;
}
