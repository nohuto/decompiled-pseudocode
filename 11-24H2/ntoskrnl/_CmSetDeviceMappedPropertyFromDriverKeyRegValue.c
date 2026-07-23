/*
 * XREFs of _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1409804D4
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140980AE0 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140402380 (RtlUnalignedStringCchLengthW.c)
 *     RtlTimeToTimeFields @ 0x140419FA0 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromDriverKeyRegValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PLARGE_INTEGER Time,
        ULONG a6)
{
  int v8; // r11d
  DEVPROPKEY **v9; // rdx
  unsigned int i; // r9d
  DEVPROPKEY *v13; // r8
  DEVPROPKEY **v14; // rsi
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-60h]
  __int64 v23; // [rsp+28h] [rbp-58h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+50h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+60h] [rbp-20h] BYREF

  Handle = 0LL;
  pcchLength = 0LL;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = &off_140B406A0;
  TimeFields = 0LL;
  for ( i = 0; i < 0xD; ++i )
  {
    v13 = *v9;
    v14 = v9;
    if ( v8 == (*v9)->pid )
    {
      v19 = *(_QWORD *)a3 - *(_QWORD *)&v13->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v13->fmtid.Data1 )
        v19 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v13->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v14 = 0LL;
    v9 += 4;
  }
  if ( !v14 )
    return (unsigned int)-1073741802;
  v15 = *((_DWORD *)v14 + 2);
  if ( a4 != v15 )
  {
    if ( a4 == 25 )
    {
      if ( v15 == 18 )
        goto LABEL_6;
    }
    else if ( a4 < 2 )
    {
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
LABEL_6:
  v16 = CmOpenDeviceRegKey(a1, a2, 18, 0, 2, 1, (__int64)&Handle, 0LL);
  if ( v16 >= 0 )
  {
    v17 = PnpCtxRegSetValue(a6, Handle, (__int64)v14[2], *((unsigned int *)v14 + 6), (__int64)Time, a6);
    if ( v17 == -1073741444 )
    {
      v16 = -1073741772;
    }
    else if ( v17 < 0 )
    {
      v16 = v17;
    }
    else if ( *(_DWORD *)(a3 + 16) == 2 )
    {
      v20 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
        v20 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
      if ( !v20 )
      {
        RtlTimeToTimeFields(Time, &TimeFields);
        LODWORD(v23) = TimeFields.Year;
        LODWORD(v22) = TimeFields.Day;
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%d-%d-%d", (unsigned int)TimeFields.Month, v22, v23) >= 0
          && RtlUnalignedStringCchLengthW(pszDest, 0xBuLL, &pcchLength) >= 0 )
        {
          PnpCtxRegSetValue(v21, Handle, (__int64)L"DriverDate", 1LL, (__int64)pszDest, 2 * (pcchLength + 1));
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v16;
}
