/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180045978
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180036840 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x1800317DC (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033D60 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180045F88 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800608A0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18008F3C8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        CEndpointCharacteristics *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  int v9; // eax
  unsigned int v10; // edi
  __int64 result; // rax
  int OffloadDeviceFormat; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *Src[2]; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *(_QWORD *)&v15 = a1;
  BYTE8(v15) = 1;
  *(_OWORD *)pvar = 0LL;
  Src[0] = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, void *, PROPVARIANT *))(**((_QWORD **)a1 + 9) + 40LL))(
         *((_QWORD **)a1 + 9),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && (unsigned int)IsValidWfxBlob((struct tagPROPVARIANT *)pvar)
    && (int)ValidateWaveFormatEx(Src[0]) >= 0
    && lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()((__int64 *)a4, Src[0]) )
  {
    v9 = CloneWaveFormat(Src[0], a5);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1941,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9);
      PropVariantClear(pvar);
      v15 = 0LL;
      v16 = 0LL;
      (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
        *((_QWORD **)a1 + 9),
        &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
        &v15);
      return v10;
    }
    PropVariantClear(pvar);
    v15 = 0LL;
    v16 = 0LL;
    (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
      *((_QWORD **)a1 + 9),
      &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
      &v15);
    return 0LL;
  }
  PropVariantClear(pvar);
  v15 = 0LL;
  v16 = 0LL;
  (*(void (__fastcall **)(_QWORD *, void *, __int128 *))(**((_QWORD **)a1 + 9) + 48LL))(
    *((_QWORD **)a1 + 9),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v15);
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat < 0 )
    {
      v13 = 6476LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OffloadDeviceFormat);
      return (unsigned int)OffloadDeviceFormat;
    }
    lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()((__int64 *)a4, *a5);
    return 0LL;
  }
  *(_OWORD *)pvar = 0LL;
  Src[0] = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)a1 + 9) + 40LL))(
         *((_QWORD **)a1 + 9),
         &PKEY_AudioEngine_OEMFormat,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && (unsigned int)IsValidWfxBlob((struct tagPROPVARIANT *)pvar)
    && (int)ValidateWaveFormatEx(Src[0]) >= 0
    && lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()((__int64 *)a4, Src[0]) )
  {
    v14 = CloneWaveFormat(Src[0], a5);
    OffloadDeviceFormat = v14;
    if ( v14 >= 0 )
      OffloadDeviceFormat = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195D,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v14);
    PropVariantClear(pvar);
    return (unsigned int)OffloadDeviceFormat;
  }
  PropVariantClear(pvar);
  *(_OWORD *)pvar = *(_OWORD *)a4;
  *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
  OffloadDeviceFormat = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                          a1,
                          a3,
                          pvar,
                          a5);
  if ( OffloadDeviceFormat >= 0 )
    return 0LL;
  result = 2290679812LL;
  if ( OffloadDeviceFormat != -2004287484 )
  {
    v13 = 6500LL;
    goto LABEL_14;
  }
  return result;
}
