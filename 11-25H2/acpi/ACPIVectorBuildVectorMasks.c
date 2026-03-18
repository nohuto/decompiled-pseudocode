/*
 * XREFs of ACPIVectorBuildVectorMasks @ 0x140056420
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x140040B24 (ACPIGpeBuildEventMasks.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     ACPIGpeInstallRemoveIndex @ 0x140060F98 (ACPIGpeInstallRemoveIndex.c)
 */

void ACPIVectorBuildVectorMasks()
{
  unsigned int i; // ebx
  unsigned int *v1; // rcx
  __int64 v2; // [rsp+28h] [rbp-10h]

  for ( i = 0; i < GpeVectorTableSize; ++i )
  {
    v1 = (unsigned int *)*((_QWORD *)GpeVectorTable + 2 * i + 1);
    if ( v1
      && !(unsigned __int8)ACPIGpeInstallRemoveIndex(*v1)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v2) = i;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xEu,
        0xAu,
        (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
        v2);
    }
  }
}
