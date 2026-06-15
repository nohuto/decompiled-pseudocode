/*
 * XREFs of _lambda_c25bfbbe3eff8159fd381be65f1c93f0_::__lambda_c25bfbbe3eff8159fd381be65f1c93f0_ @ 0x18005A2D4
 * Callers:
 *     _CAudioSession::PostStateCheckExpirationWork_::_1_::dtor$1 @ 0x18016A0E0 (_CAudioSession--PostStateCheckExpirationWork_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_c25bfbbe3eff8159fd381be65f1c93f0_::__lambda_c25bfbbe3eff8159fd381be65f1c93f0_(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
