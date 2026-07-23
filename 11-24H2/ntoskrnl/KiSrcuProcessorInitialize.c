/*
 * XREFs of KiSrcuProcessorInitialize @ 0x1404F6B18
 * Callers:
 *     KiRcuProcessorInitialize @ 0x1404CED4C (KiRcuProcessorInitialize.c)
 *     KiRcuSystemInitialize @ 0x140C688E0 (KiRcuSystemInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405BE948 (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 *     KiSrcuProcessorAddToTopologyTree @ 0x1405BEC3C (KiSrcuProcessorAddToTopologyTree.c)
 */

void __fastcall KiSrcuProcessorInitialize(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // di

  LOBYTE(v4) = KeAcquireSpinLockRaiseToDpc(&qword_140F10318);
  if ( byte_140F10320 )
    KiSrcuProcessorAddToTopologyTree(a1, a2, v4);
  KeReleaseSpinLock(&qword_140F10318, v4);
  if ( a2 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F10310);
    v6 = (__int64 *)KiSrcuState;
    v7 = v5;
    if ( KiSrcuState )
    {
      while ( v6 != &KiSrcuState )
      {
        KiSrcuNotifyGracePeriodStartedOnCpu(v6, a1);
        v6 = (__int64 *)*v6;
      }
    }
    KeReleaseSpinLock(&qword_140F10310, v7);
  }
}
