/*
 * XREFs of ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801F06B4
 * Callers:
 *     ??1JointResize@JointResizeTelemetry@@QEAA@XZ @ 0x18029F1B4 (--1JointResize@JointResizeTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18050A394 (--1VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x180580E3C (--1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18017ACEC (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_18017ACEC.c)
 *     ?SetUnhandledException@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x180295FCC (-SetUnhandledException@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(
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
    goto LABEL_8;
  v5 = v3 + 33;
  AcquireSRWLockExclusive(v5);
  if ( !*v1 || **v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v4 )
  {
LABEL_8:
    if ( **(_DWORD **)(a1 + 272) == 1 )
    {
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
}
