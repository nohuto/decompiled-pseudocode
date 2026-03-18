/*
 * XREFs of ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x140387360
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x14002FAE8 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x14003962C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 */

void __fastcall DxgkpProcessVSyncPhaseThread(struct DXGADAPTER *const *a1, __int64 a2, __int64 a3)
{
  struct DXGADAPTER *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r8
  DXGADAPTER *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  _DWORD *v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+28h] [rbp-79h]
  __int64 v16; // [rsp+30h] [rbp-71h]
  int v17; // [rsp+40h] [rbp-61h] BYREF
  __int64 v18; // [rsp+48h] [rbp-59h]
  char v19; // [rsp+50h] [rbp-51h]
  _BYTE v20[8]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-41h] BYREF
  DXGADAPTER *v22; // [rsp+70h] [rbp-31h]
  _BYTE v23[16]; // [rsp+A0h] [rbp-1h] BYREF
  DXGADAPTER *v24; // [rsp+B0h] [rbp+Fh]
  char v25; // [rsp+B8h] [rbp+17h]
  __int64 v26; // [rsp+C0h] [rbp+1Fh]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2209;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2209);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2209);
  v4 = *a1;
  v5 = *((unsigned int *)a1 + 2);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, *a1, 0LL);
  if ( v25 != (_BYTE)v6 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v23, v6 & v15, v6 & v16);
    WdLogGlobalForLineNumber = 7603;
  }
  v7 = v24;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v24 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v24 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventBlockThread, v9, 72);
      KeWaitForSingleObject((char *)v24 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v24, 0LL);
    v7 = v24;
  }
  v26 = 0LL;
  v25 = 1;
  if ( *((_DWORD *)v7 + 50) != 1 )
    goto LABEL_15;
  if ( v22 != v24 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v21, 0LL);
    if ( *((_DWORD *)v22 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v21);
LABEL_15:
      COREACCESS::Release((COREACCESS *)v23);
      goto LABEL_24;
    }
  }
  v20[1] = 1;
  DXGPUSHLOCK::AcquireExclusive((struct DXGADAPTER *)((char *)v4 + 4352));
  v11 = (_DWORD *)*((_QWORD *)v4 + 538);
  if ( (*((_DWORD *)v4 + 744) & 0x10) == 0 )
  {
    if ( *v11 == 1 )
      goto LABEL_21;
LABEL_29:
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)v4 + 545) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v4 + 4352, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_24;
  }
  if ( v11[v5] != 1 )
    goto LABEL_29;
LABEL_21:
  v12 = v5;
  if ( (*((_DWORD *)v4 + 744) & 0x10) == 0 )
    v12 = -3;
  LOBYTE(v10) = 1;
  DXGADAPTER::DdiControlInterrupt2(v4, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, v10, v12);
LABEL_24:
  DXGADAPTER::ReleaseReferenceNoTracking(v4);
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v4 + 543) + 4 * v5), 0);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v17);
  }
}
