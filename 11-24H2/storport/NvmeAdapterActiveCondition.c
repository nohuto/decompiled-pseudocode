/*
 * XREFs of NvmeAdapterActiveCondition @ 0x14012DB70
 * Callers:
 *     <none>
 * Callees:
 *     StorRestartDeviceCommandQueue @ 0x140127DE8 (StorRestartDeviceCommandQueue.c)
 *     NvmeControllerProcessPendingCommand @ 0x1401297E0 (NvmeControllerProcessPendingCommand.c)
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14012DF08 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x1401311D4 (NvmeAdapterReleasePoFx.c)
 *     NvmeControllerPowerActive @ 0x1401323E8 (NvmeControllerPowerActive.c)
 */

__int64 __fastcall NvmeAdapterActiveCondition(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx

  result = NvmeAdapterCheckAndAcquirePoFx();
  if ( (_BYTE)result )
  {
    v3 = *(_QWORD *)(a1[20] + 8LL);
    *(_BYTE *)(v3 + 64) = 1;
    if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
    {
      LOBYTE(v3) = 1;
      NvmeControllerPowerActive(a1[142], v3);
      v4 = a1[142];
      if ( FeatureFixTRIMAddSCSIPassthrough )
        **(_QWORD **)(*(_QWORD *)(v4 + 1288) + 40LL) = KeQueryUnbiasedInterruptTime();
      if ( !_InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 192LL),
              1,
              0) )
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 128LL),
          (LARGE_INTEGER)-50000000LL,
          0x7D0u,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 64LL));
      v5 = *(_QWORD *)(a1[142] + 1024LL);
      if ( FeatureFixTRIMAddSCSIPassthrough )
      {
        if ( !*(_DWORD *)v5 && *(_BYTE *)(v5 + 20) == 1 )
          NvmeControllerProcessPendingCommand(*(_QWORD *)(*(_QWORD *)(v5 + 64) + 24LL), 0, 0, 0LL, 0);
      }
      else
      {
        StorRestartDeviceCommandQueue(v5);
      }
    }
    return NvmeAdapterReleasePoFx(a1);
  }
  return result;
}
