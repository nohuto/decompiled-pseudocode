/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800424D8
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x1800408EC (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002EFA0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x18003ECF0 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180040FD0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180052E94 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180074CAC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180135C5C (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x180135C80 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        CEndpointCharacteristics *a1,
        char a2,
        unsigned __int8 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  int v7; // r15d
  int DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda; // edi
  int v10; // ebx
  const PROPERTYKEY *v11; // rax
  int v12; // eax
  unsigned int v13; // r8d
  const char *v14; // r9
  BYTE *pData; // rbx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int updated; // eax
  struct tWAVEFORMATEX *v19; // rdi
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-99h]
  char *v23; // [rsp+28h] [rbp-91h]
  bool v24; // [rsp+40h] [rbp-79h] BYREF
  struct tWAVEFORMATEX *v25; // [rsp+48h] [rbp-71h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-69h] BYREF
  struct tWAVEFORMATEX **v27; // [rsp+68h] [rbp-51h] BYREF
  struct tWAVEFORMATEX *v28; // [rsp+70h] [rbp-49h] BYREF
  char v29; // [rsp+78h] [rbp-41h]
  int v30[4]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v31; // [rsp+90h] [rbp-29h]
  __int128 v32; // [rsp+A0h] [rbp-19h]
  __int128 v33; // [rsp+B0h] [rbp-9h]
  GUID fmtid; // [rsp+C0h] [rbp+7h] BYREF
  DWORD pid; // [rsp+D0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v7 = a3;
  *a6 = 0LL;
  v25 = 0LL;
  if ( !a2 )
  {
    v11 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v11 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v11->fmtid;
    pid = v11->pid;
    memset(&pvar, 0, sizeof(pvar));
    v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 9) + 40LL))(
            *((_QWORD **)a1 + 9),
            &fmtid,
            &pvar);
    if ( v12 >= 0 )
    {
      if ( pvar.vt )
      {
        if ( pvar.vt == 65 )
        {
          if ( (unsigned int)IsValidWfxBlob(&pvar) )
          {
            pData = pvar.bstrblobVal.pData;
            v24 = 0;
            lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
              (CConnectorProcessingModeCharacteristics ***)a5,
              pvar.caui.pElems,
              &v24);
            if ( v24 )
            {
              v27 = &v25;
              v28 = 0LL;
              v29 = 1;
              v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, &v28);
              wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v27);
              if ( v10 < 0 )
              {
                v16 = (unsigned int)v10;
                v17 = 6637LL;
                goto LABEL_17;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x19F2, v13, v14, v22);
          }
        }
        else
        {
          LODWORD(v23) = pvar.vt;
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x19FE,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"Unexpected vartype %d (0x%08x)",
            v23,
            pvar.vt);
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19E1,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12,
        v22);
    }
    if ( v25 )
      goto LABEL_26;
    v27 = &v25;
    v28 = 0LL;
    v29 = 1;
    *(_OWORD *)v30 = *(_OWORD *)a5;
    v31 = *(_OWORD *)(a5 + 16);
    v32 = *(_OWORD *)(a5 + 32);
    v33 = *(_OWORD *)(a5 + 48);
    DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                               a1,
                                                               v7,
                                                               a4,
                                                               v30,
                                                               &v28);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v27);
    if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda < 0 )
    {
      v10 = -2004287484;
      if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A05,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda);
        PropVariantClear((PROPVARIANT *)&pvar);
        goto LABEL_5;
      }
LABEL_18:
      PropVariantClear((PROPVARIANT *)&pvar);
      goto LABEL_30;
    }
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(a1, v7, a4, v25);
    v10 = updated;
    if ( updated >= 0 )
    {
LABEL_26:
      PropVariantClear((PROPVARIANT *)&pvar);
LABEL_27:
      v19 = v25;
      v20 = ValidateWaveFormatEx(v25);
      v10 = v20;
      if ( v20 >= 0 )
      {
        v25 = 0LL;
        *a6 = v19;
        v10 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A0D,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v20);
      }
      goto LABEL_30;
    }
    v16 = (unsigned int)updated;
    v17 = 6664LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v16);
    goto LABEL_18;
  }
  *(_QWORD *)&pvar.vt = &v25;
  pvar.hVal.QuadPart = 0LL;
  *((_BYTE *)&pvar.decVal + 16) = 1;
  *(_OWORD *)v30 = *(_OWORD *)a5;
  v31 = *(_OWORD *)(a5 + 16);
  v32 = *(_OWORD *)(a5 + 32);
  v33 = *(_OWORD *)(a5 + 48);
  DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                             a1,
                                                             a3,
                                                             a4,
                                                             v30,
                                                             (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&pvar);
  if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda >= 0 )
    goto LABEL_27;
  v10 = -2004287484;
  if ( DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda);
LABEL_5:
    v10 = DefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
  }
LABEL_30:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v25,
    0LL);
  return (unsigned int)v10;
}
