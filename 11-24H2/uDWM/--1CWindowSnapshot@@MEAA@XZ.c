/*
 * XREFs of ??1CWindowSnapshot@@MEAA@XZ @ 0x18000445C
 * Callers:
 *     ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x180004410 (--_GCWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x1800045F4 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001BFBC (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowSnapshot::~CWindowSnapshot(CWindowSnapshot *this, unsigned int a2)
{
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  char *v10; // rdi
  _DWORD *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // edx
  int v16; // eax
  CBaseObject *v17; // rcx
  CWindowData **v18; // rsi
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx

  *(_QWORD *)this = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (char *)this + 32;
  v11 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v11 )
  {
    v12 = v11[15] - v11[13];
    v13 = v11[14] - v11[12];
    v14 = 0;
    if ( v12 >= 0 )
      v14 = v12;
    v15 = (int)(float)((float)v14 * *((float *)this + 18));
    v16 = 0;
    if ( v13 >= 0 )
      v16 = v13;
    CDesktopManager::FreeCVIIntoCache(
      (int)(float)((float)v16 * *((float *)this + 18)),
      v15,
      *((struct CCachedVisualImageProxy **)this + 6));
    v17 = *(CBaseObject **)(*(_QWORD *)v10 + 440LL);
    v18 = (CWindowData **)((char *)this + 32);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      v18 = (CWindowData **)((char *)this + 32);
    }
    v19 = *(CBaseObject **)(*(_QWORD *)v10 + 424LL);
    if ( v19 )
      CBaseObject::Release(v19);
    *(_BYTE *)(*(_QWORD *)v10 + 737LL) &= ~0x20u;
  }
  else
  {
    v18 = (CWindowData **)((char *)this + 32);
  }
  v20 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v20 )
    CBaseObject::Release(v20);
  if ( *v18 )
  {
    CWindowData::`scalar deleting destructor'(*v18, a2);
    *v18 = 0LL;
  }
  CBaseObject::~CBaseObject(this);
}
