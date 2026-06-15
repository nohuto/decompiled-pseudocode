/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@H@Z @ 0x18006BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18006C030 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     _lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_ @ 0x1800B6FEC (_lambda_dacf159241f8e1fef226fb2cfac8af81_--_lambda_dacf159241f8e1fef226fb2cfac8af81_.c)
 *     wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___ @ 0x1800EE920 (wil--scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___.c)
 *     wil::details::lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___::_lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___ @ 0x1800EEDB0 (wil--details--lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___--_lambda_call__lambda_313c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  v7 = lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_(
         &v14,
         (char *)this - 40,
         &v18,
         &v17);
  wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___(v15, v7);
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
      (void *)0xFDC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
  }
  wil::details::lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___::_lambda_call__lambda_313cac95b01ff645a67614ff771be5c4___(v15);
  return v10;
}
