/*
 * XREFs of ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400B6ADC
 * Callers:
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400B1458 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400B5900 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x140056780 (memset.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::AllocateVad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx

  v6 = operator new[](8 * a3 + 96, 0x39346956u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 72);
    *(_QWORD *)(v6 + 24) = a1;
    *(_QWORD *)(v6 + 32) = a2;
    *(_DWORD *)(v6 + 72) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(16 * a3)) & 0x7F0;
    if ( a3 )
      memset((void *)(v6 + 96), 0, 8LL * a3);
    *(_QWORD *)(v7 + 88) = v7 + 80;
    *(_QWORD *)(v7 + 80) = v7 + 80;
  }
  return (struct VIDMM_VAD *)v7;
}
