/*
 * XREFs of ?LoadVolumeDefaultsForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180114144
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180113850 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18004E314 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004E364 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180071B0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVolumeSoftware::LoadVolumeDefaultsForEndpoint(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  float v2; // xmm7_4
  float v3; // xmm8_4
  float v4; // xmm6_4
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rsi
  unsigned __int64 v10; // r9
  float *v11; // r12
  unsigned int v12; // r14d
  int v13; // eax
  unsigned __int16 v14; // cx
  float v15; // xmm0_4
  float v16; // xmm9_4
  int v17; // eax
  int v18; // eax
  __int64 *v19; // rdx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // xmm10_8
  int v23; // xmm11_4
  float v24; // xmm9_4
  __int64 v25; // rdx
  ATL::CAtlException *v27; // rbx
  __int64 v28; // [rsp+0h] [rbp-198h] BYREF
  __int64 v29; // [rsp+30h] [rbp-168h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-160h]
  int v31; // [rsp+3Ch] [rbp-15Ch]
  __int64 v32; // [rsp+40h] [rbp-158h] BYREF
  int v33; // [rsp+48h] [rbp-150h]
  float *v34; // [rsp+50h] [rbp-148h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-140h] BYREF
  float *v36; // [rsp+68h] [rbp-130h]
  PROPVARIANT v37[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v38; // [rsp+80h] [rbp-118h]
  PROPVARIANT v39[2]; // [rsp+88h] [rbp-110h] BYREF
  __int64 v40; // [rsp+98h] [rbp-100h]
  PROPVARIANT v41[2]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-E8h]
  ATL::CAtlException *v43; // [rsp+B8h] [rbp-E0h] BYREF
  _BYTE v44[4]; // [rsp+C0h] [rbp-D8h] BYREF
  float v45; // [rsp+C4h] [rbp-D4h]
  float v46; // [rsp+C8h] [rbp-D0h]
  float v47; // [rsp+D4h] [rbp-C4h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]
  float v50; // [rsp+1A8h] [rbp+10h]
  float v51; // [rsp+1B0h] [rbp+18h]
  float v52; // [rsp+1B8h] [rbp+20h]

  v1 = this;
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  *(_OWORD *)v39 = 0LL;
  v40 = 0LL;
  *(_OWORD *)v37 = 0LL;
  v38 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v36 = 0LL;
  v2 = 0.0;
  v50 = 0.0;
  v3 = FLOAT_N96_0;
  v52 = FLOAT_N96_0;
  if ( *((_DWORD *)this + 74) == 4 )
    v4 = FLOAT_30_0;
  else
    v4 = 0.0;
  v51 = v4;
  v32 = 0LL;
  v29 = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v32);
  v6 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v32);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2004LL;
    goto LABEL_8;
  }
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 32LL);
  v29 = 0LL;
  v6 = v9(v32, 0LL, &v29);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 2006LL;
LABEL_8:
    v10 = (unsigned int)v6;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v10);
    goto LABEL_48;
  }
  v11 = 0LL;
  v34 = 0LL;
  v12 = 0;
  v30 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
          v29,
          &PKEY_APO_MasterVolumeLevel,
          pvar);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2013LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v13);
  if ( LOWORD(pvar[0]) == 65 && LODWORD(pvar[1]) >= 4 )
  {
    v11 = v36;
    v34 = v36;
    v12 = LODWORD(pvar[1]) >> 2;
    v30 = LODWORD(pvar[1]) >> 2;
    v2 = *v36;
    v50 = *v36;
    *((_BYTE *)v1 + 300) = 1;
    if ( v12 != *((_DWORD *)v1 + 29) )
    {
      v14 = 1;
      if ( v12 > 1 )
      {
        do
        {
          v15 = fmaxf(v11[v14], v2);
          v2 = v15;
          ++v14;
        }
        while ( v14 < v12 );
        v50 = v15;
      }
    }
LABEL_18:
    v16 = FLOAT_0_000015258789;
    goto LABEL_19;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
          v29,
          &PKEY_AudioEndpoint_Default_VolumeInDb,
          v41);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2035LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v20);
  if ( LOWORD(v41[0]) != 19 )
    goto LABEL_18;
  v16 = FLOAT_0_000015258789;
  v2 = (float)SLODWORD(v41[1]) * 0.000015258789;
  v50 = v2;
LABEL_19:
  v17 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
          v29,
          &PKEY_AudioEndpoint_Min_VolumeInDb,
          v39);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2044LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v17);
  if ( LOWORD(v39[0]) == 3 )
  {
    v3 = (float)SLODWORD(v39[1]) * v16;
    v52 = v3;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
          v29,
          &PKEY_AudioEndpoint_Max_VolumeInDb,
          v37);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2052LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v18);
  if ( LOWORD(v37[0]) == 19 )
  {
    v4 = (float)SLODWORD(v37[1]) * v16;
    v51 = v4;
  }
  if ( v3 > v4 )
  {
    v3 = FLOAT_N96_0;
    v52 = FLOAT_N96_0;
    if ( *((_DWORD *)v1 + 74) == 4 )
      v4 = FLOAT_30_0;
    else
      v4 = 0.0;
    v51 = v4;
    v2 = 0.0;
    v50 = 0.0;
  }
  v21 = 0LL;
  v22 = *(_QWORD *)&DOUBLE_1_75;
  v23 = LODWORD(FLOAT_1_5);
  while ( 1 )
  {
    v31 = v21;
    if ( (unsigned int)v21 >= *((_DWORD *)v1 + 29) )
      break;
    if ( *((_BYTE *)v1 + 300) && v12 == *((_DWORD *)v1 + 29) )
      v24 = v11[v21];
    else
      v24 = v2;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v44, (__int64)v19);
    CVolumeUnit::SetDBRange((__int64)v44, v25, v3, v4, v23, v22);
    v45 = fmaxf(fminf(v24, v47), v46);
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
        (_QWORD *)v1 + 10,
        (unsigned int)v21,
        (__int64)v44);
    }
    catch ( ATL::CAtlException *v43 )
    {
      v19 = &v28;
      v27 = v43;
      if ( *(_DWORD *)v43 == -1073741571 )
        _o__resetstkoflw();
      v33 = *(_DWORD *)v27;
      v7 = v33;
      if ( v33 < 0 )
      {
        v10 = (unsigned int)v33;
        v8 = 2078LL;
        goto LABEL_9;
      }
      v1 = this;
      v2 = v50;
      v3 = v52;
      v4 = v51;
      v11 = v34;
      v12 = v30;
      LODWORD(v21) = v31;
      v22 = *(_QWORD *)&DOUBLE_1_75;
      v23 = LODWORD(FLOAT_1_5);
    }
    v21 = (unsigned int)(v21 + 1);
  }
  v7 = 0;
LABEL_48:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
  PropVariantClear(pvar);
  PropVariantClear(v37);
  PropVariantClear(v39);
  PropVariantClear(v41);
  return v7;
}
