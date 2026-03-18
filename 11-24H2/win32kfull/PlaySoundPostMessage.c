/*
 * XREFs of PlaySoundPostMessage @ 0x1403D0E00
 * Callers:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400A38B4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 * Callees:
 *     I_PlaySoundkPostMessage @ 0x1401CFBD0 (I_PlaySoundkPostMessage.c)
 *     PlaySndClient_midl_user_allocate @ 0x1401D56C0 (PlaySndClient_midl_user_allocate.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2_@?N@??Initialize@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAA_NXZ@SA?A_PPEAX@Z @ 0x14026C2F0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2_@-N@--Initialize@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInst.c)
 */

__int64 __fastcall PlaySoundPostMessage(RPC_BINDING_HANDLE SourceBinding, int a2, int a3)
{
  struct _RPC_ASYNC_STATE *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  int v10; // [rsp+20h] [rbp-38h]
  RPC_BINDING_HANDLE DestinationBinding[5]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  DestinationBinding[0] = 0LL;
  v6 = (struct _RPC_ASYNC_STATE *)PlaySndClient_midl_user_allocate(88LL);
  v7 = (__int64)v6;
  DestinationBinding[1] = v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = RpcAsyncInitializeHandle(v6, 0x58u);
  if ( v8 || (v8 = RpcBindingCopy(SourceBinding, DestinationBinding)) != 0 )
  {
    `NSInstrumentation::CTypeIsolation<237568,928>::Initialize'::`13'::_lambda_2_::_lambda_invoker_cdecl_<void *>((PVOID)v7);
  }
  else
  {
    *(RPC_BINDING_HANDLE *)(v7 + 24) = DestinationBinding[0];
    *(_DWORD *)(v7 + 44) = 2;
    *(_QWORD *)(v7 + 48) = I_RpcGetCompleteAndFreeRoutine();
    v12 = 0;
    I_PlaySoundkPostMessage(v7, (__int64)DestinationBinding[0], a2, a3, v10, (__int64)&v12);
  }
  return v8;
}
