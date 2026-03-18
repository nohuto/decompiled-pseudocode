/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x140008F44
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x140008DC0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 * Callees:
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x14000901C (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x140009074 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1400091E8 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO_ *a2,
        __int64 a3,
        struct CFlipExBuffer **a4)
{
  int v7; // ebx
  __int64 v8; // r9
  CFlipExBuffer *Pool2; // rax
  CFlipExBuffer *v11; // rax
  bool v12; // r9
  struct CFlipExBuffer *v13; // rdi

  *a4 = 0LL;
  v7 = ValidateBufferAttributes(a1);
  if ( v7 >= 0 )
  {
    v7 = -1073741811;
    if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 2 && (unsigned int)(*((_DWORD *)a2 + 1) - 1) <= 0x1E )
    {
      Pool2 = (CFlipExBuffer *)ExAllocatePool2(256LL, 712LL, 1649234755LL, v8);
      if ( Pool2 && (v11 = CFlipExBuffer::CFlipExBuffer(Pool2), (v13 = v11) != 0LL) )
      {
        v7 = CFlipExBuffer::Initialize(v11, a1, a2, v12);
        if ( v7 < 0 )
          (**(void (__fastcall ***)(struct CFlipExBuffer *, __int64))v13)(v13, 1LL);
        else
          *a4 = v13;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v7;
}
