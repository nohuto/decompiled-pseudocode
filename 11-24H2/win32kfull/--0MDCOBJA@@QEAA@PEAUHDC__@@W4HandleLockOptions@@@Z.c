/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@W4HandleLockOptions@@@Z @ 0x140171324
 * Callers:
 *     GreSetPaletteEntries @ 0x14010EB50 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     DxgkEngGetDC @ 0x1401A4930 (DxgkEngGetDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MDCOBJA::MDCOBJA(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  *(_QWORD *)(a1 + 16) = Gre::Base::Globals((Gre::Base *)a1);
  LOBYTE(v4) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = HmgShareLockEx(a2, v4, 0LL);
  return a1;
}
