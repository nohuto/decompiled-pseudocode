/*
 * XREFs of ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180166518
 * Callers:
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180040FD0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x1801389A4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??$_Emplace_back_with_unused_capacity@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAAEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@$$QEAV21@@Z @ 0x18003F82C (--$_Emplace_back_with_unused_capacity@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSu.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@?$vector@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@AEAAPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV23@$$QEAV23@@Z @ 0x180072378 (--$_Emplace_reallocate@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemF.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
        CConnectorProcessingModeCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int v3; // edi
  __int64 *v5; // rcx
  __int64 v6; // rdx
  const char *v7; // r9
  void **v8; // [rsp+20h] [rbp-28h] BYREF
  struct tWAVEFORMATEX *v9; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v8 = &v12;
  v9 = 0LL;
  v10 = 1;
  v3 = CloneWaveFormat(a2, &v9);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v8);
  if ( v3 >= 0 )
  {
    v5 = (__int64 *)((char *)this + 40);
    v6 = *((_QWORD *)this + 6);
    if ( v6 == *((_QWORD *)this + 7) )
    {
      try
      {
        std::vector<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::_Emplace_reallocate<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
          v5,
          v6,
          (__int64 *)&v12);
      }
      catch ( ... )
      {
        LODWORD(v12) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x107,
                         (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
                         v7);
        return (unsigned int)v12;
      }
    }
    else
    {
      std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_back_with_unused_capacity<std::unique_ptr<CAppSubmixClient>>(
        (__int64)v5,
        (__int64)&v12);
    }
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v12,
      0LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v3);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v12,
      0LL);
    return (unsigned int)v3;
  }
}
