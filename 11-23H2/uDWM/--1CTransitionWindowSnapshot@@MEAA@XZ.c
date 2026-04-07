/*
 * XREFs of ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x180054120
 * Callers:
 *     ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x180054090 (--_ECTransitionWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x180054224 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 */

void __fastcall CTransitionWindowSnapshot::~CTransitionWindowSnapshot(CTransitionWindowSnapshot *this)
{
  float v2; // xmm1_4
  int v3; // eax
  int v4; // edx
  int v5; // eax
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx

  *(_QWORD *)this = &CTransitionWindowSnapshot::`vftable';
  v2 = *((float *)this + 90);
  v3 = 0;
  if ( *((_DWORD *)this + 85) - *((_DWORD *)this + 83) >= 0 )
    v3 = *((_DWORD *)this + 85) - *((_DWORD *)this + 83);
  v4 = (int)(float)((float)v3 * v2);
  v5 = 0;
  if ( *((_DWORD *)this + 84) - *((_DWORD *)this + 82) >= 0 )
    v5 = *((_DWORD *)this + 84) - *((_DWORD *)this + 82);
  CDesktopManager::FreeCVIIntoCache((int)(float)((float)v5 * v2), v4, *((struct CCachedVisualImageProxy **)this + 37));
  v6 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 37) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 38) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 39) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 40) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 36) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
