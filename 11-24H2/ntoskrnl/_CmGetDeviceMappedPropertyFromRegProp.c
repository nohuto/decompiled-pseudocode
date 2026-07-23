/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0
 * Callers:
 *     _PnpDispatchDevice @ 0x1408CB5A0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409AB838 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409AD640 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     _PnpMultiSzGetLen @ 0x1409AD600 (_PnpMultiSzGetLen.c)
 *     _PnpParseIndirectInfString @ 0x1409AD7F4 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x1409AD8C4 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  ULONG_PTR v25; // rax
  unsigned int Len; // r9d
  unsigned int v27; // r9d
  GUID *Pool2; // rdi
  unsigned int v29; // r9d
  int v30; // eax
  GUID *v31; // r11
  __int64 v32; // r11
  unsigned int v33; // [rsp+40h] [rbp-B1h] BYREF
  int v34; // [rsp+44h] [rbp-ADh] BYREF
  __int64 v35; // [rsp+48h] [rbp-A9h]
  __int64 v36; // [rsp+50h] [rbp-A1h]
  int v37; // [rsp+58h] [rbp-99h] BYREF
  int v38; // [rsp+5Ch] [rbp-95h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-91h] BYREF
  __int64 v40; // [rsp+68h] [rbp-89h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-81h] BYREF
  GUID Guid; // [rsp+80h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-61h] BYREF

  v10 = a6;
  v35 = a1;
  v40 = a3;
  v36 = a2;
  v34 = 0;
  v38 = 0;
  v33 = 0;
  v37 = 0;
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
      v22 = v35;
      v33 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v35, v36, a3, 0x1Bu, (__int64)&v34, (__int64)&v37, (__int64)&v33, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_24;
      if ( v34 != *((_DWORD *)v12 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v12 + 2);
      if ( v11 >= *a8 )
      {
        LOBYTE(v10->Data1) = -(v37 != 0);
        return (unsigned int)DeviceRegProp;
      }
      return (unsigned int)-1073741789;
    case 9u:
LABEL_39:
      v27 = *((_DWORD *)v12 + 3);
      v22 = v35;
      v33 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v35, v36, a3, v27, (__int64)&v34, (__int64)SourceString, (__int64)&v33, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_24;
      if ( v34 != *((_DWORD *)v12 + 4) )
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
  v19 = v36;
  v20 = v35;
  *a8 = v11;
  DeviceRegProp = CmGetDeviceRegProp(v20, v19, a3, v18, (__int64)&v34, (__int64)v10, (__int64)a8, a9);
  if ( DeviceRegProp && DeviceRegProp != -1073741789 )
    goto LABEL_23;
  if ( v34 != *((_DWORD *)v12 + 4) )
    return (unsigned int)-1073741811;
  v21 = *((_DWORD *)v12 + 2);
  *a5 = v21;
  if ( v21 != 18 )
    goto LABEL_22;
  v25 = *a8;
  v33 = *a8;
  if ( DeviceRegProp )
  {
    Pool2 = (GUID *)ExAllocatePool2(0x100uLL, v25, 0x52504E50u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v29 = v18;
    v23 = v36;
    v22 = v35;
    v30 = CmGetDeviceRegProp(v35, v36, v40, v29, (__int64)&v38, (__int64)Pool2, (__int64)&v33, a9);
    if ( v30 < 0 )
    {
      DeviceRegProp = v30;
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
    if ( v33 < 2 )
      goto LABEL_53;
    v31 = Pool2;
  }
  else
  {
    if ( v11 < 2 )
      goto LABEL_32;
    Pool2 = 0LL;
    v31 = v10;
    if ( !v10 )
      goto LABEL_32;
  }
  if ( (unsigned __int8)PnpParseIndirectInfString(v31) || (unsigned __int8)PnpParseIndirectResourceString(v32) )
    *a5 = 25;
  if ( Pool2 )
LABEL_53:
    ExFreePoolWithTag(Pool2, 0);
LABEL_22:
  if ( DeviceRegProp )
  {
LABEL_23:
    v22 = v35;
LABEL_24:
    v23 = v36;
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
