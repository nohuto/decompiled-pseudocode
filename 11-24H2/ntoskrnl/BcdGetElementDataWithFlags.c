/*
 * XREFs of BcdGetElementDataWithFlags @ 0x1409BE80C
 * Callers:
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x1404AB350 (BiIsOfflineHandle.c)
 *     _ultow_s @ 0x140503260 (_ultow_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     BiAcquireBcdSyncMutant @ 0x1409BE268 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409BE32C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiGetObjectIdentifier @ 0x1409BEAC8 (BiGetObjectIdentifier.c)
 *     BiConvertElementFormatToValueType @ 0x1409BF620 (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x1409BF658 (BiConvertRegistryDataToElement.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdGetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  char v6; // r12
  void *v7; // rsi
  wchar_t *Buffer; // r14
  int v9; // ebx
  unsigned int v10; // eax
  int RegistryValue; // eax
  PVOID v12; // r12
  unsigned int v14; // r8d
  char IsOfflineHandle; // [rsp+40h] [rbp-81h]
  unsigned int v17; // [rsp+48h] [rbp-79h] BYREF
  void *v18; // [rsp+50h] [rbp-71h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-69h]
  void *v20; // [rsp+60h] [rbp-61h] BYREF
  PVOID P; // [rsp+68h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-51h] BYREF
  _DWORD *v23; // [rsp+80h] [rbp-41h]
  __int64 v24; // [rsp+88h] [rbp-39h]
  __int128 v25; // [rsp+90h] [rbp-31h] BYREF
  wchar_t DstBuf[24]; // [rsp+A0h] [rbp-21h] BYREF

  v24 = a4;
  v23 = a5;
  v17 = 0;
  DestinationString = 0LL;
  v25 = 0LL;
  if ( !a5 || !a4 && *a5 )
    return 3221225485LL;
  IsOfflineHandle = BiIsOfflineHandle(a1);
  v6 = IsOfflineHandle;
  if ( BiAcquireBcdSyncMutant(IsOfflineHandle) < 0 )
  {
    BiLogMessage();
    return v14;
  }
  else
  {
    v18 = 0LL;
    v20 = 0LL;
    v7 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( (int)BiGetObjectIdentifier(a1, &v25) >= 0 )
      RtlStringFromGUIDEx((unsigned int *)&v25, (__int64)&DestinationString, 1);
    Buffer = DestinationString.Buffer;
    v9 = BiOpenKey(a1, L"Elements", 0x20019u, &v18);
    if ( v9 < 0 )
    {
      BiLogMessage();
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v9 = -1073741823;
    }
    else if ( (int)BiOpenKey((__int64)v18, DstBuf, 0x20019u, &v20) < 0 )
    {
      BiLogMessage();
      v7 = v20;
      v9 = -1073741275;
    }
    else
    {
      v10 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
      v7 = v20;
      v19 = v10;
      RegistryValue = BiGetRegistryValue((__int64)v20, L"Element", 0LL, v10, &P, &v17);
      v12 = P;
      v9 = RegistryValue;
      if ( RegistryValue < 0 )
        BiLogMessage();
      else
        v9 = BiConvertRegistryDataToElement(a1, P, v17, a2, 0, v24, v23);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x4B444342u);
      v6 = IsOfflineHandle;
    }
    if ( Buffer )
      ExFreePool(Buffer);
    if ( v7 )
      BiCloseKey(v7);
    if ( v18 )
      BiCloseKey(v18);
    BiReleaseBcdSyncMutant(v6);
    return (unsigned int)v9;
  }
}
