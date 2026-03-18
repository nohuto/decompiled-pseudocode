/*
 * XREFs of RIMGetMouseDeviceHardwareId @ 0x1400A7268
 * Callers:
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetPointerDevicePDO @ 0x1400A8474 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 */

__int64 __fastcall RIMGetMouseDeviceHardwareId(__int64 a1)
{
  unsigned __int16 v1; // si
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // ebx
  struct _DEVICE_OBJECT *v8; // r14
  NTSTATUS DevicePropertyData; // eax
  __int64 v10; // rax
  __int16 v11; // ax
  char v12; // di
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  char v18; // di
  bool v19; // si
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  PVOID Data; // [rsp+28h] [rbp-38h]
  PVOID v24[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+48h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+B0h] [rbp+50h]
  HANDLE Handle; // [rsp+B8h] [rbp+58h] BYREF

  v1 = 200;
  Object = 0LL;
  v24[0] = 0LL;
  Handle = 0LL;
  v3 = Win32AllocPoolZInitImpl(256LL, 0xC8uLL, 0x64696D55u);
  *(_QWORD *)(a1 + 880) = v3;
  if ( v3 )
  {
    *(_DWORD *)(a1 + 872) = 13107200;
    v7 = RIMGetDeviceObjectPointer((int)a1 + 192, v4, v5, (unsigned int)&Handle, (__int64)v24, (__int64)&Object);
    if ( v7 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v6 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v6 & 1) == 0)
        || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v18 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v6);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(UserSessionState + 19392),
          3,
          1,
          11,
          (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
          v7);
      }
    }
    else
    {
      v8 = (struct _DEVICE_OBJECT *)Object;
      ObfReferenceObject(Object);
      Pdo = 0LL;
      v7 = RIMGetPointerDevicePDO(v8);
      if ( v7 >= 0 )
      {
        while ( 1 )
        {
          LODWORD(Object) = v1;
          Data = *(PVOID *)(a1 + 880);
          Type = 0;
          DevicePropertyData = IoGetDevicePropertyData(
                                 Pdo,
                                 &DEVPKEY_Device_HardwareIds,
                                 0,
                                 0,
                                 v1,
                                 Data,
                                 (PULONG)&Object,
                                 &Type);
          v7 = DevicePropertyData;
          if ( DevicePropertyData != -1073741789 )
            break;
          GreDeleteFastMutex(*(char **)(a1 + 880));
          v1 = (unsigned __int16)Object;
          v10 = Win32AllocPoolZInitImpl(256LL, (unsigned __int16)Object, 0x64696D55u);
          *(_QWORD *)(a1 + 880) = v10;
          if ( !v10 )
          {
            v7 = -1073741801;
            goto LABEL_9;
          }
          *(_WORD *)(a1 + 874) = v1;
          *(_WORD *)(a1 + 872) = 0;
        }
        if ( DevicePropertyData >= 0 )
        {
          v11 = (__int16)Object;
          *(_WORD *)(a1 + 872) = (_WORD)Object;
          *(_WORD *)(a1 + 874) = v11;
        }
LABEL_9:
        ObfDereferenceObject(Pdo);
      }
      ZwClose(Handle);
      ObfDereferenceObject(v24[0]);
      ObfDereferenceObject(v8);
    }
  }
  else
  {
    v7 = -1073741801;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 19392),
      4,
      1,
      12,
      (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
