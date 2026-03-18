/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E15EC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1401E3580 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401E55D8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225AD0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1402FA1CC (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403940A8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x140395150 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403EA4F0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x140031400 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003498C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043DA0 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140076CD4 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183008 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x14018A9CC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1401F5EEC (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1403965DC (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1403DF520 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        bool a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11,
        struct DXGPAGINGQUEUE *a12,
        unsigned __int8 *a13,
        bool a14,
        bool a15)
{
  bool v15; // r14
  unsigned int v16; // edi
  bool v17; // bl
  int DxgAdapterSyncObject; // ebx
  struct DXGADAPTERSYNCOBJECT *v22; // r14
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v23; // ebx
  int v24; // ecx
  int v25; // ebx
  int v26; // eax
  int v27; // r14d
  unsigned int *v28; // r14
  PERESOURCE *Global; // rax
  _QWORD *v30; // r15
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // r15d
  __int64 v34; // rax
  int v35; // r8d
  struct DXGGLOBAL *v36; // rax
  struct DXGPROCESS *v37; // rax
  struct DXGDEVICE *v39; // r14
  DXGDEVICESYNCOBJECT *v40; // rax
  unsigned int *v41; // r13
  DXGDEVICESYNCOBJECT *v42; // rax
  DXGDEVICESYNCOBJECT *v43; // r14
  struct DXGSYNCOBJECT *v44; // r15
  struct DXGGLOBAL *v45; // rax
  struct DXGPROCESS *v46; // rax
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-30h]
  _BYTE v48[16]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v49[24]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v50; // [rsp+C0h] [rbp+40h] BYREF
  struct DXGDEVICE *v51; // [rsp+D0h] [rbp+50h]

  v51 = a3;
  v15 = a15;
  v16 = 0;
  v17 = a14;
  if ( a15 && a14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2583;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"NativeFenceOpenedAsMonitoredFence == FALSE || MonitoredFenceOpenedAsNativeFence == FALSE",
      2583LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v48, (DXGSYNCOBJECT *)((char *)this + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
  v50 = 0LL;
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(this, a2, &v50, a12, a13, v17, v15);
  if ( DxgAdapterSyncObject < 0 && a2 )
    goto LABEL_61;
  v22 = v50;
  if ( a9 )
    *a9 = v50;
  v23 = a11.0;
  if ( ((*((_BYTE *)this + 408) ^ *(_BYTE *)&a11.0) & 0x80u) == 0 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v48);
    if ( v22 && *((_BYTE *)v22 + 25) )
    {
      WdLogSingleEntry2(4LL, this, -1073741823LL);
      WdLogGlobalForLineNumber = 2625;
LABEL_13:
      DxgAdapterSyncObject = -1073741823;
      goto LABEL_61;
    }
    v24 = *((_DWORD *)this + 103);
    if ( (v24 & 0x10) != 0 && (*((_DWORD *)Current + 102) & 0x180) == 0 && (v24 & 0x20) == 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741790LL);
      WdLogGlobalForLineNumber = 2643;
      goto LABEL_13;
    }
    v25 = (*((_DWORD *)this + 102) ^ *(_DWORD *)&v23) & 0x400 ^ *(_DWORD *)&v23;
    if ( (unsigned int)(*((_DWORD *)this + 101) - 5) > 2 )
    {
      v26 = DXGSYNCOBJECT::AddReference(this);
      v27 = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry2(3LL, this, v26);
        WdLogGlobalForLineNumber = 2775;
        DxgAdapterSyncObject = v27;
        goto LABEL_61;
      }
      v28 = a5;
      if ( a5 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2784;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
            2784LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v49, Current);
        v30 = (_QWORD *)((char *)Current + 280);
        v31 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 8LL, 0LL, 0);
        *v28 = v31;
        v32 = v31;
        if ( !v31 )
        {
          v33 = -1073741801;
          WdLogSingleEntry2(6LL, this, -1073741801LL);
          WdLogGlobalForLineNumber = 2798;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
            (__int64)this,
            -1073741801LL,
            0LL,
            0LL,
            0LL);
          _InterlockedDecrement((volatile signed __int32 *)this + 6);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
LABEL_60:
          DxgAdapterSyncObject = v33;
          goto LABEL_61;
        }
        v34 = (v31 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 < *((_DWORD *)Current + 74) )
        {
          v35 = *(_DWORD *)(*v30 + 16 * v34 + 8);
          if ( ((v32 >> 25) & 0x60) == (*(_BYTE *)(*v30 + 16 * v34 + 8) & 0x60)
            && (v35 & 0x2000) == 0
            && (v35 & 0x1F) != 0 )
          {
            *(_DWORD *)(*v30 + 16 * (((unsigned __int64)v32 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
        if ( (*((_DWORD *)this + 103) & 2) != 0 && *((_DWORD *)this + 6) > 1u )
        {
          v36 = DXGGLOBAL::GetGlobal();
          DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                   *((DXG_GUEST_GLOBAL_VMBUS **)v36 + 210),
                                   Current,
                                   0LL,
                                   *v28,
                                   this,
                                   0LL,
                                   0,
                                   (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v25);
          if ( DxgAdapterSyncObject < 0 )
          {
            DXGPROCESS::FreeHandleSafe(Current, *v28);
            *v28 = 0;
            _InterlockedDecrement((volatile signed __int32 *)this + 6);
            goto LABEL_61;
          }
        }
      }
      v37 = DXGPROCESS::GetCurrent();
      if ( v28 )
        v16 = *v28;
      WdLogSingleEntry3(4LL, this, v16, v37);
      WdLogGlobalForLineNumber = 2859;
LABEL_38:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
      return 0LL;
    }
    v39 = v51;
    if ( !v51 || !a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2657;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDevice != NULL && pRenderCore != NULL",
        2657LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v40 = (DXGDEVICESYNCOBJECT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(144LL);
    if ( v40 && (v41 = a5, v42 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(v40, v39, a10, a5 != 0LL), (v43 = v42) != 0LL) )
    {
      v33 = DXGDEVICESYNCOBJECT::Initialize(v42, this, (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v25, a8);
      if ( v33 >= 0 )
      {
        v44 = (struct DXGSYNCOBJECT *)*((_QWORD *)v43 + 4);
        if ( (*((_DWORD *)v44 + 103) & 2) == 0
          || *((_DWORD *)this + 6) <= 1u
          || (v45 = DXGGLOBAL::GetGlobal(),
              v33 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)v45 + 210),
                      Current,
                      v51,
                      0,
                      v44,
                      v43,
                      a8,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v25),
              v33 >= 0) )
        {
          if ( v41 )
            *v41 = *((_DWORD *)v43 + 10);
          if ( a6 )
            *a6 = (void *)*((_QWORD *)v43 + 7);
          if ( a7 )
            *a7 = *((_QWORD *)v43 + 6);
          v46 = DXGPROCESS::GetCurrent();
          WdLogSingleEntry3(4LL, this, *((unsigned int *)v43 + 10), v46);
          WdLogGlobalForLineNumber = 2738;
          if ( a4 )
            *a4 = v43;
          goto LABEL_38;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v43);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v43);
    }
    else
    {
      v33 = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 2678;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"pSyncObject 0x%I64x: Failed to allocate device sync object, returning 0x%I64x",
        (__int64)this,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a4 )
      *a4 = 0LL;
    goto LABEL_60;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2614;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"When opening a synchronization object, the NoGPUAccess flag specified at open time must match the flag specified at creation time.",
    2614LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DxgAdapterSyncObject = -1073741811;
LABEL_61:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
  return (unsigned int)DxgAdapterSyncObject;
}
