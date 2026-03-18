/*
 * XREFs of HalpFindSecondaryIcEntry @ 0x140445C44
 * Callers:
 *     HalpDisableSecondaryInterrupt @ 0x140443D28 (HalpDisableSecondaryInterrupt.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140445728 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptRequestSecondaryInterrupt @ 0x140553368 (HalpInterruptRequestSecondaryInterrupt.c)
 *     HalpEnableSecondaryInterrupt @ 0x1406EF620 (HalpEnableSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140A9BADC (HalpQueryPrimaryInterruptInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
