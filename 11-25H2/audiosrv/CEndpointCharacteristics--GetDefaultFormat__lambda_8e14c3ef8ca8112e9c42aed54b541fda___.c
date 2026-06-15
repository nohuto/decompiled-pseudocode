/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180045C54
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180045618 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033D60 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180044110 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180045F88 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180046068 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800608A0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        CEndpointCharacteristics *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  unsigned __int16 *pElems; // rsi
  int v10; // eax
  unsigned int ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda; // ebx
  __int64 result; // rax
  unsigned __int16 **v13; // rsi
  int OffloadDeviceFormat; // eax
  unsigned int v15; // edi
  int v16; // eax
  __int128 v17; // [rsp+28h] [rbp-31h] BYREF
  __int64 v18; // [rsp+38h] [rbp-21h]
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-19h] BYREF
  _OWORD v20[4]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  bool v22; // [rsp+B8h] [rbp+5Fh] BYREF

  *(_QWORD *)&v17 = a1;
  BYTE8(v17) = 1;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD *, void *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 9) + 40LL))(
         *((_QWORD **)a1 + 9),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && pvar.lVal >= 0x12u )
  {
    pElems = pvar.caui.pElems;
    if ( pvar.ulVal == *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
    {
      v22 = 0;
      lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
        (CConnectorProcessingModeCharacteristics ***)a4,
        pElems,
        &v22);
      if ( v22 )
      {
        v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
        ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1941,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v10);
          PropVariantClear((PROPVARIANT *)&pvar);
          v17 = 0LL;
          v18 = 0LL;
          (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
            *((_QWORD **)a1 + 9),
            &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
            &v17);
          return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
        }
        PropVariantClear((PROPVARIANT *)&pvar);
        v17 = 0LL;
        v18 = 0LL;
        (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
          *((_QWORD **)a1 + 9),
          &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
          &v17);
        return 0LL;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v17 = 0LL;
  v18 = 0LL;
  (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
    *((_QWORD **)a1 + 9),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v17);
  if ( a2 )
  {
    v13 = (unsigned __int16 **)a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    v15 = OffloadDeviceFormat;
    if ( OffloadDeviceFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194C,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OffloadDeviceFormat);
      return v15;
    }
    v22 = 0;
    lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()((CConnectorProcessingModeCharacteristics ***)a4, *v13, &v22);
    return 0LL;
  }
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 9) + 40LL))(
         *((_QWORD **)a1 + 9),
         &PKEY_AudioEngine_OEMFormat,
         &pvar) >= 0
    && pvar.vt == 65 )
  {
    if ( (unsigned int)IsValidWfxBlob(&pvar) )
    {
      if ( (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
      {
        v22 = 0;
        lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
          (CConnectorProcessingModeCharacteristics ***)a4,
          pvar.caui.pElems,
          &v22);
        if ( v22 )
        {
          v16 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
          ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v16;
          if ( v16 >= 0 )
            ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = 0;
          else
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x195D,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v16);
          PropVariantClear((PROPVARIANT *)&pvar);
          return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
        }
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v20[0] = *(_OWORD *)a4;
  v20[1] = *(_OWORD *)(a4 + 16);
  v20[2] = *(_OWORD *)(a4 + 32);
  v20[3] = *(_OWORD *)(a4 + 48);
  ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                                     a1,
                                                                     a3,
                                                                     v20,
                                                                     a5);
  if ( (ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda & 0x80000000) == 0 )
    return 0LL;
  result = 2290679812LL;
  if ( ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda != -2004287484 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1964,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda);
    return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
  }
  return result;
}
