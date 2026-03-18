/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIDwmMessageConversationHost@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18024F1F8
 * Callers:
 *     ?Release@?$CMILCOMBaseT@UIDwmMessageConversationHost@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18021CD60 (-Release@-$CMILCOMBaseT@UIDwmMessageConversationHost@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x18004C5F0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<IDwmMessageConversationHost,CMilObjectDeleter>::InternalRelease(__int64 a1)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CMILRefCountImpl *)(a1 + 8);
  v3 = CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(a1 + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1LL);
    }
  }
  return v3;
}
