/*
 * XREFs of ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801C4EA0
 * Callers:
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801C4E44 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801C5C48 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C5B90 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CComputeScribbleFramebuffer::ClearScribbles(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(&this[11]);
  LOBYTE(this[32].Ptr) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
