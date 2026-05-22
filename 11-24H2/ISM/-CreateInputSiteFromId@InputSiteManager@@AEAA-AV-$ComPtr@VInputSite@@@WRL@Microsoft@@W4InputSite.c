/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180038474
 * Callers:
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x1800374BC (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180036B14 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 *     ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x180037A28 (--$Make@VInputSite@@AEAV-$span@UInputSiteId@@$0-0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Mi.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::CreateInputSiteFromId(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  _BYTE *v7; // rdx
  int v9; // [rsp+20h] [rbp-60h] BYREF
  int v10; // [rsp+28h] [rbp-58h]
  __m128i v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-40h]
  __m128i v13; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v14[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h]

  v12 = a2;
  v10 = 0;
  v14[0] = a3;
  v14[1] = 0;
  v15 = a4;
  v11.m128i_i64[0] = 1LL;
  v11.m128i_i64[1] = (__int64)v14;
  v13 = v11;
  v9 = 0;
  v11.m128i_i64[0] = a1;
  Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
    a2,
    &v13,
    &v9,
    v11.m128i_i64);
  v10 = 2;
  v6 = *a2;
  v11.m128i_i64[0] = *a2;
  v7 = *(_BYTE **)(a1 + 64);
  if ( v7 == *(_BYTE **)(a1 + 72) )
  {
    std::vector<InputSite *>::_Emplace_reallocate<InputSite *>((const void **)(a1 + 56), v7, &v11);
  }
  else
  {
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(a1 + 64) += 8LL;
  }
  return a2;
}
