/*
 * XREFs of ??0CSystemBackdropVisual@@QEAA@XZ @ 0x180034A18
 * Callers:
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180034870 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180034A5C (--0CSpriteVisual@@QEAA@XZ.c)
 */

CSystemBackdropVisual *__fastcall CSystemBackdropVisual::CSystemBackdropVisual(CSystemBackdropVisual *this)
{
  __int64 v1; // rcx
  CSystemBackdropVisual *result; // rax

  CSpriteVisual::CSpriteVisual(this);
  *(_QWORD *)v1 = &CSystemBackdropVisual::`vftable';
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_BYTE *)(v1 + 176) = 0;
  *(_QWORD *)(v1 + 180) = 0LL;
  result = (CSystemBackdropVisual *)v1;
  *(_OWORD *)(v1 + 188) = 0LL;
  return result;
}
