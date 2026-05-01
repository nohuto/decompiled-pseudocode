/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18074ABF8
 * Callers:
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x18074B05C (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 * Callees:
 *     ??1?$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ @ 0x18005B67C (--1-$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x18074ADBC (_lambda_661bc23c674c805837064d315685ee67_--operator().c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18074B138 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  unsigned int i; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h] BYREF
  int *v14; // [rsp+30h] [rbp-20h]
  int v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  __int64 v19; // [rsp+78h] [rbp+28h] BYREF

  v18 = a1;
  if ( a2 )
  {
    *a3 = 0LL;
    v5 = *a2;
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 80))(a2, &v19);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v15 = 0;
      v16 = 0LL;
      v12 = v19;
      v14 = &v15;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v13);
      *v14 = v7;
      wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
        &v12,
        0LL);
      v8 = v13;
      for ( i = 0;
            *v14 >= 0 && i != v8;
            wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
              &v12,
              i) )
      {
        if ( (unsigned __int8)lambda_661bc23c674c805837064d315685ee67_::operator()(&v18, v16) )
        {
          v10 = v16;
          if ( v16 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            v10 = v16;
          }
          *a3 = v10;
          break;
        }
        ++i;
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10,
        (int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
        (const char *)(unsigned int)v6);
    }
    ATL::CComPtr<IWICImagingFactory>::~CComPtr<IWICImagingFactory>(&v19);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (int)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
      (const char *)0x80070057LL);
  }
  return v4;
}
