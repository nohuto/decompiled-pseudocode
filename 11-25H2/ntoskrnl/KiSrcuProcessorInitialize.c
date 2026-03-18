/*
 * XREFs of KiSrcuProcessorInitialize @ 0x1404F6B74
 * Callers:
 *     KiRcuProcessorInitialize @ 0x1404D6218 (KiRcuProcessorInitialize.c)
 *     KiRcuSystemInitialize @ 0x140C54868 (KiRcuSystemInitialize.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiSrcuNotifyGracePeriodStartedOnCpu @ 0x1405BD308 (KiSrcuNotifyGracePeriodStartedOnCpu.c)
 *     KiSrcuProcessorAddToTopologyTree @ 0x1405BD5FC (KiSrcuProcessorAddToTopologyTree.c)
 */

void __fastcall KiSrcuProcessorInitialize(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // di

  LOBYTE(v4) = KeAcquireSpinLockRaiseToDpc(&qword_140F0F8B8);
  if ( byte_140F0F8C0 )
    KiSrcuProcessorAddToTopologyTree(a1, a2, v4);
  KeReleaseSpinLock(&qword_140F0F8B8, v4);
  if ( a2 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F0F8B0);
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
    KeReleaseSpinLock(&qword_140F0F8B0, v7);
  }
}
