/*
 * XREFs of ??0CAtlasedImage@@IEAA@XZ @ 0x1800225D0
 * Callers:
 *     ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x18002225C (-Create@CAtlasButton@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x1800224FC (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 */

CAtlasedImage *__fastcall CAtlasedImage::CAtlasedImage(CAtlasedImage *this)
{
  __int64 v1; // rcx
  CAtlasedImage *result; // rax

  CBaseObject::CBaseObject(this);
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_QWORD *)v1 = &CAtlasedImage::`vftable';
  *(_DWORD *)(v1 + 52) = 0x80000000;
  *(_DWORD *)(v1 + 48) = 0x80000000;
  result = (CAtlasedImage *)v1;
  *(_DWORD *)(v1 + 32) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 40) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 36) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 44) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 60) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 56) = 0x7FFFFFFF;
  *(_DWORD *)(v1 + 68) = 255;
  *(_DWORD *)(v1 + 120) = 22;
  return result;
}
