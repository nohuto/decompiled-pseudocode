/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1e3a2485e9e200bd7646026f56d618b4__void_::_Do_call @ 0x1800F3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180057750 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18006C030 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_1e3a2485e9e200bd7646026f56d618b4__void_::_Do_call(
        __int64 a1,
        void *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdi
  _QWORD *i; // rbx

  wil::details::ResetEvent(*(wil::details **)(*(_QWORD *)(a1 + 8) + 1800LL), a2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(v3 + 208);
  for ( i = *(_QWORD **)(v3 + 200); i != v4; ++i )
    CAudioStream::OnMfxEffectsChanged((CAudioStream *)((*i - 8LL) & -(__int64)(*i != 0LL)), (void *)(*i - 8LL));
}
