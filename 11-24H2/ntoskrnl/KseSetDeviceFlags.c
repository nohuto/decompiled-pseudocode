/*
 * XREFs of KseSetDeviceFlags @ 0x14073C170
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     KsepRegistryCreateKey @ 0x14073E658 (KsepRegistryCreateKey.c)
 *     KsepRegistryCloseKey @ 0x140942610 (KsepRegistryCloseKey.c)
 *     KsepStringFree @ 0x140943154 (KsepStringFree.c)
 *     KsepStringTransform @ 0x140944488 (KsepStringTransform.c)
 */

__int64 __fastcall KseSetDeviceFlags(__int64 a1, const WCHAR *a2, __int64 a3)
{
  NTSTATUS v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 Data; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  Data = a3;
  v6 = 0LL;
  v7 = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( dword_140E66C14 != 2 || (KseEngine & 2) != 0 )
  {
    v4 = -1073741823;
  }
  else if ( a1 && a2 )
  {
    v4 = KsepStringTransform(&v6, a1);
    if ( v4 < 0 )
      goto LABEL_13;
    v4 = KsepRegistryCreateKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
           v7,
           &KeyHandle);
    if ( v4 == -1073741772 )
    {
      v4 = KsepRegistryCreateKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility",
             L"Device",
             &KeyHandle);
      if ( v4 < 0 )
        goto LABEL_13;
      KsepRegistryCloseKey(KeyHandle);
      KeyHandle = 0LL;
      v4 = KsepRegistryCreateKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
             v7,
             &KeyHandle);
    }
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
    }
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_13:
  KsepStringFree(&v6);
  if ( KeyHandle )
    KsepRegistryCloseKey(KeyHandle);
  return (unsigned int)v4;
}
