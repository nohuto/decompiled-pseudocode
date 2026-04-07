/*
 * XREFs of ??0CSpriteVisual@@QEAA@XZ @ 0x180031D30
 * Callers:
 *     ??0CDWriteText@@AEAA@XZ @ 0x180031B58 (--0CDWriteText@@AEAA@XZ.c)
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x180031CEC (--0CSystemBackdropVisual@@QEAA@XZ.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x1800D8C10 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180039B40 (--0CVisual@@IEAA@XZ.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::CSpriteVisual(CSpriteVisual *this)
{
  CSpriteVisual *v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CSpriteVisual::`vftable';
  *((_QWORD *)v1 + 31) = 0LL;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_QWORD *)v1 + 33) = 0LL;
  return v1;
}
