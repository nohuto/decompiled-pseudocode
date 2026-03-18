/*
 * XREFs of RIMHidGetVendorAndProductID @ 0x14011A970
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

__int64 __fastcall RIMHidGetVendorAndProductID(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v3; // r15
  __int64 v5; // rbx
  int DeviceInterfacePropertyData; // esi
  int v8; // ebx
  CTouchProcessor **v10; // rcx
  char v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  CTouchProcessor **v16; // rcx
  char v17; // di
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  _DWORD v22[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v23; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a1;
  v22[0] = 5;
  v23 = 0;
  v5 = a1 + 192;
  v24 = 2;
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  a1 + 192,
                                  &DEVPKEY_DeviceInterface_HID_VendorId,
                                  0LL,
                                  0LL,
                                  2,
                                  &v23,
                                  &v24,
                                  v22);
  if ( DeviceInterfacePropertyData < 0 )
  {
    v10 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v10 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v10 & 1) == 0)
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        44,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v3,
        DeviceInterfacePropertyData);
    }
    return (unsigned int)DeviceInterfacePropertyData;
  }
  else
  {
    *a2 = v23;
    v23 = 0;
    v8 = IoGetDeviceInterfacePropertyData(v5, &DEVPKEY_DeviceInterface_HID_ProductId, 0LL, 0LL, v24, &v23, &v24, v22);
    if ( v8 < 0 )
    {
      v16 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v16 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v16 & 1) == 0)
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v17 = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = W32GetUserSessionState(v16);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 19392),
          3,
          1,
          45,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v3,
          v8);
      }
    }
    else
    {
      *a3 = v23;
    }
    return (unsigned int)v8;
  }
}
