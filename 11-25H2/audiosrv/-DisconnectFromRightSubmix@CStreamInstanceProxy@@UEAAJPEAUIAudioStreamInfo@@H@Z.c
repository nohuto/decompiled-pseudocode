/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z @ 0x180067750
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180074F3C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::scope_exit__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___ @ 0x1800C2314 (wil--scope_exit__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___.c)
 *     _lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_ @ 0x1800C232C (_lambda_cd6f2b70438ec48af9647ef981891005_--_lambda_cd6f2b70438ec48af9647ef981891005_.c)
 *     wil::details::lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___::_lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___ @ 0x1800EEDF0 (wil--details--lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___--_lambda_call__lambda_9f23.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstanceProxy::DisconnectFromRightSubmix(
        CStreamInstanceProxy *this,
        struct IAudioStreamInfo *a2,
        int a3)
{
  __int64 v6; // rax
  int v7; // eax
  void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v6 = lambda_cd6f2b70438ec48af9647ef981891005_::_lambda_cd6f2b70438ec48af9647ef981891005_(v12, (char *)this - 40, &v15);
  wil::scope_exit__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___(v13, v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioStreamInfo *))(**((_QWORD **)this - 2) + 120LL))(
         *((_QWORD *)this - 2),
         a2);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFFE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v12[0]);
  v9 = *((_QWORD *)this - 2);
  *((_QWORD *)this - 2) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( a3 )
  {
    v10 = (__int64)a2 + 352;
    if ( !a2 )
      v10 = 360LL;
    if ( *(_QWORD *)v10 )
      wil::details::SetEvent(*(wil::details **)v10, v8);
  }
  wil::details::lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___::_lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___(v13);
  return 0LL;
}
