/*
 * XREFs of PiDeviceRegistration @ 0x1409BAFC8
 * Callers:
 *     PpDeviceRegistration @ 0x1409BAF3C (PpDeviceRegistration.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409BB950 (PnpCleanupDeviceRegistryValues.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409BB294 (PpForEachDeviceInstanceDriver.c)
 *     IopAllocateUnicodeString @ 0x1409BB8B4 (IopAllocateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDeviceRegistration(unsigned __int16 *a1, char a2, UNICODE_STRING *a3)
{
  WCHAR *v6; // r15
  unsigned int v7; // ecx
  _WORD *v8; // rdi
  __int64 v9; // rdx
  _WORD *Pool2; // rax
  int DeviceRegProp; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _WORD *v15; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  char v17; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+50h] BYREF
  int v19; // [rsp+A8h] [rbp+58h] BYREF

  v19 = 0;
  v18 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  if ( a3 )
  {
    *(_DWORD *)&a3->Length = 0;
    a3->Buffer = 0LL;
  }
  v7 = *a1;
  if ( (unsigned __int16)v7 <= 2u )
    goto LABEL_36;
  v8 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( v8[((unsigned __int64)v7 >> 1) - 1] == 92 )
  {
    LOWORD(v7) = v7 - 2;
    *a1 = v7;
  }
  v9 = a1[1];
  if ( (unsigned __int16)v9 < 2u || !v8 )
  {
    v8 = 0LL;
    goto LABEL_16;
  }
  if ( (unsigned __int16)v7 > (unsigned __int16)v9 )
  {
LABEL_36:
    DeviceRegProp = -1073741811;
    goto LABEL_41;
  }
  if ( (_WORD)v7 )
  {
    if ( *v8
      && ((_WORD)v7 != (_WORD)v9 || v8[((unsigned __int64)(unsigned __int16)v7 >> 1) - 1])
      && ((unsigned __int16)v7 > (unsigned __int64)(v9 - 2)
       || v8[((unsigned __int64)(unsigned __int16)v7 >> 1) - 1] && v8[(unsigned __int64)(unsigned __int16)v7 >> 1]) )
    {
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, (unsigned __int16)v7 + 2LL, 0x75737050u);
      v8 = Pool2;
      if ( !Pool2 )
      {
LABEL_32:
        DeviceRegProp = -1073741670;
        goto LABEL_41;
      }
      memmove(Pool2, *((const void **)a1 + 1), *a1);
      v8[(unsigned __int64)*a1 >> 1] = 0;
    }
  }
  else if ( *v8 )
  {
    v15 = (_WORD *)ExAllocatePool2(0x100uLL, 2uLL, 0x75737050u);
    v8 = v15;
    if ( !v15 )
      goto LABEL_32;
    *v15 = 0;
  }
LABEL_16:
  v18 = 512;
  v6 = (WCHAR *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x20207050u);
  if ( !v6 )
    goto LABEL_32;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v8,
                    0LL,
                    5u,
                    (__int64)&v19,
                    (__int64)v6,
                    (__int64)&v18,
                    0);
  PnpUnicodeStringToWstrFree(v8, (__int64)a1);
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp != -1073741275 )
      goto LABEL_41;
  }
  else
  {
    DeviceRegProp = -1073741772;
    if ( v18 <= 2 || v19 != 1 )
      goto LABEL_41;
    RtlInitUnicodeStringEx(&DestinationString, v6);
    if ( a3 )
    {
      DeviceRegProp = IopAllocateUnicodeString(a3);
      if ( DeviceRegProp >= 0 )
      {
        RtlCopyUnicodeString(a3, &DestinationString);
        DeviceRegProp = 0;
      }
      if ( DeviceRegProp < 0 )
      {
LABEL_42:
        if ( a3->Length )
        {
          ExFreePoolWithTag(a3->Buffer, 0);
          a3->Buffer = 0LL;
          *(_DWORD *)&a3->Length = 0;
        }
LABEL_28:
        if ( !v6 )
          return (unsigned int)DeviceRegProp;
        goto LABEL_27;
      }
    }
  }
  v17 = a2;
  DeviceRegProp = PpForEachDeviceInstanceDriver(a1, v12, &v17);
  if ( DeviceRegProp < 0 )
  {
    if ( a2 )
    {
      v17 = 0;
      PpForEachDeviceInstanceDriver(a1, v13, &v17);
    }
LABEL_41:
    if ( !a3 )
      goto LABEL_28;
    goto LABEL_42;
  }
LABEL_27:
  ExFreePoolWithTag(v6, 0);
  return (unsigned int)DeviceRegProp;
}
