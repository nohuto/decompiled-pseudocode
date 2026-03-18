/*
 * XREFs of HUBID_BuildCompatibleID @ 0x14001E7F4
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x14001B7B0 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x14007FAA4 (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     HUBID_AssignIDString @ 0x14001E2F0 (HUBID_AssignIDString.c)
 *     HUBID_BuildClassCompatibleID @ 0x14001E3A0 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x14001EDAC (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildHubCompatibleID @ 0x14001F398 (HUBID_BuildHubCompatibleID.c)
 *     HUBID_GetUnknownId @ 0x14001F648 (HUBID_GetUnknownId.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildCompatibleID(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  __int64 v4; // r10
  const void **UnknownId; // rcx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-78h] BYREF
  __int128 *v9; // [rsp+28h] [rbp-70h]
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  __int128 v11; // [rsp+40h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-48h]
  __int128 v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+70h] [rbp-28h]

  v4 = a2;
  v10 = *(_OWORD *)L"USB\\Class_11&SubClass_00&Prot_00";
  v11 = *(_OWORD *)L"s_11&SubClass_00&Prot_00";
  v14 = *(_DWORD *)L"";
  v12 = *(_OWORD *)L"Class_00&Prot_00";
  v13 = *(_OWORD *)L"&Prot_00";
  v8 = 4456514LL;
  v9 = &v10;
  if ( a3 )
    *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 1644) & 0x2002) == 0 )
  {
    UnknownId = (const void **)HUBID_GetUnknownId(
                                 a1,
                                 a2,
                                 a3,
                                 a4,
                                 v8,
                                 v9,
                                 v10,
                                 *((_QWORD *)&v10 + 1),
                                 v11,
                                 *((_QWORD *)&v11 + 1),
                                 v12);
    return HUBID_AssignIDString(UnknownId, 2, v4, (__int64)a3);
  }
  v7 = *(_DWORD *)(a1 + 1640);
  if ( (v7 & 4) != 0 )
    return HUBID_BuildDeviceCompatibleID(
             a1,
             a2,
             a3,
             a4,
             v8,
             v9,
             v10,
             *((_QWORD *)&v10 + 1),
             v11,
             *((_QWORD *)&v11 + 1),
             v12);
  if ( (v7 & 2) != 0 )
    return HUBID_BuildHubCompatibleID(
             a1,
             a2,
             a3,
             a4,
             v8,
             v9,
             v10,
             *((_QWORD *)&v10 + 1),
             v11,
             *((_QWORD *)&v11 + 1),
             v12);
  if ( (v7 & 0x20000) != 0 )
  {
    UnknownId = (const void **)&v8;
    return HUBID_AssignIDString(UnknownId, 2, v4, (__int64)a3);
  }
  return HUBID_BuildClassCompatibleID(a1, a2, a3);
}
