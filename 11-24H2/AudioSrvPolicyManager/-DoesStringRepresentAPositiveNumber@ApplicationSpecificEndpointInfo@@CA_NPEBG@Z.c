/*
 * XREFs of ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x180045688
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180045BBC (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001D8FC (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180045008 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800450A0 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(char *a1)
{
  bool v1; // bl
  int v2; // esi
  int i; // edi
  WCHAR v4; // ax
  WCHAR v5; // ax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    &v7,
    a1);
  v2 = *(_DWORD *)(v7 - 16);
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = ATL::CSimpleStringT<unsigned short,0>::operator[](&v7, i);
      if ( !IsCharAlphaNumericW(v4) )
        break;
      v5 = ATL::CSimpleStringT<unsigned short,0>::operator[](&v7, i);
      if ( IsCharAlphaW(v5) )
        break;
    }
    v1 = i == v2;
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v7);
  return v1;
}
