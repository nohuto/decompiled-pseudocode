/*
 * XREFs of ??0CThumbnailAnimatedVisual@@QEAA@XZ @ 0x180061B40
 * Callers:
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180061A88 (--0CThumbnailVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CThumbnailAnimatedVisual *__fastcall CThumbnailAnimatedVisual::CThumbnailAnimatedVisual(CThumbnailAnimatedVisual *this)
{
  CThumbnailAnimatedVisual *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CThumbnailAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CThumbnailAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *(_OWORD *)((char *)this + 248) = 0LL;
  *(_OWORD *)((char *)this + 264) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_BYTE *)this + 304) = 0;
  *(_QWORD *)((char *)this + 308) = 0LL;
  result = this;
  *((_BYTE *)this + 316) = 0;
  return result;
}
