/*
 * XREFs of DxgkOpenResourceFromNtHandleInternal @ 0x140395150
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225660 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x140395130 (DxgkOpenResourceFromNtHandle.c)
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
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B601C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1403506F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x140394B7C (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandleInternal(ULONG64 a1, __int64 a2, __int64 a3)
{
  char CurrentThreadPreviousMode; // r14
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r12
  const void *v7; // rdx
  BOOL v8; // r13d
  __int64 v9; // r14
  volatile signed __int32 *v10; // r15
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // edx
  PVOID v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  NTSTATUS v19; // eax
  int v20; // r15d
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGKEYEDMUTEX *v23; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v25; // rcx
  void *v26; // rcx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rsi
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rsi
  PERESOURCE *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int Src; // [rsp+80h] [rbp-F8h] BYREF
  int v39; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v40; // [rsp+90h] [rbp-E8h]
  char v41; // [rsp+98h] [rbp-E0h]
  _QWORD *v42; // [rsp+A0h] [rbp-D8h]
  PVOID Object; // [rsp+A8h] [rbp-D0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v45[8]; // [rsp+B8h] [rbp-C0h] BYREF
  char v46; // [rsp+C0h] [rbp-B8h]
  _DWORD *v47; // [rsp+C8h] [rbp-B0h]
  HANDLE Handle[21]; // [rsp+D0h] [rbp-A8h] BYREF
  char v50; // [rsp+190h] [rbp+18h]
  unsigned int v51; // [rsp+198h] [rbp+20h] BYREF

  v39 = -1;
  v40 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2076);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2076);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v50 = CurrentThreadPreviousMode;
  HandleInformation = 0LL;
  memset(Handle, 0, 0x68uLL);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11856;
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v39);
    }
    return 3221225485LL;
  }
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Handle, v7, 0x68uLL);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a1;
    *(_OWORD *)&Handle[2] = *(_OWORD *)(a1 + 16);
    *(_OWORD *)&Handle[4] = *(_OWORD *)(a1 + 32);
    *(_OWORD *)&Handle[6] = *(_OWORD *)(a1 + 48);
    *(_OWORD *)&Handle[8] = *(_OWORD *)(a1 + 64);
    *(_OWORD *)&Handle[10] = *(_OWORD *)(a1 + 80);
    Handle[12] = *(HANDLE *)(a1 + 96);
  }
  v8 = 0;
  v47 = (_DWORD *)((char *)Current + 408);
  if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
  {
    v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    v42 = (_QWORD *)v9;
    v10 = (volatile signed __int32 *)((char *)DXGGLOBAL::GetGlobal() + 40);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v10, 0LL);
    _InterlockedAdd(v10 + 4, 1u);
    v11 = a2;
    v12 = ((unsigned int)a2 >> 6) & 0xFFFFFF;
    if ( v12 < *(_DWORD *)(v9 + 16) )
    {
      v13 = *(_DWORD *)(*v42 + 16LL * v12 + 8);
      if ( (unsigned int)a2 >> 30 == ((v13 >> 5) & 3) && (v13 & 0x2000) == 0 )
      {
        v14 = v13 & 0x1F;
        if ( v14 )
        {
          if ( v14 == 4 )
          {
            v15 = *(PVOID *)(*v42 + 16LL * v12);
            goto LABEL_20;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v11 = a2;
        }
      }
    }
    v15 = 0LL;
LABEL_20:
    v42 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 11895;
      _InterlockedDecrement(v10 + 4);
      ExReleasePushLockSharedEx(v10, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_22;
    }
    _InterlockedDecrement(v10 + 4);
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_36;
  }
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(
          Handle[1],
          0x20000u,
          g_pDxgkSharedAllocationObjectType,
          CurrentThreadPreviousMode == 1,
          &Object,
          &HandleInformation);
  v20 = v19;
  v15 = Object;
  v42 = Object;
  if ( v19 != -1073741788 )
  {
    if ( v19 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[1], v19);
      WdLogGlobalForLineNumber = 11932;
LABEL_73:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v39);
      return (unsigned int)v20;
    }
    v8 = (HandleInformation.GrantedAccess & 1) == 0;
LABEL_36:
    Src = 0;
    v51 = 0;
    v23 = (DXGKEYEDMUTEX *)*((_QWORD *)v15 + 3);
    if ( !v23 || (v20 = DXGKEYEDMUTEX::Open(v23, &Src, (char *)Handle[11], (unsigned int)Handle[12], 1), v20 >= 0) )
    {
      if ( *((_QWORD *)v15 + 4) )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v45, Global, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v45);
        v20 = DXGSYNCOBJECT::Open(
                *((DXGSYNCOBJECT **)v15 + 4),
                0LL,
                0LL,
                0LL,
                &v51,
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
        if ( v20 < 0 )
        {
          if ( v46 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
          goto LABEL_66;
        }
        if ( v46 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v45);
      }
      if ( v50 == 1 )
      {
        v25 = (void *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v25 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v25, &Src, 4uLL);
        v26 = (void *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v26 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v26, &v51, 4uLL);
      }
      else
      {
        *(_DWORD *)(a1 + 84) = Src;
        *(_DWORD *)(a1 + 100) = v51;
      }
      v20 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, 0LL, (__int64)v15, v8);
      if ( v20 >= 0 )
      {
        v27 = v51;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
        v28 = ((unsigned int)v27 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v28 < *((_DWORD *)Current + 74) )
        {
          v29 = *((_QWORD *)Current + 35);
          if ( (((unsigned int)v27 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
            && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
          {
            v30 = 2 * ((v27 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v29 + 8 * v30 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v30 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
        KeLeaveCriticalRegion();
        v31 = Src;
        if ( Src )
        {
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
          v32 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v32 < *((_DWORD *)Current + 74) )
          {
            v33 = *((_QWORD *)Current + 35);
            if ( (((unsigned int)v31 >> 25) & 0x60) == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60)
              && (*(_DWORD *)(v33 + 16 * v32 + 8) & 0x1F) != 0 )
            {
              v34 = 2 * ((v31 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v33 + 8 * v34 + 8) & 0x2000) == 0 )
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
              *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v34 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)Current + 32) = 0LL;
          ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_66:
    if ( v20 < 0 )
    {
      if ( Src )
        DXGKEYEDMUTEX::DestroyLocal(Src);
      if ( v51 )
      {
        v35 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v35, *((struct DXGSYNCOBJECT **)v15 + 4), v51, 0);
      }
    }
    if ( (*v47 & 0x10) == 0 )
      ObfDereferenceObject(v15);
    goto LABEL_73;
  }
  WdLogSingleEntry2(3LL, Handle[1], -1073741788LL);
  WdLogGlobalForLineNumber = 11925;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v39);
  return 3221225508LL;
}
