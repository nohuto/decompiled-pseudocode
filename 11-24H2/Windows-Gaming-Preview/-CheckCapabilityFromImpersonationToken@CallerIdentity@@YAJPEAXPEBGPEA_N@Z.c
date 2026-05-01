/*
 * XREFs of ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003CE4C
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003CEA8 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003CE28 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromImpersonationToken(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        bool *a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *(_BYTE *)a3 = 0;
  LOBYTE(v10) = 0;
  v5 = CapabilityCheck(this, L"gameList", &v10, a4);
  if ( v5 < 0 )
    return wil::details::in1diag3::Return_NtStatus(retaddr, v6, v7, (const char *)(unsigned int)v5);
  *(_BYTE *)a3 = (_BYTE)v10 != 0;
  return 0LL;
}
