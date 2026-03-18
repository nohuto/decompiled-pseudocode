/*
 * XREFs of ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140057454
 * Callers:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x1400573EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x14008BF24 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireRemoveLock@CInterfaceCallContext@@AEAA_NXZ @ 0x140058550 (-AcquireRemoveLock@CInterfaceCallContext@@AEAA_NXZ.c)
 *     Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline @ 0x14008C0D4 (Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1401893B8 (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x140189DE8 (DxgkReleaseAdapterStopResetSync.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiDisableD3Requests @ 0x140336D30 (DpiDisableD3Requests.c)
 *     DxgkAcquireAdapterReference @ 0x1403A1F70 (DxgkAcquireAdapterReference.c)
 */

void __fastcall CInterfaceCallContext::CommonConstructor(
        CInterfaceCallContext *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  char v20; // cl
  int v21; // eax
  __int64 v22; // rcx

  *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = *(_QWORD *)(a2 + 64);
  if ( a4 && !CInterfaceCallContext::AcquireRemoveLock(a1) )
    return;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 1) + 4032LL);
  if ( !a6 )
  {
    KeEnterCriticalRegion();
    v10 = *((_QWORD *)a1 + 1);
    if ( *(_BYTE *)(v10 + 484) )
      DpiCheckForOutstandingD3Requests(v10);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*((_QWORD *)a1 + 1) + 168LL), 1u);
    *((_BYTE *)a1 + 40) = 1;
    if ( (unsigned int)Feature_DisplayMux_CheckDeviceStarted__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = *((_QWORD *)a1 + 1);
      v12 = *(_DWORD *)(v11 + 236);
      if ( v12 != 2 && (*(_DWORD *)(v11 + 240) != 2 || ((v12 - 3) & 0xFFFFFFFC) != 0 || v12 == 4) )
      {
        *((_DWORD *)a1 + 8) = -1073741130;
        return;
      }
    }
  }
  if ( a8 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(*((_QWORD *)a1 + 1) + 3440LL), 1u);
    *((_BYTE *)a1 + 42) = 1;
  }
  if ( a5 )
  {
    v13 = *(_QWORD *)a1;
    LOBYTE(a2) = a5 == 2;
    *((_BYTE *)a1 + 38) = a5 == 2;
    v14 = DpiAcquireCoreSyncAccessSafe(v13, a2);
    *((_DWORD *)a1 + 8) = v14;
    if ( v14 >= 0 )
    {
      v15 = *((_QWORD *)a1 + 1) + 5552LL;
      *((_BYTE *)a1 + 37) = 1;
      ExAcquirePushLockExclusiveEx(v15, 0LL);
      goto LABEL_28;
    }
    goto LABEL_33;
  }
  if ( !a6 )
    goto LABEL_33;
  KeEnterCriticalRegion();
  v16 = *((_QWORD *)a1 + 1);
  if ( *(_BYTE *)(v16 + 484) )
    DpiDisableD3Requests(*(_QWORD *)(v16 + 24));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*((_QWORD *)a1 + 1) + 168LL), 1u);
  v17 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 4032LL);
  if ( v17 )
    v18 = DxgkAcquireAdapterStopResetSync(v17, 0LL);
  else
    v18 = -1073741661;
  *((_DWORD *)a1 + 8) = v18;
  v19 = *((_QWORD *)a1 + 1);
  if ( *(_BYTE *)(v19 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v19 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)a1 + 1) + 168LL));
  KeLeaveCriticalRegion();
  if ( *((int *)a1 + 8) >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 4032LL) + 200LL) == 1 )
    {
      *((_BYTE *)a1 + 39) = 1;
LABEL_28:
      if ( !a3 || (v20 = 0, !*(_BYTE *)(a3 + 64)) )
        v20 = 1;
      *(_BYTE *)(*((_QWORD *)a1 + 1) + 5596LL) = v20;
      goto LABEL_33;
    }
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)a1 + 1) + 4032LL), 0LL);
    *((_DWORD *)a1 + 8) = -1073741130;
LABEL_33:
    if ( *((int *)a1 + 8) >= 0 && *((_BYTE *)a1 + 40) && a7 )
    {
      v21 = DxgkAcquireAdapterReference(*((_QWORD *)a1 + 2), (char *)a1 + 24);
      *((_DWORD *)a1 + 8) = v21;
      if ( v21 >= 0 )
      {
        v22 = *((_QWORD *)a1 + 1);
        *((_BYTE *)a1 + 41) = 1;
        if ( *(_BYTE *)(v22 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v22 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)a1 + 1) + 168LL));
        KeLeaveCriticalRegion();
        *((_BYTE *)a1 + 40) = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v21);
        WdLogGlobalForLineNumber = 180;
      }
    }
  }
}
