/*
 * XREFs of ??4?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DF824
 * Callers:
 *     ?SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800E28D0 (-SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0.c)
 *     ?SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800E2A60 (-SerializeMulticastSessionsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@U_Mul.c)
 *     ?SerializeCompatibleChildEndpointsForRpc@DummyBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800F7F30 (-SerializeCompatibleChildEndpointsForRpc@DummyBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@PE.c)
 *     ?SerializeMulticastSessionsForRpc@DummyBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800F80C0 (-SerializeMulticastSessionsForRpc@DummyBroadcastProvider@@UEAAJAEAV-$unique_ptr@$$BY0A@U_Multica.c)
 *     ?GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800FCDBC (-GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@PEAGU-.c)
 *     ?GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800FD100 (-GetMulticastSessions@CMulticastSessionManager@@QEAAJAEAV-$unique_ptr@$$BY0A@U_MulticastSessionC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

void **__fastcall wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    operator delete(v4);
  return a1;
}
