/*
 * XREFs of ?PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1801C5BB8
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801C5790 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801C5B44 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 */

void __fastcall CComputeScribbleFramebuffer::PreRender(RTL_SRWLOCK *this, void *a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = this + 31;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(this, &EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED, v2->Ptr, HIDWORD(this[32].Ptr));
  AcquireSRWLockExclusive(this + 10);
  v2->Ptr = a2;
  CComputeScribbleFramebuffer::SaveDirtyForPreRender((FastRegion::CRegion **)this);
  if ( this != (RTL_SRWLOCK *)-80LL )
    ReleaseSRWLockExclusive(this + 10);
}
