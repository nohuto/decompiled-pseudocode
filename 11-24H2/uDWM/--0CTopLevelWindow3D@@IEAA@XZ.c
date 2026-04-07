/*
 * XREFs of ??0CTopLevelWindow3D@@IEAA@XZ @ 0x18002F8E4
 * Callers:
 *     ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z @ 0x18002F81C (-Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  CTopLevelWindow3D *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *((_WORD *)this + 125) = 0;
  *((_QWORD *)this + 30) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *((_BYTE *)this + 252) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *(_QWORD *)((char *)this + 476) = 0LL;
  *((_DWORD *)this + 121) = 0;
  result = this;
  *((_BYTE *)this + 488) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_WORD *)this + 284) = 0;
  *(_OWORD *)((char *)this + 572) = 0LL;
  *((_DWORD *)this + 147) = 0;
  *((_BYTE *)this + 608) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  return result;
}
