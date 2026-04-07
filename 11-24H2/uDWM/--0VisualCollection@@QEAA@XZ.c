/*
 * XREFs of ??0VisualCollection@@QEAA@XZ @ 0x180026654
 * Callers:
 *     ??0CContainerVisual@@IEAA@XZ @ 0x18002659C (--0CContainerVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

VisualCollection *__fastcall VisualCollection::VisualCollection(VisualCollection *this)
{
  int v1; // edx
  VisualCollection *v2; // r9

  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 8, 0LL, 0LL);
  *((_DWORD *)v2 + 10) &= v1;
  return v2;
}
