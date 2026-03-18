/*
 * XREFs of ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x140395A78
 * Callers:
 *     DxgkOpenSynchronizationObject @ 0x140395A40 (DxgkOpenSynchronizationObject.c)
 *     ?DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z @ 0x140395A60 (-DxgkCddOpenSynchronizationObject@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1403940A8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DxgkOpenSynchronizationObjectInternal(
        struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *v10; // rdx
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v12; // rax
  __int64 v13; // r8
  int v14; // r14d
  void *p_hSyncObject; // rcx
  PERESOURCE *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGSYNCOBJECT *v27; // [rsp+50h] [rbp-58h] BYREF
  struct DXGADAPTERSYNCOBJECT *v28[2]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v29[16]; // [rsp+68h] [rbp-40h] BYREF
  int v30; // [rsp+78h] [rbp-30h] BYREF
  __int64 v31; // [rsp+80h] [rbp-28h]
  char v32; // [rsp+88h] [rbp-20h]
  unsigned int Src; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int hSharedHandle; // [rsp+C8h] [rbp+20h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2050);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2050);
  Current = DXGPROCESS::GetCurrent(v5);
  v28[1] = Current;
  if ( Current )
  {
    hSharedHandle = 0;
    if ( a2 )
    {
      v10 = a1;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        v10 = (struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
      RtlCopyVolatileMemory(&hSharedHandle, v10, 4uLL);
    }
    else
    {
      hSharedHandle = a1->hSharedHandle;
    }
    v27 = 0LL;
    v28[0] = 0LL;
    Src = 0;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v29);
    v12 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    v14 = DXGGLOBAL::OpenSyncObject(v12, hSharedHandle, &v27, &Src, v28);
    if ( v29[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v29);
    if ( v14 < 0 )
    {
      if ( v27 )
      {
        v16 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v16, v27, Src, 0);
      }
    }
    else
    {
      if ( a2 )
      {
        p_hSyncObject = &a1->hSyncObject;
        if ( (unsigned __int64)&a1->hSyncObject >= MmUserProbeAddress )
          p_hSyncObject = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_hSyncObject, &Src, 4uLL);
      }
      else
      {
        a1->hSyncObject = Src;
      }
      if ( bTracingEnabled )
      {
        if ( v28[0] ? *((_QWORD *)v28[0] + 4) : 0LL )
        {
          v19 = v28[0] ? *((_QWORD *)v28[0] + 4) : 0LL;
          v18 = *(_QWORD *)(v19 + 16);
        }
        else
        {
          v18 = 0LL;
        }
        v20 = v28[0] ? *((_QWORD *)v28[0] + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pppp_EtwWriteTransfer(v18, &EventOpenSyncObject, v13, v20, Src, 0LL, v18);
      }
      v21 = Src;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v22 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v22 < *((_DWORD *)Current + 74) )
      {
        v23 = *((_QWORD *)Current + 35);
        if ( (((unsigned int)v21 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
          && (*(_DWORD *)(v23 + 16 * v22 + 8) & 0x1F) != 0 )
        {
          v24 = 2 * ((v21 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v23 + 8 * v24 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v24 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v30);
    return (unsigned int)v14;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 874;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v30);
    }
    return 3221225485LL;
  }
}
