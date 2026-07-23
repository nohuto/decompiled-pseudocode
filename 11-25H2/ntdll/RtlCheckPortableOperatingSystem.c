/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x180085220
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180085770 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  NTSTATUS v1; // ebx
  int RegistryValues; // eax
  _BYTE v5[8]; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h]
  const WCHAR *v7; // [rsp+40h] [rbp-9h]
  int *v8; // [rsp+48h] [rbp-1h]
  int v9; // [rsp+50h] [rbp+7h]
  int v10; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF

  v1 = 0;
  v10 = 0;
  Handle = 0LL;
  if ( (int)RtlpGetRegistryHandle(2LL, L"MiniNT", 0LL, &Handle) >= 0 )
  {
    NtClose(Handle);
    goto LABEL_6;
  }
  memset_thunk_772440563353939046(v5, 0, 0x70uLL);
  v7 = L"PortableOperatingSystem";
  v6 = 292;
  v8 = &v10;
  v9 = 0x4000000;
  RegistryValues = RtlpQueryRegistryValues(2LL, 0LL, v5, 0LL, 0LL, 1);
  v1 = RegistryValues;
  if ( RegistryValues != -1073741772 )
  {
    if ( RegistryValues < 0 )
      return v1;
LABEL_6:
    *IsPortable = v10 != 0;
    return v1;
  }
  return -1073741275;
}
