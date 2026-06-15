/*
 * XREFs of wil::details::lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___::_lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___ @ 0x140057204
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$5 @ 0x140096037 (_CAudioDeviceGraph--Initialize_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___::_lambda_call__lambda_0efa840e8179dde10a4fd154e3e5d6e3___(
        _BYTE *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 152LL);
    if ( v2 )
    {
      *(_QWORD *)(v1 + 152) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
