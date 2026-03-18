/*
 * XREFs of WPP_RECORDER_SF_qDDqssdddd @ 0x140036C68
 * Callers:
 *     ACPIThermalDeviceControl @ 0x140037210 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDDqssdddd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // [rsp+28h] [rbp-A9h]

  v11 = a10;
  v12 = a11;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(a11 + v17) );
    }
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a10 + v18) );
    }
    v19 = &a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids);
  }
  if ( v12 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v12 + v15) );
  }
  if ( v11 )
  {
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
  }
  LOWORD(v19) = 12;
  return WppAutoLogTrace(a1, 4LL, 16LL, &WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids, (_DWORD)v19, &a6, 8LL, &a7);
}
