/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1401E3580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403ABF4C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGGLOBAL *Global; // rax
  PVOID v13; // r12
  __int64 v14; // r8
  int v15; // r15d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  void *v20; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned __int64 v22; // rdi
  unsigned int v23; // ecx
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-78h] BYREF
  HANDLE Handle[2]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v31[16]; // [rsp+98h] [rbp-60h] BYREF
  int v32; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-48h]
  char v34; // [rsp+B8h] [rbp-40h]
  unsigned int Src; // [rsp+108h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v36; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2086);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2086);
  HandleInformation = 0LL;
  *(_OWORD *)Handle = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v4, 0x10uLL);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v6 = v5;
  if ( v5 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 1526;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v32);
    }
    return 3221225508LL;
  }
  if ( v5 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v5);
    WdLogGlobalForLineNumber = 1533;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v32);
    return v6;
  }
  Src = 0;
  v36 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v31);
  v13 = Object;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 404LL) - 5) <= 1 )
  {
    v15 = -1073741811;
  }
  else
  {
    v15 = DXGSYNCOBJECT::Open(
            *(DXGSYNCOBJECT **)Object,
            0LL,
            0LL,
            0LL,
            &Src,
            0LL,
            0LL,
            0,
            &v36,
            0,
            DXGDEVICE::DestroyFlagsDefault,
            0LL,
            0LL,
            0,
            0);
    if ( v15 >= 0 )
    {
      if ( bTracingEnabled )
      {
        if ( v36 ? *((_QWORD *)v36 + 4) : 0LL )
        {
          v18 = v36 ? *((_QWORD *)v36 + 4) : 0LL;
          v17 = *(_QWORD *)(v18 + 16);
        }
        else
        {
          v17 = 0LL;
        }
        v19 = v36 ? *((_QWORD *)v36 + 4) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pppp_EtwWriteTransfer(v17, &EventOpenSyncObject, v14, v19, Src, 0LL, v17);
      }
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31);
      v20 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v20 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v20, &Src, 4uLL);
      Current = DXGPROCESS::GetCurrent();
      v22 = Src;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
      v23 = ((unsigned int)v22 >> 6) & 0xFFFFFF;
      if ( v23 < *((_DWORD *)Current + 74) )
      {
        v24 = *((_QWORD *)Current + 35);
        v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
        if ( (((unsigned int)v22 >> 25) & 0x60) == (v25 & 0x60) && (v25 & 0x1F) != 0 )
        {
          v26 = 2 * ((v22 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v24 + 8 * v26 + 8) & 0x2000) == 0 )
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
          *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v26 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_45;
    }
  }
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v31);
LABEL_45:
  ObfDereferenceObject(v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v32);
  return (unsigned int)v15;
}
