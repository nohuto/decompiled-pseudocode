/*
 * XREFs of __lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()_::_1_::catch$15 @ 0x1802B852C
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()_::_1_::catch_15(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdx
  wil::details *v5; // rcx

  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  v3 = *(_QWORD *)(a2 + 96);
  __ExceptionPtrAssign(*(void **)(v3 + 32), (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  if ( *(_QWORD *)v3 )
    v5 = **(wil::details ***)v3;
  else
    v5 = 0LL;
  wil::details::SetEvent(v5, v4);
  return 0LL;
}
