/*
 * XREFs of ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x1400EF844
 * Callers:
 *     VidMmMapGpuVirtualAddress @ 0x14003C2A0 (VidMmMapGpuVirtualAddress.c)
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1400EF718 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x1400EFA34 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_AL.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        bool a5,
        unsigned int a6)
{
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // rax
  int v11; // r14d
  unsigned int i; // ebp
  __int64 v13; // rcx

  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  if ( (*(_BYTE *)&Value & 8) != 0 && (*(_BYTE *)&Value & 7) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 19405;
    return 3221225485LL;
  }
  if ( (*(_BYTE *)&Value & 0xC) != 0 )
  {
    if ( a3 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 19413;
      return 3221225485LL;
    }
  }
  else if ( !a3 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 19419;
    return 3221225485LL;
  }
  a4->BaseAddress &= 0xFFFFFFFFFFFFF000uLL;
  a4->MinimumAddress &= 0xFFFFFFFFFFFFF000uLL;
  a4->MaximumAddress &= 0xFFFFFFFFFFFFF000uLL;
  if ( a2 )
    return VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(this, a2, a3, a4, a5);
  v11 = 0;
  if ( a6 == -1 )
  {
    for ( i = 0; i < *((_DWORD *)this + 1736); ++i )
    {
      v11 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
              this,
              *(struct VIDMM_PAGING_QUEUE **)(32LL * i + *(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL)),
              a3,
              a4,
              0);
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(1LL, i);
        WdLogGlobalForLineNumber = 19445;
        goto LABEL_21;
      }
      a4->BaseAddress = a4->VirtualAddress;
    }
  }
  else
  {
    v11 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
            this,
            *(struct VIDMM_PAGING_QUEUE **)(32LL * a6 + *(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL)),
            a3,
            a4,
            0);
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(1LL, a6);
      WdLogGlobalForLineNumber = 19457;
LABEL_21:
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
    }
  }
  return (unsigned int)v11;
}
