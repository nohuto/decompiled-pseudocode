/*
 * XREFs of DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002B624
 * Callers:
 *     Display_CPC @ 0x14002BAA0 (Display_CPC.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x140005728 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_Ds @ 0x1400071B8 (WPP_RECORDER_SF_Ds.c)
 *     DisplayGenAddr @ 0x14002B7E4 (DisplayGenAddr.c)
 */

__int64 __fastcall DisplayCpcResourcePriorityRegisterDescriptor(_QWORD *a1)
{
  _DWORD *v2; // rcx
  unsigned int i; // ebx
  __int64 v4; // r8
  const char *v5; // rax
  const char **v6; // rbx
  __int64 v7; // rsi
  char *v8; // rdi
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        185,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        186,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
  }
  v2 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      switch ( v2[i + 1] )
      {
        case 1:
          v5 = "Processor Boost";
          break;
        case 2:
          v5 = "Processor Throttle";
          break;
        case 3:
          v5 = "L2 Cache";
          break;
        case 4:
          v5 = "L3 Cache";
          break;
        case 5:
          v5 = "Memory Bandwith";
          break;
        default:
          v5 = "Unknown";
          break;
      }
      v4 = (unsigned int)v2[i + 1];
      WPP_RECORDER_SF_Ds(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)WPP_GLOBAL_Control,
        v4,
        0xBBu,
        v10,
        v4,
        v5);
    }
    v2 = (_DWORD *)*a1;
  }
  v6 = (const char **)&off_14000F238;
  v7 = 4LL;
  do
  {
    v8 = (char *)a1 + *((unsigned int *)v6 - 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xBCu,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          *v6);
    }
    result = DisplayGenAddr(v8, "      ");
    v6 += 3;
    --v7;
  }
  while ( v7 );
  return result;
}
