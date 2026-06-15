/*
 * XREFs of ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18004AB54
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004A1A0 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_401f33ed1035a8d15a958bb8e80586a7_::operator() @ 0x18012906C (_lambda_401f33ed1035a8d15a958bb8e80586a7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180040B34 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEndpointCharacteristics::PersistAECPolicy(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct _tagpropertykey *a3,
        const struct _AEC_POLICY_RESULTS *a4)
{
  __int64 v6; // rcx
  int v9; // ebx
  char v10; // di
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // esi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  const struct _AEC_POLICY_RESULTS *v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v16 = 0LL;
  v6 = *((_QWORD *)this + 9);
  *(_OWORD *)pvar = 0LL;
  (*(void (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(v6, a3, pvar);
  v9 = 0;
  if ( LOWORD(pvar[0]) != 65 || (v10 = 0, *((_DWORD *)a4 + 15) != *(_DWORD *)(v16 + 60)) )
    v10 = 1;
  PropVariantClear(pvar);
  v11 = *((_QWORD *)this + 9);
  v18 = a4;
  v17 = 0LL;
  LOWORD(v17) = 65;
  DWORD2(v17) = 68;
  v12 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, __int128 *))(*(_QWORD *)v11 + 48LL))(
          v11,
          a3,
          &v17);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v10 )
    {
      LOBYTE(v9) = a2 == eKeywordDetectorConnector;
      CEndpointCharacteristics::ClearMixFormatCache((__int64)this, v9 + 1);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC30,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
}
