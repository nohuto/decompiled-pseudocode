/*
 * XREFs of ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1400A8DEC
 * Callers:
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x14008FD04 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1400A8B60 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1400A8C34 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1400A9028 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400A9800 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // rdi
  CVirtualAddressAllocator *v6; // rax
  CVirtualAddressAllocator *v7; // rax
  CVirtualAddressAllocator *v8; // r10
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // r8
  CVirtualAddressAllocator *v14; // rcx
  _BYTE v15[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0LL;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 4);
    if ( (*(_DWORD *)(v3 + 408) & 0x100) == 0 )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 592) + 64LL);
    if ( v5 )
      this = *(VIDMM_PROCESS **)(v5 + 8);
    else
      this = 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, (struct _KTHREAD **)this + 29);
  if ( *((_QWORD *)this + 28) )
    goto LABEL_4;
  v6 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
  if ( v6 )
  {
    v7 = CVirtualAddressAllocator::CVirtualAddressAllocator(v6);
    *((_QWORD *)this + 28) = v7;
    v8 = v7;
    if ( v7 )
    {
      v9 = *((_QWORD *)this + 4);
      v10 = *(_DWORD *)(v9 + 408);
      if ( (v10 & 0x100) != 0 )
        v11 = *(_QWORD *)(v9 + 592);
      else
        v11 = v9 & -(__int64)((v10 & 0x80u) != 0);
      v12 = CVirtualAddressAllocator::InitializeVaAllocator(
              v8,
              *(_QWORD *)(*(_QWORD *)(v11 + 592) + 264LL),
              0,
              0LL,
              0LL);
      v14 = (CVirtualAddressAllocator *)*((_QWORD *)this + 28);
      if ( v12 < 0 )
      {
        CVirtualAddressAllocator::DestroyVaAllocator(v14);
        *((_QWORD *)this + 28) = 0LL;
        goto LABEL_5;
      }
      CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(v14, 0x1000uLL, v13, 0LL, 0LL, 0x1000u, &v16);
LABEL_4:
      v2 = *((_QWORD *)this + 28);
LABEL_5:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
      return (struct CVirtualAddressAllocator *)v2;
    }
  }
  else
  {
    *((_QWORD *)this + 28) = 0LL;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return 0LL;
}
