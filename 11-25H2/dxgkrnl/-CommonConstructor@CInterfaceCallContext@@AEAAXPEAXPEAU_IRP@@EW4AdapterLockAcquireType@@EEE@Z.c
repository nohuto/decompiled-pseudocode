/*
 * XREFs of ?CommonConstructor@CInterfaceCallContext@@AEAAXPEAXPEAU_IRP@@EW4AdapterLockAcquireType@@EEE@Z @ 0x140054E8C
 * Callers:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x140054E24 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z @ 0x14008AFC0 (--0CInterfaceCallContext@@QEAA@PEAU_FDO_CONTEXT@@W4LocksToAcquire@@@Z.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireRemoveLock@CInterfaceCallContext@@AEAA_NXZ @ 0x140055140 (-AcquireRemoveLock@CInterfaceCallContext@@AEAA_NXZ.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x14018722C (DxgkReleaseAdapterStopResetSync.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1401873E0 (DxgkAcquireAdapterStopResetSync.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiDisableD3Requests @ 0x1403498D0 (DpiDisableD3Requests.c)
 *     DxgkAcquireAdapterReference @ 0x1403B0FD0 (DxgkAcquireAdapterReference.c)
 */

void __fastcall CInterfaceCallContext::CommonConstructor(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        char a6,
        char a7,
        char a8)
{
  __int64 *v8; // rdi
  __int64 *v11; // rbp
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  char v18; // cl
  int v19; // eax
  __int64 v20; // rcx

  v8 = a1 + 1;
  *a1 = a2;
  a1[1] = *(_QWORD *)(a2 + 64);
  v11 = a1 + 1;
  if ( a4 )
  {
    if ( !CInterfaceCallContext::AcquireRemoveLock((CInterfaceCallContext *)a1) )
      return;
    v11 = a1 + 1;
  }
  a1[2] = *(_QWORD *)(*v8 + 4032);
  if ( !a6 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(*v8 + 484) )
      DpiCheckForOutstandingD3Requests(*v8);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*v8 + 168), 1u);
    *((_BYTE *)a1 + 40) = 1;
    v8 = v11;
  }
  if ( a8 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)(*v8 + 3440), 1u);
    *((_BYTE *)a1 + 42) = 1;
  }
  if ( a5 )
  {
    v12 = *a1;
    LOBYTE(a2) = a5 == 2;
    *((_BYTE *)a1 + 38) = a5 == 2;
    v13 = DpiAcquireCoreSyncAccessSafe(v12, a2);
    *((_DWORD *)a1 + 8) = v13;
    if ( v13 >= 0 )
    {
      v14 = *v8 + 5552;
      *((_BYTE *)a1 + 37) = 1;
      ExAcquirePushLockExclusiveEx(v14, 0LL);
      goto LABEL_24;
    }
    goto LABEL_29;
  }
  if ( !a6 )
    goto LABEL_29;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(*v8 + 484) )
    DpiDisableD3Requests(*(_QWORD *)(*v8 + 24));
  ExAcquireResourceSharedLite(*(PERESOURCE *)(*v8 + 168), 1u);
  v15 = *(_QWORD *)(*v8 + 4032);
  if ( v15 )
    v16 = DxgkAcquireAdapterStopResetSync(v15, 0LL);
  else
    v16 = -1073741661;
  *((_DWORD *)a1 + 8) = v16;
  v17 = a1[1];
  if ( *(_BYTE *)(v17 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v17 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(a1[1] + 168));
  KeLeaveCriticalRegion();
  if ( *((int *)a1 + 8) >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1[1] + 4032) + 200LL) == 1 )
    {
      *((_BYTE *)a1 + 39) = 1;
LABEL_24:
      if ( !a3 || (v18 = 0, !*(_BYTE *)(a3 + 64)) )
        v18 = 1;
      *(_BYTE *)(a1[1] + 5596) = v18;
      goto LABEL_29;
    }
    DxgkReleaseAdapterStopResetSync(*(_QWORD *)(a1[1] + 4032), 0LL);
    *((_DWORD *)a1 + 8) = -1073741130;
LABEL_29:
    if ( *((int *)a1 + 8) >= 0 && *((_BYTE *)a1 + 40) && a7 )
    {
      v19 = DxgkAcquireAdapterReference(a1[2], a1 + 3);
      *((_DWORD *)a1 + 8) = v19;
      if ( v19 >= 0 )
      {
        v20 = a1[1];
        *((_BYTE *)a1 + 41) = 1;
        if ( *(_BYTE *)(v20 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v20 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(a1[1] + 168));
        KeLeaveCriticalRegion();
        *((_BYTE *)a1 + 40) = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 170;
      }
    }
  }
}
