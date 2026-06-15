/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x14007B6F0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IVector@UEventRegistrationToken@@@Collections@Foundation@Windows@@U?$IIterable@UEventRegistrationToken@@@567@U?$CloakedIid@UIVersionedVector@Internal@Collections@Foundation@Windows@@@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x14007B770 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IV_ea_14007B770.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::Collections::IVector<EventRegistrationToken>,Windows::Foundation::Collections::IIterable<EventRegistrationToken>,Microsoft::WRL::CloakedIid<Windows::Foundation::Collections::Internal::IVersionedVector>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_128f7285_6e28_5ff3_9cbc_ae2a0527ca6f;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_f0a9a686_2b1f_546a_8339_58c01533ec25;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
