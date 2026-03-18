/*
 * XREFs of DrvEnumDisplayDevices @ 0x140018880
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1400187E0 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140017264 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001971C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001972C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140019744 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDere.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14001975C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x140025380 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x14004E4EC (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BEFB4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     DrvpGetDeviceInterfaceName @ 0x14011C800 (DrvpGetDeviceInterfaceName.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14011E230 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z @ 0x14013221C (--$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140151C9C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        const UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  __int64 DeviceFromName; // r13
  int v8; // r15d
  int v9; // r12d
  unsigned int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _DEVICE_OBJECT *v17; // rax
  int v18; // r15d
  unsigned int *v19; // rax
  SIZE_T v20; // rbx
  char *v21; // rsi
  _OWORD *v22; // r9
  wchar_t *v23; // rcx
  const wchar_t *v24; // r8
  int PruneFlag; // eax
  unsigned int v26; // edx
  ULONG v27; // r15d
  __int64 v28; // r14
  unsigned __int64 v29; // rbx
  int v30; // eax
  __int64 Pool2; // rbx
  NTSTATUS v32; // eax
  unsigned int v33; // r8d
  __int64 v34; // r14
  char *v35; // r15
  void *v36; // r14
  struct _DEVICE_OBJECT *v38; // rcx
  int v39; // ecx
  int (__fastcall *v40)(char *, _QWORD, __int64 *, PDEVICE_OBJECT *); // rbx
  __int64 v41; // rax
  ULONG v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  void *v47; // r14
  NTSTATUS DeviceProperty; // eax
  int DeviceInterfaceName; // eax
  _QWORD *v50; // rax
  struct _DEVICE_OBJECT *v51; // rcx
  __int64 v52; // rbx
  int v53; // eax
  __int64 v54; // rbx
  bool v55; // zf
  unsigned int v56; // edx
  char v57; // r15
  PULONG ResultLength; // [rsp+20h] [rbp-308h]
  ULONG BufferLength; // [rsp+50h] [rbp-2D8h] BYREF
  _DWORD Length[3]; // [rsp+54h] [rbp-2D4h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-2C8h] BYREF
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-2C0h]
  __int64 v63; // [rsp+70h] [rbp-2B8h] BYREF
  PDEVICE_OBJECT v64; // [rsp+78h] [rbp-2B0h] BYREF
  void *v65; // [rsp+80h] [rbp-2A8h]
  int v66; // [rsp+88h] [rbp-2A0h]
  int v67; // [rsp+8Ch] [rbp-29Ch]
  unsigned int v68; // [rsp+90h] [rbp-298h] BYREF
  _BYTE v69[8]; // [rsp+98h] [rbp-290h] BYREF
  unsigned int v70; // [rsp+A0h] [rbp-288h]
  PVOID P; // [rsp+A8h] [rbp-280h] BYREF
  unsigned int v72; // [rsp+B0h] [rbp-278h] BYREF
  PCUNICODE_STRING v73; // [rsp+B8h] [rbp-270h] BYREF
  unsigned __int64 v74; // [rsp+C0h] [rbp-268h] BYREF
  PVOID v75; // [rsp+C8h] [rbp-260h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-258h] BYREF
  unsigned __int64 v77; // [rsp+D8h] [rbp-250h] BYREF
  PDEVICE_OBJECT v78; // [rsp+E0h] [rbp-248h] BYREF
  LONG_PTR (__stdcall *v79)(PVOID); // [rsp+E8h] [rbp-240h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-238h] BYREF
  _QWORD v81[3]; // [rsp+F8h] [rbp-230h] BYREF
  _QWORD v82[2]; // [rsp+110h] [rbp-218h] BYREF
  PVOID BackTrace[20]; // [rsp+120h] [rbp-208h] BYREF
  __int128 v84; // [rsp+1C0h] [rbp-168h] BYREF
  int v85; // [rsp+1D0h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+1E0h] [rbp-148h] BYREF

  v65 = a4;
  Length[1] = a3;
  String1 = a1;
  v81[1] = a4;
  DeviceFromName = 0LL;
  Length[0] = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v8 = 0;
  v66 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v63);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v64);
  v9 = 0;
  v67 = 0;
  v11 = v10;
  ResultLength = (PULONG)a5;
  WdLogSingleEntry4(4LL, a1, v10);
  WdLogGlobalForLineNumber = 11622;
  v16 = *(_QWORD *)(W32GetSessionState(v13, v12) + 88);
  if ( !a1 )
  {
    DeviceFromName = *(_QWORD *)(v16 + 1096);
    if ( DeviceFromName )
    {
      do
      {
        if ( a6
          && ((*(_DWORD *)(DeviceFromName + 160) & 0x2000000) != 0
           || *(_WORD *)(W32GetUserSessionState() + 69008)
           && (v15 = *(unsigned __int16 *)(W32GetUserSessionState() + 69008),
               *(_WORD *)(DeviceFromName + 216) != (_WORD)v15)
           && (*(_DWORD *)(DeviceFromName + 160) & 0x4000008) == 0) )
        {
          --BufferLength;
        }
        else if ( BufferLength == Length[1] )
        {
          break;
        }
        DeviceFromName = *(_QWORD *)(DeviceFromName + 128);
        ++BufferLength;
      }
      while ( DeviceFromName );
      if ( DeviceFromName )
      {
        if ( *(_DWORD *)(v16 + 2920) )
        {
          v52 = *(_QWORD *)(W32GetSessionState(v15, v14) + 88);
          if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection()
            || !*(_QWORD *)(v52 + 2936)
            || (v54 = *(_QWORD *)(W32GetUserGdiSessionState() + 40), PsGetCurrentProcess() == v54)
            || (v55 = (unsigned int)UserIsCurrentProcessDwm() == 0, v53 = 1, !v55) )
          {
            v53 = 0;
          }
          if ( v53 )
          {
            if ( (*(_BYTE *)(DeviceFromName + 160) & 8) == 0 )
              v8 = 1;
            v66 = v8;
          }
        }
        v17 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 144);
        if ( !v17 || !*(_QWORD *)(DeviceFromName + 224) )
        {
          if ( !v8 )
          {
            v51 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 136);
            if ( v51 )
            {
              v75 = 0LL;
              if ( (int)DrvForceChildDeviceReenumeration(v51, (struct _DEVICE_RELATIONS **)&v75) >= 0 )
              {
                DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v75 + 1);
                ExFreePoolWithTag(v75, 0);
                if ( v64 )
                {
                  v78 = v64;
                  v79 = ObfDereferenceObject;
                  wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(&v79, &v78);
                }
                v64 = DeviceObject;
              }
            }
            else
            {
              WdLogSingleEntry0(5LL);
              WdLogGlobalForLineNumber = 11703;
            }
            goto LABEL_13;
          }
          v17 = *(struct _DEVICE_OBJECT **)(v16 + 2936);
        }
        DeviceObject = v17;
LABEL_13:
        v18 = Length[1];
        goto LABEL_14;
      }
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 11661;
LABEL_112:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v64);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v63);
    return 3221225473LL;
  }
  if ( a6 == 1 )
  {
    v73 = 0LL;
    if ( (int)DrvProbeAndCaptureString((struct _UNICODE_STRING *)String1, (struct AUTO_FREE_STRING *)&v73) >= 0 )
      DeviceFromName = DrvGetDeviceFromName(v73, v45);
    if ( v73 )
      GreDeleteFastMutex((PVOID)v73);
  }
  else
  {
    DeviceFromName = DrvGetDeviceFromName(String1, v14);
  }
  if ( !DeviceFromName )
    goto LABEL_112;
  P = 0LL;
  v70 = 0;
  v72 = 0;
  v38 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 136);
  if ( v38
    && (int)GreDeviceIoControlImpl(v38, 0x23201Bu, 0LL, 0, &P, 8u, &v72, 1u, 1) >= 0
    && P
    && _bittest((const signed __int32 *)P + 5 * v70, 0x1Du) )
  {
    do
      ++v70;
    while ( _bittest((const signed __int32 *)P + 5 * v70, 0x1Du) );
  }
  v18 = Length[1];
  if ( Length[1] >= v70 )
  {
LABEL_156:
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v69);
    goto LABEL_112;
  }
  v84 = 0LL;
  v85 = 0;
  LODWORD(v84) = 0;
  v39 = (*((_BYTE *)P + 20 * v11) & 1) != 0;
  LODWORD(v84) = v39;
  if ( (*((_DWORD *)P + 5 * v11) & 2) == 0 )
  {
    v39 |= 2u;
    LODWORD(v84) = v39;
  }
  if ( *((int *)P + 5 * v11) >= 0 )
  {
    v39 |= 0x80000000;
    LODWORD(v84) = v39;
  }
  if ( (*((_DWORD *)P + 5 * v11) & 0x40000000) == 0 )
    LODWORD(v84) = v39 | 0x40000000;
  DWORD1(v84) = *((_DWORD *)P + 5 * v11 + 1);
  *((_QWORD *)&v84 + 1) = *(_QWORD *)((char *)P + 20 * v11 + 8);
  LOBYTE(v85) = *((_BYTE *)P + 20 * v11 + 16);
  v40 = *(int (__fastcall **)(char *, _QWORD, __int64 *, PDEVICE_OBJECT *))(DxDdGetDxgkWin32kInterface() + 456);
  if ( v63 )
  {
    v80 = v63;
    v81[0] = ObfDereferenceObject;
    wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(v81, &v80);
  }
  v63 = 0LL;
  if ( v40((char *)&v84 + 8, DWORD1(v84), &v63, &DeviceObject) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11744;
    goto LABEL_156;
  }
  v67 = v84 & 0xFFFFFFF;
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_14:
  *(_QWORD *)&Length[1] = 0LL;
  if ( a6 == 1 )
  {
    v19 = (unsigned int *)v65;
    if ( (unsigned __int64)v65 >= MmUserProbeAddress )
      v19 = (unsigned int *)MmUserProbeAddress;
    v20 = *v19;
    if ( (unsigned int)v20 > 0x348 )
      v20 = 840LL;
    Length[0] = v20;
    if ( (_DWORD)v20 )
      v21 = (char *)Win32AllocPoolZInitImpl(256LL, (unsigned int)v20, 0x73726447u);
    else
      v21 = 0LL;
    *(_QWORD *)&Length[1] = v21;
    if ( !v21 )
    {
      v9 = -1073741823;
      goto LABEL_61;
    }
  }
  else
  {
    v20 = 840LL;
    if ( *(_DWORD *)v65 < 0x348u )
      v20 = *(unsigned int *)v65;
    Length[0] = v20;
    v21 = (char *)v65;
    *(_QWORD *)&Length[1] = v65;
    memset(v65, 0, (unsigned int)v20);
  }
  if ( (unsigned int)v20 >= 4 )
    *(_DWORD *)v21 = 4;
  if ( (unsigned int)v20 >= 0x44 )
  {
    *(_DWORD *)v21 = 68;
    v22 = (_OWORD *)(DeviceFromName + 64);
    v23 = (wchar_t *)(v21 + 4);
    if ( String1 )
    {
      LODWORD(ResultLength) = v18;
      swprintf_s(v23, 0x20uLL, L"%ws\\Monitor%d", v22, ResultLength);
    }
    else
    {
      *(_OWORD *)v23 = *v22;
      *(_OWORD *)(v21 + 20) = *(_OWORD *)(DeviceFromName + 80);
      *(_OWORD *)(v21 + 36) = *(_OWORD *)(DeviceFromName + 96);
      *(_OWORD *)(v21 + 52) = *(_OWORD *)(DeviceFromName + 112);
    }
    *((_WORD *)v21 + 33) = 0;
  }
  if ( (unsigned int)v20 >= 0x144 )
  {
    *(_DWORD *)v21 = 324;
    *((_WORD *)v21 + 34) = 0;
    if ( String1 || v66 )
    {
      if ( DeviceObject )
      {
        v46 = 256LL;
        for ( BufferLength = 256; ; v46 = BufferLength )
        {
          v47 = (void *)PALLOCNOZ(v46, 1684301127LL);
          if ( !v47 )
          {
            v9 = -1073741670;
            goto LABEL_33;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v47,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          GreDeleteFastMutex(v47);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, (const wchar_t *)v47, 0x7FuLL);
        GreDeleteFastMutex(v47);
      }
    }
    else
    {
      v24 = *(const wchar_t **)(DeviceFromName + 208);
      if ( v24 )
        wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, v24, 0x7FuLL);
    }
LABEL_33:
    *((_WORD *)v21 + 161) = 0;
  }
  if ( (unsigned int)v20 >= 0x148 )
  {
    *(_DWORD *)v21 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v26 = *(_DWORD *)(DeviceFromName + 160) & 0xFFF7FFFF;
    if ( !PruneFlag )
      v26 = *(_DWORD *)(DeviceFromName + 160) | 0x80000;
    *(_DWORD *)(DeviceFromName + 160) = v26;
    if ( String1 )
      *((_DWORD *)v21 + 81) = v67;
    else
      *((_DWORD *)v21 + 81) = v26 & ((a5 & 2) != 0 ? 0xFFFFFFF : 254803967);
  }
  if ( (unsigned int)v20 < 0x248 )
  {
    v34 = -1LL;
    goto LABEL_57;
  }
  *(_DWORD *)v21 = 584;
  *((_WORD *)v21 + 164) = 0;
  if ( (a5 & 1) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v9 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        WdLogSingleEntry1(5LL, DeviceInterfaceName);
        WdLogGlobalForLineNumber = 11933;
        goto LABEL_61;
      }
    }
LABEL_128:
    v34 = -1LL;
    goto LABEL_56;
  }
  if ( !DeviceObject )
    goto LABEL_128;
  v27 = 256;
  for ( BufferLength = 256; ; v27 = BufferLength )
  {
    if ( v27 )
    {
      v28 = W32GetUserSessionState() + 72288;
      v68 = 1684301127;
      v76 = 256LL;
      v29 = v27;
      v77 = v27;
      v30 = *(_DWORD *)v28;
      if ( !*(_DWORD *)v28 )
      {
        Pool2 = ExAllocatePool2(258LL, v27, 1684301127LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v28 + 112));
        goto LABEL_47;
      }
      if ( v30 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v28,
               0x64646547u)
          && (unsigned __int64)v27 + 16 >= v27 )
        {
          v50 = (_QWORD *)ExAllocatePool2(v76 | 2, v27 + 16LL, v68);
          Pool2 = (__int64)v50;
          if ( !v50
            || (_InterlockedIncrement64((volatile signed __int64 *)(v28 + 112)),
                *v50 = 1684301127LL,
                Pool2 = (__int64)(v50 + 2),
                v50 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v28 + 8),
              (const void *)0x64646547);
          }
          goto LABEL_47;
        }
        goto LABEL_171;
      }
      if ( v30 == 2 )
      {
        v74 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                (NSInstrumentation::CLeakTrackingAllocator *)v28,
                0x64646547u,
                &v74) )
        {
          v82[0] = &v76;
          v82[1] = &v68;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                    v28,
                    v82,
                    &v77);
LABEL_47:
          v27 = BufferLength;
          goto LABEL_48;
        }
        v57 = 0;
        if ( v29 < 0x1000 || (v29 & 0xFFF) != 0 )
        {
          v57 = 1;
          v29 += 16LL;
          v77 = v29;
        }
        Pool2 = ExAllocatePool2(258LL, v29, v56);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v28 + 128));
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v57 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v28,
                                    Pool2,
                                    v74,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_47;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v28,
                                       Pool2,
                                       v74,
                                       BackTrace) )
          {
            goto LABEL_47;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v28 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
LABEL_171:
      Pool2 = 0LL;
      goto LABEL_47;
    }
    Pool2 = 0LL;
LABEL_48:
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_110;
    }
    v32 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v27, (PVOID)Pool2, &BufferLength);
    if ( v32 != -1073741789 )
      break;
    GreDeleteFastMutex((PVOID)Pool2);
  }
  if ( v32 )
  {
    GreDeleteFastMutex((PVOID)Pool2);
LABEL_110:
    v34 = -1LL;
    goto LABEL_54;
  }
  v33 = 0;
  v34 = -1LL;
  if ( String1 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( *(_WORD *)(Pool2 + 2 * v43) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v43 + 2) )
      v33 = v43 + 1;
  }
  wcsncpy_s((wchar_t *)v21 + 164, 0x80uLL, (const wchar_t *)(Pool2 + 2LL * v33), 0x7FuLL);
  GreDeleteFastMutex((PVOID)Pool2);
LABEL_54:
  if ( String1 )
  {
    *((_WORD *)v21 + 291) = 0;
    v41 = -1LL;
    do
      ++v41;
    while ( *(_WORD *)&v21[2 * v41 + 328] );
    v42 = v41 + 1;
    BufferLength = v42;
    if ( v42 < 0x7E )
    {
      *(_WORD *)&v21[2 * v42 + 326] = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        &v21[2 * BufferLength + 328],
        &BufferLength);
    }
  }
  v20 = Length[0];
LABEL_56:
  *((_WORD *)v21 + 291) = 0;
LABEL_57:
  if ( (unsigned int)v20 >= 0x348 )
  {
    *(_DWORD *)v21 = 840;
    v35 = v21 + 584;
    *((_WORD *)v21 + 292) = 0;
    if ( String1 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v21 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v44 = -1LL;
        do
          ++v44;
        while ( *(_WORD *)&v35[2 * v44] );
        BufferLength = v44;
        wcsncpy_s(
          (wchar_t *)&v21[2 * (unsigned int)v44 + 584],
          128LL - (unsigned int)v44,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v44));
        do
          ++v34;
        while ( *(_WORD *)&v35[2 * v34] );
        BufferLength = v34;
        wcsncpy_s(
          (wchar_t *)&v21[2 * (unsigned int)v34 + 584],
          128LL - (unsigned int)v34,
          PropertyBuffer,
          (unsigned int)(127 - v34));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3LL, 0LL, v21 + 584, 128, 0LL);
    }
    *((_WORD *)v21 + 419) = 0;
  }
LABEL_61:
  v36 = v65;
  if ( v21 != v65 )
  {
    if ( v21 )
    {
      ProbeForWrite(v65, v20, 4u);
      memmove(v36, v21, v20);
      GreDeleteFastMutex(v21);
    }
  }
  WdLogSingleEntry1(5LL, v9);
  WdLogGlobalForLineNumber = 12066;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v64);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v63);
  return (unsigned int)v9;
}
