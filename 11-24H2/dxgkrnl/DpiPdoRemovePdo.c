/*
 * XREFs of DpiPdoRemovePdo @ 0x14042BBC4
 * Callers:
 *     DpiPdoRemovePdoObjects @ 0x1402558C8 (DpiPdoRemovePdoObjects.c)
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x14042B7C0 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14007C80C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiFdoRemovePdoFromPdoList @ 0x140245288 (DpiFdoRemovePdoFromPdoList.c)
 *     ?DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z @ 0x14025A214 (-DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026EFAC (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DpiPdoRemovePdo(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 *v9; // r10
  __int64 *v10; // rdi
  __int64 *v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 *v18; // rax
  void *v19; // rcx
  bool v20; // zf
  NTSTATUS v21; // eax
  __int64 v22; // rsi
  __int64 **v23; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v9 = *(__int64 **)(v5 + 3784);
  v10 = v9;
  v11 = (__int64 *)*v9;
  if ( (__int64 *)*v9 == v9 )
  {
LABEL_5:
    v6 = -1073741811;
    WdLogSingleEntry1(3LL, *(unsigned int *)(a2 + 24));
    WdLogGlobalForLineNumber = 6656;
    return v6;
  }
  v12 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v13 = *((unsigned int *)v10 + 126);
    if ( (_DWORD)v13 == v12 )
      break;
    v10 = v11;
    v11 = (__int64 *)*v11;
    if ( v11 == v9 )
      goto LABEL_5;
  }
  if ( !a3 || *((_DWORD *)v10 + 124) != 1 || *((_BYTE *)v10 + 511) )
  {
LABEL_16:
    if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    {
      DpiFdoRemovePdoFromPdoList(v5, v10);
    }
    else
    {
      v17 = *v10;
      if ( *(__int64 **)(*v10 + 8) != v10 )
        goto LABEL_30;
      v18 = (__int64 *)v10[1];
      if ( (__int64 *)*v18 != v10 )
        goto LABEL_30;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      --*(_DWORD *)(v5 + 3800);
      if ( *((_DWORD *)v10 + 124) == 1 )
        --*(_DWORD *)(v5 + 3804);
    }
    *((_BYTE *)v10 + 508) = 0;
    KeWaitForSingleObject((PVOID)(v5 + 3544), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 48) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v5 + 3544), 0);
    v19 = (void *)v10[116];
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      v10[116] = 0LL;
    }
    WdLogSingleEntry1(4LL, v10[3]);
    v20 = *((_BYTE *)v10 + 509) == 0;
    WdLogGlobalForLineNumber = 6749;
    if ( v20 )
    {
      v21 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, File, 1u, 0x20u);
      v6 = v21;
      if ( v21 >= 0 )
      {
        IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v10 + 2, (PVOID)a2, 0x20u);
        IoQueueWorkItem((PIO_WORKITEM)v10[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      else
      {
        WdLogSingleEntry3(0LL, 275LL, 21LL, v21);
        WdLogGlobalForLineNumber = 6765;
      }
      return v6;
    }
    v22 = v5 + 3808;
    v23 = *(__int64 ***)(v22 + 8);
    if ( *v23 == (__int64 *)v22 )
    {
      *v10 = v22;
      v10[1] = (__int64)v23;
      *v23 = v10;
      *(_QWORD *)(v22 + 8) = v10;
      return v6;
    }
LABEL_30:
    __fastfail(3u);
  }
  v15 = MonitorRemovePhysicalMonitor(*(char **)(v5 + 4032), v13, 0LL, a4, a5);
  if ( v15 != 128 )
  {
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 6690;
    }
    v16 = DmmResetOrginalVideoOutputTechnologies(*(DXGADAPTER **)(v5 + 4032), *((_DWORD *)v10 + 126));
    v6 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      WdLogGlobalForLineNumber = 6700;
    }
    goto LABEL_16;
  }
  return 128LL;
}
