/*
 * XREFs of IopIsReportedAlready @ 0x14071B37C
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     PnpIsDuplicateDevice @ 0x14071B668 (PnpIsDuplicateDevice.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall IopIsReportedAlready(__int64 a1, int a2, const UNICODE_STRING *a3, __int64 a4, _DWORD *a5)
{
  char *v5; // rdi
  PVOID v6; // r14
  void *v7; // rbx
  char v8; // si
  __int64 v12; // rdx
  int RegistryValue; // ebx
  bool v14; // sf
  int v15; // eax
  HANDLE v16; // rcx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int Data; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v23; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING String1; // [rsp+80h] [rbp-80h]
  WCHAR SourceString[256]; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  *a5 = 0;
  v8 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  Data = 0;
  v19 = 0;
  String1 = a3;
  v12 = *(_QWORD *)(a1 + 8);
  DestinationString = 0LL;
  v20 = 512;
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v12, a2, 5, (__int64)&v19, (__int64)SourceString, (__int64)&v20, 0) < 0
    || v19 != 1
    || !v20
    || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
    || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
  {
    goto LABEL_17;
  }
  if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 8), 20, 0, 131097, 0, (__int64)&Handle, 0LL) < 0
    || (RegistryValue = IopGetRegistryValue(Handle), ZwClose(Handle), v14 = RegistryValue < 0, v7 = v23, v14)
    || v23[1] != 8
    || !v23[3] )
  {
    if ( a4 )
      goto LABEL_17;
LABEL_15:
    if ( v5 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v5 = (char *)v23 + (unsigned int)v23[2];
  if ( !a4 )
    goto LABEL_15;
  if ( !v5 || !(unsigned int)PnpIsDuplicateDevice(a4, (char *)v23 + (unsigned int)v23[2]) )
    goto LABEL_17;
LABEL_16:
  *a5 = 1;
LABEL_17:
  if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 8), 19, 0, 983103, 0, (__int64)&KeyHandle, 0LL) < 0
    || (v15 = IopGetRegistryValue(KeyHandle), v6 = P, v15 < 0) )
  {
    if ( *a5 )
    {
      v16 = KeyHandle;
      if ( !KeyHandle )
      {
        if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(a1 + 8), 19, 0, 983103, 1, (__int64)&KeyHandle, 0LL) < 0 )
          goto LABEL_25;
        v16 = KeyHandle;
      }
      *(_DWORD *)&DestinationString.Length = 1966108;
      DestinationString.Buffer = L"DeviceReported";
      Data = 1;
      if ( ZwSetValueKey(v16, &DestinationString, 0, 4u, &Data, 4u) >= 0 )
        v8 = 1;
    }
  }
LABEL_25:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v8;
}
