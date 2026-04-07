/*
 * XREFs of ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180009B10
 * Callers:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180007C98 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18004D2E0 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(
        CSecondaryWindowRepresentation *this,
        unsigned int a2)
{
  CBaseObject **v2; // rdi
  unsigned int v3; // esi
  CBaseObject *v5; // rbp
  struct CVisual *v6; // rdx
  unsigned int v7; // ecx
  __int64 i; // r8
  CBaseObject *v9; // rcx
  __int64 v10; // rcx

  v2 = (CBaseObject **)((char *)this + 48);
  v3 = a2;
  v5 = *(CBaseObject **)(*((_QWORD *)this + 16) + 8LL * a2);
  v6 = (struct CVisual *)*((_QWORD *)v5 + 6);
  if ( v6 )
    VisualCollection::Remove((CBaseObject *)((char *)*v2 + 32), v6);
  v7 = *((_DWORD *)this + 38);
  if ( v3 >= v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, 0LL);
  }
  else
  {
    for ( i = *((_QWORD *)this + 16); v3 < v7 - 1; v7 = *((_DWORD *)this + 38) )
    {
      v10 = v3++;
      *(_QWORD *)(i + 8 * v10) = *(_QWORD *)(i + 8LL * v3);
    }
    *((_DWORD *)this + 38) = v7 - 1;
  }
  CBaseObject::Release(v5);
  if ( !*((_DWORD *)this + 38) && !*((_BYTE *)this + 416) )
  {
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
    v9 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
