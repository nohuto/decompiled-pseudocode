/*
 * XREFs of USBCntrlGetSetBoolean @ 0x140041B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400083F8 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     USBHwGetSetByte @ 0x14003BF20 (USBHwGetSetByte.c)
 */

__int64 __fastcall USBCntrlGetSetBoolean(
        __int64 a1,
        __int64 a2,
        int a3,
        _BYTE *a4,
        unsigned int a5,
        signed __int8 a6,
        _DWORD *a7)
{
  char v7; // bl
  __int64 v8; // r13
  __int64 v9; // r14
  char v11; // dl
  int v12; // edx
  int v13; // r8d
  int SetByte; // r14d
  int v15; // [rsp+20h] [rbp-68h]

  v7 = 1;
  v8 = a2;
  v9 = *(_QWORD *)(a2 + 128) + 16LL * a5;
  if ( a3 )
  {
    v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        0xAu,
        0xEu,
        (__int64)&WPP_cb4bf16137b131813c66ed995a08af31_Traceguids);
    SetByte = USBHwGetSetByte(a1, *(_DWORD *)(v8 + 80), *(_DWORD *)(v9 + 8), *(_DWORD *)(v8 + 76) - 6, a4, a6);
    if ( SetByte < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = v7;
        LOBYTE(v13) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v12, v13, WPP_GLOBAL_Control->DeviceExtension);
      }
    }
    else if ( a6 >= 0 )
    {
      *a7 = 4;
    }
    return (unsigned int)SetByte;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v7;
      LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
    }
    return 3221225990LL;
  }
}
