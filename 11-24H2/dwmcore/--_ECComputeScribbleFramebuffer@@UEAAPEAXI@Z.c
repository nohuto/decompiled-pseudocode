/*
 * XREFs of ??_ECComputeScribbleFramebuffer@@UEAAPEAXI@Z @ 0x180288970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x180288908 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 */

CComputeScribbleFramebuffer *__fastcall CComputeScribbleFramebuffer::`vector deleting destructor'(
        CComputeScribbleFramebuffer *this,
        char a2)
{
  CComputeScribbleFramebuffer::~CComputeScribbleFramebuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
