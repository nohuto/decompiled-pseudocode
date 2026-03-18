/*
 * XREFs of RIMGetDeviceParent @ 0x140127E30
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMGetPointerDevicePDO @ 0x1400A8474 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1400B1270 (RIMGetDeviceObjectPointer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v4; // rbx
  PVOID v5; // rsi
  HANDLE v6; // r14
  unsigned int v7; // r13d
  int v8; // eax
  char v9; // si
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  int v15; // eax
  struct _DEVICE_OBJECT *v16; // r15
  ULONG v17; // eax
  void *Data; // rax
  char v19; // di
  bool v20; // r12
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  PDEVICE_OBJECT Pdo; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+B0h] [rbp+40h] BYREF
  PVOID v28; // [rsp+C0h] [rbp+50h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+58h] BYREF

  v28 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  v5 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  Type = 0;
  v7 = 0;
  Pdo = 0LL;
  RequiredSize = 0;
  if ( a1 )
  {
    v15 = RIMGetPointerDevicePDO(a1, &Pdo);
  }
  else
  {
    v8 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)(a2 + 192),
           a2,
           a3,
           &Handle,
           &v28,
           (PDEVICE_OBJECT *)&Object);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
      {
        LOBYTE(v4) = 1;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = (_BYTE)v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 19392),
          3,
          1,
          63,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v9);
      }
      return 0LL;
    }
    v5 = v28;
    if ( !v28 )
    {
      LODWORD(v28) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1400LL);
    }
    v4 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
    {
      LODWORD(v28) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1401LL);
    }
    ObfReferenceObject(v4);
    v15 = RIMGetPointerDevicePDO(v4, &Pdo);
    v6 = Handle;
  }
  v16 = Pdo;
  if ( v15 >= 0
    && IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) == -1073741789 )
  {
    v17 = RequiredSize;
    if ( !RequiredSize )
    {
      LODWORD(v28) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1424LL);
      v17 = RequiredSize;
    }
    Data = (void *)Win32AllocPoolZInitImpl(256LL, v17, 0x70707352u);
    *(_QWORD *)(a2 + 304) = Data;
    if ( Data )
    {
      LODWORD(v28) = IoGetDevicePropertyData(
                       v16,
                       &DEVPKEY_Device_Parent,
                       0,
                       0,
                       RequiredSize,
                       Data,
                       &RequiredSize,
                       &Type);
      if ( (int)v28 >= 0 )
      {
        v7 = 1;
        *(_DWORD *)(a2 + 312) = RequiredSize;
      }
      else
      {
        GreDeleteFastMutex(*(char **)(a2 + 304));
        *(_QWORD *)(a2 + 304) = 0LL;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v19 = 0;
        }
        v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v19;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v23,
            v22,
            *(_QWORD *)(v21 + 19392),
            3,
            1,
            64,
            (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
            (char)v28);
        }
      }
    }
  }
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( v6 )
  {
    ZwClose(v6);
    ObfDereferenceObject(v5);
    ObfDereferenceObject(v4);
  }
  return v7;
}
