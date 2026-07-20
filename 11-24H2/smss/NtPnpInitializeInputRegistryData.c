/*
 * XREFs of NtPnpInitializeInputRegistryData @ 0x14001EAAC
 * Callers:
 *     NtPnpOpenDeviceInterfaceKey @ 0x14001EBFC (NtPnpOpenDeviceInterfaceKey.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14001DA14 (RtlStringCchLengthW.c)
 */

__int64 __fastcall NtPnpInitializeInputRegistryData(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        size_t pcchLength)
{
  size_t v9; // r11
  NTSTATUS v10; // edx
  __int64 v11; // r11

  v9 = pcchLength;
  v10 = 0;
  pcchLength = 0LL;
  *(_DWORD *)(v9 + 12) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 44) = 0;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 36) = 0;
  *(_DWORD *)v9 = 48;
  *(_DWORD *)(v9 + 8) = 4;
  *(_DWORD *)(v9 + 28) = 1;
  *(_DWORD *)(v9 + 32) = a6;
  *(_DWORD *)(v9 + 40) = 16;
  *(_QWORD *)(v9 + 16) = a3;
  if ( a3 )
  {
    v10 = RtlStringCchLengthW(a3, 0x7FFFFFFFuLL, &pcchLength);
    if ( v10 >= 0 )
      *(_DWORD *)(v11 + 24) = 2 * pcchLength + 2;
  }
  return (unsigned int)v10;
}
