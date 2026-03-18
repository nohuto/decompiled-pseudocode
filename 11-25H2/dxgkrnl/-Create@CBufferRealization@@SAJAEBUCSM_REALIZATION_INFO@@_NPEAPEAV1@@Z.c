/*
 * XREFs of ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1400093AC
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1400091E8 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x14009B294 (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009D4BC (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009DA2C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1400095C4 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBufferRealization::Create(
        const struct CSM_REALIZATION_INFO *a1,
        bool a2,
        struct CBufferRealization **a3)
{
  signed int v6; // edi
  __int64 v7; // r9
  __int64 Pool2; // rbx
  __int64 v9; // xmm0_8

  *a3 = 0LL;
  v6 = -1073741811;
  v7 = (unsigned int)(*(_DWORD *)a1 - 1);
  if ( *(_DWORD *)a1 != 1 )
  {
    v7 = (unsigned int)(*(_DWORD *)a1 - 2);
    if ( *(_DWORD *)a1 == 2 || (v7 = (unsigned int)(*(_DWORD *)a1 - 3), (unsigned int)v7 <= 1) )
      v6 = *((_QWORD *)a1 + 1) == 0LL ? 0xC000000D : 0;
LABEL_5:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_6;
  }
  if ( !*((_QWORD *)a1 + 1) )
    goto LABEL_5;
LABEL_6:
  Pool2 = ExAllocatePool2(256LL, 88LL, 1917670211LL, v7);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = &CBufferRealization::`vftable';
    *(_OWORD *)(Pool2 + 24) = *(_OWORD *)a1;
    *(_OWORD *)(Pool2 + 40) = *((_OWORD *)a1 + 1);
    v9 = *((_QWORD *)a1 + 4);
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_QWORD *)(Pool2 + 72) = 0LL;
    *(_DWORD *)(Pool2 + 80) = 0;
    *(_QWORD *)(Pool2 + 56) = v9;
    v6 = CBufferRealization::Initialize((CBufferRealization *)Pool2, a2);
    if ( v6 < 0 )
      (**(void (__fastcall ***)(__int64, __int64))Pool2)(Pool2, 1LL);
    else
      *a3 = (struct CBufferRealization *)Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
