/*
 * XREFs of wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___ @ 0x1401EB824
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x140262E70 (NtGdiSetPUMPDOBJ.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x140332480 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
