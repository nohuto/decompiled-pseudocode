/*
 * XREFs of DxgkOpenResourceFromNtHandleInternal @ 0x14039EE80
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F200 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x14039EE60 (DxgkOpenResourceFromNtHandle.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x14035B3A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1403A1D0C (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandleInternal(ULONG64 a1, __int64 a2, __int64 a3)
{
  char CurrentThreadPreviousMode; // r13
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  const void *v7; // rdx
  BOOL v8; // r12d
  __int64 v9; // r13
  volatile signed __int32 *v10; // r15
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // edx
  DXGKEYEDMUTEX **v15; // r14
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
  struct DXGPROCESS *v28; // r12
  DXGPUSHLOCK *v29; // r13
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rsi
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rsi
  PERESOURCE *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int Src; // [rsp+80h] [rbp-F8h] BYREF
  int v41; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v42; // [rsp+90h] [rbp-E8h]
  char v43; // [rsp+98h] [rbp-E0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-D8h] BYREF
  PVOID v45; // [rsp+A8h] [rbp-D0h]
  char v46[8]; // [rsp+B0h] [rbp-C8h] BYREF
  char v47; // [rsp+B8h] [rbp-C0h]
  struct DXGPROCESS *v48; // [rsp+C0h] [rbp-B8h]
  _DWORD *v49; // [rsp+C8h] [rbp-B0h]
  HANDLE Handle[21]; // [rsp+D0h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+190h] [rbp+18h] BYREF
  unsigned int v53; // [rsp+198h] [rbp+20h] BYREF

  v41 = -1;
  v42 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2076);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2076);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  LOBYTE(Object) = CurrentThreadPreviousMode;
  HandleInformation = 0LL;
  memset(Handle, 0, 0x68uLL);
  Current = DXGPROCESS::GetCurrent(v5);
  v48 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11790;
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v41);
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
  v49 = (_DWORD *)((char *)Current + 408);
  if ( (*((_DWORD *)Current + 102) & 0x10) != 0 )
  {
    v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 4);
    v10 = (volatile signed __int32 *)((char *)DXGGLOBAL::GetGlobal() + 40);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v10, 0LL);
    _InterlockedAdd(v10 + 4, 1u);
    v11 = a2;
    v12 = ((unsigned int)a2 >> 6) & 0xFFFFFF;
    if ( v12 < *(_DWORD *)(v9 + 16) )
    {
      v13 = *(_DWORD *)(*(_QWORD *)v9 + 16LL * v12 + 8);
      if ( (unsigned int)a2 >> 30 == ((v13 >> 5) & 3) && (v13 & 0x2000) == 0 )
      {
        v14 = v13 & 0x1F;
        if ( v14 )
        {
          if ( v14 == 4 )
          {
            v15 = *(DXGKEYEDMUTEX ***)(*(_QWORD *)v9 + 16LL * v12);
            goto LABEL_20;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v11 = a2;
        }
      }
    }
    v15 = 0LL;
LABEL_20:
    v45 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 11829;
      _InterlockedDecrement(v10 + 4);
      ExReleasePushLockSharedEx(v10, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_22;
    }
    _InterlockedDecrement(v10 + 4);
    ExReleasePushLockSharedEx(v10, 0LL);
    KeLeaveCriticalRegion();
    CurrentThreadPreviousMode = (char)Object;
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
  v15 = (DXGKEYEDMUTEX **)Object;
  v45 = Object;
  if ( v19 != -1073741788 )
  {
    if ( v19 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[1], v19);
      WdLogGlobalForLineNumber = 11866;
LABEL_73:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v41);
      return (unsigned int)v20;
    }
    v8 = (HandleInformation.GrantedAccess & 1) == 0;
LABEL_36:
    Src = 0;
    v53 = 0;
    v23 = v15[3];
    if ( !v23 || (v20 = DXGKEYEDMUTEX::Open(v23, &Src, (char *)Handle[11], (unsigned int)Handle[12], 1), v20 >= 0) )
    {
      if ( v15[4] )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v46, Global, 0);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v46);
        v20 = DXGSYNCOBJECT::Open(
                v15[4],
                0LL,
                0LL,
                0LL,
                &v53,
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
          if ( v47 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
          goto LABEL_66;
        }
        if ( v47 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46);
      }
      if ( CurrentThreadPreviousMode == 1 )
      {
        v25 = (void *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v25 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v25, &Src, 4uLL);
        v26 = (void *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v26 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v26, &v53, 4uLL);
      }
      else
      {
        *(_DWORD *)(a1 + 84) = Src;
        *(_DWORD *)(a1 + 100) = v53;
      }
      v20 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, 0LL, (__int64)v15, v8);
      if ( v20 >= 0 )
      {
        v27 = v53;
        v28 = v48;
        v29 = (struct DXGPROCESS *)((char *)v48 + 248);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v48 + 248));
        v30 = ((unsigned int)v27 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v30 < *((_DWORD *)v28 + 74) )
        {
          v31 = *((_QWORD *)v28 + 35);
          if ( (((unsigned int)v27 >> 25) & 0x60) == (*(_BYTE *)(v31 + 16 * v30 + 8) & 0x60)
            && (*(_DWORD *)(v31 + 16 * v30 + 8) & 0x1F) != 0 )
          {
            v32 = 2 * ((v27 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v31 + 8 * v32 + 8) & 0x2000) == 0 )
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
            *(_DWORD *)(*((_QWORD *)v28 + 35) + 8 * v32 + 8) &= ~0x2000u;
          }
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)v29 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v29, 0LL);
        KeLeaveCriticalRegion();
        v33 = Src;
        if ( Src )
        {
          DXGPUSHLOCK::AcquireExclusive(v29);
          v34 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v34 < *((_DWORD *)v28 + 74) )
          {
            v35 = *((_QWORD *)v28 + 35);
            if ( (((unsigned int)v33 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60)
              && (*(_DWORD *)(v35 + 16 * v34 + 8) & 0x1F) != 0 )
            {
              v36 = 2 * ((v33 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v35 + 8 * v36 + 8) & 0x2000) == 0 )
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
              *(_DWORD *)(*((_QWORD *)v28 + 35) + 8 * v36 + 8) &= ~0x2000u;
            }
          }
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *((_QWORD *)v29 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v29, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_66:
    if ( v20 < 0 )
    {
      if ( Src )
        DXGKEYEDMUTEX::DestroyLocal(Src);
      if ( v53 )
      {
        v37 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v37, v15[4], v53);
      }
    }
    if ( (*v49 & 0x10) == 0 )
      ObfDereferenceObject(v15);
    goto LABEL_73;
  }
  WdLogSingleEntry2(3LL, Handle[1], -1073741788LL);
  WdLogGlobalForLineNumber = 11859;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v41);
  return 3221225508LL;
}
