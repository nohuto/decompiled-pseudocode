/*
 * XREFs of ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1401A3610
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1401A2AE0 (DxgkEngBltViaGDI.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x14025C8E0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxEngSelectPaletteToSurface(struct _SURFOBJ *a1, HPALETTE a2)
{
  HPALETTE v3; // rcx
  __int64 v4; // rdi
  HDEV v5; // rax
  HDEV v6; // rbx
  HDEV hdev; // rsi
  HDEV v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  LOBYTE(a2) = 8;
  v4 = 0LL;
  v5 = (HDEV)HmgShareLockCheck(v3, a2);
  v6 = v5;
  if ( !a1 )
  {
    if ( !v5 )
      return v4;
    goto LABEL_5;
  }
  if ( v5 )
  {
    hdev = a1[1].hdev;
    a1[1].hdev = v5;
    INC_SHARE_REF_CNT(v5);
    if ( hdev )
    {
      v4 = *(_QWORD *)hdev;
      v9 = hdev;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v9);
    }
LABEL_5:
    DEC_SHARE_REF_CNT(v6);
  }
  return v4;
}
