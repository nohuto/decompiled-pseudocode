/*
 * XREFs of PsWow64IsMachineSupported @ 0x14091D930
 * Callers:
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     PsGetSupportedProcessorArchitectures @ 0x14091D820 (PsGetSupportedProcessorArchitectures.c)
 *     PspSelectMachineForProcess @ 0x140A0BB90 (PspSelectMachineForProcess.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140470090 (RtlWow64GetEquivalentMachineCHPE.c)
 *     PsQuerySystemDllInfo @ 0x14091D988 (PsQuerySystemDllInfo.c)
 */

__int64 __fastcall PsWow64IsMachineSupported(__int16 a1)
{
  __int16 EquivalentMachineCHPE; // ax
  int v2; // r9d
  __int16 v3; // cx
  int i; // edx
  __int64 SystemDllInfo; // rax
  int v6; // edx
  __int16 v7; // r8

  if ( a1 )
  {
    EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(a1);
    if ( EquivalentMachineCHPE == v3 )
    {
      for ( i = v2; i < 6; i = v6 + 1 )
      {
        SystemDllInfo = PsQuerySystemDllInfo((unsigned int)i);
        if ( SystemDllInfo && (*(_DWORD *)SystemDllInfo & 8) != 0 && *(_WORD *)(SystemDllInfo + 2) == v7 )
          return 1LL;
      }
    }
  }
  return 0LL;
}
