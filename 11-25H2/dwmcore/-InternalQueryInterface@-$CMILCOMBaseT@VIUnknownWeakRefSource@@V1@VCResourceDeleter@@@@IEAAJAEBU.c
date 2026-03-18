/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VIUnknownWeakRefSource@@V1@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D0D70
 * Callers:
 *     ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x1800D0820 (-GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800D0A30 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?HrFindInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BE870 (-HrFindInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<IUnknownWeakRefSource,IUnknownWeakRefSource,CResourceDeleter>::InternalQueryInterface(
        CMaskBrush *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CCompositionSurfaceBitmap *__hidden, const struct _GUID *, void **); // rax
  __int64 v7; // rax
  int v8; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  int Interface; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v5 )
    {
      *a3 = this;
      v8 = 0;
      goto LABEL_11;
    }
    v6 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 48LL);
    if ( v6 == CCompositionSurfaceBitmap::HrFindInterface )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
      if ( !v7 )
      {
        v8 = 0;
        *a3 = (char *)this + 72;
        goto LABEL_10;
      }
      v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1 )
        v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data4;
      if ( !v10 )
      {
        v8 = 0;
        *a3 = (char *)this + 88;
        goto LABEL_10;
      }
      goto LABEL_23;
    }
    if ( v6 == CGdiSpriteBitmap::HrFindInterface )
    {
      v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
        v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
      if ( v11 )
      {
LABEL_23:
        v8 = -2147467262;
        goto LABEL_10;
      }
      v8 = 0;
      *a3 = (char *)this + 104;
    }
    else
    {
      if ( v6 == CMaskBrush::HrFindInterface )
        Interface = CMaskBrush::HrFindInterface(this, a2, a3);
      else
        Interface = ((__int64 (__fastcall *)(CMaskBrush *))v6)(this);
      v8 = Interface;
    }
LABEL_10:
    if ( v8 < 0 )
    {
      *a3 = 0LL;
      return (unsigned int)v8;
    }
LABEL_11:
    if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v13);
    return (unsigned int)v8;
  }
  return 2147942487LL;
}
