/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1401FC6A8 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140215C3C (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1403FFC9C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1401EEDC0 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140217E84 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1402234C4 (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        char a2,
        ADAPTER_RENDER *a3,
        __int64 a4,
        int a5,
        int a6,
        DXGSYNCOBJECT **a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v10; // r14
  DXGSYNCOBJECT **v13; // r12
  int v14; // eax
  int v15; // edx
  unsigned int v16; // esi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v18; // rbx
  struct DXGGLOBAL *v19; // rax
  int v20; // ebx
  __int64 v21; // rcx
  DXGSYNCOBJECT *v22; // rsi
  int v23; // r13d
  __int64 v24; // r12
  DXGPROCESS *Current; // rax
  ADAPTER_RENDER *v26; // rdx
  int v28; // ecx
  __int64 v29; // rax
  const wchar_t *v30; // r9
  int v31; // ecx
  int HostProcess; // eax
  struct DXG_VMBUS_CHANNEL_BASE *v33; // rcx
  int v34; // r8d
  int SyncObject; // eax
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 *v39; // rbx
  int v40; // eax
  __int64 v41; // rax
  unsigned int v42; // eax
  int v43; // [rsp+30h] [rbp-69h]
  struct DXGGLOBAL *v44; // [rsp+70h] [rbp-29h]
  char v45; // [rsp+78h] [rbp-21h]
  unsigned int v46[4]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v47[8]; // [rsp+90h] [rbp-9h]
  DXGSYNCOBJECT *v48; // [rsp+E0h] [rbp+47h] BYREF
  ADAPTER_RENDER *v49; // [rsp+F0h] [rbp+57h]

  v49 = a3;
  v10 = (__int64)a3;
  if ( a1 && !ADAPTER_RENDER::IsCoreResourceSharedOwner(a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 40;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDevice == NULL || pAdapter->IsCoreResourceSharedOwner()",
      40LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = a7;
  LODWORD(a7) = 0;
  v48 = 0LL;
  *v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 12);
  if ( (v14 & 0x100) != 0 )
  {
    if ( *(_DWORD *)(a4 + 8) == 4 )
    {
      if ( (v14 & 5) == 0 )
        goto LABEL_3;
      WdLogSingleEntry0(2LL);
      v29 = 57LL;
      v30 = L"SignalByKmd cannot be used with CrossAdapter or Shared";
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v29 = 52LL;
      v30 = L"SignalByKmd can only be set for D3DDDI_CPU_NOTIFICATION objects";
    }
    WdLogGlobalForLineNumber = v29;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v30, v29, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
LABEL_3:
  v15 = *(_DWORD *)(a4 + 8);
  v16 = 0;
  if ( v15 == 5 )
  {
    v16 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( v15 != 6 )
      goto LABEL_5;
    v16 = *(_DWORD *)(a4 + 48);
  }
  v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 296LL);
  if ( v28 == 1 )
  {
    v16 = 1;
  }
  else if ( v16 >= 1 << v28 )
  {
    v16 = (1 << v28) - 1;
  }
  if ( v15 == 6 )
    *(_DWORD *)(a4 + 12) |= 0x17u;
LABEL_5:
  Global = DXGGLOBAL::GetGlobal();
  v44 = Global;
  v45 = 0;
  if ( !Global )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2834;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pGlobal != NULL", 2834LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2839;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2839LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = v44;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v18 + 75), 1u);
  v45 = 1;
  v19 = DXGGLOBAL::GetGlobal();
  v20 = a5;
  LOBYTE(v43) = a2;
  LODWORD(v10) = DXGGLOBAL::CreateSyncObject(
                   v19,
                   v10,
                   a1,
                   v16,
                   a4 + 8,
                   a5,
                   v43,
                   0LL,
                   &v48,
                   a8,
                   (unsigned __int64)&a7 & -(__int64)(a1 != 0),
                   a9,
                   0LL,
                   0LL);
  if ( v45 )
  {
    v45 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v44 + 75));
    KeLeaveCriticalRegion();
  }
  if ( (int)v10 < 0 )
    return (unsigned int)v10;
  v22 = v48;
  v23 = (int)a7;
  *(_DWORD *)(a4 + 88) = (_DWORD)a7;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v22 + 20);
  *v13 = v22;
  if ( (*(_DWORD *)(a4 + 12) & 0x100) != 0 )
  {
    *((_DWORD *)v22 + 53) |= 0x20u;
    *((_DWORD *)v22 + 53) |= 0x10u;
  }
  v24 = *((_QWORD *)v22 + 11);
  Current = DXGPROCESS::GetCurrent(v21);
  v26 = v49;
  if ( !*(_BYTE *)(*((_QWORD *)v49 + 2) + 209LL) )
    return (unsigned int)v10;
  v31 = a6;
  if ( a6 )
  {
    *((_DWORD *)v22 + 103) |= 8u;
    *((_DWORD *)v22 + 21) = v31;
    return (unsigned int)v10;
  }
  if ( !a1 )
  {
    HostProcess = 0;
LABEL_38:
    if ( v24 )
      *(_QWORD *)(a4 + 16) = v24;
    v33 = (struct DXG_VMBUS_CHANNEL_BASE *)(*((_QWORD *)v26 + 2) + 4664LL);
    *(_OWORD *)v46 = 0LL;
    *(_OWORD *)v47 = 0LL;
    if ( a1 )
      v34 = *(_DWORD *)(a1 + 472);
    else
      v34 = 0;
    SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(v33, HostProcess, v34, (__int128 *)a4, v20, v46);
    v10 = SyncObject;
    if ( SyncObject >= 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 5) <= 1 )
      {
        v37 = *a8;
        *(_DWORD *)(v37 + 44) = v46[0];
        v38 = *(_QWORD *)&v46[2];
        *(_QWORD *)(v37 + 48) = *(_QWORD *)&v46[2];
        if ( *(_DWORD *)(a4 + 8) == 5 )
          *(_QWORD *)(a4 + 32) = v38;
        else
          *(_QWORD *)(a4 + 40) = v38;
        v39 = (__int64 *)(v37 + 56);
        v40 = MapGuestFenceCpuVaToHost(
                v47[0],
                (void **)(v37 + 56),
                (unsigned __int64 *)(v37 + 80),
                (unsigned int *)(v37 + 88));
        v10 = v40;
        if ( v40 >= 0 )
        {
          v41 = *v39;
          if ( *(_DWORD *)(a4 + 8) == 5 )
            *(_QWORD *)(a4 + 24) = v41;
          else
            *(_QWORD *)(a4 + 32) = v41;
        }
        else
        {
          WdLogSingleEntry1(2LL, v40);
          WdLogGlobalForLineNumber = 210;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v46[0] )
      {
        LODWORD(v10) = DXGSYNCOBJECT::SetHostHandle(v22, v23, v46[0], v36);
      }
      if ( (*((_BYTE *)v22 + 408) & 1) != 0 )
      {
        v42 = v46[1];
        *((_DWORD *)v22 + 103) &= ~8u;
        *((_DWORD *)v22 + 21) = v42;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, SyncObject);
      WdLogGlobalForLineNumber = 185;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"VmBusSendCreateSyncObject failed, returning 0x%I64x",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v10;
  }
  HostProcess = DXGPROCESS::GetHostProcess(Current);
  if ( HostProcess )
  {
    v26 = v49;
    goto LABEL_38;
  }
  WdLogSingleEntry1(2LL, -1073741823LL);
  WdLogGlobalForLineNumber = 164;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to get host adapter process, returning 0x%I64x",
    -1073741823LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
