/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x18020F584
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1801BF7C0 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020F4BC (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1802742CC (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  CDirectFlipInfo *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 2468);
  if ( v2 )
  {
    v3 = 1;
    if ( *(_DWORD *)(v2 + 52) != 1 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 16) + 488LL))(*(_QWORD *)(v2 + 16), 1LL, 0LL);
    v4 = (CDirectFlipInfo *)*((_QWORD *)this + 2468);
    if ( v4 )
      CDirectFlipInfo::`scalar deleting destructor'(v4, v3);
    *((_QWORD *)this + 2468) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 24LL))(
             *(_QWORD *)this + 8LL,
             v7);
      McTemplateU0xq_EventWriteTransfer(v6, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *(unsigned int *)(v5 + 8), 0);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
  }
}
