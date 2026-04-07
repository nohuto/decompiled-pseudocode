/*
 * XREFs of ??$?0V_lambda_8db0ce862824541f40dfb767113f1e28_@@X@?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@V_lambda_8db0ce862824541f40dfb767113f1e28_@@@Z @ 0x180071594
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180070958 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x1800715E0 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 */

__int64 __fastcall wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(
        CFadeOut *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // xmm1_8

  *((_QWORD *)a1 + 14) = 0LL;
  if ( CFadeOut::IsIndependent(a1) )
  {
    v3 = *(_QWORD *)(v1 + 16);
    *(_OWORD *)(v2 + 16) = *(_OWORD *)v1;
    *(_QWORD *)(v2 + 8) = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    *(_QWORD *)(v2 + 32) = v3;
    *(_QWORD *)(v2 + 112) = v2 + 8;
  }
  return v2;
}
