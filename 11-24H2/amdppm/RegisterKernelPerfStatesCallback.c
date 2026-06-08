/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x140037010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // edx
  int v1; // ebx
  int v3; // [rsp+28h] [rbp-10h]

  v1 = ((__int64 (*)(void))qword_1400158F0)();
  if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = v1;
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      3,
      29,
      (__int64)&WPP_3d108ec8cf663db9a9e3117b4bdc697c_Traceguids,
      v3);
  }
  return (unsigned int)v1;
}
