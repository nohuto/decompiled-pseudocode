/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14016EFA0
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 *     GreSetPaletteEntries @ 0x14010EB50 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x14010EC60 (NtGdiResizePalette.c)
 *     DxgkEngGetDC @ 0x1401A4930 (DxgkEngGetDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x14030D6F0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(__int64 **this)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  if ( v1 )
  {
    v3 = 0;
    v2 = *v1;
    HmgDecrementShareReferenceCountEx(v1, &v3);
    if ( v3 )
      GrepDeleteDC(v2, 0x2000000LL);
  }
}
