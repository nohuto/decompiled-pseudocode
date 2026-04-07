/*
 * XREFs of ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x1800747CC
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x180074780 (--_ECAnimatedTransitionVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180074A40 (-Release@CAnimationResource@@UEAAKXZ.c)
 */

void __fastcall CAnimatedTransitionVisual::~CAnimatedTransitionVisual(
        CAnimatedTransitionVisual *this,
        const struct std::nothrow_t *a2)
{
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CAnimationResource **v21; // rdi
  __int64 v22; // rsi
  const struct std::nothrow_t *v23; // rdx
  const struct std::nothrow_t *v24; // rdx

  *(_QWORD *)this = &CAnimatedTransitionVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 1) = &CAnimatedTransitionVisual::`vftable'{for `CRenderDataVisual'};
  v3 = (CBaseObject *)*((_QWORD *)this + 67);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 70);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 79);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 80);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 81);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)*((_QWORD *)this + 82);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CBaseObject *)*((_QWORD *)this + 78);
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = (CBaseObject *)*((_QWORD *)this + 83);
  if ( v13 )
    CBaseObject::Release(v13);
  v14 = (CBaseObject *)*((_QWORD *)this + 84);
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CBaseObject *)*((_QWORD *)this + 85);
  if ( v15 )
    CBaseObject::Release(v15);
  v16 = (CBaseObject *)*((_QWORD *)this + 69);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v17 )
    CBaseObject::Release(v17);
  v18 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v19 )
    CBaseObject::Release(v19);
  v20 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v20 )
    CBaseObject::Release(v20);
  v21 = (CAnimationResource **)((char *)this + 568);
  v22 = 7LL;
  do
  {
    if ( *v21 )
      CAnimationResource::Release(*v21);
    ++v21;
    --v22;
  }
  while ( v22 );
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 37), a2);
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 38), v23);
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 39), v24);
  CRenderDataVisual::~CRenderDataVisual((void **)this + 1);
}
