/*
 * XREFs of DxgkOpenAdapterFromDeviceName @ 0x140330080
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x140034510 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkCloseAdapterImpl @ 0x140322C20 (DxgkCloseAdapterImpl.c)
 *     DpiValidateDeviceName @ 0x1403304E4 (DpiValidateDeviceName.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x140330650 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromDeviceName(ULONG64 a1)
{
  const void *v2; // rdx
  _WORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  WCHAR *v6; // r8
  int v7; // r11d
  __int64 v8; // r10
  WCHAR v9; // r9
  struct DXGPROCESS *Current; // rsi
  NTSTATUS DeviceObjectPointer; // ebx
  int v13; // edi
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-2B0h] BYREF
  int v19; // [rsp+60h] [rbp-2A8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-2A0h] BYREF
  _BYTE Src[24]; // [rsp+70h] [rbp-298h] BYREF
  WCHAR *v22; // [rsp+88h] [rbp-280h]
  __int64 v23; // [rsp+90h] [rbp-278h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-270h] BYREF
  int v25; // [rsp+A8h] [rbp-260h]
  _WORD *v26; // [rsp+B0h] [rbp-258h]
  __int64 v27; // [rsp+B8h] [rbp-250h]
  __int64 v28; // [rsp+C0h] [rbp-248h]
  __int128 v29; // [rsp+C8h] [rbp-240h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-230h]
  WCHAR SourceString[256]; // [rsp+E0h] [rbp-228h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v29, v2, 0x18uLL);
  v3 = (_WORD *)v29;
  if ( (__int64)v29 + 512 > MmUserProbeAddress || (__int64)v29 + 512 < (unsigned __int64)v29 )
    v3 = (_WORD *)v29;
  v4 = 2147483646LL;
  v28 = 2147483646LL;
  v26 = v3;
  v5 = 256LL;
  v27 = 256LL;
  v6 = SourceString;
  v22 = SourceString;
  v7 = 0;
  v8 = 0LL;
  v23 = 0LL;
  while ( v5 )
  {
    if ( !v4 )
      goto LABEL_10;
    v9 = *v3;
    if ( !*v3 )
      goto LABEL_10;
    v26 = ++v3;
    *v6++ = v9;
    v22 = v6;
    v27 = --v5;
    v28 = --v4;
    v23 = ++v8;
  }
  v22 = --v6;
  v23 = v8 - 1;
  v7 = -2147483643;
LABEL_10:
  *v6 = 0;
  if ( v7 < 0 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( DestinationString.Length > 1u && SourceString[1] == 92 )
      SourceString[1] = 63;
    if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      WdLogGlobalForLineNumber = 643;
      return 3221225485LL;
    }
    else
    {
      FileObject = 0LL;
      DeviceObject = 0LL;
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      memset(Src, 0, sizeof(Src));
      v13 = 0;
      if ( DeviceObjectPointer < 0 )
        goto LABEL_31;
      *(_QWORD *)Src = DeviceObject;
      ObfReferenceObject(DeviceObject);
      ObfDereferenceObject(FileObject);
      FileObject = 0LL;
      DeviceObjectPointer = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)Src);
      ObfDereferenceObject(DeviceObject);
      DeviceObject = 0LL;
      if ( DeviceObjectPointer < 0 )
        goto LABEL_31;
      v13 = *(_DWORD *)&Src[8];
      if ( DXGPROCESS::IsRemoteConnection(Current) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 464LL))(*(_QWORD *)&Src[12]);
        DeviceObjectPointer = v17;
        v25 = v17;
        if ( v17 < 0 )
        {
          WdLogSingleEntry1(3LL, v17);
          WdLogGlobalForLineNumber = 689;
        }
      }
      if ( DeviceObjectPointer < 0 )
      {
LABEL_31:
        *(_DWORD *)&Src[8] = 0;
        *(_QWORD *)&Src[12] = 0LL;
      }
      v14 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v14 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v14, &Src[8], 4uLL);
      v15 = (void *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v15 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v15, &Src[12], 8uLL);
      if ( DeviceObjectPointer < 0 )
      {
        if ( v13 )
        {
          v19 = v13;
          DxgkCloseAdapterImpl((__int64)&v19, 0, v16);
        }
      }
      return (unsigned int)DeviceObjectPointer;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 622;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
