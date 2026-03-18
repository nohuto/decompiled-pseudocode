/*
 * XREFs of ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180174CB4
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x18017433C (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x180174C58 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801749A0 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CComputeScribbleFramebuffer::ClearScribbles(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(&this[11].Ptr);
  LOBYTE(this[32].Ptr) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
