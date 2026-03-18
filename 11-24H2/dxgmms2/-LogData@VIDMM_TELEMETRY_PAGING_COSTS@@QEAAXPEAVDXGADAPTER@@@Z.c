/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14009BCE4
 * Callers:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400915C0 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@@Z @ 0x140001758 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@66@Z @ 0x140001814 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNIC_ea_140001814.c)
 *     _tlgKeywordOn @ 0x14003E548 (_tlgKeywordOn.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004B168 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z @ 0x14009BC14 (-ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z.c)
 */

void __fastcall VIDMM_TELEMETRY_PAGING_COSTS::LogData(VIDMM_TELEMETRY_PAGING_COSTS *this, struct DXGADAPTER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int16 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v33; // [rsp+54h] [rbp-ACh] BYREF
  __int16 v34; // [rsp+56h] [rbp-AAh] BYREF
  __int16 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v36; // [rsp+5Ah] [rbp-A6h] BYREF
  __int16 v37; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v38; // [rsp+5Eh] [rbp-A2h] BYREF
  __int16 v39; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v46; // [rsp+98h] [rbp-68h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v48; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v50; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v52; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 *v54; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v56; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-8h] BYREF
  char v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h] BYREF
  int v61; // [rsp+110h] [rbp+10h]
  _BYTE *v62; // [rsp+118h] [rbp+18h] BYREF
  int v63; // [rsp+120h] [rbp+20h]
  _BYTE *v64; // [rsp+128h] [rbp+28h] BYREF
  int v65; // [rsp+130h] [rbp+30h]
  _BYTE *v66; // [rsp+138h] [rbp+38h] BYREF
  int v67; // [rsp+140h] [rbp+40h]
  _BYTE *v68; // [rsp+148h] [rbp+48h] BYREF
  int v69; // [rsp+150h] [rbp+50h]
  _BYTE *v70; // [rsp+158h] [rbp+58h] BYREF
  int v71; // [rsp+160h] [rbp+60h]
  _BYTE *v72; // [rsp+168h] [rbp+68h] BYREF
  int v73; // [rsp+170h] [rbp+70h]
  _BYTE *v74; // [rsp+178h] [rbp+78h] BYREF
  int v75; // [rsp+180h] [rbp+80h]
  _BYTE *v76; // [rsp+188h] [rbp+88h] BYREF
  int v77; // [rsp+190h] [rbp+90h]
  _BYTE *v78; // [rsp+198h] [rbp+98h] BYREF
  int v79; // [rsp+1A0h] [rbp+A0h]
  _BYTE *v80; // [rsp+1A8h] [rbp+A8h] BYREF
  int v81; // [rsp+1B0h] [rbp+B0h]
  _BYTE *v82; // [rsp+1B8h] [rbp+B8h] BYREF
  int v83; // [rsp+1C0h] [rbp+C0h]
  _BYTE *v84; // [rsp+1C8h] [rbp+C8h] BYREF
  int v85; // [rsp+1D0h] [rbp+D0h]
  _BYTE *v86; // [rsp+1D8h] [rbp+D8h] BYREF
  int v87; // [rsp+1E0h] [rbp+E0h]
  _BYTE *v88; // [rsp+1E8h] [rbp+E8h] BYREF
  int v89; // [rsp+1F0h] [rbp+F0h]
  _BYTE *v90; // [rsp+1F8h] [rbp+F8h] BYREF
  int v91; // [rsp+200h] [rbp+100h]
  _BYTE *v92; // [rsp+208h] [rbp+108h] BYREF
  int v93; // [rsp+210h] [rbp+110h]
  _BYTE *v94; // [rsp+218h] [rbp+118h] BYREF
  int v95; // [rsp+220h] [rbp+120h]
  _BYTE *v96; // [rsp+228h] [rbp+128h] BYREF
  int v97; // [rsp+230h] [rbp+130h]
  _BYTE *v98; // [rsp+238h] [rbp+138h] BYREF
  int v99; // [rsp+240h] [rbp+140h]
  _BYTE *v100; // [rsp+248h] [rbp+148h] BYREF
  int v101; // [rsp+250h] [rbp+150h]
  _BYTE *v102; // [rsp+258h] [rbp+158h] BYREF
  int v103; // [rsp+260h] [rbp+160h]
  _BYTE *v104; // [rsp+268h] [rbp+168h] BYREF
  int v105; // [rsp+270h] [rbp+170h]
  _BYTE *v106; // [rsp+278h] [rbp+178h] BYREF
  int v107; // [rsp+280h] [rbp+180h]
  _BYTE *v108; // [rsp+288h] [rbp+188h] BYREF
  int v109; // [rsp+290h] [rbp+190h]
  _BYTE v110[88]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v111[176]; // [rsp+2F8h] [rbp+1F8h] BYREF
  _BYTE v112[184]; // [rsp+3A8h] [rbp+2A8h] BYREF

  if ( (*((_DWORD *)a2 + 111) & 0x10) == 0 )
  {
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v58,
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 3608));
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v61 = 88;
      v60 = (__int64)this + 3520;
      v40 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v31 = 1;
      v41 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize>(
        v4,
        (__int64)&unk_140074A3E,
        v5,
        v6,
        (__int64)&v41,
        (__int64)&v31,
        &v40,
        &v60);
    }
    memset(v110, 0, sizeof(v110));
    memset(v111, 0, sizeof(v111));
    memset(v112, 0, 0xB0uLL);
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(this, (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v63 = 176;
      v62 = v112;
      v65 = 176;
      v64 = v111;
      v66 = v110;
      v42 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v67 = 88;
      v32 = 0;
      v43 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v7,
        (__int64)&unk_1400749CC,
        v8,
        v9,
        (__int64)&v43,
        (__int64)&v32,
        &v42,
        (__int64 *)&v66,
        (__int64 *)&v64,
        (__int64 *)&v62);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 440),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v69 = 176;
      v68 = v112;
      v71 = 176;
      v70 = v111;
      v72 = v110;
      v44 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v73 = 88;
      v33 = 0;
      v45 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v10,
        (__int64)&unk_14007495E,
        v11,
        v12,
        (__int64)&v45,
        (__int64)&v33,
        &v44,
        (__int64 *)&v72,
        (__int64 *)&v70,
        (__int64 *)&v68);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 880),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v75 = 176;
      v74 = v112;
      v77 = 176;
      v76 = v111;
      v78 = v110;
      v46 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v79 = 88;
      v34 = 0;
      v47 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v13,
        (__int64)&unk_1400748F0,
        v14,
        v15,
        (__int64)&v47,
        (__int64)&v34,
        &v46,
        (__int64 *)&v78,
        (__int64 *)&v76,
        (__int64 *)&v74);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1320),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v81 = 176;
      v80 = v112;
      v83 = 176;
      v82 = v111;
      v84 = v110;
      v48 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v85 = 88;
      v35 = 0;
      v49 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v16,
        (__int64)&unk_140074880,
        v17,
        v18,
        (__int64)&v49,
        (__int64)&v35,
        &v48,
        (__int64 *)&v84,
        (__int64 *)&v82,
        (__int64 *)&v80);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1760),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v87 = 176;
      v86 = v112;
      v89 = 176;
      v88 = v111;
      v90 = v110;
      v50 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v91 = 88;
      v36 = 0;
      v51 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v19,
        (__int64)&unk_14007480B,
        v20,
        v21,
        (__int64)&v51,
        (__int64)&v36,
        &v50,
        (__int64 *)&v90,
        (__int64 *)&v88,
        (__int64 *)&v86);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2200),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v93 = 176;
      v92 = v112;
      v95 = 176;
      v94 = v111;
      v96 = v110;
      v52 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v97 = 88;
      v37 = 0;
      v53 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v22,
        (__int64)&unk_140074797,
        v23,
        v24,
        (__int64)&v53,
        (__int64)&v37,
        &v52,
        (__int64 *)&v96,
        (__int64 *)&v94,
        (__int64 *)&v92);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2640),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v99 = 176;
      v98 = v112;
      v101 = 176;
      v100 = v111;
      v102 = v110;
      v54 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v103 = 88;
      v38 = 0;
      v55 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v25,
        (__int64)&unk_140074723,
        v26,
        v27,
        (__int64)&v55,
        (__int64)&v38,
        &v54,
        (__int64 *)&v102,
        (__int64 *)&v100,
        (__int64 *)&v98);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 3080),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v110);
    if ( (unsigned int)dword_140081048 > 5 && tlgKeywordOn((__int64)&dword_140081048, 0x400000000008LL) )
    {
      v105 = 176;
      v104 = v112;
      v107 = 176;
      v106 = v111;
      v108 = v110;
      v56 = (unsigned __int16 *)*((_QWORD *)a2 + 241);
      v109 = 88;
      v39 = 0;
      v57 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v28,
        (__int64)&unk_1400746B7,
        v29,
        v30,
        (__int64)&v57,
        (__int64)&v39,
        &v56,
        (__int64 *)&v108,
        (__int64 *)&v106,
        (__int64 *)&v104);
    }
    if ( v59 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v58 + 16));
      ExReleasePushLockSharedEx(v58, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
