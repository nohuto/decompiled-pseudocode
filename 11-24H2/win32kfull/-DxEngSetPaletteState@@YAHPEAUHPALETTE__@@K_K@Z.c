/*
 * XREFs of ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1401A35CC
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1401A2AE0 (DxgkEngBltViaGDI.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxEngSetPaletteState(HPALETTE a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  LOBYTE(a2) = 8;
  v2 = 0;
  v3 = HmgShareLockCheck(a1, a2);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 24) |= 0x8000u;
    v2 = 1;
    DEC_SHARE_REF_CNT(v3);
  }
  return v2;
}
