/*
 * XREFs of ??1CBspNode@@EEAA@XZ @ 0x180219CDC
 * Callers:
 *     ??_GCBspNode@@EEAAPEAXI@Z @ 0x180219C90 (--_GCBspNode@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180219D58 (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180219D80 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  _QWORD *v4; // rcx

  *(_QWORD *)this = &CBspNode::`vftable';
  CBspNode::ReleaseSubTree(this);
  v2 = (_QWORD *)*((_QWORD *)this + 5);
  for ( i = (_QWORD *)*((_QWORD *)this + 4); i != v2; ++i )
    ReleaseInterfaceNoNULL<CPolygon>(*i);
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 6) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
}
