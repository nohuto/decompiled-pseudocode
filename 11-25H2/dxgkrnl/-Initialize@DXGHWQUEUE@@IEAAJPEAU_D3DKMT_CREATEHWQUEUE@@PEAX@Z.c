/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x140321478
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1403211F0 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x14003959C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051500 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140052398 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@W4VIDSCH_HW_QUEUE_PROGRESS_FENCE_TYPE@@@Z @ 0x140054220 (-VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_O.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005F2BC (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018820C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401D54A0 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401D57C0 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x14032CE90 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1403B9CC4 (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::Initialize(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, _DWORD *a3)
{
  char *v6; // rsi
  __int64 v7; // rdx
  __int64 result; // rax
  char *v9; // r12
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  struct DXGGLOBAL *v20; // rax
  int SyncObject; // eax
  __int64 v22; // r13
  D3DKMT_HANDLE v23; // r15d
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  UINT Value; // ecx
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  __int64 v30; // rdx
  void *v31; // rcx
  int v32; // eax
  __int64 v33; // rsi
  __int64 *v34; // r15
  int HwQueue; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct _VIDSCH_SYNC_OBJECT *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // r8
  struct VIDSCH_HW_QUEUE **v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_CREATEHWQUEUE v42; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v43[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v45[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v46[10]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v47[16]; // [rsp+120h] [rbp+20h] BYREF
  D3DKMT_HANDLE v48; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v49; // [rsp+1C0h] [rbp+C0h]

  v49 = a3;
  memset(v47, 0, 0x50uLL);
  LODWORD(v47[0]) = 5;
  v6 = (char *)this + 16;
  v48 = 0;
  v7 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 16LL) + 209LL) )
  {
    if ( (a2->Flags.Value & 0x10) != 0 )
    {
      WdLogSingleEntry2(2LL, v7, -1073741637LL);
      v40 = *(struct VIDSCH_HW_QUEUE ***)v6;
      WdLogGlobalForLineNumber = 366;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DXGCONTEXT 0x%I64x: User mode queues not yet supported on para-v, returning 0x%I64x",
        (__int64)v40,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      return 3221225659LL;
    }
    result = DXGHWQUEUE::InitializeOnHost(this, a2, a3);
    if ( (int)result < 0 )
      return result;
    v9 = (char *)this + 16;
  }
  else
  {
    v9 = (char *)this + 16;
  }
  if ( (a2->Flags.Value & 0x10) != 0 )
    return DXGHWQUEUE::InitializeForUserModeSubmission(this, a2, a3);
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v43);
  v11 = DXGGLOBAL::GetGlobal();
  v12 = (int)DXGGLOBAL::CreateSyncObject(
               v11,
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 16LL),
               *(_QWORD *)(*(_QWORD *)v6 + 16LL),
               (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v6 + 388LL)),
               v47,
               3,
               0,
               0LL,
               0LL,
               (char *)this + 48,
               &v48,
               0LL,
               0LL,
               0LL);
  v13 = *(_QWORD *)v6;
  if ( (int)v12 < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(v13 + 16), v12);
    WdLogGlobalForLineNumber = 409;
LABEL_21:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43);
    return (unsigned int)v12;
  }
  LODWORD(v12) = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 16LL) + 209LL) )
  {
    v14 = v48;
    *(_DWORD *)(*((_QWORD *)this + 6) + 44LL) = a2->hHwQueueProgressFence;
    a2->hHwQueueProgressFence = v14;
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 248));
    v16 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *(_DWORD *)(v15 + 296) )
    {
      v17 = *(_QWORD *)(v15 + 280);
      if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
        && (*(_DWORD *)(v17 + 16 * v16 + 8) & 0x1F) != 0 )
      {
        v18 = 2 * ((v14 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v17 + 8 * v18 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)(v15 + 280) + 8 * v18 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v15 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_21;
  }
  memset(v46, 0, sizeof(v46));
  v19 = *((_QWORD *)this + 10);
  HIDWORD(v46[0]) |= 0x80u;
  v46[1] = v19;
  LODWORD(v46[0]) = 5;
  v20 = DXGGLOBAL::GetGlobal();
  LOBYTE(v41) = 0;
  SyncObject = DXGGLOBAL::CreateSyncObject(
                 v20,
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 16LL),
                 *(_QWORD *)(*(_QWORD *)v6 + 16LL),
                 (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v6 + 388LL)),
                 v46,
                 16,
                 v41,
                 0LL,
                 0LL,
                 (char *)this + 72,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
  LODWORD(v12) = SyncObject;
  if ( SyncObject < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(*(_QWORD *)v9 + 16LL), SyncObject);
    WdLogGlobalForLineNumber = 447;
    goto LABEL_21;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43);
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v22 + 248));
  v23 = v48;
  v24 = (v48 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v24 < *(_DWORD *)(v22 + 296) )
  {
    v25 = *(_QWORD *)(v22 + 280);
    if ( ((v48 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
      && (*(_DWORD *)(v25 + 16 * v24 + 8) & 0x1F) != 0 )
    {
      v26 = 2 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v25 + 16 * (((unsigned __int64)v48 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v22 + 280) + 8 * v26 + 8) &= ~0x2000u;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v22 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v22 + 248, 0LL);
  KeLeaveCriticalRegion();
  v27 = *((_QWORD *)this + 2);
  Value = a2->Flags.Value;
  v42.pPrivateDriverData = v49;
  v42.PrivateDriverDataSize = a2->PrivateDriverDataSize;
  *(_QWORD *)(&v42.hHwQueueProgressFence + 1) = 0LL;
  HIDWORD(v42.HwQueueProgressFenceCPUVirtualAddress) = 0;
  v42.hHwQueue = this;
  v42.Flags.Value = Value;
  v42.hHwQueueProgressFence = v23;
  if ( (*(_DWORD *)(v27 + 392) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v27 + 16) + 1898LL) )
    v42.Flags.Value = Value | 1;
  CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL));
  v30 = *((_QWORD *)this + 2);
  v31 = (void *)*((_QWORD *)CurrentValueStorage + 1);
  v42.HwQueueProgressFenceGPUVirtualAddress = v47[3];
  *((_QWORD *)this + 8) = v47[3];
  *((_QWORD *)this + 7) = v31;
  LODWORD(CurrentValueStorage) = a2->Flags.0;
  v42.HwQueueProgressFenceCPUVirtualAddress = v31;
  if ( ((unsigned __int8)CurrentValueStorage & 8) == 0 )
  {
    v32 = ADAPTER_RENDER::DdiCreateHwQueue(
            *(ADAPTER_RENDER **)(*(_QWORD *)(v30 + 16) + 16LL),
            *(void **)(v30 + 184),
            &v42);
    v33 = v32;
    if ( v32 < 0 )
    {
      if ( v32 != -1073741822 )
      {
        WdLogSingleEntry1(2LL, v32);
        WdLogGlobalForLineNumber = 497;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"DdiCreateHwQueue() failed with status 0x%I64d",
          v33,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v33;
      }
      *((_QWORD *)this + 4) = 153LL;
    }
    else
    {
      *((_QWORD *)this + 4) = v42.hHwQueue;
    }
LABEL_40:
    v34 = (__int64 *)((char *)this + 40);
    HwQueue = VIDSCH_EXPORT::VidSchCreateHwQueue(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
                this,
                *(struct VIDSCH_HW_CONTEXT **)(*((_QWORD *)this + 2) + 280LL),
                a2,
                (struct VIDSCH_HW_QUEUE **)this + 5);
    LODWORD(v33) = HwQueue;
    if ( HwQueue >= 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v44,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL) + 32LL),
        0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
      VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 6));
      VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
        *v34,
        (__int64)VidSchSyncObject,
        1u);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v44);
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v45,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 32LL),
        0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
      v37 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 9));
      VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
        *v34,
        (__int64)v37,
        2u);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v45);
      v38 = DXGPROCESS::AllocHandleSafe(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
              (__int64)this,
              0xFu);
      *((_DWORD *)this + 6) = v38;
      if ( v38 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventCreateHwQueue,
            v39,
            *((_QWORD *)this + 2),
            v38,
            this);
      }
      else
      {
        LODWORD(v33) = -1073741801;
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 564;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), HwQueue);
      WdLogGlobalForLineNumber = 529;
    }
    return (unsigned int)v33;
  }
  if ( (*(_DWORD *)(v30 + 392) & 0x20) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 505;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The HW queue must specify NoKmdAccess flag",
      505LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  result = CheckNoKmdAccessPrivateData(v42.PrivateDriverDataSize, (_DWORD *)v42.pPrivateDriverData, 0xFF000005);
  if ( (int)result >= 0 )
    goto LABEL_40;
  return result;
}
