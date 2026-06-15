/*
 * XREFs of std::_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_::_Do_call @ 0x1800B5150
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18001FE80 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_414dbc0e41b953f3a8115f76f732fa65__void_::_Do_call(
        __int64 a1,
        void *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ResetEvent(*(wil::details **)(*(_QWORD *)(a1 + 8) + 64LL), a2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)g_AudioResourceManager;
  v5 = *(_QWORD *)(v3 + 40);
  *(_OWORD *)v7 = *(_OWORD *)(v3 + 48);
  v6 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, int *))(v4 + 80))(
         g_AudioResourceManager,
         v5,
         v7);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      50LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiomodeeffectsdiscovery.cpp",
      (const char *)(unsigned int)v6);
}
