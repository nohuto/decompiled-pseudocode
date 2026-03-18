/*
 * XREFs of DpiPdoRemovePdo @ 0x1403C99AC
 * Callers:
 *     DpiPdoRemovePdoObjects @ 0x14024EA98 (DpiPdoRemovePdoObjects.c)
 *     DpiPdoAddPdo @ 0x1403C8AA0 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z @ 0x1402533DC (-DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026804C (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DpiPdoRemovePdo(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // rbp
  unsigned int v7; // esi
  __int64 *i; // rdi
  __int64 v9; // rdx
  int v10; // eax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  void *v15; // rcx
  bool v16; // zf
  NTSTATUS v17; // eax
  __int64 v18; // rbp
  __int64 **v19; // rax

  v5 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  for ( i = *(__int64 **)(v5 + 3784); ; i = (__int64 *)*i )
  {
    if ( *i == *(_QWORD *)(v5 + 3784) )
    {
      v7 = -1073741811;
      WdLogSingleEntry1(3LL, *(unsigned int *)(a2 + 24));
      WdLogGlobalForLineNumber = 6491;
      return v7;
    }
    v9 = *((unsigned int *)i + 126);
    if ( (_DWORD)v9 == *(_DWORD *)(a2 + 24) )
      break;
  }
  if ( a3 && *((_DWORD *)i + 124) == 1 && !*((_BYTE *)i + 511) )
  {
    v10 = MonitorRemovePhysicalMonitor(*(char **)(v5 + 4032), v9, 0LL, a4, a5);
    if ( v10 == 128 )
      return 128LL;
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 6525;
    }
    v12 = DmmResetOrginalVideoOutputTechnologies(*(DXGADAPTER **)(v5 + 4032), *((_DWORD *)i + 126));
    v7 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 6535;
    }
  }
  v13 = (__int64 *)*i;
  if ( *(__int64 **)(*i + 8) != i )
    goto LABEL_26;
  v14 = (__int64 **)i[1];
  if ( *v14 != i )
    goto LABEL_26;
  *v14 = v13;
  v13[1] = (__int64)v14;
  --*(_DWORD *)(v5 + 3800);
  if ( *((_DWORD *)i + 124) == 1 )
    --*(_DWORD *)(v5 + 3804);
  *((_BYTE *)i + 508) = 0;
  KeWaitForSingleObject((PVOID)(v5 + 3544), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v5 + 3544), 0);
  v15 = (void *)i[116];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    i[116] = 0LL;
  }
  WdLogSingleEntry1(4LL, i[3]);
  v16 = *((_BYTE *)i + 509) == 0;
  WdLogGlobalForLineNumber = 6577;
  if ( v16 )
  {
    v17 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)i + 2, (PVOID)a2, File, 1u, 0x20u);
    v7 = v17;
    if ( v17 >= 0 )
    {
      IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)i + 2, (PVOID)a2, 0x20u);
      IoQueueWorkItem((PIO_WORKITEM)i[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
    }
    else
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v17);
      WdLogGlobalForLineNumber = 6593;
    }
    return v7;
  }
  v18 = v5 + 3808;
  v19 = *(__int64 ***)(v18 + 8);
  if ( *v19 != (__int64 *)v18 )
LABEL_26:
    __fastfail(3u);
  *i = v18;
  i[1] = (__int64)v19;
  *v19 = i;
  *(_QWORD *)(v18 + 8) = i;
  return v7;
}
