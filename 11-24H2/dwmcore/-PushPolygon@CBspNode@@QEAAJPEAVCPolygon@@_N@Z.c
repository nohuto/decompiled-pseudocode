/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016A778
 * Callers:
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180169048 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016A778 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x18016A5F0 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ??0CBspNode@@QEAA@_N@Z @ 0x18016A620 (--0CBspNode@@QEAA@_N@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016A778 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801ECAC8 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x1801F68F8 (-AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x18020DCF8 (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x18020DD20 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, char a3)
{
  int v3; // ebx
  struct CPolygon *v6; // rdi
  CPolygon **v7; // rcx
  int v8; // eax
  struct CPolygon *v9; // r14
  CBspNode *v11; // rax
  CBspNode *v12; // rax
  int v13; // r9d
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-20h]
  struct CPolygon *v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  struct CPolygon *v18; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v18 = 0LL;
  v16 = 0LL;
  v6 = a2;
  v17 = 0;
  v7 = (CPolygon **)*((_QWORD *)this + 4);
  if ( v7 == *((CPolygon ***)this + 5) )
  {
    CBspNode::AddPolygon(this, a2);
    return (unsigned int)v3;
  }
  v8 = CPolygon::CompareAndSplit(*v7, a2, (enum D2DVectorHelper::Relation *)&v17, &v18, &v16);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x80u, 0LL);
    v9 = v18;
    v6 = v16;
    goto LABEL_8;
  }
  if ( !v17 )
  {
    CBspNode::AddPolygon(this, v6);
    v9 = v18;
    goto LABEL_5;
  }
  if ( v17 == 1 )
  {
    v9 = v6;
    goto LABEL_5;
  }
  v9 = v18;
  if ( v17 != 2 )
LABEL_5:
    v6 = v16;
  if ( v9 )
  {
    v11 = (CBspNode *)*((_QWORD *)this + 2);
    if ( !v11 )
    {
      v11 = (CBspNode *)CBspNode::operator new();
      if ( v11 )
        v11 = CBspNode::CBspNode(v11, a3);
      *((_QWORD *)this + 2) = v11;
      if ( !v11 )
      {
        v15 = 153;
        goto LABEL_28;
      }
    }
    v14 = CBspNode::PushPolygon(v11, v9, a3);
    v3 = v14;
    if ( v14 < 0 )
    {
      v15 = 155;
LABEL_29:
      v13 = v14;
      goto LABEL_30;
    }
  }
  if ( v6 )
  {
    v12 = (CBspNode *)*((_QWORD *)this + 3);
    if ( v12 )
      goto LABEL_34;
    v12 = (CBspNode *)CBspNode::operator new();
    if ( v12 )
      v12 = CBspNode::CBspNode(v12, a3);
    *((_QWORD *)this + 3) = v12;
    if ( v12 )
    {
LABEL_34:
      v14 = CBspNode::PushPolygon(v12, v6, a3);
      v3 = v14;
      if ( v14 >= 0 )
        goto LABEL_8;
      v15 = 165;
      goto LABEL_29;
    }
    v15 = 163;
LABEL_28:
    v13 = -2147024882;
    v3 = -2147024882;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v15, 0LL);
  }
LABEL_8:
  if ( v17 == 3 )
  {
    ReleaseInterfaceNoNULL<CPolygon>(v9);
    ReleaseInterfaceNoNULL<CPolygon>(v6);
  }
  if ( v3 < 0 )
    CBspNode::ReleaseSubTree(this);
  return (unsigned int)v3;
}
