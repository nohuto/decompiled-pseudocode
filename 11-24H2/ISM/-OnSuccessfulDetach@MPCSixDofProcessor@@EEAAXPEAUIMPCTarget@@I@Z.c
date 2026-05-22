/*
 * XREFs of ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z @ 0x1801BC6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800C4B28 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCSixDofProcessor::OnSuccessfulDetach(
        MPCSixDofProcessor *this,
        struct IMPCTarget *a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  bool v9; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-28h] BYREF
  struct LegacyInputInfo *v11; // [rsp+30h] [rbp-20h] BYREF
  __int128 v12; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *((_BYTE *)this + 10800) )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = *((unsigned int *)this + 141);
    v12 = 0LL;
    LODWORD(v12) = 2;
    DWORD2(v12) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v6 + 80LL))(v6, v7, &v12);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x32D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v8);
  }
  v10 = a3;
  v11 = (MPCSixDofProcessor *)((char *)this + 560);
  *(_QWORD *)&v12 = a2;
  v9 = 0;
  ISMTracing::MPCInputProviderSourceDetectedLost<IMPCTarget * &,LegacyInputInfo *,bool,unsigned int &>(
    (struct IMPCTarget **)&v12,
    &v11,
    &v9,
    &v10);
  *((_BYTE *)this + 3569) = 1;
}
