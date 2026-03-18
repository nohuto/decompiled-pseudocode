/*
 * XREFs of ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x140396428
 * Callers:
 *     ?VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224EC0 (-VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x140396280 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004BC20 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402E6A98 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1403BA934 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::NotifyProcessThaw(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+50h] [rbp-10h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2096;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 2096);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2096);
  *((_BYTE *)this + 572) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  v4 = (_QWORD *)((char *)this + 320);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 40);
  *(_QWORD *)&v14 = (char *)this + 320;
  while ( 1 )
  {
    *((_QWORD *)&v14 + 1) = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v14);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessThaw(Current);
    v5 = (_QWORD *)*v5;
  }
  *(_QWORD *)&v15 = (char *)this + 320;
  v14 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    *((_QWORD *)&v15 + 1) = v4;
    v11 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v15);
    if ( !v11 )
      break;
    v8 = *(_QWORD *)(v11 + 16);
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 != v7 )
    {
      if ( !*(_BYTE *)(v9 + 209) && *(_QWORD *)(v9 + 3128) && *(_QWORD *)(v9 + 3232) )
        DXGADAPTER::UpdateLatencyTolerances(*(DXGADAPTER **)(v8 + 16));
      v7 = v9;
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(
        Global,
        *(_QWORD *)(v9 + 232),
        *((struct _EPROCESS **)this + 7),
        0);
    }
  }
  v15 = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v16);
  }
}
