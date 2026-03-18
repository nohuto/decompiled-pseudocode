/*
 * XREFs of ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18025050C
 * Callers:
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x18022BBC8 (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVECOLOR_SETVALUE.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802A15E0 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveColor::OnColorChanged(CPrimitiveColor *this)
{
  (*(void (__fastcall **)(CPrimitiveColor *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
}
