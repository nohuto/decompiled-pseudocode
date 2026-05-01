/*
 * XREFs of ??1?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180213510
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1801055B8 (GetAssignedAccessTypeForUser_0.c)
 *     _lambda_fe44875c696bc544c1b0599fc0c72566_::_lambda_invoker_cdecl_ @ 0x1804F3980 (_lambda_fe44875c696bc544c1b0599fc0c72566_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1804F9E70 (wistd--__function--__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_c.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180683C08 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 *     ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180683F00 (-GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEB.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x180684010 (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 *     _dynamic_atexit_destructor_for__GamingPosturePositioner::s_instance__ @ 0x1807077B0 (_dynamic_atexit_destructor_for__GamingPosturePositioner--s_instance__.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::~com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
