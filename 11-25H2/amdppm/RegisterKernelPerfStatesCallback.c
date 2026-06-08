/*
 * XREFs of RegisterKernelPerfStatesCallback @ 0x140035E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 RegisterKernelPerfStatesCallback()
{
  int v0; // edx
  int v1; // ebx
  int v3; // [rsp+28h] [rbp-10h]

  v1 = ((__int64 (*)(void))qword_1400148C0)();
  if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = v1;
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      3,
      29,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      v3);
  }
  return (unsigned int)v1;
}
