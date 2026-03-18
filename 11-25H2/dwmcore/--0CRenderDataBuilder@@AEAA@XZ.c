/*
 * XREFs of ??0CRenderDataBuilder@@AEAA@XZ @ 0x1801FF64C
 * Callers:
 *     ?CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x1801FF5C0 (-CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z.c)
 * Callees:
 *     <none>
 */

CRenderDataBuilder *__fastcall CRenderDataBuilder::CRenderDataBuilder(CRenderDataBuilder *this)
{
  *(_QWORD *)this = &CRenderDataBuilder::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = (char *)this + 48;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_DWORD *)this + 8) = 64;
  *((_DWORD *)this + 9) = 64;
  return this;
}
