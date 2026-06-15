/*
 * XREFs of ??$get_sr_entity_propset@UIApplicationExtension@StateRepository@Internal@Windows@@@wil@@YAJPEAUIApplicationExtension@StateRepository@Internal@Windows@@PEAPEAUIPropertySet@Collections@Foundation@4@@Z @ 0x180146A94
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180013568 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::get_sr_entity_propset<Windows::Internal::StateRepository::IApplicationExtension>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h]
  LPVOID *p_pv; // [rsp+30h] [rbp-10h]
  unsigned int v10; // [rsp+38h] [rbp-8h] BYREF
  char v11; // [rsp+3Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  pv = 0LL;
  v8 = 0LL;
  v3 = *a1;
  p_pv = &pv;
  v10 = 0;
  v11 = 1;
  v4 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, LPVOID *))(v3 + 512))(a1, &v10, &pv);
  if ( v11 )
    p_pv[1] = (LPVOID)v10;
  if ( v4 < 0 )
  {
    v5 = 21LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecore\\internal\\sdk\\inc\\wil\\staterepository.h",
      (const char *)(unsigned int)v4);
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)v4;
  }
  v4 = SRDictionaryToPropertySet((unsigned int)v8, pv, a2);
  if ( v4 < 0 )
  {
    v5 = 22LL;
    goto LABEL_5;
  }
  if ( pv )
    CoTaskMemFree(pv);
  return 0LL;
}
