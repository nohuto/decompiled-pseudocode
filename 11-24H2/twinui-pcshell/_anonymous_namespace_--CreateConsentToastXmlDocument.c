/*
 * XREFs of _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE268
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805EFF00 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?FromGameController@?$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@AEBUIGameController@Input@Gaming@Windows@3@@Z @ 0x18034D358 (-FromGameController@-$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameController.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18058631C (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     ??$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXmlDocument@Dom@Xml@Data@23@XZ @ 0x1805ED3E8 (--$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Wind.c)
 *     ??$call@P6A?AUXmlDocument@Dom@Xml@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UXmlDocument@Dom@Xml@Data@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXmlDocument@Dom@Xml@Data@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x1805ED66C (--$call@P6A-AUXmlDocument@Dom@Xml@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@-$.c)
 *     _lambda_2b4736168c23780831e980beacfbaf99_::operator() @ 0x1805EDDCC (_lambda_2b4736168c23780831e980beacfbaf99_--operator().c)
 *     ?AppendChild@?$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUIXmlNode@Dom@Xml@Data@Windows@3@@Z @ 0x1805EE0B8 (-AppendChild@-$consume_Windows_Data_Xml_Dom_IXmlNode@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@i.c)
 *     ?CreateElement@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805EEA78 (-CreateElement@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=21
struct IUnknown *__fastcall anonymous_namespace_::CreateConsentToastXmlDocument(
        struct IUnknown *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v8; // eax
  void (__fastcall ***v9)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // rcx
  void (__fastcall ***v10)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)); // rcx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *lpVtbl)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h]
  void (__fastcall ***v18)(__int64 *, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+48h] [rbp-C0h] BYREF
  void (__fastcall ***v19)(__int64 *, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  void (__fastcall ***v21)(__int64 *, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+60h] [rbp-A8h] BYREF
  void (__fastcall ***v22)(__int64 *, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+68h] [rbp-A0h] BYREF
  void (__fastcall ***v23)(__int64 *, void *, void (__fastcall **)(__int64, __int64 *)); // [rsp+70h] [rbp-98h] BYREF
  __int64 v24[4]; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, void *, __int64 *); // [rsp+98h] [rbp-70h] BYREF
  __int64 v26[5]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v27[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v31; // [rsp+100h] [rbp-8h] BYREF
  __int64 v32; // [rsp+108h] [rbp+0h] BYREF
  __int64 v33; // [rsp+110h] [rbp+8h] BYREF
  __int64 v34; // [rsp+118h] [rbp+10h] BYREF
  __int64 v35; // [rsp+120h] [rbp+18h] BYREF
  __int64 v36; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v37; // [rsp+130h] [rbp+28h] BYREF
  __int64 v38; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v39; // [rsp+140h] [rbp+38h] BYREF
  __int64 v40; // [rsp+148h] [rbp+40h] BYREF
  __int64 v41; // [rsp+150h] [rbp+48h] BYREF
  _QWORD v42[2]; // [rsp+158h] [rbp+50h] BYREF
  void (__fastcall *v43)(__int64, __int64 *); // [rsp+168h] [rbp+60h] BYREF
  void (__fastcall *v44)(__int64, __int64 *); // [rsp+170h] [rbp+68h] BYREF
  void (__fastcall *v45)(__int64, __int64 *); // [rsp+178h] [rbp+70h] BYREF
  void (__fastcall *v46)(__int64, __int64 *); // [rsp+180h] [rbp+78h] BYREF
  void (__fastcall *v47)(__int64, __int64 *); // [rsp+188h] [rbp+80h] BYREF
  void (__fastcall *v48)(__int64, __int64 *); // [rsp+190h] [rbp+88h] BYREF
  void (__fastcall *v49)(__int64, __int64 *); // [rsp+198h] [rbp+90h] BYREF
  void (__fastcall *v50)(__int64, __int64 *); // [rsp+1A0h] [rbp+98h] BYREF
  void (__fastcall *v51)(__int64, __int64 *); // [rsp+1A8h] [rbp+A0h] BYREF
  void (__fastcall *v52)(__int64, __int64 *); // [rsp+1B0h] [rbp+A8h] BYREF
  void (__fastcall *v53)(__int64, __int64 *); // [rsp+1B8h] [rbp+B0h] BYREF

  v42[1] = a1;
  LODWORD(v17) = 0;
  v26[4] = (__int64)&qword_1808CC2E8;
  _InterlockedIncrement64(&qword_1808CC2E8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Xml::Dom::XmlDocument>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory>,
      a1);
    LODWORD(v17) = 6;
    _InterlockedDecrement64(&qword_1808CC2E8);
    v8 = 6;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC2E8);
    lpVtbl = _lambda_e39067982572d3667926157dc9eb0f0a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Data::Xml::Dom::XmlDocument,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Xml::Dom::XmlDocument (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&lpVtbl);
    v8 = 2;
  }
  LODWORD(v17) = v8 | 1;
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"toast");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v19,
    v27);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"systemDialog");
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"scenario");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v19,
    v26,
    v24);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"visual");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v25,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"binding");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v18,
    v24);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"ToastGeneric");
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"template");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v18,
    v27,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"image");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v23,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"appLogoOverride");
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"placement");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v23,
    v27,
    v24);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, a4);
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"src");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v23,
    v27,
    v24);
  if ( v23 )
  {
    v43 = 0LL;
    (**v23)((__int64 *)v23, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v43);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v43;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v18,
    v42,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v42);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"text");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v22,
    v24);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"header");
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"hint-style");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v22,
    v27,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, a2);
  v9 = (void (__fastcall ***)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)))*winrt::impl::consume_Windows_Gaming_Input_IRawGameControllerStatics<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::FromGameController(
                                                                                           (__int64 **)a1,
                                                                                           &v29,
                                                                                           v26);
  if ( v9 )
  {
    v44 = 0LL;
    (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v44);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v44;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v22,
    &v28,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v28);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v29);
  if ( v22 )
  {
    v45 = 0LL;
    (**v22)((__int64 *)v22, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v45);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v45;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v18,
    &v30,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v30);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::param::hstring::hstring((winrt::param::hstring *)v26, L"text");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v21,
    v26);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"body");
  winrt::param::hstring::hstring((winrt::param::hstring *)v27, L"hint-style");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    (__int64 **)&v21,
    v27,
    v24);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, a3);
  v10 = (void (__fastcall ***)(_QWORD, void *, void (__fastcall **)(__int64, __int64 *)))*winrt::impl::consume_Windows_Gaming_Input_IRawGameControllerStatics<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::FromGameController(
                                                                                            (__int64 **)a1,
                                                                                            &v32,
                                                                                            v24);
  if ( v10 )
  {
    v46 = 0LL;
    (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v46);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v46;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v21,
    &v31,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
  if ( v21 )
  {
    v47 = 0LL;
    (**v21)((__int64 *)v21, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v47);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v47;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v18,
    &v33,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v33);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  if ( v18 )
  {
    v48 = 0LL;
    (**v18)((__int64 *)v18, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v48);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v48;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    &v25,
    &v34,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  if ( v25 )
  {
    v49 = 0LL;
    (**v25)(v25, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, (__int64 *)&v49);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v49;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v19,
    &v35,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::param::hstring::hstring((winrt::param::hstring *)v24, L"actions");
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::CreateElement(
    a1,
    &v20,
    v24);
  lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))a1->lpVtbl;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&lpVtbl);
  v12 = *lambda_2b4736168c23780831e980beacfbaf99_::operator()(
           v11,
           &v37,
           (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl,
           0x38A5u,
           L"allow");
  if ( v12 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64 *, void *, void (__fastcall **)(__int64, __int64 *)))*v12)(
      v12,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &v50);
    v43 = v50;
  }
  else
  {
    v43 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    &v20,
    &v36,
    &v43);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v36);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v43);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
  v43 = (void (__fastcall *)(__int64, __int64 *))a1->lpVtbl;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v43);
  v14 = *lambda_2b4736168c23780831e980beacfbaf99_::operator()(
           v13,
           &v39,
           (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v43,
           0x38A6u,
           L"deny");
  if ( v14 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64 *, void *, void (__fastcall **)(__int64, __int64 *)))*v14)(
      v14,
      &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>,
      &v51);
    lpVtbl = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))v51;
  }
  else
  {
    lpVtbl = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    &v20,
    &v38,
    &lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v38);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&lpVtbl);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v39);
  if ( v20 )
  {
    v52 = 0LL;
    (**v20)(v20, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, (__int64 *)&v52);
    v43 = v52;
  }
  else
  {
    v43 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))&v19,
    &v40,
    &v43);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v40);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v43);
  if ( v19 )
  {
    v53 = 0LL;
    (**v19)((__int64 *)v19, &winrt::impl::guid_v<winrt::Windows::Data::Xml::Dom::IXmlNode>, &v53);
    v43 = v53;
  }
  else
  {
    v43 = 0LL;
  }
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNode<winrt::Windows::Data::Xml::Dom::IXmlElement>::AppendChild(
    a1,
    &v41,
    &v43);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v41);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v43);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  return a1;
}
