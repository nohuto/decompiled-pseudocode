/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x1409B5B50
 * Callers:
 *     _PnpDispatchDevice @ 0x1408CDBB0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409B44A8 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409B62B0 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A80898 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     _PnpMultiSzGetLen @ 0x1409B6270 (_PnpMultiSzGetLen.c)
 *     _PnpParseIndirectInfString @ 0x1409B6464 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x1409B6534 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        GUID *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  GUID *v10; // r14
  unsigned int v11; // r12d
  DEVPROPKEY **v12; // rdi
  unsigned int v13; // r8d
  DEVPROPKEY *v14; // rdx
  int DeviceRegProp; // ebx
  __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // r12
  int v24; // eax
  unsigned int Len; // r9d
  unsigned int v26; // r9d
  GUID *Pool2; // rdi
  unsigned int v28; // r9d
  int v29; // eax
  GUID *v30; // r11
  __int64 v31; // r11
  unsigned int v32; // [rsp+40h] [rbp-B1h] BYREF
  int v33; // [rsp+44h] [rbp-ADh] BYREF
  __int64 v34; // [rsp+48h] [rbp-A9h]
  __int64 v35; // [rsp+50h] [rbp-A1h]
  int v36; // [rsp+58h] [rbp-99h] BYREF
  int v37; // [rsp+5Ch] [rbp-95h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-91h] BYREF
  __int64 v39; // [rsp+68h] [rbp-89h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-81h] BYREF
  GUID Guid; // [rsp+80h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-61h] BYREF

  v10 = a6;
  v34 = a1;
  v39 = a3;
  v35 = a2;
  v33 = 0;
  v37 = 0;
  v32 = 0;
  v36 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    if ( !a7 )
      v10 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  v12 = &CmDeviceRegPropMap;
  v13 = 0;
  while ( 1 )
  {
    v14 = *v12;
    if ( *(_DWORD *)(a4 + 16) == (*v12)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v17 )
        break;
    }
    ++v13;
    v12 += 3;
    if ( v13 >= 0x21 )
      return (unsigned int)-1073741802;
  }
  v18 = *((_DWORD *)v12 + 3);
  switch ( v18 )
  {
    case 0x25u:
      goto LABEL_39;
    case 0x1Bu:
      v22 = v34;
      v32 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v34, v35, a3, 0x1Bu, (__int64)&v33, (__int64)&v36, (__int64)&v32, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_24;
      if ( v33 != *((_DWORD *)v12 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v12 + 2);
      if ( v11 >= *a8 )
      {
        LOBYTE(v10->Data1) = -(v36 != 0);
        return (unsigned int)DeviceRegProp;
      }
      return (unsigned int)-1073741789;
    case 9u:
LABEL_39:
      v26 = *((_DWORD *)v12 + 3);
      v22 = v34;
      v32 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v34, v35, a3, v26, (__int64)&v33, (__int64)SourceString, (__int64)&v32, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_24;
      if ( v33 != *((_DWORD *)v12 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 16;
      *a5 = *((_DWORD *)v12 + 2);
      if ( v11 >= *a8 )
      {
        SourceString[38] = 0;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
          if ( DeviceRegProp >= 0 )
          {
            *v10 = Guid;
            return (unsigned int)DeviceRegProp;
          }
        }
        goto LABEL_24;
      }
      return (unsigned int)-1073741789;
    case 0x19u:
      return (unsigned int)-1073741637;
  }
  v19 = v35;
  v20 = v34;
  *a8 = v11;
  DeviceRegProp = CmGetDeviceRegProp(v20, v19, a3, v18, (__int64)&v33, (__int64)v10, (__int64)a8, a9);
  if ( DeviceRegProp && DeviceRegProp != -1073741789 )
    goto LABEL_23;
  if ( v33 != *((_DWORD *)v12 + 4) )
    return (unsigned int)-1073741811;
  v21 = *((_DWORD *)v12 + 2);
  *a5 = v21;
  if ( v21 != 18 )
    goto LABEL_22;
  v32 = *a8;
  if ( DeviceRegProp )
  {
    Pool2 = (GUID *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v28 = v18;
    v23 = v35;
    v22 = v34;
    v29 = CmGetDeviceRegProp(v34, v35, v39, v28, (__int64)&v37, (__int64)Pool2, (__int64)&v32, a9);
    if ( v29 < 0 )
    {
      DeviceRegProp = v29;
      ExFreePoolWithTag(Pool2, 0);
LABEL_25:
      if ( DeviceRegProp == -1073741810 )
      {
        v24 = CmOpenDeviceRegKey(v22, v23, 16, 0, 1, 0, (__int64)&Handle, 0LL);
        DeviceRegProp = v24;
        if ( v24 )
        {
          if ( v24 != -1073741810 && v24 != -1073741632 )
            return (unsigned int)-1073741823;
        }
        else
        {
          ZwClose(Handle);
          return (unsigned int)-1073741275;
        }
      }
      return (unsigned int)DeviceRegProp;
    }
    if ( v32 < 2 )
      goto LABEL_53;
    v30 = Pool2;
  }
  else
  {
    if ( v11 < 2 )
      goto LABEL_32;
    Pool2 = 0LL;
    v30 = v10;
    if ( !v10 )
      goto LABEL_32;
  }
  if ( (unsigned __int8)PnpParseIndirectInfString(v30) || (unsigned __int8)PnpParseIndirectResourceString(v31) )
    *a5 = 25;
  if ( Pool2 )
LABEL_53:
    ExFreePoolWithTag(Pool2, 0);
LABEL_22:
  if ( DeviceRegProp )
  {
LABEL_23:
    v22 = v34;
LABEL_24:
    v23 = v35;
    goto LABEL_25;
  }
LABEL_32:
  if ( *a5 == 8210 )
  {
    Len = PnpMultiSzGetLen(v10);
    if ( 2 * (unsigned __int64)Len > *a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = 0;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
  }
  if ( *a5 == 18 && !*a8 )
  {
    DeviceRegProp = -1073741275;
    *a8 = 0;
    *a5 = 0;
  }
  return (unsigned int)DeviceRegProp;
}
