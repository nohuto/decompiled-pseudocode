/*
 * XREFs of ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166C30
 * Callers:
 *     _lambda_b246ce06b62e0fe260ebdade75b833fa_::_lambda_invoker_cdecl_ @ 0x1401432E0 (_lambda_b246ce06b62e0fe260ebdade75b833fa_--_lambda_invoker_cdecl_.c)
 *     _lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_::_lambda_invoker_cdecl_ @ 0x140143320 (_lambda_f04dbbba9fe6a1cf15f4fb42f8ba953a_--_lambda_invoker_cdecl_.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140160850 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140135EA0 (-CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall Ndis::Initmode::DisableIfNeeded(
        Ndis::Initmode *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum CallRunMode a3)
{
  enum CallRunMode v3; // ebp
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  char v6; // di

  v3 = (int)a2;
  if ( *((_BYTE *)this + 1995) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 5144, 0LL);
    v6 = Ndis::Initmode::CheckAllDriversRunning(this, v5);
    KeLeaveCriticalRegion();
    ExReleasePushLockEx((char *)this + 5144, 0LL);
    if ( v6 )
      ndisMExitInitMode((struct _NDIS_MINIPORT_BLOCK *)this, v3);
  }
}
