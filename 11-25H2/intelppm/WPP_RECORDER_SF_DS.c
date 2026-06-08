/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x14000C958
 * Callers:
 *     Display_CSD @ 0x140028A34 (Display_CSD.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x140033E84 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_xSD @ 0x140034B30 (Display_xSD.c)
 *     Display_TSS @ 0x140045B30 (Display_TSS.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Ds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        const char *a7)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  __int64 v11; // rdx
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-38h]

  v7 = a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      a4,
      &a6,
      4LL,
      v12);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
  }
  if ( !v7 )
    v7 = "NULL";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids, v14, &a6, 4LL, v7);
}
