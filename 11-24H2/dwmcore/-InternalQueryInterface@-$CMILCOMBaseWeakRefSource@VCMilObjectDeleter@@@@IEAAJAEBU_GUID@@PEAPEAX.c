/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A0400
 * Callers:
 *     ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180216110 (-QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@COverlaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A0560 (-HrFindInterface@COverlaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalQueryInterface(
        COverlaySwapChain *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(CScribbleSwapChain *, const struct _GUID *, void **); // rax
  __int64 v9; // rax
  unsigned int Interface; // eax
  unsigned int v11; // esi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc.Data4;
  if ( v5 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v7 )
    {
      *a3 = this;
      v11 = 0;
      goto LABEL_21;
    }
    v8 = *(__int64 (__fastcall **)(CScribbleSwapChain *, const struct _GUID *, void **))(*(_QWORD *)this + 48LL);
    if ( v8 == CScribbleSwapChain::HrFindInterface )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data4;
      if ( !v9 && *((int *)this + 68) >= 1 )
      {
        v11 = 0;
        *a3 = (char *)this + 256;
LABEL_17:
        if ( (v11 & 0x80000000) != 0 )
        {
          *a3 = 0LL;
          return v11;
        }
LABEL_21:
        if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
        {
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v12);
          return v11;
        }
        return v11;
      }
      Interface = COverlaySwapChain::HrFindInterface(this, a2, a3);
    }
    else
    {
      Interface = ((__int64 (__fastcall *)(COverlaySwapChain *))v8)(this);
    }
    v11 = Interface;
    goto LABEL_17;
  }
  *a3 = this;
  if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v12);
  return 0LL;
}
