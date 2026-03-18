/*
 * XREFs of ??4?$com_ptr_t@UID3D12CommandQueue@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUID3D12CommandQueue@@@Z @ 0x1801CF1A0
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1801CEB84 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ?Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x180289DC4 (-Initialize@CComputeScribbleStopwatch@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMILRefCountImpl **__fastcall wil::com_ptr_t<ID3D12CommandQueue,wil::err_returncode_policy>::operator=(
        CMILRefCountImpl **a1,
        CMILRefCountImpl *a2)
{
  CMILRefCountImpl *v2; // rdi
  __int64 (__fastcall *v4)(CMILRefCountImpl *); // rax

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(a2);
    else
      v4(a2);
  }
  if ( v2 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
