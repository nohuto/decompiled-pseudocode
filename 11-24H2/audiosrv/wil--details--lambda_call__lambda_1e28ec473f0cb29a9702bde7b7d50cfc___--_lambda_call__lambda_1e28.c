/*
 * XREFs of wil::details::lambda_call__lambda_1e28ec473f0cb29a9702bde7b7d50cfc___::_lambda_call__lambda_1e28ec473f0cb29a9702bde7b7d50cfc___ @ 0x1800B6790
 * Callers:
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x18016DBFC (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 * Callees:
 *     _lambda_598bf403e3c92612e01cf389e2f05c9b_::operator() @ 0x1800B6F30 (_lambda_598bf403e3c92612e01cf389e2f05c9b_--operator().c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::lambda_call__lambda_1e28ec473f0cb29a9702bde7b7d50cfc___::_lambda_call__lambda_1e28ec473f0cb29a9702bde7b7d50cfc___(
        __int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  result = (_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    v2 = *(_QWORD *)(a1 + 32);
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 8);
    v6[0] = *result;
    v6[1] = v5;
    v6[2] = v4;
    v6[3] = v3;
    v6[4] = v2;
    return (_QWORD *)lambda_598bf403e3c92612e01cf389e2f05c9b_::operator()(v6);
  }
  return result;
}
