/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021E210
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059588 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // r14
  struct ADAPTER_RENDER **v5; // r12
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r13
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-D8h]
  int v16; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v18[16]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v19[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v20[144]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v19,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4375;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4375LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v4 )
  {
    v5 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 10) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, (struct DXGADAPTER *const)v5, 0LL);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
    if ( v16 < 0 )
    {
LABEL_19:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
      v2 = 1;
      goto LABEL_20;
    }
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v18, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v18);
    v7 = *((_QWORD *)a1 + 11);
    v8 = *(_DWORD *)(v4 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 248));
    v9 = (v8 >> 6) & 0xFFFFFF;
    if ( v9 < *(_DWORD *)(v7 + 296) )
    {
      v10 = *(_QWORD *)(v7 + 280);
      if ( ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
        && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
      {
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
        if ( v11 )
        {
          if ( v11 == 8 )
          {
            v12 = *(_QWORD *)(v10 + 16LL * v9);
            goto LABEL_12;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v12 = 0LL;
LABEL_12:
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 264));
    ExReleasePushLockSharedEx(v7 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v12 + 32), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v12, v5[391]);
      if ( !(*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL)
                                                                            + 880LL))(VidSchSyncObject) )
        v16 = -1071775484;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
    }
    else
    {
      WdLogSingleEntry2(2LL, v7, *(unsigned int *)(v4 + 24));
      v15 = *(unsigned int *)(v4 + 24);
      WdLogGlobalForLineNumber = 4394;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
        v7,
        v15,
        0LL,
        0LL,
        0LL);
      v16 = -1073741811;
    }
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v18);
    goto LABEL_19;
  }
LABEL_20:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  return v2;
}
