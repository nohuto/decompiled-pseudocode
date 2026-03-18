/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x1407267A4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x1406A8BB0 (ZwPlugPlayControl.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140726678 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, __int64 *a2)
{
  __int64 Pool2; // rax
  int DeviceRegProp; // edi
  _DWORD *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rcx
  int v9; // edx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF
  unsigned int v17; // [rsp+B0h] [rbp+30h] BYREF

  v16 = 0;
  DestinationString = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  *a2 = Pool2;
  if ( !Pool2 )
  {
    DeviceRegProp = -1073741670;
    PiPnpRtlFreeDeviceDeleteInfo(0LL);
    *a2 = 0LL;
    return (unsigned int)DeviceRegProp;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v6 = (_DWORD *)*a2;
  if ( *a2 )
  {
    v15 = 0LL;
    v13 = 0LL;
    v12 = DestinationString;
    v14 = 0LL;
    v9 = ZwPlugPlayControl(14LL, (__int64)&v12);
    if ( v9 >= 0 )
      *v6 = v14;
    v7 = (_DWORD *)*a2;
    v8 = (_DWORD *)*a2;
    if ( v9 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  *v7 = 45;
LABEL_9:
  v17 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    (_DWORD)SourceString,
                    0,
                    9,
                    (__int64)&v16,
                    (__int64)(v8 + 1),
                    (__int64)&v17,
                    0);
  if ( DeviceRegProp >= 0 && v16 == 1 && v17 > 2 )
  {
    *(_WORD *)(*a2 + 80) = 0;
  }
  else
  {
    DeviceRegProp = 0;
    *(_WORD *)(*a2 + 4) = 0;
  }
  return (unsigned int)DeviceRegProp;
}
