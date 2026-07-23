/*
 * XREFs of _CmSetInstallerClassRegPropWorker @ 0x140819A14
 * Callers:
 *     _CmSetInstallerClassRegProp @ 0x1408198B0 (_CmSetInstallerClassRegProp.c)
 * Callees:
 *     _CmClassPropertyRead @ 0x14044F170 (_CmClassPropertyRead.c)
 *     _MapCmClassPropertyToRegValue @ 0x140462230 (_MapCmClassPropertyToRegValue.c)
 *     _CmClassPropertyWrite @ 0x14069D150 (_CmClassPropertyWrite.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140833A70 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _CmOpenInstallerClassRegKey @ 0x1409AE8F4 (_CmOpenInstallerClassRegKey.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409C42C4 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall CmSetInstallerClassRegPropWorker(
        int a1,
        int a2,
        void *a3,
        int a4,
        unsigned int a5,
        void *a6,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int v8; // ebx
  void *v13; // rbp
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v17; // edx
  HANDLE v18; // rcx
  const wchar_t *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r9d
  int v23; // eax
  int v25; // [rsp+28h] [rbp-40h]
  HANDLE v26; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF

  v8 = 0;
  v26 = 0LL;
  Handle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = a6;
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmClassPropertyRead(a4) )
    goto LABEL_54;
  if ( !CmClassPropertyWrite(a4) )
    return (unsigned int)-1073741790;
  switch ( a4 )
  {
    case 8:
    case 13:
      v16 = 1;
      break;
    case 18:
    case 19:
      v16 = 7;
      break;
    case 24:
      v16 = 3;
      break;
    default:
      if ( a4 != 26 && (unsigned int)(a4 - 27) >= 2 )
        return (unsigned int)-1073741264;
      v16 = 4;
      break;
  }
  if ( a5 != v16 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_30;
    return (unsigned int)-1073741811;
  }
  if ( a4 != 24
    || !SecurityDescriptorLength
    || RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
    && RtlLengthSecurityDescriptor(v13) == SecurityDescriptorLength )
  {
LABEL_30:
    if ( !a3 )
    {
      v8 = CmOpenInstallerClassRegKey(a1, a2, v14, v15, 33554438, 0, (__int64)&v26, 0LL);
      if ( v8 < 0 )
        goto LABEL_55;
    }
    if ( a4 == 8 || a4 == 13 || (unsigned int)(a4 - 18) < 2 )
    {
      v18 = a3;
      if ( !a3 )
        v18 = v26;
    }
    else
    {
      v17 = (int)v26;
      if ( a3 )
        v17 = (int)a3;
      v8 = PnpOpenPropertiesKey(a1, v17, 0, 2, 1, v25, (__int64)&Handle);
      if ( v8 < 0 )
        goto LABEL_55;
      v18 = Handle;
    }
    v19 = MapCmClassPropertyToRegValue((__int64)v18, a4);
    if ( v19 )
    {
      if ( SecurityDescriptorLength )
      {
        v23 = PnpCtxRegSetValue(v20, v20, v19, a5, v13, SecurityDescriptorLength);
        if ( v23 == -1073741444 )
        {
          v8 = -1073741772;
          goto LABEL_55;
        }
        if ( v23 < 0 )
        {
          v8 = v23;
          goto LABEL_55;
        }
      }
      else
      {
        v21 = PnpCtxRegDeleteValue(v20, v20, v19);
        v8 = v21;
        if ( v21 == -1073741772 || v21 == -1073741444 )
          v8 = -1073741275;
        if ( v8 < 0 )
          goto LABEL_55;
      }
      v22 = (int)v26;
      if ( a3 )
        v22 = (int)a3;
      CmRaisePropertyChangeEvent(a1, a2, 2, v22, a4);
      goto LABEL_55;
    }
LABEL_54:
    v8 = -1073741264;
    goto LABEL_55;
  }
  v8 = -1073741811;
LABEL_55:
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    ZwClose(v26);
  return (unsigned int)v8;
}
