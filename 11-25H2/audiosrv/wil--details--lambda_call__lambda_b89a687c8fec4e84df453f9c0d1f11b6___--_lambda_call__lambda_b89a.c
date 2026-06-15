/*
 * XREFs of wil::details::lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___::_lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___ @ 0x180117F1C
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::dtor$2 @ 0x180167DDB (_Sarm--CSpatialAudioResourceManager--RegisterForApplicationPolicyChanges_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___::_lambda_call__lambda_b89a687c8fec4e84df453f9c0d1f11b6___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 552LL))(**a1, *a1[1]);
  }
  return result;
}
