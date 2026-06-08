/*
 * XREFs of DisplayGenAddr @ 0x140028380
 * Callers:
 *     Display_CST @ 0x140029F8C (Display_CST.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x140033E84 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x140034044 (Display_CPC.c)
 *     Display_LPI @ 0x140034288 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1400346CC (Display_PCT_PTC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140003B94 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_sD @ 0x14000986C (WPP_RECORDER_SF_sD.c)
 *     WPP_RECORDER_SF_sDs @ 0x14000CB48 (WPP_RECORDER_SF_sDs.c)
 *     WPP_RECORDER_SF_si @ 0x14000CE40 (WPP_RECORDER_SF_si.c)
 *     GetGenAddrType @ 0x140034E60 (GetGenAddrType.c)
 */

__int64 __fastcall DisplayGenAddr(unsigned __int8 *a1, const char *a2, PDEVICE_OBJECT a3, __int64 a4)
{
  __int64 result; // rax
  __int64 GenAddrType; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  result = *a1;
  if ( (_BYTE)result == 126 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_sD(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0xA0u,
                 (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                 a2,
                 *((_DWORD *)a1 + 1));
    }
    return result;
  }
  if ( !(_BYTE)result && !*(_QWORD *)(a1 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               5u,
               2u,
               0xA1u,
               (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
               a2);
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a3 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      GenAddrType = GetGenAddrType(*a1, *a1);
      result = WPP_RECORDER_SF_sDs(*(_QWORD *)(v8 + 64), v9, v8, v10, v13, a2, v9, GenAddrType);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v14) = a1[1];
        result = WPP_RECORDER_SF_sD(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0xA3u,
                   (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                   a2,
                   v14);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v14) = a1[2];
        result = WPP_RECORDER_SF_sD(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0xA4u,
                   (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                   a2,
                   v14);
      }
    }
  }
  if ( *a1 == 10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v12 = 165;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_27;
    v12 = 166;
  }
  LODWORD(v14) = a1[3];
  result = WPP_RECORDER_SF_sD(
             (__int64)v11->DeviceExtension,
             5u,
             2u,
             v12,
             (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
             a2,
             v14);
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_si((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, (__int64)a3, a4, v13, a2);
  return result;
}
