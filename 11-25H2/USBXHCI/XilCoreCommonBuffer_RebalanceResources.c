/*
 * XREFs of XilCoreCommonBuffer_RebalanceResources @ 0x14000B1D8
 * Callers:
 *     CommonBuffer_RebalanceResources @ 0x14000B11C (CommonBuffer_RebalanceResources.c)
 * Callees:
 *     XilCoreCommonBuffer_RebalanceBuffers @ 0x14000B30C (XilCoreCommonBuffer_RebalanceBuffers.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 */

bool __fastcall XilCoreCommonBuffer_RebalanceResources(__int64 a1)
{
  int v2; // edx
  unsigned int v3; // ebx
  _DWORD *v4; // rdi
  bool v5; // bl

  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v3 = 0;
  v4 = (_DWORD *)(a1 + 60);
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v2) = 5;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v2,
        8,
        26,
        (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids,
        v3,
        *v4);
    }
    XilCoreCommonBuffer_RebalanceBuffers(a1, v4 - 7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v2) = 5;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v2,
        8,
        27,
        (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids,
        v3,
        *v4);
    }
    ++v3;
    v4 += 16;
  }
  while ( v3 < 2 );
  v5 = *(_QWORD *)(a1 + 184) != a1 + 184;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  return v5;
}
