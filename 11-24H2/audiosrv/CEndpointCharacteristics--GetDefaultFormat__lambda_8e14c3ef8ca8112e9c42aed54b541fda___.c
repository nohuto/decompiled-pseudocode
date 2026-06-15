/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x18003ECF0
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x1800424D8 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002EFA0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x18003DA80 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18003F024 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180040FD0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180052E94 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        _OWORD *a4,
        struct tWAVEFORMATEX **a5)
{
  BYTE *pData; // rsi
  int v10; // eax
  unsigned int ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda; // ebx
  __int64 result; // rax
  struct tWAVEFORMATEX **v13; // rsi
  int OffloadDeviceFormat; // eax
  unsigned int v15; // edi
  int v16; // eax
  __int128 v17; // [rsp+28h] [rbp-31h] BYREF
  __int64 v18; // [rsp+38h] [rbp-21h]
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-19h] BYREF
  _OWORD v20[4]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  char v22; // [rsp+B8h] [rbp+5Fh] BYREF

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
    pData = pvar.bstrblobVal.pData;
    if ( pvar.ulVal == *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
    {
      v22 = 0;
      lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a4, pData, &v22);
      if ( v22 )
      {
        v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
        ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1998,
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
    v13 = a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    v15 = OffloadDeviceFormat;
    if ( OffloadDeviceFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19A3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OffloadDeviceFormat);
      return v15;
    }
    v22 = 0;
    lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a4, *v13, &v22);
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
        lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a4, pvar.bstrblobVal.pData, &v22);
        if ( v22 )
        {
          v16 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
          ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = v16;
          if ( v16 >= 0 )
            ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = 0;
          else
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x19B4,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v16);
          PropVariantClear((PROPVARIANT *)&pvar);
          return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
        }
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v20[0] = *a4;
  v20[1] = a4[1];
  v20[2] = a4[2];
  v20[3] = a4[3];
  ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                                                                     (__int64)a1,
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
      (void *)0x19BB,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda);
    return ComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda;
  }
  return result;
}
