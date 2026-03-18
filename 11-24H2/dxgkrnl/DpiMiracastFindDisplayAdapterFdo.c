/*
 * XREFs of DpiMiracastFindDisplayAdapterFdo @ 0x14024B5F0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1400417D8 (--0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x14024B90C (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdo(struct _DEVICE_OBJECT *Object, __int64 *a2, _BYTE *a3)
{
  __int64 v6; // rdi
  int v7; // esi
  char v9; // al
  int DisplayAdapterFdoIhv; // eax
  int v11; // ebp
  __int64 v12; // r14
  __int64 i; // rbx
  struct _IO_REMOVE_LOCK *v14; // rsi
  int v15; // ecx
  struct _DEVICE_OBJECT *LowerDeviceObject; // rsi
  struct _DEVICE_OBJECT *v17; // r15
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF
  char v20; // [rsp+98h] [rbp+20h] BYREF

  MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK((MINIPORT_LIST_AUTO_LOCK *)&v20);
  v19 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = DxgkMiracastQueryMiracastSupportInternal(&v19);
  if ( v7 < 0 )
  {
    if ( v20 )
      ReleaseMiniportListMutex();
    return (unsigned int)v7;
  }
  v9 = BYTE8(v19);
  if ( a3 )
    *a3 = BYTE8(v19);
  if ( v9 )
  {
    DisplayAdapterFdoIhv = DpiMiracastFindDisplayAdapterFdoIhv(&v18);
    v6 = v18;
    v11 = DisplayAdapterFdoIhv;
LABEL_41:
    if ( v11 < 0 )
    {
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
        KeLeaveCriticalRegion();
      }
      goto LABEL_46;
    }
  }
  else
  {
    v12 = qword_140160D48;
    v11 = -1073741275;
    if ( *(_QWORD *)v12 == v12 )
    {
LABEL_46:
      *a2 = 0LL;
      if ( v20 )
        ReleaseMiniportListMutex();
      return (unsigned int)v11;
    }
    while ( v11 < 0 )
    {
      KeWaitForSingleObject((PVOID)(v12 + 72), Executive, 0, 0, 0LL);
      for ( i = *(_QWORD *)(v12 + 56); *(_QWORD *)i != *(_QWORD *)(v12 + 56); i = *(_QWORD *)i )
      {
        v6 = i;
        if ( *(_DWORD *)(i + 16) == 1953656900 && *(_DWORD *)(i + 20) == 2 )
        {
          v14 = (struct _IO_REMOVE_LOCK *)(i + 64);
          if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(i + 64), (PVOID)i, File, 1u, 0x20u) >= 0 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(i + 484) )
              DpiCheckForOutstandingD3Requests(i);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(i + 168), 1u);
            v15 = *(_DWORD *)(i + 236);
            if ( (v15 == 2 || *(_DWORD *)(i + 240) == 2 && ((v15 - 3) & 0xFFFFFFFC) == 0 && v15 != 4)
              && *(_DWORD *)(i + 3360) != -1
              && *(_DWORD *)(i + 4120) != 1
              && *(_DWORD *)(i + 284) == 1
              && *(_QWORD *)(i + 5000) )
            {
              LowerDeviceObject = Object;
              ObfReferenceObject(Object);
              if ( Object )
              {
                while ( LowerDeviceObject != *(struct _DEVICE_OBJECT **)(i + 24) )
                {
                  v17 = LowerDeviceObject;
                  LowerDeviceObject = IoGetLowerDeviceObject(LowerDeviceObject);
                  if ( v17 )
                    ObfDereferenceObject(v17);
                  if ( !LowerDeviceObject )
                    goto LABEL_33;
                }
                ObfDereferenceObject(LowerDeviceObject);
              }
LABEL_33:
              if ( LowerDeviceObject == *(struct _DEVICE_OBJECT **)(i + 24) )
              {
                v11 = 0;
                break;
              }
              v14 = (struct _IO_REMOVE_LOCK *)(i + 64);
            }
            if ( *(_BYTE *)(i + 484) )
              DpiEnableD3Requests(*(_QWORD *)(i + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(i + 168));
            KeLeaveCriticalRegion();
            IoReleaseRemoveLockEx(v14, (PVOID)i, 0x20u);
            v6 = 0LL;
          }
        }
      }
      KeReleaseMutex((PRKMUTEX)(v12 + 72), 0);
      v12 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 == qword_140160D48 )
        goto LABEL_41;
    }
  }
  *a2 = v6;
  if ( v20 )
    ReleaseMiniportListMutex();
  return 0LL;
}
