/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18005E040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18005E130 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     _lambda_82c9212e29ceb5f8e3f8d325d4b387fa_::_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_ @ 0x1800B63B4 (_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_--_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_.c)
 *     wil::scope_exit__lambda_82c9212e29ceb5f8e3f8d325d4b387fa___ @ 0x1800F3970 (wil--scope_exit__lambda_82c9212e29ceb5f8e3f8d325d4b387fa___.c)
 *     wil::details::lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___::_lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___ @ 0x1800F3E1C (wil--details--lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___--_lambda_call__lambda_fbae.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstanceProxy::ConnectToRightSubmix(
        CStreamInstanceProxy *this,
        struct IAudioStreamInfo *a2,
        struct ISubmixProxy *a3,
        int a4)
{
  __int64 v7; // rax
  __int64 v8; // r10
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rbx
  struct ISubmixProxy *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[64]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v17; // [rsp+80h] [rbp+8h] BYREF
  struct ISubmixProxy *v18; // [rsp+90h] [rbp+18h] BYREF

  v18 = a3;
  v17 = 0;
  v7 = lambda_82c9212e29ceb5f8e3f8d325d4b387fa_::_lambda_82c9212e29ceb5f8e3f8d325d4b387fa_(
         &v14,
         (char *)this - 40,
         &v18,
         &v17);
  wil::scope_exit__lambda_82c9212e29ceb5f8e3f8d325d4b387fa___(v15, v7);
  v9 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *))(*(_QWORD *)v8 + 112LL))(v8, a2);
  v10 = v9;
  v17 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_QWORD *)this - 2);
    v13 = v18;
    *((_QWORD *)this - 2) = v18;
    if ( v13 )
      (*(void (__fastcall **)(struct ISubmixProxy *))(*(_QWORD *)v13 + 8LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( a4 )
      CAudioStream::OnMfxEffectsChanged((CAudioStream *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL)));
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::details::lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___::_lambda_call__lambda_fbaeb66274bee8948b20648bfb33ecc3___(v15);
  return v10;
}
