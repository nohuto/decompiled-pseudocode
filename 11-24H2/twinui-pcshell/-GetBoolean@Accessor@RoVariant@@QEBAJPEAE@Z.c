/*
 * XREFs of ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1801A4B14
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801A4340 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180399F20 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1801A4BAC (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RoVariant::Accessor::GetBoolean(RoVariant::Accessor *this, unsigned __int8 *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // r8

  if ( !a2 )
    return 2147500035LL;
  *a2 = 0;
  result = RoVariant::Accessor::VerifyPV(this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 144LL))(*v3, v4);
  return result;
}
