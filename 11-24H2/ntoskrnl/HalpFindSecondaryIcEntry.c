/*
 * XREFs of HalpFindSecondaryIcEntry @ 0x1403B9DDC
 * Callers:
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1403B98CC (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpDisableSecondaryInterrupt @ 0x14047EC50 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140555C68 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x1406FB490 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140AA136C (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpFindSecondaryIcEntry(unsigned int a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int v8; // ecx

  v2 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v3 = SecondaryIcList;
  v4 = 0LL;
  v5 = v2;
  while ( (__int64 *)v3 != &SecondaryIcList )
  {
    v8 = *(_DWORD *)(v3 + 16);
    if ( a1 >= v8 && a1 < *(_DWORD *)(v3 + 20) + v8 )
    {
      v4 = v3;
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 112));
      break;
    }
    v3 = *(_QWORD *)v3;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&SecondaryIcListSpinLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(v5);
  return v4;
}
