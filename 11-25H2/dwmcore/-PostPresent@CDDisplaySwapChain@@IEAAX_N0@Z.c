/*
 * XREFs of ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x1801726B8
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180171A70 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 */

void __fastcall CDDisplaySwapChain::PostPresent(CDDisplaySwapChain *this, char a2)
{
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  unsigned int v5; // eax

  if ( !a2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 61);
    v4 = (__int64 *)*((_QWORD *)this + 62);
    if ( v3 != v4 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
        v3,
        v4);
      *((_QWORD *)this + 62) = *((_QWORD *)this + 61);
    }
    **((_DWORD **)this + 23) = 0;
    v5 = *((_DWORD *)this + 131) + 1;
    *((_BYTE *)this + 665) = 0;
    *((_DWORD *)this + 131) = v5 % *((_DWORD *)this + 128);
  }
  CScribbleSwapChain::PostPresentForComputeScribble(this, 0);
}
