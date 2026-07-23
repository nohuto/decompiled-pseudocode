/*
 * XREFs of PiPnpRtlSetDeviceRegProperty @ 0x1409CDD3C
 * Callers:
 *     PiCMSetRegistryProperty @ 0x1409CD848 (PiCMSetRegistryProperty.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1409CDCF0 (PiDevCfgSetDeviceRegProp.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x140734798 (PiAuditDeviceEnableDisableRequest.c)
 *     _CmIsRootEnumeratedDevice @ 0x1408B63E8 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 */

__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int *a6,
        int a7,
        int a8)
{
  int v8; // r12d
  unsigned int *v9; // rbx
  unsigned int v13; // esi
  char v14; // r14
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // r9d
  unsigned int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // ebx
  struct _KTHREAD *CurrentThread; // rax
  bool v25; // zf
  int v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+44h] [rbp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v30; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a7;
  v9 = a6;
  v30 = 0;
  v27 = 0;
  v26 = 0;
  v13 = 0;
  v14 = 0;
  DestinationString = 0LL;
  v15 = a4 - 2;
  if ( v15 && (v16 = v15 - 1) != 0 )
  {
    v17 = v16 - 6;
    if ( !v17 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v14 = 1;
      goto LABEL_11;
    }
    v18 = v17 - 2;
    if ( !v18 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
      {
        v30 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 0xBu, (__int64)&v27, (__int64)&v26, (__int64)&v30, 0) < 0
          || v30 != 4
          || v27 != 4 )
        {
          v26 = 0;
        }
        v13 = *v9;
      }
      goto LABEL_11;
    }
    v19 = v18 - 5;
    if ( !v19 )
      return (unsigned int)-1073741790;
    v20 = v19 - 1;
    if ( !v20 )
      return (unsigned int)-1073741790;
    v21 = v20 - 12;
    if ( !v21 )
      return (unsigned int)-1073741790;
    v25 = v21 == 8;
  }
  else
  {
    v25 = CmIsRootEnumeratedDevice(a2) == 0;
  }
  if ( v25 )
    return (unsigned int)-1073741790;
LABEL_11:
  v22 = CmSetDeviceRegProp(a1, (__int64)a2, a3, a4, a5, (__int64)v9, v8, a8);
  if ( a4 == 11 && SeAuditingWithTokenForSubcategory(138, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    PiAuditDeviceEnableDisableRequest((__int64)&DestinationString, v26, v13, (v22 & 0x80000000) == 0);
  }
  if ( v14 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v22;
}
