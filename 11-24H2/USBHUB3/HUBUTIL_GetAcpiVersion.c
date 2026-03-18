/*
 * XREFs of HUBUTIL_GetAcpiVersion @ 0x140092A58
 * Callers:
 *     DriverEntry @ 0x14009603C (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBUTIL_GetAcpiVersion(_WORD *a1)
{
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v3; // rdi
  NTSTATUS v4; // ebx
  ULONG v5; // ebx
  unsigned __int8 *v6; // rax
  ULONG SystemInformationLength; // [rsp+38h] [rbp+10h] BYREF

  SystemInformationLength = 16;
  Pool2 = (unsigned __int8 *)ExAllocatePool2(256LL, 16LL, 1430795125LL);
  v3 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *((_DWORD *)Pool2 + 3) = 0;
  *(_DWORD *)Pool2 = 1094930505;
  *((_DWORD *)Pool2 + 1) = 1;
  *((_DWORD *)Pool2 + 2) = 1346584902;
  v4 = ZwQuerySystemInformation(
         SystemFirmwareTableInformation,
         Pool2,
         SystemInformationLength,
         &SystemInformationLength);
  if ( v4 != -1073741789 )
  {
LABEL_10:
    ExFreePoolWithTag(v3, 0x55483375u);
    return (unsigned int)v4;
  }
  ExFreePoolWithTag(v3, 0x55483375u);
  if ( SystemInformationLength <= 0x10 )
    return (unsigned int)-1073741306;
  v5 = SystemInformationLength - 16;
  if ( SystemInformationLength - 16 < 0x84 )
    return (unsigned int)-1073741306;
  v6 = (unsigned __int8 *)ExAllocatePool2(256LL, SystemInformationLength, 1430795125LL);
  v3 = v6;
  if ( v6 )
  {
    *(_DWORD *)v6 = 1094930505;
    *((_DWORD *)v6 + 1) = 1;
    *((_DWORD *)v6 + 2) = 1346584902;
    *((_DWORD *)v6 + 3) = v5;
    v4 = ZwQuerySystemInformation(SystemFirmwareTableInformation, v6, SystemInformationLength, &SystemInformationLength);
    if ( v4 >= 0 )
    {
      *a1 = v3[147] | (v3[24] << 8);
      v4 = 0;
    }
    goto LABEL_10;
  }
  return (unsigned int)-1073741670;
}
