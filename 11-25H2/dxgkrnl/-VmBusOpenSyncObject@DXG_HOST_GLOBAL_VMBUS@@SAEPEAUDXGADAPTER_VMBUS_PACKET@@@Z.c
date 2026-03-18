/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F670
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403482BC (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14039D9C0 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned int v7; // edx
  int v8; // r8d
  int EntryType; // ebx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  const wchar_t *v14; // r9
  __int64 v15; // rax
  DXGSHAREDVMOBJECT *v16; // rsi
  DXGSYNCOBJECT *v17; // rbx
  struct DXGGLOBAL *Global; // rax
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v20; // rbx
  struct DXGPROCESS *v21; // rdi
  char *v22; // r14
  unsigned int v23; // ecx
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rbx
  unsigned int v27; // edx
  struct DXGPROCESS *v28; // r8
  struct DXGDEVICE *v29; // rbx
  __int64 v30; // r9
  struct DXGGLOBAL *v31; // rax
  __int64 v32; // r14
  unsigned int v33; // ebx
  unsigned int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // r14
  unsigned int v38; // ebx
  unsigned int v39; // eax
  __int64 v40; // r8
  int v41; // ecx
  DXGSYNCOBJECT *v42; // rbx
  struct ADAPTER_RENDER *v43; // rdx
  struct DXGPROCESS *v44; // rax
  unsigned __int64 v45; // rbx
  struct DXGPROCESS *v46; // rdi
  char *v47; // rsi
  unsigned int v48; // ecx
  __int64 v49; // r8
  int v50; // edx
  __int64 v51; // rbx
  struct DXGGLOBAL *v52; // rax
  DXGGLOBAL *v53; // rax
  struct DXGPROCESS *v54; // rax
  unsigned __int64 v55; // rbx
  struct DXGPROCESS *v56; // rdi
  char *v57; // rsi
  unsigned int v58; // ecx
  __int64 v59; // r8
  int v60; // edx
  __int64 v61; // rbx
  __int64 v63; // [rsp+20h] [rbp-E0h]
  __int64 v64; // [rsp+20h] [rbp-E0h]
  __int64 v65; // [rsp+20h] [rbp-E0h]
  __int64 v66; // [rsp+20h] [rbp-E0h]
  __int64 v67; // [rsp+20h] [rbp-E0h]
  unsigned int v68; // [rsp+38h] [rbp-C8h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v69; // [rsp+50h] [rbp-B0h]
  _BYTE v70[8]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGDEVICE *v71; // [rsp+88h] [rbp-78h] BYREF
  void *v72; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v73[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v74[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGADAPTERSYNCOBJECT *v75; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGADAPTERSYNCOBJECT *v76; // [rsp+C0h] [rbp-40h] BYREF
  struct DXGSYNCOBJECT *v77; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v78[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v79[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v80[24]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v81[4]; // [rsp+108h] [rbp+8h] BYREF
  void *v82; // [rsp+118h] [rbp+18h]
  _BYTE v83[160]; // [rsp+120h] [rbp+20h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    v4 = *((_QWORD *)a1 + 12);
    *(_OWORD *)v81 = 0LL;
    v82 = 0LL;
    v5 = *(_DWORD *)(v2 + 28);
    v6 = v4 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 248));
    v7 = (v5 >> 6) & 0xFFFFFF;
    if ( v7 < *(_DWORD *)(v4 + 296)
      && (v8 = *(_DWORD *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8),
          ((v5 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v4 + 280) + 16LL * v7 + 8) & 0x60))
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v4 + 280);
    }
    else
    {
      EntryType = 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 16));
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( EntryType == 13 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v80,
        *((struct DXGPROCESS **)a1 + 12));
      v10 = *((_QWORD *)a1 + 12);
      v11 = (v3[7] >> 6) & 0xFFFFFF;
      if ( v11 < *(_DWORD *)(v10 + 296) )
      {
        v12 = *(_QWORD *)(v10 + 280);
        if ( ((v3[7] >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
          && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
        {
          v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
          if ( v13 )
          {
            if ( v13 == 13 )
            {
              v16 = *(DXGSHAREDVMOBJECT **)(v12 + 16LL * v11);
              if ( v16 )
              {
                if ( *(_DWORD *)v16 != 4 )
                {
                  WdLogSingleEntry1(2LL, *(int *)v16);
                  v15 = *(int *)v16;
                  v14 = L"Invalid shared vm object type: 0x%I64x";
                  WdLogGlobalForLineNumber = 7742;
                  goto LABEL_17;
                }
                v17 = *(DXGSYNCOBJECT **)(*((_QWORD *)v16 + 1) + 32LL);
                if ( v17 )
                {
                  DXGSHAREDVMOBJECT::AddReference(v16);
                  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
                  Global = DXGGLOBAL::GetGlobal();
                  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v78, Global, 0);
                  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v78);
                  v81[1] = DXGSYNCOBJECT::Open(
                             v17,
                             0LL,
                             0LL,
                             0LL,
                             v81,
                             0LL,
                             0LL,
                             0,
                             0LL,
                             0,
                             DXGDEVICE::DestroyFlagsDefault,
                             0LL,
                             0LL,
                             0,
                             0);
                  if ( (v81[1] & 0x80000000) == 0 )
                  {
                    Current = DXGPROCESS::GetCurrent();
                    v20 = v81[0];
                    v21 = Current;
                    v22 = (char *)Current + 248;
                    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
                    v23 = ((unsigned int)v20 >> 6) & 0xFFFFFF;
                    if ( v23 < *((_DWORD *)v21 + 74) )
                    {
                      v24 = *((_QWORD *)v21 + 35);
                      v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
                      if ( (((unsigned int)v20 >> 25) & 0x60) == (v25 & 0x60) && (v25 & 0x1F) != 0 )
                      {
                        v26 = 2 * ((v20 >> 6) & 0xFFFFFF);
                        if ( (*(_DWORD *)(v24 + 8 * v26 + 8) & 0x2000) == 0 )
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
                        *(_DWORD *)(*((_QWORD *)v21 + 35) + 8 * v26 + 8) &= ~0x2000u;
                      }
                    }
                    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                    *((_QWORD *)v22 + 1) = 0LL;
                    ExReleasePushLockExclusiveEx(v22, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  else
                  {
                    WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
                    v63 = (unsigned int)v3[7];
                    WdLogGlobalForLineNumber = 7780;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"Failed to open sync object (0x%I64x), returning 0x%I64x",
                      v63,
                      -1073741811LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v78);
                  DXGSHAREDVMOBJECT::ReleaseReference(v16);
                  goto LABEL_77;
                }
                WdLogSingleEntry1(2LL, (unsigned int)v3[7]);
                v14 = L"Cannot open keyed mutex from a shared resource which doesn't include a keyed mutex: 0x%I64x";
                WdLogGlobalForLineNumber = 7754;
LABEL_16:
                v15 = (unsigned int)v3[7];
LABEL_17:
                DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, v15, 0LL, 0LL, 0LL, 0LL);
                v81[1] = -1073741811;
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
LABEL_77:
                VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v81, 0x18u);
                LOBYTE(v2) = 1;
                return v2;
              }
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
      }
      WdLogSingleEntry1(2LL, (unsigned int)v3[7]);
      v14 = L"Invalid shared vm object handle: 0x%I64x";
      WdLogGlobalForLineNumber = 7736;
      goto LABEL_16;
    }
    v27 = v3[6];
    if ( !v27 )
    {
      v52 = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v79, v52, 0);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v79);
      v77 = 0LL;
      v76 = 0LL;
      v53 = DXGGLOBAL::GetGlobal();
      v81[1] = DXGGLOBAL::OpenSyncObject(v53, v3[7], &v77, v81, &v76);
      if ( (v81[1] & 0x80000000) == 0 )
      {
        v54 = DXGPROCESS::GetCurrent();
        v55 = v81[0];
        v56 = v54;
        v57 = (char *)v54 + 248;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v54 + 248));
        v58 = ((unsigned int)v55 >> 6) & 0xFFFFFF;
        if ( v58 < *((_DWORD *)v56 + 74) )
        {
          v59 = *((_QWORD *)v56 + 35);
          v60 = *(_DWORD *)(v59 + 16LL * v58 + 8);
          if ( (((unsigned int)v55 >> 25) & 0x60) == (v60 & 0x60) && (v60 & 0x1F) != 0 )
          {
            v61 = 2 * ((v55 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v59 + 8 * v61 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(*((_QWORD *)v56 + 35) + 8 * v61 + 8) &= ~0x2000u;
          }
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)v57 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v57, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
        v67 = (unsigned int)v3[7];
        WdLogGlobalForLineNumber = 7857;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to open sync object (0x%I64x), returning 0x%I64x",
          v67,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v79);
      goto LABEL_77;
    }
    v28 = (struct DXGPROCESS *)*((_QWORD *)a1 + 11);
    v71 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v70, v27, v28, &v71);
    v29 = v71;
    if ( !v71 )
    {
      WdLogSingleEntry2(2LL, (unsigned int)v3[6], -1073741811LL);
      v64 = (unsigned int)v3[6];
      WdLogGlobalForLineNumber = 7793;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v64,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v81[1] = -1073741811;
LABEL_36:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v70);
      goto LABEL_77;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v74, v71);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, (__int64)v29, 0, v30, 0);
    v81[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83, 0LL);
    if ( (v81[1] & 0x80000000) != 0 )
    {
LABEL_38:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v83);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v74);
      goto LABEL_36;
    }
    v31 = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v73, v31, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v73);
    v32 = *((_QWORD *)a1 + 12);
    v33 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v32 + 248));
    v34 = (v33 >> 6) & 0xFFFFFF;
    if ( v34 < *(_DWORD *)(v32 + 296)
      && (v35 = *(_QWORD *)(v32 + 280), ((v33 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16LL * v34 + 8) & 0x60))
      && (*(_DWORD *)(v35 + 16LL * v34 + 8) & 0x2000) == 0
      && (*(_DWORD *)(v35 + 16LL * v34 + 8) & 0x1F) == 0xB )
    {
      v36 = *(_QWORD *)(v35 + 16LL * v34);
    }
    else
    {
      v36 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v32 + 264));
    ExReleasePushLockSharedEx(v32 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v36 )
    {
      v42 = *(DXGSYNCOBJECT **)(v36 + 32);
      goto LABEL_58;
    }
    v37 = *((_QWORD *)a1 + 12);
    v38 = v3[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v37 + 248));
    v39 = (v38 >> 6) & 0xFFFFFF;
    if ( v39 < *(_DWORD *)(v37 + 296) )
    {
      v40 = *(_QWORD *)(v37 + 280);
      if ( ((v38 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16LL * v39 + 8) & 0x60)
        && (*(_DWORD *)(v40 + 16LL * v39 + 8) & 0x2000) == 0 )
      {
        v41 = *(_DWORD *)(v40 + 16LL * v39 + 8) & 0x1F;
        if ( v41 )
        {
          if ( v41 == 8 )
          {
            v42 = *(DXGSYNCOBJECT **)(v40 + 16LL * v39);
LABEL_53:
            _InterlockedDecrement((volatile signed __int32 *)(v37 + 264));
            ExReleasePushLockSharedEx(v37 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( !v42 )
            {
              WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
              v65 = (unsigned int)v3[7];
              WdLogGlobalForLineNumber = 7815;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Invalid sync object (0x%I64x) specified, returning 0x%I64x",
                v65,
                -1073741811LL,
                0LL,
                0LL,
                0LL);
              v81[1] = -1073741811;
LABEL_55:
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v73);
              goto LABEL_38;
            }
LABEL_58:
            v43 = (struct ADAPTER_RENDER *)*((_QWORD *)v71 + 2);
            v69.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v3[9];
            v68 = v3[8];
            v75 = 0LL;
            v72 = 0LL;
            v81[1] = DXGSYNCOBJECT::Open(
                       v42,
                       v43,
                       v71,
                       0LL,
                       v81,
                       &v72,
                       (unsigned __int64 *)&v81[2],
                       v68,
                       &v75,
                       1,
                       v69,
                       0LL,
                       0LL,
                       0,
                       0);
            if ( (v81[1] & 0x80000000) == 0 )
            {
              v44 = DXGPROCESS::GetCurrent();
              v45 = v81[0];
              v46 = v44;
              v47 = (char *)v44 + 248;
              DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v44 + 248));
              v48 = ((unsigned int)v45 >> 6) & 0xFFFFFF;
              if ( v48 < *((_DWORD *)v46 + 74) )
              {
                v49 = *((_QWORD *)v46 + 35);
                v50 = *(_DWORD *)(v49 + 16LL * v48 + 8);
                if ( (((unsigned int)v45 >> 25) & 0x60) == (v50 & 0x60) && (v50 & 0x1F) != 0 )
                {
                  v51 = 2 * ((v45 >> 6) & 0xFFFFFF);
                  if ( (*(_DWORD *)(v49 + 8 * v51 + 8) & 0x2000) == 0 )
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
                  *(_DWORD *)(*((_QWORD *)v46 + 35) + 8 * v51 + 8) &= ~0x2000u;
                }
              }
              Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
              *((_QWORD *)v47 + 1) = 0LL;
              ExReleasePushLockExclusiveEx(v47, 0LL);
              KeLeaveCriticalRegion();
              v82 = v72;
            }
            else
            {
              WdLogSingleEntry2(2LL, (unsigned int)v3[7], -1073741811LL);
              v66 = (unsigned int)v3[7];
              WdLogGlobalForLineNumber = 7840;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Failed to open sync object (0x%I64x), returning 0x%I64x",
                v66,
                -1073741811LL,
                0LL,
                0LL,
                0LL);
            }
            goto LABEL_55;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v42 = 0LL;
    goto LABEL_53;
  }
  return v2;
}
