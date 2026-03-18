/*
 * XREFs of PnpiGrowResourceDescriptor @ 0x1400BBF5C
 * Callers:
 *     PnpiUpdateResourceList @ 0x1400BBEEC (PnpiUpdateResourceList.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1400551F0 (WPP_RECORDER_SF_ddL.c)
 *     ACPIInternalGrowBuffer @ 0x140097794 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceDescriptor(const void **a1, __int64 a2, __int64 a3)
{
  _WORD *Pool2; // rax
  int v6; // edi
  int v7; // [rsp+20h] [rbp-28h]

  if ( *a1 )
  {
    v6 = 32 * *((_DWORD *)*a1 + 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, a3, 0x1Eu, v7);
    return ACPIInternalGrowBuffer(a1, v6 + 8, v6 + 264);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, a3, 0x1Du, v7);
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 264LL, 1383097153LL);
    *a1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      *((_WORD *)*a1 + 1) = 1;
      *((_DWORD *)*a1 + 1) = 0;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
