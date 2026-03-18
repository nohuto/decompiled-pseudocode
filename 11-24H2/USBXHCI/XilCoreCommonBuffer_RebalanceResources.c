/*
 * XREFs of XilCoreCommonBuffer_RebalanceResources @ 0x140029588
 * Callers:
 *     CommonBuffer_RebalanceResources @ 0x1400294CC (CommonBuffer_RebalanceResources.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     XilCoreCommonBuffer_RebalanceBuffers @ 0x1400296BC (XilCoreCommonBuffer_RebalanceBuffers.c)
 */

bool __fastcall XilCoreCommonBuffer_RebalanceResources(__int64 a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rdi
  bool v4; // bl
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]

  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v2 = 0;
  v3 = (_DWORD *)(a1 + 60);
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v7) = *v3;
      LODWORD(v6) = v2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        5u,
        8u,
        0x1Au,
        (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
        v6,
        v7);
    }
    XilCoreCommonBuffer_RebalanceBuffers(a1, v3 - 7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v7) = *v3;
      LODWORD(v6) = v2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        5u,
        8u,
        0x1Bu,
        (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
        v6,
        v7);
    }
    ++v2;
    v3 += 16;
  }
  while ( v2 < 2 );
  v4 = *(_QWORD *)(a1 + 184) != a1 + 184;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  return v4;
}
