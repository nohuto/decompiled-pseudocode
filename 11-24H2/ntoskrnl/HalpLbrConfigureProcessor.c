/*
 * XREFs of HalpLbrConfigureProcessor @ 0x140567510
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

ULONG_PTR __fastcall HalpLbrConfigureProcessor(ULONG_PTR Argument)
{
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // ecx

  v2 = HalpLbrStackSize - 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( !Argument )
  {
    if ( HalpLbrType != 1 && HalpLbrType != 2 )
    {
      if ( HalpLbrType != 3 )
        goto LABEL_30;
      __writemsr(0xC000010F, __readmsr(0xC000010F) & 0xFFFFFFFFFFFFFFBFuLL);
      __writemsr(0x1D9u, __readmsr(0x1D9u) & 0xFFFFFFFFFFFFF7FEuLL);
      LODWORD(v7) = 0;
      v6 = -1073741554;
      LODWORD(v11) = 0;
      goto LABEL_29;
    }
    v12 = __readmsr(0x1D9u);
    v13 = v12;
    if ( HalpLbrType == 2 )
    {
      v14 = 5326;
    }
    else
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
      v14 = 456;
    }
    __writemsr(v14, 0LL);
    v6 = 473;
    v8 = v13 & 0xFFFFFFFFFFFFF7FFuLL;
    LODWORD(v7) = v13 & 0xFFFFF7FF;
LABEL_28:
    v11 = HIDWORD(v8);
LABEL_29:
    __writemsr(v6, __PAIR64__(v11, v7));
    goto LABEL_30;
  }
  if ( HalpLbrType != 1 && HalpLbrType != 2 )
  {
    if ( HalpLbrType != 3 )
      goto LABEL_30;
    v4 = 0;
    if ( HalpLbrStackSize )
    {
      v5 = -1073675519;
      do
      {
        __writemsr(v5 - 1, 0LL);
        __writemsr(v5, 0LL);
        ++v4;
        v5 += 2;
      }
      while ( v4 < HalpLbrStackSize );
    }
    __writemsr(0xC000010E, (unsigned int)HalpLbrSelectFlags);
    __writemsr(0x1D9u, __readmsr(0x1D9u) | 0x801);
    v6 = -1073741553;
    v7 = __readmsr(0xC000010F) | 0x40;
    v8 = v7;
    goto LABEL_28;
  }
  v9 = __readmsr(0x1D9u);
  if ( HalpLbrType == 1 )
  {
    __writemsr(0x1C9u, v2);
    if ( HalpLbrStackSize )
    {
      v10 = 1728;
      do
      {
        __writemsr(v10 - 64, 0LL);
        __writemsr(v10, 0LL);
        if ( HalpLbrInfoSupported )
          __writemsr(v10 + 1792, 0LL);
        ++v10;
      }
      while ( v10 - 1728 < HalpLbrStackSize );
    }
    __writemsr(0x1C8u, (unsigned int)HalpLbrSelectFlags);
    v9 |= 1uLL;
  }
  __writemsr(0x1D9u, v9 | 0x800);
  if ( HalpLbrType == 2 )
  {
    __writemsr(0x14CFu, (unsigned int)HalpLbrStackSize);
    v6 = 5326;
    v8 = (unsigned int)HalpIntelLbrCtlFlags | 1LL;
    LODWORD(v7) = HalpIntelLbrCtlFlags | 1;
    goto LABEL_28;
  }
LABEL_30:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  _InterlockedDecrement(&HalpLbrSyncBarrier);
  return 0LL;
}
