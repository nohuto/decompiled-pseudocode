/*
 * XREFs of ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18013805C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180139580 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180139DF8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180137C40 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearInteraction(CVisual *this)
{
  CResource *InteractionInternal; // rax
  _DWORD *v3; // rcx
  unsigned int v4; // r8d
  _BYTE *v5; // rdx
  __int64 i; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    if ( *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)InteractionInternal + 16LL) == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(InteractionInternal);
    else
      (*(void (__fastcall **)(CResource *))(*(_QWORD *)InteractionInternal + 16LL))(InteractionInternal);
  }
  v3 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v3 & 0x1000000) != 0 )
  {
    v4 = v3[1];
    v5 = v3 + 2;
    *v3 &= ~0x1000000u;
    for ( i = 0LL; (unsigned int)i < v4; ++v5 )
    {
      if ( *v5 == 8 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i < v4 )
      *((_BYTE *)v3 + i + 8) = 0;
  }
}
