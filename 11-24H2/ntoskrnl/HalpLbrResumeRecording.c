/*
 * XREFs of HalpLbrResumeRecording @ 0x140447FD0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall HalpLbrResumeRecording(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  result = (unsigned int)HalpLbrIsInUse;
  if ( !HalpLbrIsInUse )
    return result;
  if ( (_BYTE)a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v3 = 15LL;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    if ( HalpLbrType == 1 || HalpLbrType == 2 )
    {
      v6 = __readmsr(0x1D9u);
      if ( HalpLbrType == 1 )
      {
        __writemsr(0x1C8u, (unsigned int)HalpLbrSelectFlags);
        __writemsr(0x1C9u, (unsigned int)(HalpLbrStackSize - 1));
        v6 |= 1uLL;
      }
      v3 = (v6 | 0x800) >> 32;
      __writemsr(0x1D9u, v6 | 0x800);
      if ( HalpLbrType != 2 )
        goto LABEL_9;
      v7 = 5326;
      v8 = (unsigned int)HalpIntelLbrCtlFlags | 1LL;
      LODWORD(v9) = HalpIntelLbrCtlFlags | 1;
    }
    else
    {
      if ( HalpLbrType != 3 )
      {
LABEL_9:
        if ( KiIrqlFlags )
        {
          LOBYTE(v3) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        return result;
      }
      __writemsr(0xC000010E, (unsigned int)HalpLbrSelectFlags);
      __writemsr(0x1D9u, __readmsr(0x1D9u) | 0x801);
      v7 = -1073741553;
      v9 = __readmsr(0xC000010F) | 0x40;
      v8 = v9;
    }
    v3 = HIDWORD(v8);
    __writemsr(v7, __PAIR64__(v3, v9));
    goto LABEL_9;
  }
  if ( HalpLbrType == 1 || HalpLbrType == 2 )
  {
    if ( HalpLbrType == 1 )
    {
      result = __readmsr(0x1D9u);
      if ( (result & 1) == 0 )
      {
        result |= 1uLL;
        __writemsr(0x1D9u, result);
      }
    }
    if ( !HalpLbrIsFreezeLegacy )
    {
      result = __readmsr(0x38Eu);
      if ( (result & 0x400000000000000LL) != 0 )
      {
        v4 = 912;
LABEL_18:
        result = 0LL;
        __writemsr(v4, 0x400000000000000uLL);
      }
    }
  }
  else if ( HalpLbrType == 3 )
  {
    v5 = __readmsr(0xC000010F);
    if ( (v5 & 0x40) == 0 )
      __writemsr(0xC000010F, v5 | 0x40);
    result = __readmsr(0xC0000300);
    if ( (result & 0x400000000000000LL) != 0 )
    {
      v4 = -1073741054;
      goto LABEL_18;
    }
  }
  return result;
}
