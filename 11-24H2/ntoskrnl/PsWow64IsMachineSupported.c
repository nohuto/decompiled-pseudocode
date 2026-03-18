/*
 * XREFs of PsWow64IsMachineSupported @ 0x1408FB050
 * Callers:
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1408FAF40 (PsGetSupportedProcessorArchitectures.c)
 *     PspSelectMachineForProcess @ 0x140A13430 (PspSelectMachineForProcess.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1404732A4 (RtlWow64GetEquivalentMachineCHPE.c)
 *     PsQuerySystemDllInfo @ 0x1408FB0A8 (PsQuerySystemDllInfo.c)
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
