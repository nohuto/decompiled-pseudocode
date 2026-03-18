/*
 * XREFs of ??0CBspNode@@QEAA@_N@Z @ 0x18010B9E0
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18010AE60 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18010BB38 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CBspNode *__fastcall CBspNode::CBspNode(CBspNode *this, char a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CBspNode *)((char *)this + 8);
  *(_DWORD *)v3 = 0;
  *(_QWORD *)this = &CBspNode::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = a2;
  CMILRefCountImpl::AddReference(v3);
  return this;
}
