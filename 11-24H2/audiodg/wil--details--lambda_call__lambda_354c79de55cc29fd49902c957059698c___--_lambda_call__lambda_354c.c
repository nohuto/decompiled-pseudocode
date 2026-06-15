/*
 * XREFs of wil::details::lambda_call__lambda_354c79de55cc29fd49902c957059698c___::_lambda_call__lambda_354c79de55cc29fd49902c957059698c___ @ 0x14005745C
 * Callers:
 *     _CPipeInstance::AddConnectionsAndActivateAPOs_::_1_::dtor$0 @ 0x1400934E4 (_CPipeInstance--AddConnectionsAndActivateAPOs_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_354c79de55cc29fd49902c957059698c___::_lambda_call__lambda_354c79de55cc29fd49902c957059698c___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 152LL) + 48LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 152LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
