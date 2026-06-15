/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180048158
 * Callers:
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1800484FC (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180047FF8 (--1-$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_po.c)
 *     ??Dvector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEBAAEBV?$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180048328 (--Dvector_iterator_nothrow@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@Assi.c)
 *     _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x180048338 (_lambda_661bc23c674c805837064d315685ee67_--operator().c)
 *     ??Yvector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@H@Z @ 0x180048418 (--Yvector_iterator_nothrow@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@Assi.c)
 *     ?InternalRelease@?$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800485CC (-InternalRelease@-$ComPtr@UIAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@WRL@Microso.c)
 *     ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x1800485F8 (-begin@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  _QWORD *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h] BYREF
  int *v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF
  __int64 v20; // [rsp+88h] [rbp+28h] BYREF

  v19 = a1;
  if ( a2 )
  {
    *a3 = 0LL;
    v5 = *a2;
    v20 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 80))(a2, &v20);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v16 = 0;
      v17 = 0LL;
      v15 = &v16;
      v13 = v20;
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v14);
      *v15 = v7;
      wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::begin(
        &v13,
        &v11);
      v8 = v14;
      while ( **(int **)(v11 + 16) >= 0 && v12 != v8 )
      {
        v9 = (_QWORD *)wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::vector_iterator_nothrow::operator*(&v11);
        if ( (unsigned __int8)lambda_661bc23c674c805837064d315685ee67_::operator()(&v19, *v9) )
        {
          if ( *v9 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
          *a3 = *v9;
          break;
        }
        wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::vector_iterator_nothrow::operator+=(&v11);
      }
      Microsoft::WRL::ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>::InternalRelease(&v17);
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
        (const char *)(unsigned int)v6);
    }
    wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(&v20);
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
      (const char *)0x80070057LL);
  }
  return v4;
}
