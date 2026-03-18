/*
 * XREFs of ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1403AA68C
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403A9E70 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddQueryInterface(struct _DXGKCDD_INTERFACE *a1, unsigned int *a2)
{
  __int64 v3; // rcx
  _WORD *v5; // rdi
  struct DXGADAPTER *v6; // rdi
  unsigned int v7; // edx
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  DXGADAPTER *v14; // rdi
  _QWORD *v16; // rax
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  DXGADAPTER *v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(unsigned __int16 *)a1;
  v5 = (_WORD *)((char *)a1 + 2);
  if ( (_WORD)v3 == 528 && *v5 == 9 )
  {
    v6 = (struct DXGADAPTER *)*((_QWORD *)a1 + 1);
    if ( v6 )
    {
      v7 = *((_DWORD *)a1 + 4);
      v19 = 0LL;
      v20 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v6, v7, 0LL, 0LL, &v19, &v20, 0);
      v13 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
        v19 = 0LL;
        v16[3] = v6;
        v14 = 0LL;
        v16[4] = *((unsigned int *)a1 + 4);
        v16[5] = v13;
        WdLogGlobalForLineNumber = 4488;
      }
      else
      {
        v14 = v19;
      }
      if ( v14 && !*((_QWORD *)v14 + 390) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4494;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
          4494LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_QWORD *)a1 + 3) = W32kStub_DxgkEngReleaseWin32kLocks;
      *((_QWORD *)a1 + 4) = W32kStub_DxgkEngReleaseWin32kLocks;
      *((_QWORD *)a1 + 6) = DxgkCddCreate;
      *((_QWORD *)a1 + 7) = DxgkCddDestroy;
      *((_QWORD *)a1 + 8) = DxgkCddEnable;
      *((_QWORD *)a1 + 9) = DxgkCddEnableLite;
      *((_QWORD *)a1 + 10) = DxgkCddDisable;
      *((_QWORD *)a1 + 13) = DxgkCddGetDisplayModeList;
      *((_QWORD *)a1 + 11) = DxgkCddLock;
      *((_QWORD *)a1 + 12) = DxgkCddUnlock;
      *((_QWORD *)a1 + 14) = DxgkCddPresent;
      *((_QWORD *)a1 + 46) = DxgkCddPresentOnScreen;
      *((_QWORD *)a1 + 15) = DxgkCddSetPalette;
      *((_QWORD *)a1 + 17) = DxgkCddSetPointerPosition;
      *((_QWORD *)a1 + 16) = DxgkCddSetPointerShape;
      *((_QWORD *)a1 + 18) = DxgkCddSetOrigin;
      *((_QWORD *)a1 + 19) = DxgkCddWaitForVerticalBlankEvent;
      *((_QWORD *)a1 + 20) = DxgkCddTerminateThread;
      *((_QWORD *)a1 + 21) = &DxgkCddCreateAllocation;
      *((_QWORD *)a1 + 22) = DxgkCddDestroyAllocation;
      *((_QWORD *)a1 + 23) = DxgkCddSyncGPUAccess;
      *((_QWORD *)a1 + 24) = DxgkCddQueryResourceInfo;
      *((_QWORD *)a1 + 25) = DxgkCddQueryResourceInfoFromNtHandle;
      *((_QWORD *)a1 + 26) = DxgkCddOpenResource;
      *((_QWORD *)a1 + 27) = DxgkCddOpenResourceFromNtHandle;
      *((_QWORD *)a1 + 28) = DxgkCddLogEvent;
      *((_QWORD *)a1 + 30) = DxgkCddGdiCommand;
      *((_QWORD *)a1 + 29) = DxgkCddGetCurrentDxgProcess;
      *((_QWORD *)a1 + 31) = DxgkCddSubmitPresentHistory;
      *((_QWORD *)a1 + 32) = DxgkCddPushWorkerThreadOfOwner;
      *((_QWORD *)a1 + 33) = DxgkCddPopWorkerThreadOfOwner;
      *((_QWORD *)a1 + 34) = DxgkCddGetDriverCaps;
      *((_QWORD *)a1 + 35) = DxgkCddVerifyCddDevMode;
      *((_QWORD *)a1 + 36) = DxgkWriteDiagEntry;
      *((_QWORD *)a1 + 37) = DxgkCddAdapterReference;
      *((_QWORD *)a1 + 38) = DxgkCddAdapterDereference;
      *((_QWORD *)a1 + 5) = DxgkCddEtwLoggerEnabled;
      *((_QWORD *)a1 + 39) = DxgkCddCreateSynchronizationObject;
      *((_QWORD *)a1 + 40) = DxgkCddDestroySynchronizationObject;
      *((_QWORD *)a1 + 41) = DxgkCddSignalSynchronizationObject;
      *((_QWORD *)a1 + 42) = DxgkCddWaitForSynchronizationObject;
      *((_QWORD *)a1 + 43) = DxgkCddOpenSynchronizationObject;
      *((_QWORD *)a1 + 44) = DxgkCddNotifyGdiRendering;
      *((_QWORD *)a1 + 45) = DxgkCddIssueSyncObjectOpForDevice;
      *((_QWORD *)a1 + 47) = DxgkCddSubscribeWnfStateChange;
      *((_QWORD *)a1 + 48) = DxgkCddUnsubscribeWnfStateChange;
      *((_QWORD *)a1 + 49) = DxgkCddPrepareDripsBlockerProcessName;
      *((_QWORD *)a1 + 50) = DxgkCddMakeResident;
      *((_QWORD *)a1 + 51) = DxgkCddEvict;
      *((_QWORD *)a1 + 52) = DxgkCddWaitForSynchronizationObjectFromCpu;
      *((_QWORD *)a1 + 53) = DxgkCddSignalSynchronizationObjectFromGpu;
      *((_QWORD *)a1 + 54) = DxgkCddSubmitSignalSyncObjectsToHwQueue;
      *((_QWORD *)a1 + 55) = DxgkCddCreatePagingQueue;
      *((_QWORD *)a1 + 56) = DxgkCddDestroyPagingQueue;
      *((_QWORD *)a1 + 57) = DxgkPresentVirtualFrameBuffer;
      *((_QWORD *)a1 + 58) = &DxgkGetBootAnimationRelayState;
      *((_QWORD *)a1 + 59) = DxgkSetBootAnimationRelayState;
      *((_QWORD *)a1 + 60) = DxgkShutdownBootGraphics;
      *((_QWORD *)a1 + 61) = DxgkGetVirtualFrameBufferAccessCount;
      *((_QWORD *)a1 + 62) = DxgkIsBootPrimarySource;
      *((_QWORD *)a1 + 63) = DxgkRequestAsyncDisplaySwitchCallout;
      *((_QWORD *)a1 + 64) = DxgCreateLiveDumpWithWdLogs;
      *((_QWORD *)a1 + 65) = DxgkCddIsSourceOwnedByDWM;
      *a2 = 528;
      if ( v14 )
        DXGADAPTER::ReleaseReference(v14);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 4461;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"CDD does NOT pass a valid adapter handle in DXGCDD_INTERFACE 0x%I64x.",
        (__int64)a1,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
  }
  else
  {
    WdLogSingleEntry5(2LL, -1073741811LL, v3, 528LL, (unsigned __int16)*v5, 9LL);
    v18 = (unsigned __int16)*v5;
    v17 = *(unsigned __int16 *)a1;
    WdLogGlobalForLineNumber = 4452;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid DXGCDD_INTERFACE Mismatch 0x%I64x 0x%I64x version 0x%I64x 0x%I64x",
      -1073741811LL,
      v17,
      528LL,
      v18,
      9LL);
    return 3221225485LL;
  }
}
