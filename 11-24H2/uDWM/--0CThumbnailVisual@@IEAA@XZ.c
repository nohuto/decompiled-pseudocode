/*
 * XREFs of ??0CThumbnailVisual@@IEAA@XZ @ 0x180061A88
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x18006105C (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CThumbnailAnimatedVisual@@QEAA@XZ @ 0x180061B40 (--0CThumbnailAnimatedVisual@@QEAA@XZ.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::CThumbnailVisual(CThumbnailVisual *this)
{
  CThumbnailAnimatedVisual::CThumbnailAnimatedVisual(this);
  *((_BYTE *)this + 432) = 1;
  *(_QWORD *)this = &CThumbnailVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CThumbnailAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 40) = &CThumbnailVisual::`vftable';
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 111) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  return this;
}
