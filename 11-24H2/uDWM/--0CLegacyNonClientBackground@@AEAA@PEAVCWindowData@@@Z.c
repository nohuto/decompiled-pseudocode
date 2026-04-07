/*
 * XREFs of ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x180076180
 * Callers:
 *     ?Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x1800760DC (-Create@CLegacyNonClientBackground@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCanvasVisual@@IEAA@XZ @ 0x180027DCC (--0CCanvasVisual@@IEAA@XZ.c)
 */

CLegacyNonClientBackground *__fastcall CLegacyNonClientBackground::CLegacyNonClientBackground(
        CLegacyNonClientBackground *this,
        struct CWindowData *a2)
{
  CCanvasVisual::CCanvasVisual(this);
  *((_QWORD *)this + 30) = a2;
  *(_QWORD *)this = &CLegacyNonClientBackground::`vftable';
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = -1082130432;
  *((_DWORD *)this + 71) = -1082130432;
  *((_DWORD *)this + 72) = -1082130432;
  *((_DWORD *)this + 73) = -1082130432;
  *((_DWORD *)this + 74) = -1082130432;
  *((_DWORD *)this + 75) = -1082130432;
  *((_DWORD *)this + 76) = -1082130432;
  *((_DWORD *)this + 77) = -1082130432;
  return this;
}
