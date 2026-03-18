/*
 * XREFs of MiProcessKernelCfgImage @ 0x1404C91B8
 * Callers:
 *     MiFinalizeDriverCfgState @ 0x140A3D8B8 (MiFinalizeDriverCfgState.c)
 *     MiInitializeKernelCfgImages @ 0x140C59A10 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     MiMarkKernelImageCfgBits @ 0x140A3DD40 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140ABB69C (MiProcessKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgImage(__int64 a1, char a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  int v8; // eax

  if ( (MiFlags & 0x40000) == 0 )
    return 0LL;
  v6 = 0;
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = MiMarkKernelImageCfgBits(a1, 1LL);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 104) |= 0x2000u;
  }
  if ( !a3 || (a2 & 8) != 0 )
    return 0LL;
  v8 = MiProcessKernelCfgAddressTakenImports(a1);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v6;
}
