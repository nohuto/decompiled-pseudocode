/*
 * XREFs of ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18009358C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180094AB0 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180095328 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::ClearInteraction(CVisual *this)
{
  CCachedVisualImage *InteractionInternal; // rax
  __int64 (__fastcall *v3)(CCachedVisualImage *, __int64, __int64); // r8
  _DWORD *v4; // rcx
  unsigned int v5; // r8d
  _BYTE *v6; // rdx
  __int64 i; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    v3 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)InteractionInternal + 16LL);
    if ( v3 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        InteractionInternal,
        *(_QWORD *)InteractionInternal,
        (__int64)v3);
    else
      (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)InteractionInternal + 16LL))(InteractionInternal);
  }
  v4 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v4 & 0x1000000) != 0 )
  {
    v5 = v4[1];
    v6 = v4 + 2;
    *v4 &= ~0x1000000u;
    for ( i = 0LL; (unsigned int)i < v5; ++v6 )
    {
      if ( *v6 == 8 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i < v5 )
      *((_BYTE *)v4 + i + 8) = 0;
  }
}
