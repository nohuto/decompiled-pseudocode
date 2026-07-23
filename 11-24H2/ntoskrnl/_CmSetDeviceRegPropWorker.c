/*
 * XREFs of _CmSetDeviceRegPropWorker @ 0x14097BFD0
 * Callers:
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 * Callees:
 *     _CmDevicePropertyRead @ 0x140434BB0 (_CmDevicePropertyRead.c)
 *     _MapCmDevicePropertyToRegValue @ 0x140436300 (_MapCmDevicePropertyToRegValue.c)
 *     _MapCmDevicePropertyToRegType @ 0x140469874 (_MapCmDevicePropertyToRegType.c)
 *     _CmDevicePropertyWrite @ 0x140483440 (_CmDevicePropertyWrite.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140833A70 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _CmIsRootDevice @ 0x140928D54 (_CmIsRootDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x14097AAB4 (_PnpCtxRegDeleteValue.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _CmRaisePropertyChangeEvent @ 0x1409C42C4 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall CmSetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        unsigned int a5,
        _DWORD *a6,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int v8; // ebx
  _DWORD *v13; // rbp
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  __int64 v18; // rcx
  HANDLE v19; // rdx
  int v20; // eax
  int v22; // eax
  int v23; // r9d
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0;
  Handle[0] = 0LL;
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
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmDevicePropertyRead(a1, a4) )
    goto LABEL_34;
  if ( !CmDevicePropertyWrite(v14, a4) )
    return (unsigned int)-1073741790;
  v15 = MapCmDevicePropertyToRegType(a4);
  if ( !v15 )
    return (unsigned int)-1073741264;
  if ( a5 != v15 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_12;
    return (unsigned int)-1073741811;
  }
  if ( a4 == 11 )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_12;
    if ( v13 && SecurityDescriptorLength == 4 )
    {
      if ( *v13 && CmIsRootDevice(a2) )
      {
        v8 = -1073741808;
        goto LABEL_21;
      }
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 == 24
    && SecurityDescriptorLength
    && (!RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
     || RtlLengthSecurityDescriptor(v13) != SecurityDescriptorLength) )
  {
    v8 = -1073741811;
    goto LABEL_21;
  }
LABEL_12:
  if ( a3 || (v8 = CmOpenDeviceRegKey(a1, (__int64)a2, 16, 0, 33554434, 0, (__int64)Handle, 0LL), v8 >= 0) )
  {
    if ( a4 == 8 )
      goto LABEL_31;
    v17 = MapCmDevicePropertyToRegValue(v16, a4);
    if ( v17 )
    {
      v19 = Handle[0];
      if ( SecurityDescriptorLength )
      {
        if ( a3 )
          v19 = a3;
        v22 = PnpCtxRegSetValue(v18, v19, v17, a5, v13, SecurityDescriptorLength);
        if ( v22 == -1073741444 )
        {
          v8 = -1073741810;
          goto LABEL_21;
        }
        if ( v22 < 0 )
        {
          v8 = v22;
          goto LABEL_21;
        }
      }
      else
      {
        if ( a3 )
          v19 = a3;
        v20 = PnpCtxRegDeleteValue(v18, v19, v17);
        v8 = v20;
        if ( v20 == -1073741772 || v20 == -1073741444 )
          v8 = -1073741275;
      }
      if ( v8 < 0 )
        goto LABEL_21;
LABEL_31:
      v23 = (int)Handle[0];
      if ( a3 )
        v23 = (int)a3;
      CmRaisePropertyChangeEvent(a1, (_DWORD)a2, 1, v23, a4);
      goto LABEL_21;
    }
LABEL_34:
    v8 = -1073741264;
  }
LABEL_21:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v8;
}
