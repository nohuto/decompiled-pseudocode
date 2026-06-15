/*
 * XREFs of wil::details::lambda_call__lambda_65b2a3f6ff49d1359e78b1233c8e8804___::_lambda_call__lambda_65b2a3f6ff49d1359e78b1233c8e8804___ @ 0x18011CF08
 * Callers:
 *     _DynamicAudioEndpointManager::UpdateRule_::_1_::dtor$3 @ 0x180167FDF (_DynamicAudioEndpointManager--UpdateRule_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_65b2a3f6ff49d1359e78b1233c8e8804___::_lambda_call__lambda_65b2a3f6ff49d1359e78b1233c8e8804___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 24) )
  {
    *((_BYTE *)a1 + 24) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
  }
  return result;
}
