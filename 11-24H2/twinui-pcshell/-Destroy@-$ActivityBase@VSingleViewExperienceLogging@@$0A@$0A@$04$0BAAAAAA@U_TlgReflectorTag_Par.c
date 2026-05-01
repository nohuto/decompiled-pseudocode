/*
 * XREFs of ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003F224
 * Callers:
 *     ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18003A1B8 (--1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003E8E4 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18003F1C8 (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflector_ea_18003F1C8.c)
 *     ?SetUnhandledException@?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x180087484 (-SetUnhandledException@-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        __int64 a1)
{
  volatile signed __int32 **v1; // rsi
  RTL_SRWLOCK *v3; // rdi
  char v4; // bp
  RTL_SRWLOCK *v5; // rdi

  v1 = (volatile signed __int32 **)(a1 + 280);
  v3 = *(RTL_SRWLOCK **)(a1 + 280);
  v4 = 1;
  if ( !v3 )
    goto LABEL_9;
  v5 = v3 + 33;
  AcquireSRWLockExclusive(v5);
  if ( !*v1 || **v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v4 )
  {
LABEL_9:
    if ( **(_DWORD **)(a1 + 272) == 1 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
}
