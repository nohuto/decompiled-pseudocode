/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18020DC78
 * Callers:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18020A8A0 (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18020DC40 (--1-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 * Callees:
 *     ??1?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18021CA44 (--1-$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 2);
        operator delete((void *)v3, (const struct std::nothrow_t *)0x110);
      }
    }
    *a1 = 0LL;
  }
}
