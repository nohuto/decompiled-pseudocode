/*
 * XREFs of wil::details::lambda_call__lambda_4eb20a21616a3254e45ae6c03be447d3___::_lambda_call__lambda_4eb20a21616a3254e45ae6c03be447d3___ @ 0x1800B734C
 * Callers:
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x1801646F2 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 * Callees:
 *     _lambda_9f04cff08f73ba581a6423b7140551a2_::operator() @ 0x1800B78BC (_lambda_9f04cff08f73ba581a6423b7140551a2_--operator().c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::lambda_call__lambda_4eb20a21616a3254e45ae6c03be447d3___::_lambda_call__lambda_4eb20a21616a3254e45ae6c03be447d3___(
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
    return (_QWORD *)lambda_9f04cff08f73ba581a6423b7140551a2_::operator()(v6);
  }
  return result;
}
