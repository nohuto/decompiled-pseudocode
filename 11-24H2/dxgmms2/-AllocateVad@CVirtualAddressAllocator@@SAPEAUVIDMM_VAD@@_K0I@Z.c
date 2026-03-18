/*
 * XREFs of ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400BDD58
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400BD1F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 */

struct VIDMM_VAD *__fastcall CVirtualAddressAllocator::AllocateVad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  _QWORD *v9; // rbx

  v3 = a3;
  v6 = operator new[](24 * (a3 + 4), 0x39346956u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 72);
    *(_QWORD *)(v6 + 24) = a1;
    *(_QWORD *)(v6 + 32) = a2;
    *(_DWORD *)(v6 + 72) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(16 * v3)) & 0x7F0;
    if ( (_DWORD)v3 )
    {
      v9 = (_QWORD *)(v6 + 104);
      do
      {
        *(v9 - 1) = 0LL;
        if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
        {
          v9[1] = v9;
          *v9 = v9;
        }
        v9 += 3;
        --v3;
      }
      while ( v3 );
    }
    *(_QWORD *)(v7 + 88) = v7 + 80;
    *(_QWORD *)(v7 + 80) = v7 + 80;
  }
  return (struct VIDMM_VAD *)v7;
}
