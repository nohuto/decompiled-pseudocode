/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001C770
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001CAB4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rbx
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // r8d
  int v9; // esi
  int v10; // edx
  const WCHAR *v11; // rdx
  struct _ERESOURCE *v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  __int64 DxgkWin32kInterface; // rax
  _DWORD *p_hAdapter; // rdx
  _QWORD *p_AdapterLuid; // rdx
  _DWORD *p_VidPnSourceId; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _BOOL8 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h]
  _BYTE v28[24]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v29[11]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+C0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)&v2->hDc;
  v27 = *(_QWORD *)&v2->AdapterLuid.HighPart;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v29, *(HDC *)&DestinationString.Length);
  if ( v29[0] )
  {
    v6 = *(_QWORD *)(v29[0] + 48LL);
    v30 = v6;
    if ( v6 )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v6 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v6 + 48), 11LL);
      v8 = *(_DWORD *)(v6 + 40);
      v9 = 1;
      if ( (v8 & 0x20001) != 1 )
        goto LABEL_35;
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v30) )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(v6 + 2552) + 248LL);
        DestinationString = 0LL;
        v11 = *(const WCHAR **)(v6 + 2552);
LABEL_8:
        RtlInitUnicodeString(&DestinationString, v11);
        DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
        goto LABEL_9;
      }
      if ( v10 == 1
        && (v19 = *(_QWORD *)(v6 + 2552)) != 0
        && (v7 = *(struct _DEVICE_OBJECT **)(v19 + 296)) != 0LL
        && (*(_DWORD *)(v19 + 164) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v19 + 248);
      }
      else
      {
LABEL_35:
        if ( (v8 & 0x20000) != 0 )
          goto LABEL_9;
        v20 = *(_QWORD *)(v6 + 2552);
        if ( !v20 || (*(_DWORD *)(v20 + 160) & 0x4000000) == 0 )
          goto LABEL_9;
        v21 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
        v22 = (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu;
        if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
          || !*(_QWORD *)(v21 + 3096)
          || (PVOID)PsGetCurrentProcess(v22, v21, 65533LL) == gpepCSRSS
          || UserIsCurrentProcessDwm(v22, v23, v24) )
        {
          v9 = 0;
        }
        if ( !v9 )
          goto LABEL_9;
        v4 = *(_DWORD *)(*(_QWORD *)(v6 + 2552) + 248LL);
        v25 = *(_QWORD *)(SGDGetSessionState(v22) + 24);
        if ( *(_DWORD *)(v25 + 3080) )
        {
          DestinationString = 0LL;
          v11 = (const WCHAR *)(v25 + 3104);
          goto LABEL_8;
        }
        v7 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v6 + 2552) + 296LL);
        if ( !v7 )
        {
LABEL_9:
          EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v6 + 48));
          v12 = *(struct _ERESOURCE **)(v6 + 48);
          if ( v12 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v12);
            PsLeavePriorityRegion();
          }
          goto LABEL_11;
        }
      }
      DeviceObject = v7;
      ObfReferenceObject(v7);
      DeviceObjectPointer = 0;
      goto LABEL_9;
    }
  }
LABEL_11:
  memset(v28, 0, sizeof(v28));
  if ( DeviceObjectPointer < 0 )
    goto LABEL_40;
  v13 = DeviceObject;
  *(_QWORD *)v28 = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v13, v5);
  DeviceObjectPointer = (*(__int64 (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 64))(v28);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_40:
    *(_QWORD *)&v28[8] = 0LL;
    *(_DWORD *)&v28[16] = 0;
    v4 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (_DWORD *)MmUserProbeAddress;
  *p_hAdapter = *(_DWORD *)&v28[8];
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (_QWORD *)MmUserProbeAddress;
  *p_AdapterLuid = *(_QWORD *)&v28[12];
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
  *p_VidPnSourceId = v4;
  DCOBJ::~DCOBJ((DCOBJ *)v29);
  return (unsigned int)DeviceObjectPointer;
}
