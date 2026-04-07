/*
 * XREFs of ??0CSpriteVisual@@QEAA@XZ @ 0x180034A5C
 * Callers:
 *     ??0CDWriteText@@AEAA@XZ @ 0x1800334E8 (--0CDWriteText@@AEAA@XZ.c)
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x180034A18 (--0CSystemBackdropVisual@@QEAA@XZ.c)
 *     ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x180086A50 (-Create@CSpriteVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800265DC (--0CVisual@@IEAA@XZ.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::CSpriteVisual(CSpriteVisual *this)
{
  CSpriteVisual *v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CSpriteVisual::`vftable';
  *((_QWORD *)v1 + 18) = 0LL;
  *((_QWORD *)v1 + 19) = 0LL;
  *((_QWORD *)v1 + 20) = 0LL;
  return v1;
}
