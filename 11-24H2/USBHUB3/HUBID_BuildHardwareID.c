/*
 * XREFs of HUBID_BuildHardwareID @ 0x14001F1AC
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B7B0 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x14007FAA4 (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14000F98C (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x14001E2F0 (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x14001F648 (HUBID_GetUnknownId.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildHardwareID(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  const void **UnknownId; // rcx
  int v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // r9d
  unsigned __int16 v11; // cx
  _DWORD *v12; // r12
  unsigned int v13; // r14d
  char v14; // al
  const wchar_t *v15; // rdx
  bool v16; // zf
  int result; // eax
  const wchar_t *v18; // rdx
  _BYTE *v19; // [rsp+20h] [rbp-A9h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-89h] BYREF
  char v22; // [rsp+50h] [rbp-79h] BYREF

  *(_QWORD *)&DestinationString.Length = 9961472LL;
  DestinationString.Buffer = (wchar_t *)&v22;
  if ( a3 )
    *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 1644) & 0x2002) == 0 )
  {
    UnknownId = (const void **)HUBID_GetUnknownId(a1, a1, a3, a4);
    return HUBID_AssignIDString(UnknownId, 1, a2, (__int64)a3);
  }
  v8 = *(_DWORD *)(a1 + 1640);
  if ( (v8 & 1) != 0 && (v8 & 2) == 0 && a2 )
  {
    UnknownId = (const void **)(a1 + 2128);
    return HUBID_AssignIDString(UnknownId, 1, a2, (__int64)a3);
  }
  v9 = *(unsigned __int16 *)(a1 + 2004);
  v10 = *(unsigned __int16 *)(a1 + 2006);
  if ( *(_WORD *)(a1 + 1998) > 0x200u )
  {
    v12 = (_DWORD *)(a1 + 1652);
    v13 = *(unsigned __int16 *)(a1 + 2006);
    v15 = L"USB\\VID_%04X&PID_%04X&REV_%04X&MAUSB";
    LODWORD(v19) = *(unsigned __int16 *)(a1 + 2008);
    if ( (*(_DWORD *)(a1 + 1652) & 0x2000000) == 0 )
      v15 = L"USB\\VID_%04X&PID_%04X&REV_%04X";
  }
  else
  {
    v11 = *(_WORD *)(a1 + 2008);
    v12 = (_DWORD *)(a1 + 1652);
    v21[4] = 0;
    v21[0] = (v11 >> 12) + 48;
    v13 = v10;
    v21[2] = ((unsigned __int8)v11 >> 4) + 48;
    v21[1] = (HIBYTE(v11) & 0xF) + 48;
    v14 = *(_BYTE *)(a1 + 2008);
    v15 = L"USB\\VID_%04X&PID_%04X&REV_%S&MAUSB";
    v16 = (*v12 & 0x2000000) == 0;
    v21[3] = (v14 & 0xF) + 48;
    if ( v16 )
      v15 = L"USB\\VID_%04X&PID_%04X&REV_%S";
    v19 = v21;
  }
  result = RtlUnicodeStringPrintf(&DestinationString, v15);
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 1, a2, (__int64)a3);
    if ( result >= 0 )
    {
      v18 = L"USB\\VID_%04X&PID_%04X&MAUSB";
      if ( (*v12 & 0x2000000) == 0 )
        v18 = L"USB\\VID_%04X&PID_%04X";
      result = RtlUnicodeStringPrintf(&DestinationString, v18, v9, v13, v19);
      if ( result >= 0 )
      {
        UnknownId = (const void **)&DestinationString;
        return HUBID_AssignIDString(UnknownId, 1, a2, (__int64)a3);
      }
    }
  }
  return result;
}
