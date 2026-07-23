/*
 * XREFs of PpmInternalProcessorIdleVeto @ 0x1404D3388
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 */

__int64 __fastcall PpmInternalProcessorIdleVeto(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx
  __int64 Prcb; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = a2;
  if ( a1 < (unsigned int)KeNumberProcessors_0 )
  {
    Prcb = KeGetPrcb(a1);
    v5 = 0;
    v7 = *(_QWORD *)(Prcb + 34880);
    if ( v7 )
    {
      if ( (unsigned int)v4 < *(_DWORD *)(v7 + 40) )
      {
        v8 = 344 * v4;
        if ( a3 )
          _InterlockedOr((volatile signed __int32 *)(v8 + v7 + 1352), 0x80000000);
        else
          _InterlockedAnd((volatile signed __int32 *)(v8 + v7 + 1352), 0x7FFFFFFFu);
      }
      else
      {
        return (unsigned int)-1073741584;
      }
    }
    else
    {
      return (unsigned int)-1073741653;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v5;
}
