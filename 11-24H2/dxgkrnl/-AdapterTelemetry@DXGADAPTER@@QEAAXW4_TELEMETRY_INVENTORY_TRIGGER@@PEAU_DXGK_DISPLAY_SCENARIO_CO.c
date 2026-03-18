/*
 * XREFs of ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x1403EB654
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403EB4F0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U2@U3@U2@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U1@U4@U_tlgWrapperBinary@@U1@U3@U4@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperArray@$00@@U8@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@3555555555454555555554434453334446666653336AEBU_tlgWrapperBinary@@3565AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperArray@$00@@AEBU?$_tlgWrapperArray@$00@@555@Z @ 0x140001F14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetMdmStatus @ 0x14002739C (DpiGetMdmStatus.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x14004D774 (-VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEBVVIDMM_GLOBAL@@IPEA_K11111@Z.c)
 *     DpiGetAdapterMdmSupport @ 0x14005917C (DpiGetAdapterMdmSupport.c)
 *     DxgkMiracastQueryMiracastSupportNoLock @ 0x14005AA4C (DxgkMiracastQueryMiracastSupportNoLock.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DxgkCountInterfaceFunctions @ 0x1403F7AE0 (DxgkCountInterfaceFunctions.c)
 *     DpiGetDriverFullPath @ 0x140404974 (DpiGetDriverFullPath.c)
 */

void __fastcall DXGADAPTER::AdapterTelemetry(__int64 a1, int a2, GUID *a3, int a4, int a5)
{
  bool v5; // zf
  __int64 v6; // rsi
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rdi
  int v12; // r12d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int v15; // r15d
  __int64 v16; // rcx
  _DWORD *v17; // rax
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // r10d
  __int64 v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // rsi
  unsigned __int16 *v27; // rdx
  unsigned int v28; // r9d
  unsigned int v29; // r11d
  __int64 v30; // r10
  char v31; // al
  __int64 v32; // r9
  __int16 v33; // r10
  __int64 v34; // r11
  int v35; // eax
  int v36; // ebx
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // rcx
  BOOL v40; // eax
  GUID *p_ActivityId; // r8
  __int16 v42; // [rsp+240h] [rbp-80h] BYREF
  __int16 v43; // [rsp+242h] [rbp-7Eh] BYREF
  __int16 v44; // [rsp+244h] [rbp-7Ch] BYREF
  char v45; // [rsp+246h] [rbp-7Ah]
  int v46; // [rsp+248h] [rbp-78h] BYREF
  unsigned int NumDifferentPhysicalAdapters; // [rsp+24Ch] [rbp-74h] BYREF
  int v48; // [rsp+250h] [rbp-70h] BYREF
  int v49; // [rsp+254h] [rbp-6Ch] BYREF
  __int16 v50[2]; // [rsp+258h] [rbp-68h] BYREF
  int v51; // [rsp+25Ch] [rbp-64h] BYREF
  int v52; // [rsp+260h] [rbp-60h] BYREF
  int v53; // [rsp+264h] [rbp-5Ch] BYREF
  unsigned int v54; // [rsp+268h] [rbp-58h] BYREF
  int v55; // [rsp+26Ch] [rbp-54h] BYREF
  int v56; // [rsp+270h] [rbp-50h] BYREF
  unsigned int v57; // [rsp+274h] [rbp-4Ch] BYREF
  unsigned int v58; // [rsp+278h] [rbp-48h] BYREF
  unsigned __int64 v59; // [rsp+280h] [rbp-40h] BYREF
  __int64 v60; // [rsp+288h] [rbp-38h] BYREF
  unsigned __int16 *v61; // [rsp+290h] [rbp-30h] BYREF
  __int64 v62; // [rsp+298h] [rbp-28h] BYREF
  unsigned __int16 *v63; // [rsp+2A0h] [rbp-20h] BYREF
  unsigned __int16 *v64; // [rsp+2A8h] [rbp-18h] BYREF
  unsigned __int16 *v65; // [rsp+2B0h] [rbp-10h] BYREF
  __int64 v66; // [rsp+2B8h] [rbp-8h] BYREF
  unsigned __int16 *v67; // [rsp+2C0h] [rbp+0h] BYREF
  int v68; // [rsp+2C8h] [rbp+8h]
  int v69; // [rsp+2CCh] [rbp+Ch] BYREF
  int v70; // [rsp+2D0h] [rbp+10h] BYREF
  unsigned int v71; // [rsp+2D4h] [rbp+14h] BYREF
  int v72; // [rsp+2D8h] [rbp+18h] BYREF
  unsigned int v73; // [rsp+2DCh] [rbp+1Ch] BYREF
  unsigned int v74; // [rsp+2E0h] [rbp+20h] BYREF
  int v75; // [rsp+2E4h] [rbp+24h] BYREF
  int v76; // [rsp+2E8h] [rbp+28h] BYREF
  int v77; // [rsp+2ECh] [rbp+2Ch] BYREF
  int v78; // [rsp+2F0h] [rbp+30h] BYREF
  int v79; // [rsp+2F4h] [rbp+34h] BYREF
  __int64 v80; // [rsp+2F8h] [rbp+38h] BYREF
  __int64 v81; // [rsp+300h] [rbp+40h] BYREF
  int v82; // [rsp+308h] [rbp+48h] BYREF
  _DWORD v83[4]; // [rsp+310h] [rbp+50h] BYREF
  int DriverFullPath; // [rsp+320h] [rbp+60h]
  unsigned __int64 v85; // [rsp+328h] [rbp+68h] BYREF
  unsigned __int64 v86; // [rsp+330h] [rbp+70h] BYREF
  unsigned __int64 v87; // [rsp+338h] [rbp+78h] BYREF
  DXGADAPTER *v88[2]; // [rsp+340h] [rbp+80h] BYREF
  __int128 v89; // [rsp+350h] [rbp+90h] BYREF
  PVOID *v90; // [rsp+360h] [rbp+A0h]
  __int64 v91; // [rsp+368h] [rbp+A8h] BYREF
  unsigned __int16 *v92; // [rsp+370h] [rbp+B0h] BYREF
  __int64 v93; // [rsp+378h] [rbp+B8h] BYREF
  __int64 v94; // [rsp+380h] [rbp+C0h] BYREF
  __int64 v95; // [rsp+388h] [rbp+C8h] BYREF
  unsigned __int16 *v96; // [rsp+390h] [rbp+D0h] BYREF
  unsigned __int16 *v97; // [rsp+398h] [rbp+D8h] BYREF
  unsigned __int16 *v98; // [rsp+3A0h] [rbp+E0h] BYREF
  unsigned __int16 *v99; // [rsp+3A8h] [rbp+E8h] BYREF
  PVOID *v100; // [rsp+3B0h] [rbp+F0h] BYREF
  unsigned __int64 v101; // [rsp+3B8h] [rbp+F8h] BYREF
  unsigned __int64 v102; // [rsp+3C0h] [rbp+100h] BYREF
  unsigned __int64 v103; // [rsp+3C8h] [rbp+108h] BYREF
  __int64 v104; // [rsp+3D0h] [rbp+110h] BYREF
  __int64 v105; // [rsp+3D8h] [rbp+118h] BYREF
  __int64 v106; // [rsp+3E0h] [rbp+120h] BYREF
  unsigned __int16 *v107; // [rsp+3E8h] [rbp+128h] BYREF
  __int64 v108; // [rsp+3F0h] [rbp+130h] BYREF
  GUID *v109; // [rsp+3F8h] [rbp+138h]
  PVOID P[2]; // [rsp+400h] [rbp+140h] BYREF
  PVOID v111[2]; // [rsp+410h] [rbp+150h] BYREF
  __int128 v112; // [rsp+420h] [rbp+160h] BYREF
  int v113; // [rsp+430h] [rbp+170h]
  _BYTE *v114; // [rsp+438h] [rbp+178h]
  __int16 v115; // [rsp+440h] [rbp+180h]
  _BYTE *v116; // [rsp+448h] [rbp+188h]
  __int16 v117; // [rsp+450h] [rbp+190h]
  __int64 *v118; // [rsp+458h] [rbp+198h] BYREF
  __int16 v119; // [rsp+460h] [rbp+1A0h]
  __int64 v120; // [rsp+470h] [rbp+1B0h] BYREF
  int v121; // [rsp+478h] [rbp+1B8h]
  const wchar_t *v122; // [rsp+480h] [rbp+1C0h]
  PVOID *v123; // [rsp+488h] [rbp+1C8h]
  int v124; // [rsp+490h] [rbp+1D0h]
  __int64 v125; // [rsp+498h] [rbp+1D8h]
  int v126; // [rsp+4A0h] [rbp+1E0h]
  __int64 v127; // [rsp+4A8h] [rbp+1E8h]
  int v128; // [rsp+4B0h] [rbp+1F0h]
  __int64 v129; // [rsp+4B8h] [rbp+1F8h]
  __int128 v130; // [rsp+4C0h] [rbp+200h]
  __int128 v131; // [rsp+4D0h] [rbp+210h]
  _OWORD v132[23]; // [rsp+4E0h] [rbp+220h] BYREF
  _DWORD v133[192]; // [rsp+650h] [rbp+390h] BYREF
  GUID ActivityId; // [rsp+950h] [rbp+690h] BYREF
  _BYTE v135[64]; // [rsp+960h] [rbp+6A0h] BYREF
  _BYTE v136[64]; // [rsp+9A0h] [rbp+6E0h] BYREF

  v5 = (*(_DWORD *)(a1 + 444) & 0x20000) == 0;
  v6 = a1;
  v56 = *(_DWORD *)(a1 + 3004);
  v80 = *(_QWORD *)(a1 + 904);
  v7 = 1;
  v58 = *(_DWORD *)(a1 + 296);
  v52 = a4;
  v109 = a3;
  v55 = a2;
  v81 = a1;
  if ( !v5 || (v8 = *(_DWORD *)(a1 + 2976) >> 1, v48 = 0, (v8 & 1) != 0) )
    v48 = 1;
  v112 = 0LL;
  v113 = 0;
  DXGADAPTER::GetAdapterType((DXGADAPTER *)a1, (int *)&v57);
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DxgkMiracastQueryMiracastSupportNoLock((__int64)&v112);
  if ( !*(_QWORD *)(v6 + 3128) && !*(_QWORD *)(v6 + 3120) )
    return;
  v9 = *(_QWORD *)(v6 + 3120);
  v87 = 0LL;
  v86 = 0LL;
  LOWORD(v10) = 0;
  v85 = 0LL;
  v11 = 0LL;
  v44 = 0;
  v12 = 0;
  v43 = 0;
  LOBYTE(v42) = 0;
  v49 = 0;
  *(_OWORD *)P = 0LL;
  v89 = 0LL;
  if ( v9 )
  {
    v13 = *(unsigned __int8 *)(v9 + 24);
    v44 = *(_WORD *)(v6 + 1856);
    v43 = *(_WORD *)(v6 + 1860);
    v12 = (v13 >> 5) & 1;
  }
  if ( (*(_DWORD *)(v6 + 444) & 0x100) != 0 )
  {
    v88[0] = 0LL;
    if ( (int)DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER *)v6, 0, v88) >= 0 )
      v11 = *(_QWORD *)((char *)v88[0] + 412);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v88, 0LL);
  }
  v14 = *(_QWORD *)(v6 + 3128);
  v15 = 0;
  if ( !v14 )
    goto LABEL_17;
  if ( !*(_BYTE *)(v6 + 209) )
  {
    v59 = 0LL;
    VIDMM_EXPORT::VidMmGetTotalSegmentSize(
      *(VIDMM_EXPORT **)(v14 + 760),
      *(const struct VIDMM_GLOBAL **)(v14 + 768),
      0,
      &v59,
      &v59,
      &v59,
      &v87,
      &v86,
      &v85);
  }
  v16 = *(_QWORD *)(v6 + 3128);
  LOBYTE(v42) = *(_BYTE *)(v16 + 1880);
  v17 = *(_DWORD **)(v6 + 3008);
  v10 = (*v17 >> 15) & 3;
  v15 = (*v17 >> 20) & 1;
  v49 = (*v17 >> 18) & 3;
  if ( v16 )
  {
    v61 = (unsigned __int16 *)(v16 + 320);
    v63 = (unsigned __int16 *)(v16 + 336);
    v64 = (unsigned __int16 *)(v16 + 352);
    v65 = (unsigned __int16 *)(v16 + 368);
    v18 = (unsigned __int16 *)(v16 + 512);
  }
  else
  {
LABEL_17:
    v61 = (unsigned __int16 *)&v89;
    v63 = (unsigned __int16 *)&v89;
    v64 = (unsigned __int16 *)&v89;
    v65 = (unsigned __int16 *)&v89;
    v18 = (unsigned __int16 *)&v89;
  }
  v19 = *(_QWORD *)(v6 + 216);
  v67 = v18;
  DriverFullPath = DpiGetDriverFullPath(v19, P);
  v60 = 0LL;
  v62 = 0LL;
  v66 = 0LL;
  DxgkCountInterfaceFunctions(v6 + 288, &v60, &v62, &v66);
  v20 = **(_QWORD **)(v6 + 3008);
  v122 = L"DxDbVersion";
  v108 = v20;
  v123 = v111;
  *(_OWORD *)v111 = 0LL;
  v120 = 0LL;
  v121 = 292;
  v124 = 16777217;
  v125 = 0LL;
  v126 = 0;
  v127 = 0LL;
  v128 = 0;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v46 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Software\\Microsoft\\DirectX", &v120, 0LL, 0LL);
  memset(v133, 0, 0x2F4uLL);
  DpiGetMdmStatus((struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)v133);
  memset(v132, 0, 0x164uLL);
  DpiGetAdapterMdmSupport(*(_QWORD *)(v6 + 216), v132);
  v21 = v132[0] & 0xF | (16
                       * (BYTE4(v132[0]) & 0xF | (16
                                                * (BYTE8(v132[0]) & 0xF | (16
                                                                         * (BYTE12(v132[5]) & 0xF | (16 * (v133[185] & 0xF | (16 * (v133[186] & 0xF))))))))));
  v22 = *(_DWORD *)(v6 + 3000);
  v53 = v21;
  v51 = v22;
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)v6);
  memset(v136, 0, sizeof(v136));
  memset(v135, 0, sizeof(v135));
  v23 = NumDifferentPhysicalAdapters;
  v24 = 0LL;
  v54 = 0;
  if ( !NumDifferentPhysicalAdapters )
    goto LABEL_29;
  v25 = v54;
  v26 = *(_QWORD *)(v6 + 2992);
  while ( 1 )
  {
    v27 = (unsigned __int16 *)(v26 + 344LL * v25);
    v136[v25] = *(_BYTE *)v27;
    v28 = *v27;
    if ( !*((_QWORD *)v27 + 4) )
    {
      v24 = v28 + (unsigned int)v24;
      goto LABEL_27;
    }
    v29 = 0;
    if ( *v27 )
      break;
LABEL_27:
    if ( ++v25 >= v23 )
      goto LABEL_28;
  }
  v30 = 0LL;
  while ( (unsigned int)v24 < 0x40 )
  {
    ++v29;
    v31 = *(_BYTE *)(v30 + *((_QWORD *)v27 + 4));
    v30 += 74LL;
    v135[v24] = v31;
    v24 = (unsigned int)(v24 + 1);
    if ( v29 >= v28 )
    {
      v23 = NumDifferentPhysicalAdapters;
      goto LABEL_27;
    }
  }
LABEL_28:
  v21 = v53;
  v6 = v81;
LABEL_29:
  ++DXGADAPTER::sTelemetrySeqId;
  if ( (unsigned int)dword_14015E618 > 5 && tlgKeywordOn((__int64)&dword_14015E618, 0x800000000004LL) )
  {
    v35 = (*(unsigned __int8 *)(v6 + 3072) >> 1) & 1;
    v68 = v21;
    v83[1] = v35;
    v83[2] = a5;
    v36 = v46;
    v83[3] = v52;
    v114 = v135;
    v115 = v51;
    v116 = v136;
    v90 = v111;
    v118 = &v108;
    v119 = 8;
    v92 = v67;
    v93 = v66;
    v94 = v62;
    v95 = v60;
    v70 = *(_DWORD *)(v6 + 2280);
    v96 = v65;
    v97 = v64;
    v98 = v63;
    v99 = v61;
    v100 = P;
    v50[0] = *(_WORD *)(v6 + 1864);
    v101 = v85;
    v102 = v86;
    v103 = v87;
    LOWORD(v51) = *(_WORD *)(v6 + 2932);
    LOWORD(v52) = *(_WORD *)(v6 + 2928);
    v104 = *(_QWORD *)(v6 + 412);
    LOWORD(v53) = v56;
    LOWORD(v54) = *(_WORD *)(v6 + 2056);
    v56 = v48;
    v117 = v33;
    v71 = (v57 >> 1) & 1;
    v45 = v33;
    v72 = v57 & 1;
    v69 = v46;
    v91 = v11;
    LOWORD(v46) = v10;
    v74 = (v57 >> 3) & 1;
    v73 = (v57 >> 2) & 1;
    v37 = *(_DWORD *)(v6 + 444);
    v76 = v12;
    v75 = (v37 >> 7) & 1;
    v58 = v58 > 1;
    LOWORD(v48) = v49;
    v77 = (unsigned __int8)v42;
    v38 = *(_WORD *)(v6 + 2470) & 1;
    v49 = v15;
    v78 = v38;
    v83[0] = v80 != 0;
    v79 = *(unsigned __int8 *)(v6 + 2948);
    LODWORD(v80) = *(unsigned __int8 *)(v6 + 2943);
    LODWORD(v81) = BYTE8(v112) == 0;
    v39 = (v37 >> 6) & 1;
    LODWORD(v61) = *(_DWORD *)(v6 + 2016);
    v105 = *(_QWORD *)(v6 + 2008);
    v106 = *(_QWORD *)(v6 + 2000);
    v42 = *(_WORD *)(v6 + 436);
    LODWORD(v63) = *(_DWORD *)(v6 + 432);
    LODWORD(v64) = *(_DWORD *)(v6 + 428);
    LODWORD(v65) = *(_DWORD *)(v6 + 424);
    LODWORD(v60) = *(_DWORD *)(v6 + 420);
    v107 = *(unsigned __int16 **)(v6 + 1928);
    v82 = v39;
    v40 = (_DWORD)v32 && tlgKeywordOn(v34, 0x200000000000LL);
    LODWORD(v62) = v40;
    if ( !(_DWORD)v32 || !tlgKeywordOn(v34, 0x400000000000LL) )
      v7 = 0;
    p_ActivityId = &ActivityId;
    LODWORD(v67) = DXGADAPTER::sTelemetrySeqId;
    LODWORD(v66) = v7;
    LODWORD(v59) = MEMORY[0xFFFFF780000002C4];
    LOWORD(NumDifferentPhysicalAdapters) = 21;
    v88[0] = (DXGADAPTER *)2048;
    if ( v109 )
      p_ActivityId = v109;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperBinary,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperArray<1>,_tlgWrapperArray<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v39,
      (__int64)&unk_14013BACF,
      (__int64)p_ActivityId,
      v32,
      (__int64)v88,
      (__int64)&NumDifferentPhysicalAdapters,
      (__int64)&v59,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v62,
      &v107,
      (__int64)&v60,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v42,
      &v106,
      (__int64)&v105,
      (__int64)&v61,
      (__int64)&v82,
      (__int64)&v81,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)v83,
      (__int64)&v78,
      (__int64)&v77,
      (__int64)&v76,
      (__int64)&v46,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v58,
      (__int64)&v75,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&v71,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v104,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v55,
      (__int64)&v103,
      (__int64)&v102,
      (__int64)&v101,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)v50,
      (unsigned __int16 **)&v100,
      &v99,
      &v98,
      &v97,
      &v96,
      (__int64)&v70,
      (__int64)&v95,
      (__int64)&v94,
      (__int64)&v93,
      &v92,
      (__int64 *)&v118,
      (__int64)&v91,
      (__int64)&v69);
  }
  else
  {
    v36 = v46;
  }
  if ( DriverFullPath >= 0 )
    ExFreePoolWithTag(P[1], 0);
  if ( v36 >= 0 )
    ExFreePoolWithTag(v111[1], 0);
}
