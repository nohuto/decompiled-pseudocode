/*
 * XREFs of ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180034344 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     _lambda_564e04663bfb39eeb8d956f83a4cff77_::operator() @ 0x180044FD0 (_lambda_564e04663bfb39eeb8d956f83a4cff77_--operator().c)
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x18007640C (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     AudioServerGetDevicePeriod @ 0x180082430 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180082E80 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?IsFormatSupported@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAPEAU4@@Z @ 0x1800A3380 (-IsFormatSupported@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@W4_A.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUtWAVEFORMATEX@@PEAU_GUID@@@Z @ 0x1800DD400 (-GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristi.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800DD544 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800DDBD4 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1801055F0 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180110120 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800A7F1C (memcmp_0.c)
 */

__int64 __fastcall EffectPack::GetSharedModeEnginePeriodicity(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 *a3,
        GUID *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  unsigned int v9; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  GUID v14; // xmm0
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // r9
  _QWORD *v18; // rdx
  __int64 v19; // rax
  GUID *v20; // rax
  GUID v21; // xmm0
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  unsigned __int16 ***v26; // rax
  unsigned __int16 ***v27; // rdi
  unsigned __int16 *v28; // rcx
  int v29; // edx
  __int16 v30; // r13
  __int128 v31; // xmm1
  __int64 v32; // xmm0_8
  int v33; // r12d
  __int16 v34; // r15
  int v35; // edx
  __int16 v36; // si
  __int128 v37; // xmm1
  __int64 v38; // xmm0_8
  int v39; // r10d
  __int16 v40; // r11
  __int16 v41; // r9
  int v42; // edx
  __int16 v43; // r8
  __int64 v44; // rax
  unsigned __int16 **v46; // rax
  int v47; // eax
  unsigned __int16 v48; // dx
  unsigned __int16 v49; // dx
  unsigned __int16 v50; // r8
  int i; // eax
  _QWORD *v52; // r8
  __int64 v53; // rdx
  GUID v54; // xmm0
  __int128 v55; // xmm0
  int v56; // eax
  __int128 v57; // xmm0
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // [rsp+28h] [rbp-B1h]
  unsigned __int16 ***v64; // [rsp+30h] [rbp-A9h]
  _BYTE Buf2_8[40]; // [rsp+58h] [rbp-81h] BYREF
  _BYTE Buf1[40]; // [rsp+80h] [rbp-59h] BYREF
  GUID v67; // [rsp+A8h] [rbp-31h] BYREF
  GUID v68; // [rsp+B8h] [rbp-21h] BYREF

  v9 = 0;
  v12 = a1[236];
  if ( (_DWORD)a2 == 3 )
  {
    if ( v12 > 3 )
    {
      v13 = a1[237] + 72LL;
      goto LABEL_4;
    }
LABEL_115:
    _o_terminate(v12, a2);
    __debugbreak();
    JUMPOUT(0x180045709LL);
  }
  if ( !v12 )
    goto LABEL_115;
  v13 = a1[237];
LABEL_4:
  v14 = *a4;
  v15 = 296LL;
  v67 = v14;
  if ( (_DWORD)a2 != 3 )
    v15 = 272LL;
  v16 = 0;
  v17 = a1[198] + v15;
  while ( 1 )
  {
    if ( v16 >= *(_DWORD *)(v13 + 16) )
      goto LABEL_12;
    v18 = (_QWORD *)(*(_QWORD *)v13 + 16LL * v16);
    v19 = *v18 - *(_QWORD *)&v67.Data1;
    if ( *v18 == *(_QWORD *)&v67.Data1 )
      v19 = v18[1] - *(_QWORD *)v67.Data4;
    if ( !v19 )
      break;
    ++v16;
  }
  if ( v16 == -1 )
  {
LABEL_12:
    v68 = v14;
    v20 = &v68;
    goto LABEL_13;
  }
  v67 = v14;
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v13 + 16) )
      goto LABEL_91;
    v52 = (_QWORD *)(*(_QWORD *)v13 + 16LL * i);
    v53 = *v52 - *(_QWORD *)&v67.Data1;
    if ( *v52 == *(_QWORD *)&v67.Data1 )
      v53 = v52[1] - *(_QWORD *)v67.Data4;
    if ( !v53 )
      break;
  }
  if ( i == -1 )
  {
LABEL_91:
    v54 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_89;
  }
  if ( i < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, 0);
    __debugbreak();
  }
  v54 = *(GUID *)(*(_QWORD *)(v13 + 8) + 16LL * i);
LABEL_89:
  v67 = v54;
  v20 = &v67;
LABEL_13:
  v21 = *v20;
  v22 = *(_QWORD **)(v17 + 8);
  v23 = *(_QWORD **)v17;
  *(_QWORD *)&v67.Data1 = v22;
  v68 = v21;
  while ( 1 )
  {
    v63 = v23;
    if ( v23 == v22 )
      return (unsigned int)-2004287480;
    v24 = (_QWORD *)*v23;
    v25 = *(_QWORD *)*v23 - *(_QWORD *)&v68.Data1;
    if ( !v25 )
      v25 = v24[1] - *(_QWORD *)v68.Data4;
    if ( !v25 )
      break;
LABEL_53:
    v22 = *(_QWORD **)&v67.Data1;
    ++v23;
  }
  v26 = (unsigned __int16 ***)v24[3];
  v27 = (unsigned __int16 ***)v24[2];
  v64 = v26;
  while ( 1 )
  {
    if ( v27 == v26 )
    {
      v23 = v63;
      goto LABEL_53;
    }
    v28 = **v27;
    if ( !a3 )
    {
      if ( !v28 )
        goto LABEL_61;
      goto LABEL_51;
    }
    if ( !v28 )
      goto LABEL_51;
    v29 = 0;
    memset(Buf1, 0, sizeof(Buf1));
    memset(Buf2_8, 0, sizeof(Buf2_8));
    if ( *a3 == 0xFFFE )
    {
      if ( a3[8] == 22 )
        goto LABEL_24;
      v59 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v59 )
        v59 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( !v59 )
        goto LABEL_24;
      v60 = *((_QWORD *)a3 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v60 )
        v60 = *((_QWORD *)a3 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v60 )
      {
        v30 = *(_WORD *)&Buf1[16];
      }
      else
      {
LABEL_24:
        v30 = 22;
        v29 = 1;
        v31 = *((_OWORD *)a3 + 1);
        *(_OWORD *)Buf1 = *(_OWORD *)a3;
        v32 = *((_QWORD *)a3 + 4);
        *(_OWORD *)&Buf1[16] = v31;
        *(_WORD *)&Buf1[16] = 22;
        *(_QWORD *)&Buf1[32] = v32;
      }
      if ( !v29 )
        goto LABEL_51;
      v33 = *(_DWORD *)&Buf1[20];
      v34 = *(_WORD *)Buf1;
    }
    else
    {
      if ( a3[8] && ((*a3 - 1) & 0xFFFD) != 0 )
        goto LABEL_51;
      v48 = a3[1];
      if ( (unsigned __int16)(v48 - 1) > 1u || ((a3[7] - 8) & 0xFFE7) != 0 )
        goto LABEL_51;
      v55 = *(_OWORD *)a3;
      v56 = *a3;
      *(_WORD *)&Buf1[18] = a3[7];
      *(_OWORD *)Buf1 = v55;
      *(_WORD *)Buf1 = -2;
      *(GUID *)&Buf1[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
      v33 = 4 - (v48 != 1);
      *(_WORD *)&Buf1[16] = 22;
      v34 = -2;
      *(_DWORD *)&Buf1[24] = v56;
      v30 = 22;
    }
    v35 = 0;
    if ( *v28 != 0xFFFE )
      break;
    if ( v28[8] == 22 )
      goto LABEL_29;
    v61 = *((_QWORD *)v28 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v61 )
      v61 = *((_QWORD *)v28 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v61 )
      goto LABEL_29;
    v62 = *((_QWORD *)v28 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v62 )
      v62 = *((_QWORD *)v28 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( v62 )
    {
      v36 = *(_WORD *)&Buf2_8[16];
    }
    else
    {
LABEL_29:
      v36 = 22;
      v35 = 1;
      v37 = *((_OWORD *)v28 + 1);
      *(_OWORD *)Buf2_8 = *(_OWORD *)v28;
      v38 = *((_QWORD *)v28 + 4);
      *(_OWORD *)&Buf2_8[16] = v37;
      *(_WORD *)&Buf2_8[16] = 22;
      *(_QWORD *)&Buf2_8[32] = v38;
    }
    if ( v35 )
    {
      v39 = *(_DWORD *)&Buf2_8[20];
      v40 = *(_WORD *)Buf2_8;
      goto LABEL_32;
    }
LABEL_51:
    v26 = v64;
    ++v27;
  }
  if ( v28[8] && ((*v28 - 1) & 0xFFFD) != 0 )
    goto LABEL_51;
  v49 = v28[1];
  if ( (unsigned __int16)(v49 - 1) > 1u )
    goto LABEL_51;
  v50 = v28[7];
  if ( ((v50 - 8) & 0xFFE7) != 0 )
    goto LABEL_51;
  v57 = *(_OWORD *)v28;
  v58 = *v28;
  *(_WORD *)&Buf2_8[16] = 22;
  *(_OWORD *)Buf2_8 = v57;
  *(_WORD *)Buf2_8 = -2;
  v40 = -2;
  *(_WORD *)&Buf2_8[18] = v50;
  *(GUID *)&Buf2_8[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
  v39 = 4 - (v49 != 1);
  *(_DWORD *)&Buf2_8[24] = v58;
  v36 = 22;
LABEL_32:
  if ( *(_WORD *)&Buf1[2] )
  {
    v41 = *(_WORD *)&Buf2_8[2];
  }
  else
  {
    v41 = 0;
    *(_WORD *)&Buf2_8[2] = 0;
    *(_DWORD *)&Buf2_8[8] = 0;
    *(_WORD *)&Buf2_8[12] = 0;
  }
  if ( *(_DWORD *)&Buf1[4] )
  {
    v42 = *(_DWORD *)&Buf2_8[4];
  }
  else
  {
    v42 = 0;
    *(_QWORD *)&Buf2_8[4] = 0LL;
  }
  if ( *(_WORD *)&Buf1[14] )
  {
    v43 = *(_WORD *)&Buf2_8[14];
  }
  else
  {
    v43 = 0;
    *(_DWORD *)&Buf2_8[12] = 0;
  }
  *(_DWORD *)&Buf2_8[20] = v33 != 0 ? v39 : 0;
  if ( !v34 )
  {
    v40 = 0;
    *(_WORD *)Buf2_8 = 0;
  }
  if ( !v41 )
  {
    *(_WORD *)&Buf1[2] = 0;
    *(_DWORD *)&Buf1[8] = 0;
    *(_WORD *)&Buf1[12] = 0;
  }
  if ( !v42 )
    *(_QWORD *)&Buf1[4] = 0LL;
  if ( !v43 )
    *(_DWORD *)&Buf1[12] = 0;
  *(_DWORD *)&Buf1[20] = (v33 != 0 ? v39 : 0) != 0 ? v33 : 0;
  if ( !v40 )
    *(_WORD *)Buf1 = 0;
  v44 = *(_QWORD *)&Buf1[24] - *(_QWORD *)&Buf2_8[24];
  if ( *(_QWORD *)&Buf1[24] == *(_QWORD *)&Buf2_8[24] )
    v44 = *(_QWORD *)&Buf1[32] - *(_QWORD *)&Buf2_8[32];
  if ( v44 || v36 != v30 || memcmp_0(Buf1, Buf2_8, 0x28uLL) )
    goto LABEL_51;
LABEL_61:
  if ( a6 )
    *a6 = *((_DWORD *)*v27 + 3);
  if ( a7 )
    *a7 = *((_DWORD *)*v27 + 2);
  if ( a8 )
    *a8 = *((_DWORD *)*v27 + 4);
  if ( a9 )
  {
    v46 = *v27;
    if ( a5 )
      v47 = *((_DWORD *)v46 + 6);
    else
      v47 = *((_DWORD *)v46 + 5);
    *a9 = v47;
  }
  return v9;
}
