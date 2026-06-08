/*
 * XREFs of DisplayCpcResourcePriorityRegisterDescriptor @ 0x140033E84
 * Callers:
 *     Display_CPC @ 0x140034044 (Display_CPC.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140003B94 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ds @ 0x14000C958 (WPP_RECORDER_SF_Ds.c)
 *     DisplayGenAddr @ 0x140028380 (DisplayGenAddr.c)
 */

__int64 __fastcall DisplayCpcResourcePriorityRegisterDescriptor(
        _QWORD *a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4)
{
  _DWORD *v5; // rcx
  unsigned int i; // ebx
  __int64 v7; // r8
  const char *v8; // rax
  const char **v9; // rbx
  __int64 v10; // rsi
  unsigned __int8 *v11; // rdi
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0xB9u,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        186,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
  }
  v5 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      switch ( v5[i + 1] )
      {
        case 1:
          v8 = "Processor Boost";
          break;
        case 2:
          v8 = "Processor Throttle";
          break;
        case 3:
          v8 = "L2 Cache";
          break;
        case 4:
          v8 = "L3 Cache";
          break;
        case 5:
          v8 = "Memory Bandwith";
          break;
        default:
          v8 = "Unknown";
          break;
      }
      v7 = (unsigned int)v5[i + 1];
      WPP_RECORDER_SF_Ds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)WPP_GLOBAL_Control,
        v7,
        0xBBu,
        v13,
        v7,
        v8);
    }
    v5 = (_DWORD *)*a1;
  }
  v9 = (const char **)&off_140012348;
  v10 = 4LL;
  do
  {
    v11 = (unsigned __int8 *)a1 + *((unsigned int *)v9 - 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xBCu,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          *v9);
    }
    result = DisplayGenAddr(v11, "      ", a3, a4);
    v9 += 3;
    --v10;
  }
  while ( v10 );
  return result;
}
