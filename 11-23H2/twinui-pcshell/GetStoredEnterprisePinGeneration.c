/*
 * XREFs of GetStoredEnterprisePinGeneration @ 0x180287CFC
 * Callers:
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetNamedNumber@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@N@Z @ 0x180287C58 (-GetNamedNumber@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 *     ?ValueType@?$consume_Windows_Data_Json_IJsonValue@UIJsonValue@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180288974 (-ValueType@-$consume_Windows_Data_Json_IJsonValue@UIJsonValue@Json@Data@Windows@winrt@@@impl@win.c)
 *     ??D?$fast_iterator@UJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA?AUIJsonValue@Json@Data@Windows@2@XZ @ 0x1803E3038 (--D-$fast_iterator@UJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA-AUIJsonValue@Json@Data@.c)
 *     ?GetNamedString@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1803E3AF0 (-GetNamedString@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 *     ?GetObjectW@?$consume_Windows_Data_Json_IJsonValue@UIJsonValue@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803E3BB8 (-GetObjectW@-$consume_Windows_Data_Json_IJsonValue@UIJsonValue@Json@Data@Windows@winrt@@@impl@wi.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1803E4410 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetStoredEnterprisePinGeneration(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  int v6; // esi
  __int64 v7; // r8
  int NamedNumber; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v11[32]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v13[4]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v14[8]; // [rsp+88h] [rbp+Fh] BYREF
  void *v15; // [rsp+90h] [rbp+17h] BYREF
  __int64 v16; // [rsp+98h] [rbp+1Fh] BYREF
  int v17; // [rsp+A0h] [rbp+27h]

  v16 = a2;
  v5 = 0;
  v17 = 0;
  v6 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(a2);
  while ( v5 != v6 )
  {
    winrt::impl::fast_iterator<winrt::Windows::Data::Json::JsonArray>::operator*(&v16, v14);
    if ( (unsigned int)winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonValue>::ValueType(v14) == 5 )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonValue>::GetObjectW(v14, v10);
      winrt::param::hstring::hstring((winrt::param::hstring *)v11, &LocaleName);
      winrt::param::hstring::hstring((winrt::param::hstring *)v12, L"appId");
      winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
        v10,
        &v15,
        v12,
        v11);
      if ( winrt::operator==((__int64)&v15, a3, v7) )
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)v13, L"pinGeneration");
        NamedNumber = (int)winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedNumber(
                             (__int64)v10,
                             v13);
        if ( NamedNumber > -1 )
        {
          *(_DWORD *)a1 = NamedNumber;
          *(_BYTE *)(a1 + 4) = 1;
          winrt::hstring::~hstring(&v15);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v10);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v14);
          return a1;
        }
      }
      winrt::hstring::~hstring(&v15);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v10);
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v14);
    v17 = ++v5;
  }
  *(_BYTE *)(a1 + 4) = 0;
  return a1;
}
