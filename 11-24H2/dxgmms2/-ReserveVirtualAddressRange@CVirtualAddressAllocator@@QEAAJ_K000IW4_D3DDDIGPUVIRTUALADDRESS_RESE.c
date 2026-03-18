/*
 * XREFs of ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400BCFA0
 * Callers:
 *     ?IterateHwReservedRangesCallback@@YAJ_K0PEAX@Z @ 0x140095A90 (-IterateHwReservedRangesCallback@@YAJ_K0PEAX@Z.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1400BC31C (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1400BEBA0 (-VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESS.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400BD1F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400BDEF8 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1400BE130 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRange(
        CVirtualAddressAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE a7,
        unsigned __int64 a8,
        unsigned __int8 a9,
        unsigned __int64 *a10,
        struct VIDMM_MAPPED_VA_RANGE **a11,
        unsigned __int8 a12)
{
  unsigned __int8 v12; // di
  __int64 v17; // rax
  struct VIDMM_MAPPED_VA_RANGE **v18; // rsi
  unsigned __int64 v19; // r13
  struct _RTL_AVL_TREE *v20; // rdx
  int v21; // eax
  struct VIDMM_VAD *v22; // rdi
  unsigned int v23; // ebp
  unsigned int v24; // r8d
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE v25; // edx
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v26; // r15
  struct VIDMM_MAPPED_VA_RANGE *ReservedVaRange; // rax
  unsigned __int64 *v28; // rax
  _BYTE v30[32]; // [rsp+50h] [rbp-48h] BYREF
  struct VIDMM_VAD *v31; // [rsp+A0h] [rbp+8h] BYREF

  v12 = a12;
  if ( a12 )
  {
    v17 = *((_QWORD *)this + 12);
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 96) & 2) != 0 )
        v12 = *(_BYTE *)(*((_QWORD *)this + 11) + 40105LL) != 0 ? a12 : 0;
    }
  }
  v31 = 0LL;
  v18 = a11;
  if ( a11 )
    *a11 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v30, (struct _KTHREAD **)this + 7);
  v19 = a5;
  v21 = CVirtualAddressAllocator::AllocateVirtualAddressRange(this, v20, a2, a3, a4, a5, a6, &v31, v12);
  v22 = v31;
  v23 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry5(3LL, this, a2, a3, a4, v19);
    WdLogGlobalForLineNumber = 1861;
  }
  else
  {
    CVirtualAddressAllocator::InsertVadToReservedList(this, v31);
    v25 = a7;
    if ( a7 == D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT )
    {
LABEL_14:
      v28 = a10;
      *((_DWORD *)v22 + 18) ^= ((unsigned __int16)*((_DWORD *)v22 + 18) ^ (unsigned __int16)(a9 << 11)) & 0x800;
      *v28 = *((_QWORD *)v22 + 3);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
      return 0LL;
    }
    if ( (unsigned int)a7 > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
    {
      WdLogSingleEntry2(3LL, this, a7);
      WdLogGlobalForLineNumber = 1849;
      v23 = -1073741811;
    }
    else
    {
      *((_DWORD *)v22 + 18) = *((_DWORD *)v22 + 18) & 0xFFFFFFF0 | 2;
      v26.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)5LL;
      if ( v25 != D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
        v26.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)8LL;
      ReservedVaRange = CVirtualAddressAllocator::CreateReservedVaRange(
                          this,
                          v22,
                          v24,
                          *((_QWORD *)v22 + 3),
                          *((_QWORD *)v22 + 4) - *((_QWORD *)v22 + 3),
                          v26,
                          a8);
      if ( ReservedVaRange )
      {
        *v18 = ReservedVaRange;
        goto LABEL_14;
      }
      v23 = -1073741801;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(3LL, this, a2, v26.0);
      WdLogGlobalForLineNumber = 1842;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
  if ( v22 )
    CVirtualAddressAllocator::FreeVirtualAddressRange((struct _KTHREAD **)this, *((_QWORD *)v22 + 3));
  return v23;
}
