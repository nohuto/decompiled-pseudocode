/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x140013DF0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ??$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140014248 (--$GreAcquireSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rdx
  NTSTATUS DeviceObjectPointer; // r14d
  __int64 v4; // rbx
  HSEMAPHORE v5; // rdi
  int v6; // r8d
  int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // r9
  const WCHAR *v11; // rdx
  struct _GRETHREAD *v12; // rax
  __int64 DxgkWin32kInterface; // rax
  void *p_hAdapter; // rcx
  void *p_AdapterLuid; // rcx
  void *p_VidPnSourceId; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  struct _DEVICE_OBJECT *v24; // rcx
  PFILE_OBJECT FileObject; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE Src[24]; // [rsp+38h] [rbp-D0h] BYREF
  HDC v28[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  _QWORD v30[19]; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v31; // [rsp+118h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+128h] [rbp+20h] BYREF

  *(_OWORD *)v28 = 0LL;
  v29 = 0LL;
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v28, v2, 0x18uLL);
  DeviceObjectPointer = -1073741811;
  v31 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v30, v28[0]);
  if ( v30[0] )
  {
    v4 = *(_QWORD *)(v30[0] + 48LL);
    if ( v4 )
    {
      v5 = *(HSEMAPHORE *)(v4 + 48);
      GreAcquireSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v5);
      v6 = *(_DWORD *)(v4 + 40);
      v7 = 1;
      v8 = v6 & 1;
      if ( (v6 & 1) != 0 && (v6 & 0x20000) == 0 )
      {
        v9 = *(_QWORD *)(v4 + 2568);
        if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v9 + 160) >> 23) & 1 )
        {
          v31 = *(_DWORD *)(v9 + 248);
          v11 = *(const WCHAR **)(v4 + 2568);
LABEL_11:
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, v11);
          DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
          goto LABEL_12;
        }
      }
      if ( (v6 & 1) == 0 )
        goto LABEL_38;
      if ( (v6 & 0x20000) != 0 )
        goto LABEL_12;
      v8 = *(_QWORD *)(v4 + 2568);
      if ( v8 && *(_QWORD *)(v8 + 296) && (*(_DWORD *)(v8 + 164) & 4) != 0 )
      {
        v31 = *(_DWORD *)(v8 + 248);
        v24 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v4 + 2568) + 296LL);
      }
      else
      {
LABEL_38:
        if ( (v6 & 0x20000) != 0 )
          goto LABEL_12;
        v19 = *(_QWORD *)(v4 + 2568);
        if ( !v19 || (*(_DWORD *)(v19 + 160) & 0x4000000) == 0 )
          goto LABEL_12;
        v20 = *(_QWORD *)(W32GetSessionState(v8, 0x20000LL) + 88);
        if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
          || !*(_QWORD *)(v20 + 2936)
          || (v22 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), PsGetCurrentProcess() == v22)
          || (unsigned int)UserIsCurrentProcessDwm() )
        {
          v7 = 0;
        }
        if ( !v7 )
          goto LABEL_12;
        v31 = *(_DWORD *)(*(_QWORD *)(v4 + 2568) + 248LL);
        v23 = *(_QWORD *)(W32GetSessionState(v31, v21) + 88);
        if ( *(_DWORD *)(v23 + 2920) )
        {
          v11 = (const WCHAR *)(v23 + 2944);
          goto LABEL_11;
        }
        v24 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v4 + 2568) + 296LL);
        if ( !v24 )
        {
LABEL_12:
          if ( v5 )
          {
            EtwTraceGreLockReleaseSemaphore(L"DevLock", v5);
            v12 = GreGetCurrentThreadCrossSessionCheck();
            if ( v12 )
            {
              if ( (*((_BYTE *)v12 + 16))-- == 1 )
                *(_QWORD *)v12 &= ~0x100uLL;
            }
            GreReleaseSemaphoreSharedInternal(v5);
          }
          goto LABEL_17;
        }
      }
      DeviceObject = v24;
      ObfReferenceObject(v24);
      DeviceObjectPointer = 0;
      goto LABEL_12;
    }
  }
LABEL_17:
  memset(Src, 0, sizeof(Src));
  if ( DeviceObjectPointer < 0 )
    goto LABEL_28;
  *(_QWORD *)Src = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  DeviceObjectPointer = (*(__int64 (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 64))(Src);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_28:
    *(_DWORD *)&Src[8] = 0;
    *(_QWORD *)&Src[12] = 0LL;
    v31 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(p_hAdapter, &Src[8], 4uLL);
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(p_AdapterLuid, &Src[12], 8uLL);
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(p_VidPnSourceId, &v31, 4uLL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v30);
  return (unsigned int)DeviceObjectPointer;
}
