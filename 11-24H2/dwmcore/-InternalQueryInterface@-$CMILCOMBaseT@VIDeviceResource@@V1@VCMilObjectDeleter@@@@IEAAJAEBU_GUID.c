/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A420
 * Callers:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802119E0 (-QueryInterface@CDeviceTextureTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CDeviceTextureTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A510 (-HrFindInterface@CDeviceTextureTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005AA60 (-HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>::InternalQueryInterface(
        CD2DBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CDeviceTextureTarget *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    return 2147942487LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(CDeviceTextureTarget *__hidden, const struct _GUID *, void **))(*(_QWORD *)this
                                                                                                 + 104LL);
    if ( v6 == CDeviceTextureTarget::HrFindInterface )
    {
      Interface = CDeviceTextureTarget::HrFindInterface(this, a2, a3);
    }
    else if ( v6 == CD2DBitmap::HrFindInterface )
    {
      Interface = CD2DBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
      Interface = ((__int64 (__fastcall *)(CD2DBitmap *))v6)(this);
    }
    v8 = Interface;
    if ( Interface < 0 )
    {
      *a3 = 0LL;
      return v8;
    }
  }
  else
  {
    *a3 = this;
    v8 = 0;
  }
  if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) > 0 )
    return v8;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
    (const char *)0x8007029CLL,
    v10);
  return v8;
}
