/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1402FC85C
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1402FCB9C (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1402FC710 (-VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJEC.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rbp
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // edx
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v14; // rdx
  int v15; // eax
  int IsSyncObjectSignaled; // ebx
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int8 v20; // [rsp+90h] [rbp+8h] BYREF

  v5 = a1;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 985;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pContext->GetRenderCore()->IsCoreResourceSharedOwner()",
      985LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
  v8 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)a2 + 74) )
  {
    v9 = *((_QWORD *)a2 + 35);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60)
      && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) == 0 )
    {
      v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
      if ( v10 )
      {
        if ( v10 == 8 )
        {
          v11 = *(_DWORD **)(v9 + 16LL * v8);
          goto LABEL_9;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v11 = 0LL;
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)a2 + 66);
  ExReleasePushLockSharedEx((char *)a2 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 )
  {
    if ( v11[101] == 3 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v11 + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      v12 = *((_QWORD *)a3 + 2);
      if ( *((_BYTE *)a3 + 434) )
      {
        v18 = *(_QWORD *)(v12 + 16);
        v20 = 0;
        IsSyncObjectSignaled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v18 + 16) + 4664LL),
                                 a2,
                                 (struct DXGSYNCOBJECT *)v11,
                                 v5,
                                 &v20);
        if ( IsSyncObjectSignaled < 0 )
          goto LABEL_14;
        v15 = v20 == 1;
      }
      else
      {
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             (DXGSYNCOBJECT *)v11,
                             *(struct ADAPTER_RENDER **)(v12 + 16));
        v15 = (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL)
                                                                              + 880LL))(VidSchSyncObject);
      }
      *a4 = v15;
      IsSyncObjectSignaled = 0;
LABEL_14:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
      return (unsigned int)IsSyncObjectSignaled;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1002;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Call only valid for fence objects",
      1002LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, v5);
    WdLogGlobalForLineNumber = 993;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid sync object, process 0x%I64x, handle 0x%I64x",
      (__int64)a2,
      v5,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
