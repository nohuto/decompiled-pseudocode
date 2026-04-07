/*
 * XREFs of ??0CDWriteText@@AEAA@XZ @ 0x180031B58
 * Callers:
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x1800315E4 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180031D30 (--0CSpriteVisual@@QEAA@XZ.c)
 */

CDWriteText *__fastcall CDWriteText::CDWriteText(CDWriteText *this)
{
  __int64 v1; // rcx

  CSpriteVisual::CSpriteVisual(this);
  *(_QWORD *)(v1 + 272) = &CDWriteText::`vftable'{for `IText'};
  *(_QWORD *)v1 = &CDWriteText::`vftable'{for `CSpriteVisual'};
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 7LL;
  *(_WORD *)(v1 + 528) = 0;
  return (CDWriteText *)v1;
}
