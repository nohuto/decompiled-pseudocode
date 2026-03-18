/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401DC314 (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1401DE3B0 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401E03D4 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F670 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14039D9C0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkOpenResourceFromNtHandleInternal @ 0x14039EE80 (DxgkOpenResourceFromNtHandleInternal.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F0310 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1400314E0 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x140034A5C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x140043B6C (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x14018061C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x140180884 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1401886BC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1402F9478 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x14039FF78 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  int v28; // ebx
  unsigned int *v29; // r14
  PERESOURCE *Global; // rax
  _QWORD *v31; // r15
  unsigned int v32; // eax
  unsigned int v33; // edx
  int v34; // r15d
  __int64 v35; // rax
  int v36; // r8d
  struct DXGGLOBAL *v37; // rax
  struct DXGPROCESS *v38; // rax
  struct DXGDEVICE *v40; // r14
  DXGDEVICESYNCOBJECT *v41; // rax
  unsigned int *v42; // r13
  DXGDEVICESYNCOBJECT *v43; // rax
  DXGDEVICESYNCOBJECT *v44; // r14
  struct DXGSYNCOBJECT *v45; // r15
  struct DXGGLOBAL *v46; // rax
  struct DXGPROCESS *v47; // rax
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-30h]
  _BYTE v49[16]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v50[24]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGADAPTERSYNCOBJECT *v51; // [rsp+C0h] [rbp+40h] BYREF
  struct DXGDEVICE *v52; // [rsp+D0h] [rbp+50h]

  v52 = a3;
  v15 = a15;
  v16 = 0;
  v17 = a14;
  if ( a15 && a14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2622;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"NativeFenceOpenedAsMonitoredFence == FALSE || MonitoredFenceOpenedAsNativeFence == FALSE",
      2622LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v49, (DXGSYNCOBJECT *)((char *)this + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v49);
  v51 = 0LL;
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(this, a2, &v51, a12, a13, v17, v15);
  if ( DxgAdapterSyncObject < 0 && a2 )
    goto LABEL_59;
  v22 = v51;
  if ( a9 )
    *a9 = v51;
  v23 = a11.0;
  if ( ((*((_BYTE *)this + 408) ^ *(_BYTE *)&a11.0) & 0x80u) == 0 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v49);
    if ( v22 && *((_BYTE *)v22 + 25) )
    {
      WdLogSingleEntry2(4LL, this, -1073741823LL);
      WdLogGlobalForLineNumber = 2664;
LABEL_13:
      DxgAdapterSyncObject = -1073741823;
      goto LABEL_59;
    }
    v27 = *((_DWORD *)this + 103);
    if ( (v27 & 0x10) != 0 && (*((_DWORD *)Current + 102) & 0x180) == 0 && (v27 & 0x20) == 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741790LL);
      WdLogGlobalForLineNumber = 2682;
      goto LABEL_13;
    }
    v28 = (*((_DWORD *)this + 102) ^ *(_DWORD *)&v23) & 0x400 ^ *(_DWORD *)&v23;
    if ( (unsigned int)(*((_DWORD *)this + 101) - 5) > 2 )
    {
      v29 = a5;
      if ( a5 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2809;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockSharedOwner()",
            2809LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v50, Current);
        v31 = (_QWORD *)((char *)Current + 280);
        v32 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 8LL, 0LL, 0);
        *v29 = v32;
        v33 = v32;
        if ( !v32 )
        {
          v34 = -1073741801;
          WdLogSingleEntry2(6LL, this, -1073741801LL);
          WdLogGlobalForLineNumber = 2823;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"pSyncObject 0x%I64x: Fail to allocate per process handle, returning 0x%I64x",
            (__int64)this,
            -1073741801LL,
            0LL,
            0LL,
            0LL);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
LABEL_58:
          DxgAdapterSyncObject = v34;
          goto LABEL_59;
        }
        v35 = (v32 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v35 < *((_DWORD *)Current + 74) )
        {
          v36 = *(_DWORD *)(*v31 + 16 * v35 + 8);
          if ( ((v33 >> 25) & 0x60) == (*(_BYTE *)(*v31 + 16 * v35 + 8) & 0x60)
            && (v36 & 0x2000) == 0
            && (v36 & 0x1F) != 0 )
          {
            *(_DWORD *)(*v31 + 16 * (((unsigned __int64)v33 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
        if ( (*((_DWORD *)this + 103) & 2) != 0 )
        {
          if ( *((_DWORD *)this + 6) )
          {
            v37 = DXGGLOBAL::GetGlobal();
            DxgAdapterSyncObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                                     *((DXG_GUEST_GLOBAL_VMBUS **)v37 + 206),
                                     Current,
                                     0LL,
                                     *v29,
                                     this,
                                     0LL,
                                     0,
                                     (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v28);
            if ( DxgAdapterSyncObject < 0 )
            {
              DXGPROCESS::FreeResourceHandleNoRefSafe(Current, *v29);
              *v29 = 0;
              goto LABEL_59;
            }
          }
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      v38 = DXGPROCESS::GetCurrent();
      if ( v29 )
        v16 = *v29;
      WdLogSingleEntry3(4LL, this, v16, v38);
      WdLogGlobalForLineNumber = 2877;
LABEL_36:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
      return 0LL;
    }
    v40 = v52;
    if ( !v52 || !a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2696;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDevice != NULL && pRenderCore != NULL",
        2696LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v41 = (DXGDEVICESYNCOBJECT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(144LL, v24, v25, v26);
    if ( v41 && (v42 = a5, v43 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(v41, v40, a10, a5 != 0LL), (v44 = v43) != 0LL) )
    {
      v34 = DXGDEVICESYNCOBJECT::Initialize(v43, this, (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v28, a8);
      if ( v34 >= 0 )
      {
        v45 = (struct DXGSYNCOBJECT *)*((_QWORD *)v44 + 4);
        if ( (*((_DWORD *)v45 + 103) & 2) == 0
          || *((_DWORD *)this + 6) <= 1u
          || (v46 = DXGGLOBAL::GetGlobal(),
              v34 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)v46 + 206),
                      Current,
                      v52,
                      0,
                      v45,
                      v44,
                      a8,
                      (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)v28),
              v34 >= 0) )
        {
          if ( v42 )
            *v42 = *((_DWORD *)v44 + 10);
          if ( a6 )
            *a6 = (void *)*((_QWORD *)v44 + 7);
          if ( a7 )
            *a7 = *((_QWORD *)v44 + 6);
          v47 = DXGPROCESS::GetCurrent();
          WdLogSingleEntry3(4LL, this, *((unsigned int *)v44 + 10), v47);
          WdLogGlobalForLineNumber = 2777;
          if ( a4 )
            *a4 = v44;
          goto LABEL_36;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v44);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v44);
    }
    else
    {
      v34 = -1073741801;
      WdLogSingleEntry2(6LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 2717;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
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
    goto LABEL_58;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2653;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"When opening a synchronization object, the NoGPUAccess flag specified at open time must match the flag specified at creation time.",
    2653LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DxgAdapterSyncObject = -1073741811;
LABEL_59:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v49);
  return (unsigned int)DxgAdapterSyncObject;
}
