/*
 * XREFs of KiTpIsSupportedKernelTracepointLocation @ 0x140731FC8
 * Callers:
 *     KeSetTracepoint @ 0x140731680 (KeSetTracepoint.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1404102B0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x140731ED0 (KiTpIsExcludedKernelTracepointLocation.c)
 */

__int64 __fastcall KiTpIsSupportedKernelTracepointLocation(PVOID BaseOfImage, __int64 a2)
{
  _IMAGE_NT_HEADERS64 *v4; // rax
  PIMAGE_SECTION_HEADER v5; // rax
  int v6; // ecx
  unsigned __int8 v7; // dl
  bool v8; // zf
  PVOID v9; // rt1

  v4 = RtlImageNtHeader(BaseOfImage);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress(v4, BaseOfImage, (int)a2 - (int)BaseOfImage);
  if ( !v5 )
    return 0LL;
  if ( (v5->Characteristics & 0x22000000) != 0x20000000 )
    return 0LL;
  v6 = *(_DWORD *)v5->Name;
  if ( *(_DWORD *)v5->Name == 1414090313 || v6 == 1396790859 )
    return 0LL;
  if ( v6 == 1162297680 && *(_DWORD *)&v5->Name[4] )
  {
    v7 = v5->Name[4];
    if ( v7 == 119 )
    {
      v8 = v5->Name[5] == 120;
      goto LABEL_13;
    }
    if ( v7 == 86 && v5->Name[5] == 82 )
    {
      v8 = v5->Name[6] == 70;
LABEL_13:
      if ( v8 )
        return 0LL;
    }
  }
  if ( BaseOfImage != PsHalImageBase )
  {
    v9 = *(PVOID *)&KeNumberProcessorsGroup0[9];
    if ( BaseOfImage != v9
      || v6 != 1128354388 && v6 != 1347769157 && !(unsigned int)KiTpIsExcludedKernelTracepointLocation(a2) )
    {
      return 1LL;
    }
  }
  return 0LL;
}
