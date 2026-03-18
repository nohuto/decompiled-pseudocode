/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x140018450
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1400182C0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 * Callees:
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x140018528 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x140018580 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1400186F4 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO_ *a2,
        __int64 a3,
        struct CFlipExBuffer **a4)
{
  int v7; // ebx
  CFlipExBuffer *Pool2; // rax
  CFlipExBuffer *v10; // rax
  bool v11; // r9
  struct CFlipExBuffer *v12; // rdi

  *a4 = 0LL;
  v7 = ValidateBufferAttributes(a1);
  if ( v7 >= 0 )
  {
    v7 = -1073741811;
    if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 2 && (unsigned int)(*((_DWORD *)a2 + 1) - 1) <= 0x1E )
    {
      Pool2 = (CFlipExBuffer *)ExAllocatePool2(256LL, 712LL, 1649234755LL);
      if ( Pool2 && (v10 = CFlipExBuffer::CFlipExBuffer(Pool2), (v12 = v10) != 0LL) )
      {
        v7 = CFlipExBuffer::Initialize(v10, a1, a2, v11);
        if ( v7 < 0 )
          (**(void (__fastcall ***)(struct CFlipExBuffer *, __int64))v12)(v12, 1LL);
        else
          *a4 = v12;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v7;
}
