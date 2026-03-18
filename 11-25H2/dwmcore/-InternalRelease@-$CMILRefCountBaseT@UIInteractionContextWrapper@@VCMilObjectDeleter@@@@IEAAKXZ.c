/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801FEC40
 * Callers:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180133FE8 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18017F7E0 (-Release@-$CMILRefCountBaseT@UIInteractionContextWrapper@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??_GCInteractionContextWrapper@@EEAAPEAXI@Z @ 0x1801FECE0 (--_GCInteractionContextWrapper@@EEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<IInteractionContextWrapper,CMilObjectDeleter>::InternalRelease(
        CInteractionContextWrapper *this)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // edi
  void *(__fastcall *v5)(CInteractionContextWrapper *__hidden, unsigned int); // rax

  v1 = (CInteractionContextWrapper *)((char *)this + 8);
  v3 = CMILRefCountImpl::RemoveReference((CInteractionContextWrapper *)((char *)this + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 144LL))(this);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      v5 = *(void *(__fastcall **)(CInteractionContextWrapper *__hidden, unsigned int))(*(_QWORD *)this + 136LL);
      if ( v5 == CInteractionContextWrapper::`scalar deleting destructor' )
        CInteractionContextWrapper::`scalar deleting destructor'(this, 1u);
      else
        v5(this, 1u);
    }
  }
  return v3;
}
