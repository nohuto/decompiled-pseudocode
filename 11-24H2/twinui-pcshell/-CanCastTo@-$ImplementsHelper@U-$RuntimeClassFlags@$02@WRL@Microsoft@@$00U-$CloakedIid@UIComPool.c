/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180203390
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@UIAsyncOperationLocal@Internal@7@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800FF754 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800FF754.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAsyncOperationLocal@Internal@Windows@@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180207EDC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAsyncOperationLocal@I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncFireCompletion>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 1204800526
    || a2[1] != *(_DWORD *)&GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data2
    || a2[2] != *(_DWORD *)GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data4
    || a2[3] != *(_DWORD *)&GUID_47cfcc0e_6012_43ca_81a9_ab7bc86ad5d4.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 428297526
      || a2[1] != *(_DWORD *)&GUID_19874d36_ba31_46b7_986b_121aa1bbcd62.Data2
      || a2[2] != *(_DWORD *)GUID_19874d36_ba31_46b7_986b_121aa1bbcd62.Data4
      || a2[3] != *(_DWORD *)&GUID_19874d36_ba31_46b7_986b_121aa1bbcd62.Data4[4] )
    {
      return 2147500034LL;
    }
  }
  *a3 = a1;
  return 0LL;
}
