/*
 * XREFs of PnpiGrowResourceList @ 0x1400BC068
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_dL @ 0x140052A68 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400551F0 (WPP_RECORDER_SF_ddL.c)
 *     ACPIInternalGrowBuffer @ 0x140097794 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(const void **a1, int *a2, __int64 a3)
{
  int v3; // ebx
  int v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int v9; // r15d
  __int64 result; // rax
  __int64 Pool2; // rax
  int v12; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( *a1 && (v6 = *a2) != 0 )
  {
    v7 = 8 * v6;
    v8 = 8 * v6 + 64;
    v9 = v6 + 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, a3, 0x20u, v12);
    result = ACPIInternalGrowBuffer(a1, v7, v8);
    if ( (int)result >= 0 )
      v3 = v9;
    *a2 = v3;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x1Fu, v12);
    Pool2 = ExAllocatePool2(256LL, 64LL, 1383097153LL);
    *a1 = (const void *)Pool2;
    if ( Pool2 )
    {
      *a2 = 8;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
