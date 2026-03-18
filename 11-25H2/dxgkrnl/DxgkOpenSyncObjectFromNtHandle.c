/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1401DE3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x14033D52C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  const void *v4; // rdx
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGGLOBAL *Global; // rax
  PVOID v14; // r12
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  void *v20; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned __int64 v22; // rdi
  unsigned int v23; // ecx
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rdi
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-78h] BYREF
  HANDLE Handle[2]; // [rsp+88h] [rbp-70h] BYREF
  _BYTE v29[16]; // [rsp+98h] [rbp-60h] BYREF
  int v30; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-48h]
  char v32; // [rsp+B8h] [rbp-40h]
  unsigned int Src; // [rsp+108h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v34; // [rsp+110h] [rbp+18h] BYREF
  PVOID Object; // [rsp+118h] [rbp+20h] BYREF

  v30 = -1;
  v31 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2086);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2086);
  HandleInformation = 0LL;
  *(_OWORD *)Handle = 0LL;
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v4, 0x10uLL);
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v6 = v5;
  v7 = -1073741788;
  if ( v5 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 1528;
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v30);
    }
    return (unsigned int)v7;
  }
  if ( v5 >= 0 )
  {
    Src = 0;
    v34 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v29);
    v14 = Object;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 404LL) - 5) <= 1 )
    {
      v7 = -1073741811;
    }
    else
    {
      v7 = DXGSYNCOBJECT::Open(
             *(DXGSYNCOBJECT **)Object,
             0LL,
             0LL,
             0LL,
             &Src,
             0LL,
             0LL,
             0,
             &v34,
             0,
             DXGDEVICE::DestroyFlagsDefault,
             0LL,
             0LL,
             0,
             0);
      if ( v7 >= 0 )
      {
        if ( bTracingEnabled )
        {
          if ( v34 ? *((_QWORD *)v34 + 4) : 0LL )
          {
            v18 = v34 ? *((_QWORD *)v34 + 4) : 0LL;
            v17 = *(_QWORD *)(v18 + 16);
          }
          else
          {
            v17 = 0LL;
          }
          v19 = v34 ? *((_QWORD *)v34 + 4) : 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0pppp_EtwWriteTransfer(v17, &EventOpenSyncObject, v15, v19, Src, 0LL, v17);
        }
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29);
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
                262146,
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
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)Current + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_46;
      }
    }
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29);
LABEL_46:
    ObfDereferenceObject(v14);
    goto LABEL_9;
  }
  WdLogSingleEntry2(3LL, Handle[0], v5);
  WdLogGlobalForLineNumber = 1535;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v30);
  return v6;
}
