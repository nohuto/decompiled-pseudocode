/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x1409FB394
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1409FAA40 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessRemove @ 0x1409FB008 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     McTemplateK0zzzt_EtwWriteTransfer @ 0x1405A8934 (McTemplateK0zzzt_EtwWriteTransfer.c)
 *     IoSetDeviceInterfaceState @ 0x1408B40B0 (IoSetDeviceInterfaceState.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C9D90 (_CmValidateDeviceInterfaceName.c)
 *     PnpAllocatePWSTR @ 0x1408D3DA4 (PnpAllocatePWSTR.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, BOOLEAN a2)
{
  __int64 *v2; // r14
  __int64 *v4; // rdi
  WCHAR *v5; // rbx
  int v6; // esi
  int PWSTR; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0LL;
  v6 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( v4 == (__int64 *)(a1 + 184) )
    return (unsigned int)v6;
  while ( !*((_BYTE *)v4 + 36) )
  {
LABEL_9:
    v4 = (__int64 *)*v4;
    if ( v4 == v2 )
      goto LABEL_10;
  }
  PWSTR = PnpAllocatePWSTR((_WORD *)v4[2], 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v5 = (WCHAR *)SourceString;
  v6 = PWSTR;
  if ( PWSTR >= 0 )
  {
    v6 = CmValidateDeviceInterfaceName(v9, SourceString);
    if ( v6 >= 0 )
    {
      *(_QWORD *)v5 = 0x5C003F003F005CLL;
      RtlInitUnicodeString(&DestinationString, v5);
      v6 = IoSetDeviceInterfaceState(&DestinationString, a2);
      if ( v6 >= 0 )
      {
        if ( (byte_140EEFD24 & 0x40) != 0 )
          McTemplateK0zzzt_EtwWriteTransfer(
            v11,
            v10,
            v12,
            *(const wchar_t **)(a1 + 8),
            *(const wchar_t **)(a1 + 16),
            v5,
            a2);
        ExFreePoolWithTag(v5, 0x57706E50u);
        v5 = 0LL;
        SourceString = 0LL;
        goto LABEL_9;
      }
    }
  }
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x57706E50u);
  return (unsigned int)v6;
}
