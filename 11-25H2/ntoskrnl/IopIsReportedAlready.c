/*
 * XREFs of IopIsReportedAlready @ 0x1407116EC
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     PnpIsDuplicateDevice @ 0x1407119D8 (PnpIsDuplicateDevice.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall IopIsReportedAlready(__int64 a1, int a2, const UNICODE_STRING *a3, __int64 a4, _DWORD *a5)
{
  char *v5; // rdi
  PVOID v6; // r14
  void *v7; // rbx
  char v8; // si
  __int64 v11; // rdx
  int RegistryValue; // ebx
  bool v13; // sf
  int v14; // eax
  HANDLE v15; // rcx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int Data; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  PCUNICODE_STRING String1; // [rsp+80h] [rbp-80h]
  WCHAR SourceString[256]; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v22 = 0LL;
  *a5 = 0;
  v8 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  Data = 0;
  v18 = 0;
  String1 = a3;
  v11 = *(_QWORD *)(a1 + 8);
  DestinationString = 0LL;
  v19 = 512;
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v11, a2, 5, (__int64)&v18, (__int64)SourceString, (__int64)&v19, 0) < 0
    || v18 != 1
    || !v19
    || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
    || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
  {
    goto LABEL_17;
  }
  if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 0, (__int64)&Handle, 0LL) < 0
    || (RegistryValue = IopGetRegistryValue(Handle), ZwClose(Handle), v13 = RegistryValue < 0, v7 = v22, v13)
    || v22[1] != 8
    || !v22[3] )
  {
    if ( a4 )
      goto LABEL_17;
LABEL_15:
    if ( v5 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v5 = (char *)v22 + (unsigned int)v22[2];
  if ( !a4 )
    goto LABEL_15;
  if ( !v5 || !(unsigned int)PnpIsDuplicateDevice(a4, (char *)v22 + (unsigned int)v22[2]) )
    goto LABEL_17;
LABEL_16:
  *a5 = 1;
LABEL_17:
  if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, 983103, 0, (__int64)&KeyHandle, 0LL) < 0
    || (v14 = IopGetRegistryValue(KeyHandle), v6 = P, v14 < 0) )
  {
    if ( *a5 )
    {
      v15 = KeyHandle;
      if ( !KeyHandle )
      {
        if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, 983103, 1, (__int64)&KeyHandle, 0LL) < 0 )
          goto LABEL_25;
        v15 = KeyHandle;
      }
      *(_DWORD *)&DestinationString.Length = 1966108;
      DestinationString.Buffer = L"DeviceReported";
      Data = 1;
      if ( ZwSetValueKey(v15, &DestinationString, 0, 4u, &Data, 4u) >= 0 )
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
