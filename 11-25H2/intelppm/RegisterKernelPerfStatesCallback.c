/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x140038A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // ebx
  int v2; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_1400194A0)();
  if ( v0 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = v0;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Du,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      v2);
  }
  return (unsigned int)v0;
}
