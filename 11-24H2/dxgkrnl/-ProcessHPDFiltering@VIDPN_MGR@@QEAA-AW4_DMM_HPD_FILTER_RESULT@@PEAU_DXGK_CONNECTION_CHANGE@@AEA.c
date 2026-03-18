/*
 * XREFs of ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403B3AEC
 * Callers:
 *     ?DmmProcessHPDFiltering@@YA?AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1403B3A44 (-DmmProcessHPDFiltering@@YA-AW4_DMM_HPD_FILTER_RESULT@@PEAXPEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@45445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001190 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U3@U2@U2@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x140051B58 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14018BAA4 (-SetUnplugHiding@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::ProcessHPDFiltering(VIDPN_MGR *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  DMMVIDEOPRESENTTARGETSET *v10; // rcx
  int v11; // edx
  struct DXGADAPTER *v12; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // r9
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  bool v23; // al
  DMMVIDEOPRESENTTARGET *v24; // r9
  int v25; // edx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v33; // ecx
  int v34; // r8d
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // edx
  struct _LUID *v40; // rdx
  struct _LUID *v41; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v43; // r9
  int v44; // eax
  int v45; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch] BYREF
  int v49; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID *v50; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h] BYREF
  int v54; // [rsp+B0h] [rbp-50h] BYREF
  int v55; // [rsp+B4h] [rbp-4Ch]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int128 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DCh] [rbp-24h]
  int v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E4h] [rbp-1Ch]
  BOOL v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+ECh] [rbp-14h]
  __int64 v65; // [rsp+F0h] [rbp-10h]
  struct _GUID v66; // [rsp+100h] [rbp+0h] BYREF

  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
  v10 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)a1 + 15);
  v11 = *(_DWORD *)(a2 + 8);
  v56 = 0LL;
  v57 = 0LL;
  v12 = ContainingAdapter;
  v60 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v10, v11 & 0xFFFFFF);
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL, *(_DWORD *)(a2 + 8) & 0xFFFFFFLL);
    WdLogGlobalForLineNumber = 5515;
    return 0LL;
  }
  v14 = *(_DWORD *)(a3 + 40) & 0xFFEFFFFF | (a4 == 0 ? 0x100000 : 0);
  *(_DWORD *)(a3 + 40) = v14;
  v15 = v14 & 0xFEFFFFFF | (*((_DWORD *)TargetById + 25) != 4 ? 0x1000000 : 0);
  v16 = 0;
  *(_DWORD *)(a3 + 40) = v15;
  if ( *((_DWORD *)TargetById + 21) == 15 )
    v16 = 0x200000;
  v17 = v15 & 0xFFDFFFFF | v16;
  *(_DWORD *)(a3 + 40) = v17;
  v18 = *((_DWORD *)TargetById + 20);
  if ( !v18 || (v19 = v18 - 1) == 0 || (v20 = v19 - 1) == 0 || (v21 = v20 - 1) == 0 || (v22 = 0, v21 == 11) )
    v22 = 0x400000;
  *(_DWORD *)(a3 + 40) = v22 | v17 & 0xFFBFFFFF;
  v23 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)TargetById + 20));
  v26 = v25 ^ (v25 ^ (v23 << 23)) & 0x800000;
  *(_DWORD *)(a3 + 40) = v26;
  v27 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(a3 + 16) = MEMORY[0xFFFFF78000000014];
  v28 = *((_QWORD *)v24 + 53);
  *(_QWORD *)(a3 + 24) = v28;
  v29 = *((_QWORD *)v24 + 54);
  *(_QWORD *)(a3 + 32) = v29;
  if ( v27 - v28 < 100000000 || v27 - v29 < 100000000 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0xF000000) == 0x8000000 )
      *(_DWORD *)(a3 + 40) |= 0x40000u;
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  }
  v30 = *(unsigned int *)(*((_QWORD *)v12 + 390) + 540LL);
  v31 = (unsigned int)(v30 + 100000000);
  if ( v27 - v28 < v31 || v27 - v29 < v31 )
    *(_DWORD *)(a3 + 40) |= 0x80000u;
  *(_BYTE *)(a3 + 40) = *(_BYTE *)(a2 + 11) & 0xF;
  if ( v26 )
    return 0LL;
  v33 = *(_DWORD *)(a2 + 8);
  v34 = v33 & 0xF000000;
  if ( *(_BYTE *)(*((_QWORD *)v24 + 67) + 172LL) )
  {
    if ( v34 == 0x8000000 )
    {
      DMMVIDEOPRESENTTARGET::SetUnplugHiding(v24, 0);
      v33 = *(_DWORD *)(a2 + 8);
      v35 = 2;
    }
    else
    {
      v35 = 3;
    }
    v36 = *(_QWORD *)((char *)v12 + 412);
    v62 = v33 & 0xFFFFFF;
    v54 = 30;
    v55 = 72;
    v59 = 0;
    v63 = v35 == 3;
    v58 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v61 = 103;
    v64 = 0;
    v65 = v36;
    if ( *(_QWORD *)((char *)v12 + 4828) )
      v37 = *((unsigned int *)v12 + 1209);
    else
      v37 = 0x200000000LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v54, v37);
    *(_DWORD *)(a3 + 40) |= 0x20000u;
    return v35;
  }
  else
  {
    if ( v34 != 0x8000000 )
      return 0LL;
    if ( v27 - v28 >= v30 && v27 - v29 >= v30 )
    {
      WdLogSingleEntry4(7LL, v33 & 0xFFFFFF, v12, v28, v27 - v28);
      WdLogGlobalForLineNumber = 5662;
      return 0LL;
    }
    v38 = *(_QWORD *)((char *)v12 + 412);
    v54 = 30;
    v56 = 0LL;
    v39 = *(_DWORD *)(a3 + 16);
    v62 = v33 & 0xFFFFFF;
    v55 = 72;
    v59 = 0;
    v40 = (struct _LUID *)(unsigned int)(v39 - *(_DWORD *)(a3 + 24));
    v63 = v28 >= v29;
    v58 = 0LL;
    v57 = 0LL;
    v61 = 102;
    v64 = (int)v40;
    v65 = v38;
    v46 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v12, v40, 0LL, &v46);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)&v54, v46);
    v46 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v12, v41, 0LL, &v46);
    v45 = 0;
    v66 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
      (struct DXGGLOBAL *)((char *)Global + 305624),
      0,
      (enum _DXGK_RAPID_HPD_TYPE *)&v45,
      &v66,
      0LL);
    if ( (unsigned int)dword_14015E650 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_14015E650, 0x400000000080LL) )
      {
        v47 = -1;
        v50 = &v66;
        v51 = v46;
        v53 = *(_QWORD *)((char *)v12 + 412);
        v44 = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
        v48 = 1;
        LODWORD(v46) = v44;
        v52 = 2LL;
        v49 = 0;
        LOWORD(v45) = 3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
          (__int64)&v45,
          (__int64)&unk_140140118,
          a5,
          v43,
          (__int64)&v45,
          (__int64)&v46,
          (__int64)&v53,
          (__int64)&v49,
          (__int64)&v52,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v51,
          (__int64 *)&v50);
      }
    }
    *(_DWORD *)(a3 + 40) |= 0x10000u;
    return 1LL;
  }
}
