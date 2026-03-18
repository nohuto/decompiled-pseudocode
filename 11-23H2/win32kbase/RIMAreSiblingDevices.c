/*
 * XREFs of RIMAreSiblingDevices @ 0x1C0176B20
 * Callers:
 *     NtRIMAreSiblingDevices @ 0x1C0174BB0 (NtRIMAreSiblingDevices.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall RIMAreSiblingDevices(char *a1, char *a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rbx
  char *v5; // r12
  _UNKNOWN **v7; // r8
  unsigned int v8; // esi
  int v9; // r15d
  int v10; // eax
  int v11; // r12d
  BOOL v12; // r13d
  PVOID v13; // r14
  const void *v14; // rcx
  const void *v15; // rdx
  unsigned int v16; // eax
  int v17; // r9d
  char v18; // dl
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  PVOID v21; // [rsp+60h] [rbp-38h] BYREF

  v4 = a3;
  v5 = a2;
  Object = 0LL;
  v21 = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v7,
      (_DWORD)gRimLog,
      4,
      1,
      135,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids);
  }
  v8 = 0;
  v9 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v10 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &v21);
  v11 = v10;
  if ( v9 < 0 || v10 < 0 )
  {
    v8 = v10;
    if ( v9 < 0 )
      v8 = v9;
    v13 = Object;
  }
  else
  {
    v12 = 0;
    v13 = Object;
    v14 = (const void *)*((_QWORD *)Object + 49);
    if ( v14 )
    {
      v15 = (const void *)*((_QWORD *)v21 + 49);
      if ( v15 )
      {
        v16 = *((_DWORD *)Object + 100);
        if ( v16 )
        {
          v17 = *((_DWORD *)v21 + 100);
          if ( v17 )
          {
            if ( v16 == v17 )
            {
              v12 = RtlCompareMemory(v14, v15, v16) == v16;
              v4 = a3;
            }
          }
        }
      }
    }
    if ( a4 )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v12;
    }
    else
    {
      *v4 = v12;
    }
  }
  if ( v9 >= 0 )
    ObfDereferenceObject(v13);
  if ( v11 >= 0 )
    ObfDereferenceObject(v21);
  v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v18,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x88u,
      (__int64)&WPP_f9e9c6706b933e49bdb016a372583459_Traceguids,
      v8);
  return v8;
}
