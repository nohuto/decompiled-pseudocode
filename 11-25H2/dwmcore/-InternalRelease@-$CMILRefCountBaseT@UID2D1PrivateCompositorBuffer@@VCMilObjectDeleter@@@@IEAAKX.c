/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801E646C
 * Callers:
 *     ?Release@?$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180045730 (-Release@-$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1801E6500 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<ID2D1PrivateCompositorBuffer,CMilObjectDeleter>::InternalRelease(
        CD2DSharedBuffer *this)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // edi
  void *(__fastcall *v4)(CD2DSharedBuffer *__hidden, unsigned int); // rax

  v1 = (CD2DSharedBuffer *)((char *)this + 8);
  v3 = CMILRefCountImpl::RemoveReference((CD2DSharedBuffer *)((char *)this + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(CD2DSharedBuffer *))(*(_QWORD *)this + 48LL))(this);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      v4 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden, unsigned int))(*(_QWORD *)this + 40LL);
      if ( v4 == CD2DSharedBuffer::`vector deleting destructor' )
        CD2DSharedBuffer::`vector deleting destructor'(this, 1u);
      else
        v4(this, 1u);
    }
  }
  return v3;
}
