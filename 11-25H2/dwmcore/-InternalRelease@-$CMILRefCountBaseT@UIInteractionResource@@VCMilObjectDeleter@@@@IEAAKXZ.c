/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1802151D0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180227670 (-Release@-$CMILRefCountBaseT@UIInteractionResource@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<IInteractionResource,CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CMILRefCountImpl *)(a1 + 8);
  v3 = CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(a1 + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 240LL))(a1, 1LL);
    }
  }
  return v3;
}
