/*
 * XREFs of ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18007CB30
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18003D43C (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003F318 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(
        CSecondaryWindowRepresentation *this,
        unsigned int a2)
{
  unsigned int v3; // edi
  CBaseObject *v4; // rsi
  struct CVisual *v5; // rdx
  unsigned int v6; // ecx
  __int64 i; // r8
  __int64 v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx

  v3 = a2;
  v4 = *(CBaseObject **)(*((_QWORD *)this + 16) + 8LL * a2);
  v5 = (struct CVisual *)*((_QWORD *)v4 + 6);
  if ( v5 )
    CContainerVisual::RemoveChild(*((CContainerVisual **)this + 6), v5);
  v6 = *((_DWORD *)this + 38);
  if ( v3 < v6 )
  {
    for ( i = *((_QWORD *)this + 16); v3 < v6 - 1; v6 = *((_DWORD *)this + 38) )
    {
      v8 = v3++;
      *(_QWORD *)(i + 8 * v8) = *(_QWORD *)(i + 8LL * v3);
    }
    *((_DWORD *)this + 38) = v6 - 1;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x192u, 0LL);
  }
  CBaseObject::Release(v4);
  if ( !*((_DWORD *)this + 38) && !*((_BYTE *)this + 416) )
  {
    v9 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *((_QWORD *)this + 6) = 0LL;
    }
    v10 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
