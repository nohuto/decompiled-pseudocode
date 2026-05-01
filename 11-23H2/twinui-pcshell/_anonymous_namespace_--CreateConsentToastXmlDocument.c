/*
 * XREFs of _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1806ABB84
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1802534F4 (_lambda_2b4736168c23780831e980beacfbaf99_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180644C38 (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     ??$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXmlDocument@Dom@Xml@Data@23@XZ @ 0x1806AAAAC (--$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Wind.c)
 *     ??$call@P6A?AUXmlDocument@Dom@Xml@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UXmlDocument@Dom@Xml@Data@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXmlDocument@Dom@Xml@Data@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1806AACE0 (--$call@P6A-AUXmlDocument@Dom@Xml@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@-$.c)
 *     ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUIXmlNode@Dom@Xml@Data@Windows@3@@Z @ 0x1806AB96C (-AppendChild@-$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@i.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806AC78C (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 *     ?CreateTextNode@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806ACFE8 (-CreateTextNode@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@w.c)
 */

// Hidden C++ exception states: #wind=21
__int64 *__fastcall anonymous_namespace_::CreateConsentToastXmlDocument(
        __int64 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r8
  void (__fastcall ***v11)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // r13
  __int64 v12; // r8
  void (__fastcall ***v13)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // rcx
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // r12
  void (__fastcall ***v15)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // rcx
  void (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // r15
  void (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // r14
  void (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 v19; // rcx
  void (__fastcall ***v20)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // rcx
  __int64 v21; // rcx
  void (__fastcall ***v22)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // rcx
  void (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // rdi
  void (__fastcall ***v24)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v25)(__int64, __int64 *); // rax
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v27)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h]
  void (__fastcall ***v29)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+48h] [rbp-C0h] BYREF
  void (__fastcall ***v30)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+50h] [rbp-B8h] BYREF
  void (__fastcall ***v31)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+58h] [rbp-B0h] BYREF
  void (__fastcall ***v32)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+60h] [rbp-A8h] BYREF
  void (__fastcall ***v33)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+68h] [rbp-A0h] BYREF
  void (__fastcall ***v34)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+70h] [rbp-98h] BYREF
  void (__fastcall ***v35)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v40[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v51; // [rsp+100h] [rbp-8h]
  __int64 *v52; // [rsp+108h] [rbp+0h]
  _BYTE v53[32]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v54[4]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v55[4]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v56[32]; // [rsp+170h] [rbp+68h] BYREF
  _QWORD v57[4]; // [rsp+190h] [rbp+88h] BYREF
  _QWORD v58[4]; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v59[32]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v60[32]; // [rsp+1F0h] [rbp+E8h] BYREF
  _QWORD v61[4]; // [rsp+210h] [rbp+108h] BYREF
  _QWORD v62[4]; // [rsp+230h] [rbp+128h] BYREF
  _BYTE v63[32]; // [rsp+250h] [rbp+148h] BYREF
  _BYTE v64[32]; // [rsp+270h] [rbp+168h] BYREF
  _QWORD v65[4]; // [rsp+290h] [rbp+188h] BYREF
  _QWORD v66[4]; // [rsp+2B0h] [rbp+1A8h] BYREF
  _BYTE v67[32]; // [rsp+2D0h] [rbp+1C8h] BYREF
  _BYTE v68[32]; // [rsp+2F0h] [rbp+1E8h] BYREF
  _QWORD v69[4]; // [rsp+310h] [rbp+208h] BYREF
  _QWORD v70[4]; // [rsp+330h] [rbp+228h] BYREF
  _BYTE v71[32]; // [rsp+350h] [rbp+248h] BYREF
  _QWORD v72[4]; // [rsp+370h] [rbp+268h] BYREF
  _QWORD v73[4]; // [rsp+390h] [rbp+288h] BYREF
  void (__fastcall *v74)(__int64, __int64 *); // [rsp+3B0h] [rbp+2A8h] BYREF
  void (__fastcall *v75)(__int64, __int64 *); // [rsp+3B8h] [rbp+2B0h] BYREF
  void (__fastcall *v76)(__int64, __int64 *); // [rsp+3C0h] [rbp+2B8h] BYREF
  void (__fastcall *v77)(__int64, __int64 *); // [rsp+3C8h] [rbp+2C0h] BYREF
  void (__fastcall *v78)(__int64, __int64 *); // [rsp+3D0h] [rbp+2C8h] BYREF
  void (__fastcall *v79)(__int64, __int64 *); // [rsp+3D8h] [rbp+2D0h] BYREF
  void (__fastcall *v80)(__int64, __int64 *); // [rsp+3E0h] [rbp+2D8h] BYREF
  void (__fastcall *v81)(__int64, __int64 *); // [rsp+3E8h] [rbp+2E0h] BYREF
  void (__fastcall *v82)(__int64, __int64 *); // [rsp+3F0h] [rbp+2E8h] BYREF
  void (__fastcall *v83)(__int64, __int64 *); // [rsp+3F8h] [rbp+2F0h] BYREF
  void (__fastcall *v84)(__int64, __int64 *); // [rsp+400h] [rbp+2F8h] BYREF

  v51 = a1;
  v52 = a1;
  LODWORD(v28) = 0;
  v40[1] = &qword_180991E08;
  _InterlockedIncrement64(&qword_180991E08);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Xml::Dom::XmlDocument>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory>,
      a1);
    LODWORD(v28) = 6;
    v8 = -1LL;
    _InterlockedAdd64(&qword_180991E08, 0xFFFFFFFFFFFFFFFFuLL);
    v9 = 6;
  }
  else
  {
    v8 = -1LL;
    _InterlockedAdd64(&qword_180991E08, 0xFFFFFFFFFFFFFFFFuLL);
    v27 = _lambda_e39067982572d3667926157dc9eb0f0a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Xml::Dom::XmlDocument (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      0LL,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v27);
    v9 = 2;
  }
  LODWORD(v28) = v9 | 1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v64, L"toast", 5);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v30,
    v64);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v65, L"systemDialog", 12);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v66, L"scenario", 8);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v30,
    v66,
    v65);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v67, L"visual", 6);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v35,
    v67);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v53, L"binding", 7);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v29,
    v53);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v69, L"ToastGeneric", 12);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v70, L"template", 8);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v29,
    v70,
    v69);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v71, L"image", 5);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v34,
    v71);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v72, L"appLogoOverride", 15);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v73, L"placement", 9);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v34,
    v73,
    v72);
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v54, a4, v10);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v55, L"src", 3);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v34,
    v55,
    v54);
  v11 = v34;
  if ( v34 )
  {
    v74 = 0LL;
    (**v34)(v34, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v74);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v74;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v29,
    &v37,
    &v27);
  if ( v37 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v37);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v56, L"text", 4);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v33,
    v56);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v57, L"header", 6);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v58, L"hint-style", 10);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v33,
    v58,
    v57);
  v12 = -1LL;
  do
    ++v12;
  while ( a2[v12] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v59, a2, v12);
  v13 = *(void (__fastcall ****)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)))winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateTextNode(
                                                                                             a1,
                                                                                             v40,
                                                                                             v59);
  if ( v13 )
  {
    v75 = 0LL;
    (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v75);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v75;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v33,
    &v39,
    &v27);
  if ( v39 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  if ( v40[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v40);
  v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
  if ( v33 )
  {
    v76 = 0LL;
    (**v33)(v33, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v76);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v76;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v29,
    &v41,
    &v27);
  if ( v41 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v41);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v60, L"text", 4);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v32,
    v60);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v61, L"body", 4);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v62, L"hint-style", 10);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v32,
    v62,
    v61);
  do
    ++v8;
  while ( a3[v8] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v63, a3, v8);
  v15 = *(void (__fastcall ****)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)))winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateTextNode(
                                                                                             a1,
                                                                                             &v44,
                                                                                             v63);
  if ( v15 )
  {
    v77 = 0LL;
    (**v15)(v15, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v77);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v77;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v32,
    &v43,
    &v27);
  if ( v43 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v43);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  if ( v44 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v44);
  v16 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v32;
  if ( v32 )
  {
    v78 = 0LL;
    (**v32)(v32, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v78);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v78;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v29,
    &v46,
    &v27);
  if ( v46 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v46);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  v17 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v29;
  if ( v29 )
  {
    v79 = 0LL;
    (**v29)(v29, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v79);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v79;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v35,
    &v48,
    &v27);
  if ( v48 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v48);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  v18 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  if ( v35 )
  {
    v80 = 0LL;
    (**v35)(v35, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v80);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v80;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v30,
    &v50,
    &v27);
  if ( v50 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v50);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v68, L"actions", 7);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v31,
    v68);
  v74 = (void (__fastcall *)(__int64, __int64 *))*a1;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v74);
  v20 = *(void (__fastcall ****)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)))lambda_2b4736168c23780831e980beacfbaf99_::operator()(
                                                                                             v19,
                                                                                             (__int64)&v38,
                                                                                             (winrt::Windows::Foundation::IUnknown *)&v74,
                                                                                             0x38A5u,
                                                                                             L"allow");
  if ( v20 )
  {
    v81 = 0LL;
    (**v20)(v20, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v81);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v81;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v31,
    &v36,
    &v27);
  if ( v36 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v36);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  if ( v38 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v38);
  v74 = (void (__fastcall *)(__int64, __int64 *))*a1;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v74);
  v22 = *(void (__fastcall ****)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)))lambda_2b4736168c23780831e980beacfbaf99_::operator()(
                                                                                             v21,
                                                                                             (__int64)&v45,
                                                                                             (winrt::Windows::Foundation::IUnknown *)&v74,
                                                                                             0x38A6u,
                                                                                             L"deny");
  if ( v22 )
  {
    v82 = 0LL;
    (**v22)(v22, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v82);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v82;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v31,
    &v42,
    &v27);
  if ( v42 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v42);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  if ( v45 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v45);
  v23 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v31;
  if ( v31 )
  {
    v84 = 0LL;
    (**v31)(v31, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v84);
    v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v84;
  }
  else
  {
    v27 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 *)&v30,
    &v47,
    &v27);
  if ( v47 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v47);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  v24 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
  v25 = 0LL;
  if ( v30 )
  {
    v83 = 0LL;
    (**v30)(v30, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v83);
    v25 = v83;
  }
  v27 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v25;
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    v51,
    &v49,
    &v27);
  if ( v49 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v49);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  if ( v23 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v33);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v34);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
  if ( v24 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v30);
  return v51;
}
