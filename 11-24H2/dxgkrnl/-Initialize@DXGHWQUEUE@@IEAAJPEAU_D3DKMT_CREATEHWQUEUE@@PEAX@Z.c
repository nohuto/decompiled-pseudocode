/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1402BBA30
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1402BB7A8 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1400391D4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREATEHWQUEUE@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140050E10 (-VidSchCreateHwQueue@VIDSCH_EXPORT@@QEAAJPEAVDXGHWQUEUE@@PEAUVIDSCH_HW_CONTEXT@@PEAU_D3DKMT_CREA.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140051DE8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@W4VIDSCH_HW_QUEUE_PROGRESS_FENCE_TYPE@@@Z @ 0x140053FB0 (-VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_O.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x14005FB74 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018A51C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401DA74C (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401DAA6C (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402F94BC (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1402FA1CC (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1403AE404 (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::Initialize(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, _DWORD *a3)
{
  char *v6; // rsi
  __int64 v7; // rdx
  __int64 result; // rax
  char *v9; // r12
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  struct DXGGLOBAL *v23; // rax
  int SyncObject; // eax
  __int64 v25; // r15
  D3DKMT_HANDLE v26; // r12d
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // rsi
  UINT PrivateDriverDataSize; // eax
  __int64 v31; // rdx
  UINT Value; // ecx
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  __int64 v34; // rdx
  void *v35; // rcx
  int v36; // eax
  __int64 v37; // rsi
  __int64 *v38; // r15
  int HwQueue; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  struct _VIDSCH_SYNC_OBJECT *v41; // rax
  unsigned int v42; // eax
  __int64 v43; // r8
  struct VIDSCH_HW_QUEUE **v44; // [rsp+20h] [rbp-E0h]
  int v45; // [rsp+30h] [rbp-D0h]
  struct _DXGKARG_CREATEHWQUEUE v46; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v47[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v48[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v49[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v50[10]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v51[16]; // [rsp+120h] [rbp+20h] BYREF
  D3DKMT_HANDLE v52; // [rsp+1B0h] [rbp+B0h] BYREF
  char *v53; // [rsp+1C8h] [rbp+C8h]

  memset(v51, 0, 0x50uLL);
  LODWORD(v51[0]) = 5;
  v6 = (char *)this + 16;
  v52 = 0;
  v7 = *((_QWORD *)this + 2);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 16LL) + 209LL) )
  {
    if ( (a2->Flags.Value & 0x10) != 0 )
    {
      WdLogSingleEntry2(2LL, v7, -1073741637LL);
      v44 = *(struct VIDSCH_HW_QUEUE ***)v6;
      WdLogGlobalForLineNumber = 366;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DXGCONTEXT 0x%I64x: User mode queues not yet supported on para-v, returning 0x%I64x",
        (__int64)v44,
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
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
  v11 = DXGGLOBAL::GetGlobal();
  v12 = *(_QWORD *)(*(_QWORD *)v6 + 16LL);
  v13 = (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v6 + 388LL));
  v14 = *(_QWORD *)(v12 + 16);
  v53 = (char *)this + 48;
  v15 = (int)DXGGLOBAL::CreateSyncObject(
               v11,
               v14,
               v12,
               v13,
               v51,
               3,
               0,
               0LL,
               0LL,
               (char *)this + 48,
               &v52,
               0LL,
               0LL,
               0LL);
  v16 = *(_QWORD *)v6;
  if ( (int)v15 < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(v16 + 16), v15);
    WdLogGlobalForLineNumber = 409;
LABEL_21:
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47);
    return (unsigned int)v15;
  }
  LODWORD(v15) = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL) + 209LL) )
  {
    v17 = v52;
    *(_DWORD *)(*(_QWORD *)v53 + 44LL) = a2->hHwQueueProgressFence;
    a2->hHwQueueProgressFence = v17;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v18 + 248));
    v19 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *(_DWORD *)(v18 + 296) )
    {
      v20 = *(_QWORD *)(v18 + 280);
      if ( (((unsigned int)v17 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
        && (*(_DWORD *)(v20 + 16 * v19 + 8) & 0x1F) != 0 )
      {
        v21 = 2 * ((v17 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v20 + 8 * v21 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)(v18 + 280) + 8 * v21 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v18 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v18 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_21;
  }
  memset(v50, 0, sizeof(v50));
  v22 = *((_QWORD *)this + 10);
  HIDWORD(v50[0]) |= 0x80u;
  v50[1] = v22;
  LODWORD(v50[0]) = 5;
  v23 = DXGGLOBAL::GetGlobal();
  LOBYTE(v45) = 0;
  SyncObject = DXGGLOBAL::CreateSyncObject(
                 v23,
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 16LL) + 16LL),
                 *(_QWORD *)(*(_QWORD *)v6 + 16LL),
                 (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v6 + 388LL)),
                 v50,
                 16,
                 v45,
                 0LL,
                 0LL,
                 (char *)this + 72,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
  LODWORD(v15) = SyncObject;
  if ( SyncObject < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)(*(_QWORD *)v9 + 16LL), SyncObject);
    WdLogGlobalForLineNumber = 447;
    goto LABEL_21;
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47);
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v25 + 248));
  v26 = v52;
  v27 = (v52 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v27 < *(_DWORD *)(v25 + 296) )
  {
    v28 = *(_QWORD *)(v25 + 280);
    if ( ((v52 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
      && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0x1F) != 0 )
    {
      v29 = 2 * (((unsigned __int64)v52 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v28 + 16 * (((unsigned __int64)v52 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v25 + 280) + 8 * v29 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v25 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v25 + 248, 0LL);
  KeLeaveCriticalRegion();
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v31 = *((_QWORD *)this + 2);
  Value = a2->Flags.Value;
  *(_QWORD *)(&v46.hHwQueueProgressFence + 1) = 0LL;
  HIDWORD(v46.HwQueueProgressFenceCPUVirtualAddress) = 0;
  v46.hHwQueue = this;
  v46.Flags.Value = Value;
  v46.pPrivateDriverData = a3;
  v46.PrivateDriverDataSize = PrivateDriverDataSize;
  v46.hHwQueueProgressFence = v26;
  if ( (*(_DWORD *)(v31 + 392) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v31 + 16) + 1914LL) )
    v46.Flags.Value = Value | 1;
  CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(*(DXGSYNCOBJECT **)(*((_QWORD *)this + 6) + 32LL));
  v34 = *((_QWORD *)this + 2);
  v35 = (void *)*((_QWORD *)CurrentValueStorage + 1);
  v46.HwQueueProgressFenceGPUVirtualAddress = v51[3];
  *((_QWORD *)this + 8) = v51[3];
  *((_QWORD *)this + 7) = v35;
  LODWORD(CurrentValueStorage) = a2->Flags.0;
  v46.HwQueueProgressFenceCPUVirtualAddress = v35;
  if ( ((unsigned __int8)CurrentValueStorage & 8) == 0 )
  {
    v36 = ADAPTER_RENDER::DdiCreateHwQueue(
            *(ADAPTER_RENDER **)(*(_QWORD *)(v34 + 16) + 16LL),
            *(void **)(v34 + 184),
            &v46);
    v37 = v36;
    if ( v36 < 0 )
    {
      if ( v36 != -1073741822 )
      {
        WdLogSingleEntry1(2LL, v36);
        WdLogGlobalForLineNumber = 497;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"DdiCreateHwQueue() failed with status 0x%I64d",
          v37,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v37;
      }
      *((_QWORD *)this + 4) = 153LL;
    }
    else
    {
      *((_QWORD *)this + 4) = v46.hHwQueue;
    }
LABEL_40:
    v38 = (__int64 *)((char *)this + 40);
    HwQueue = VIDSCH_EXPORT::VidSchCreateHwQueue(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
                this,
                *(struct VIDSCH_HW_CONTEXT **)(*((_QWORD *)this + 2) + 280LL),
                a2,
                (struct VIDSCH_HW_QUEUE **)this + 5);
    LODWORD(v37) = HwQueue;
    if ( HwQueue >= 0 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v48,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL) + 32LL),
        0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
      VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 6));
      VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
        *v38,
        (__int64)VidSchSyncObject,
        1u);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v49,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 32LL),
        0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
      v41 = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*((DXGDEVICESYNCOBJECT **)this + 9));
      VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL),
        *v38,
        (__int64)v41,
        2u);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
      v42 = DXGPROCESS::AllocHandleSafe(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
              (__int64)this,
              0xFu);
      *((_DWORD *)this + 6) = v42;
      if ( v42 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventCreateHwQueue,
            v43,
            *((_QWORD *)this + 2),
            v42,
            this);
      }
      else
      {
        LODWORD(v37) = -1073741801;
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 564;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), HwQueue);
      WdLogGlobalForLineNumber = 529;
    }
    return (unsigned int)v37;
  }
  if ( (*(_DWORD *)(v34 + 392) & 0x20) == 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 505;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The HW queue must specify NoKmdAccess flag",
      505LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  result = CheckNoKmdAccessPrivateData(v46.PrivateDriverDataSize, (_DWORD *)v46.pPrivateDriverData, 0xFF000005);
  if ( (int)result >= 0 )
    goto LABEL_40;
  return result;
}
