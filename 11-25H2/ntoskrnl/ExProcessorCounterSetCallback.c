/*
 * XREFs of ExProcessorCounterSetCallback @ 0x1409FB640
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinityEx @ 0x140305020 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     swscanf_s @ 0x140501F60 (swscanf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpQueryProcessorInformationCounters @ 0x1409FC018 (ExpQueryProcessorInformationCounters.c)
 *     PcwAddInstance @ 0x1409FC2A0 (PcwAddInstance.c)
 *     ExpPcwDisabledStatus @ 0x140A49940 (ExpPcwDisabledStatus.c)
 */

__int64 __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  unsigned int v4; // ebx
  bool v5; // r15
  char v6; // r12
  int v7; // esi
  __int64 v8; // rax
  void *v9; // r14
  bool v10; // r13
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // esi
  int v14; // r9d
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // edi
  __int64 v22; // rsi
  __int64 *v23; // rdx
  const UNICODE_STRING *v24; // rdx
  NTSTATUS v25; // eax
  int v26; // esi
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  PPCW_DATA Dataa; // [rsp+28h] [rbp-E0h]
  bool v29; // [rsp+38h] [rbp-D0h]
  __int16 v30; // [rsp+39h] [rbp-CFh]
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h]
  struct _PCW_DATA v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+70h] [rbp-98h]
  unsigned __int64 v39; // [rsp+78h] [rbp-90h]
  unsigned __int64 v40; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-70h]
  __int64 *v43; // [rsp+A0h] [rbp-68h] BYREF
  int v44; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v45; // [rsp+B0h] [rbp-58h] BYREF
  int v46; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v48; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v49; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v50; // [rsp+E0h] [rbp-28h]
  int v51; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v52; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v53; // [rsp+F8h] [rbp-10h]
  int v54; // [rsp+100h] [rbp-8h]
  int v55; // [rsp+104h] [rbp-4h]
  int v56; // [rsp+108h] [rbp+0h]
  unsigned __int64 v57; // [rsp+110h] [rbp+8h]
  unsigned __int64 v58; // [rsp+118h] [rbp+10h]
  unsigned __int64 v59; // [rsp+120h] [rbp+18h]
  __int64 v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  __int64 v62; // [rsp+138h] [rbp+30h]
  unsigned __int64 v63; // [rsp+140h] [rbp+38h]
  unsigned int v64; // [rsp+14Ch] [rbp+44h]
  unsigned int v65; // [rsp+150h] [rbp+48h]
  int v66; // [rsp+158h] [rbp+50h]
  int v67; // [rsp+15Ch] [rbp+54h]
  unsigned __int64 v68; // [rsp+160h] [rbp+58h]
  unsigned __int64 v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h]
  __int64 v71; // [rsp+178h] [rbp+70h]
  unsigned int v72; // [rsp+180h] [rbp+78h]
  int v73; // [rsp+184h] [rbp+7Ch]
  unsigned __int64 v74; // [rsp+188h] [rbp+80h]
  unsigned __int64 v75; // [rsp+198h] [rbp+90h] BYREF
  unsigned __int64 v76; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 v77; // [rsp+1A8h] [rbp+A0h]
  unsigned __int64 v78; // [rsp+1B0h] [rbp+A8h]
  int v79; // [rsp+1B8h] [rbp+B0h]
  unsigned __int64 v80; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v81; // [rsp+1C8h] [rbp+C0h]
  int v82; // [rsp+1D0h] [rbp+C8h]
  int v83; // [rsp+1D4h] [rbp+CCh]
  int v84; // [rsp+1D8h] [rbp+D0h]
  unsigned __int64 v85; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 v86; // [rsp+1E8h] [rbp+E0h]
  unsigned __int64 v87; // [rsp+1F0h] [rbp+E8h]
  __int64 v88; // [rsp+1F8h] [rbp+F0h]
  __int64 v89; // [rsp+200h] [rbp+F8h]
  __int64 v90; // [rsp+208h] [rbp+100h]
  unsigned __int64 v91; // [rsp+210h] [rbp+108h]
  unsigned int v92; // [rsp+21Ch] [rbp+114h]
  unsigned int v93; // [rsp+220h] [rbp+118h]
  int v94; // [rsp+228h] [rbp+120h]
  int v95; // [rsp+22Ch] [rbp+124h]
  unsigned __int64 v96; // [rsp+230h] [rbp+128h]
  unsigned __int64 v97; // [rsp+238h] [rbp+130h]
  __int64 v98; // [rsp+240h] [rbp+138h]
  __int64 v99; // [rsp+248h] [rbp+140h]
  unsigned int v100; // [rsp+250h] [rbp+148h]
  int v101; // [rsp+254h] [rbp+14Ch]
  unsigned __int64 v102; // [rsp+258h] [rbp+150h]
  __int64 v103; // [rsp+268h] [rbp+160h] BYREF
  __int64 v104; // [rsp+270h] [rbp+168h]
  __int64 v105; // [rsp+278h] [rbp+170h]
  __int64 v106; // [rsp+280h] [rbp+178h]
  int v107; // [rsp+288h] [rbp+180h]
  __int64 v108; // [rsp+290h] [rbp+188h]
  __int64 v109; // [rsp+298h] [rbp+190h]
  int v110; // [rsp+2A0h] [rbp+198h]
  int v111; // [rsp+2A4h] [rbp+19Ch]
  int v112; // [rsp+2A8h] [rbp+1A0h]
  __int64 v113; // [rsp+2B0h] [rbp+1A8h]
  __int64 v114; // [rsp+2B8h] [rbp+1B0h]
  __int64 v115; // [rsp+2C0h] [rbp+1B8h]
  __int64 v116; // [rsp+2C8h] [rbp+1C0h]
  __int64 v117; // [rsp+2D0h] [rbp+1C8h]
  __int64 v118; // [rsp+2D8h] [rbp+1D0h]
  __int64 v119; // [rsp+2E0h] [rbp+1D8h]
  int v120; // [rsp+2ECh] [rbp+1E4h]
  int v121; // [rsp+2F0h] [rbp+1E8h]
  unsigned int v122; // [rsp+2F8h] [rbp+1F0h]
  unsigned int v123; // [rsp+2FCh] [rbp+1F4h]
  __int64 v124; // [rsp+300h] [rbp+1F8h]
  __int64 v125; // [rsp+308h] [rbp+200h]
  __int64 v126; // [rsp+310h] [rbp+208h]
  __int64 v127; // [rsp+318h] [rbp+210h]
  int v128; // [rsp+320h] [rbp+218h]
  int v129; // [rsp+324h] [rbp+21Ch]
  __int64 v130; // [rsp+328h] [rbp+220h]
  __int64 v131; // [rsp+338h] [rbp+230h] BYREF
  _QWORD v132[33]; // [rsp+340h] [rbp+238h] BYREF
  wchar_t pszDest[16]; // [rsp+448h] [rbp+340h] BYREF

  memset_0(&v47, 0, 0xC8uLL);
  memset_0(&v75, 0, 0xC8uLL);
  v4 = 0;
  v33 = 0;
  v32 = 0;
  LOWORD(v31) = 0;
  DestinationString = 0LL;
  memset_0(&v103, 0, 0xC8uLL);
  memset_0(&v131, 0, 0x108uLL);
  v29 = 0;
  v5 = 0;
  v30 = 0;
  v6 = 0;
  v7 = a1 - 2;
  if ( !v7 )
  {
    v9 = (void *)a2[3];
    v35.Data = v9;
LABEL_4:
    LODWORD(v36) = KeQueryActiveProcessorCountEx(0xFFFFu);
    v40 = 0LL;
    v13 = 0;
    v39 = 0LL;
    v32 = 0;
    while ( v13 < (unsigned __int16)KeNumberNodes )
    {
      v131 = 2097153LL;
      memset_0(v132, 0, 0x100uLL);
      KeQueryNodeActiveAffinityEx(v13, (unsigned __int16 *)&v131, &v31);
      if ( (_WORD)v31 )
      {
        memset_0(&v47, 0, 0xC8uLL);
        v15 = v132[0];
        LOWORD(v16) = 0;
        LODWORD(v34) = 0;
        v38 = 0LL;
        v37 = 0LL;
        v33 = 0;
LABEL_8:
        LODWORD(v42) = 0;
        while ( 1 )
        {
          if ( v15 )
          {
            _BitScanForward64(&v17, v15);
            LOBYTE(v14) = v6;
            v18 = v15 & ~(1LL << v17);
            v19 = (unsigned __int8)v17;
            LOBYTE(v17) = v29;
            v42 = v18;
            LOBYTE(v18) = v5;
            ExpQueryProcessorInformationCounters(
              KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v16 + v19)],
              v17,
              v18,
              v14,
              (__int64)&v103);
            LODWORD(Dataa) = v33;
            RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v32, Dataa);
            ++v33;
            RtlInitUnicodeString(&DestinationString, pszDest);
            v43 = &v103;
            v44 = 200;
            if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
            {
              Data = (PPCW_DATA)&v43;
              v20 = guard_dispatch_icall_no_overrides(v9);
              ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
            }
            else
            {
              v20 = ExpPcwDisabledStatus();
            }
            if ( v20 >= 0 )
            {
              v47 += v103;
              v48 += v104;
              v49 += v105;
              v50 += v106;
              v59 += v115;
              v75 += v103;
              v51 += v107;
              v53 += v109;
              v55 += v111;
              v76 += v104;
              v77 += v105;
              v78 += v106;
              v56 += v112;
              v52 += v108;
              v79 += v107;
              v81 += v109;
              v83 += v111;
              v54 += v110;
              v57 += v113;
              v60 += v116;
              v84 += v112;
              v80 += v108;
              v58 += v114;
              v82 += v110;
              v85 += v113;
              v61 += v117;
              v14 = v124;
              v73 |= v129;
              v62 += v118;
              v70 += v126;
              v71 += v127;
              v63 += v119;
              v64 += v120;
              v65 += v121;
              v37 += v122;
              v38 += v123;
              v68 += v124;
              v69 += v125;
              v74 += v130;
              v72 += v128;
              v88 += v116;
              v86 += v114;
              v89 += v117;
              v87 += v115;
              v90 += v118;
              v98 += v126;
              v99 += v127;
              v92 += v120;
              v97 += v125;
              v100 += v128;
              v91 += v119;
              v93 += v121;
              v39 += v122;
              v40 += v123;
              v96 += v124;
              v102 += v130;
              v101 |= v129;
              LOWORD(v16) = v34;
              v15 = v42;
              v9 = (void *)v35.Data;
              v6 = HIBYTE(v30);
              v5 = v30;
              goto LABEL_8;
            }
            return (unsigned int)v20;
          }
          v16 = (unsigned __int16)(v16 + 1);
          LODWORD(v34) = v16;
          if ( (unsigned int)v16 >= (unsigned __int16)v131 )
            break;
          v15 = v132[v16];
        }
        if ( (unsigned __int16)v31 > 1u )
        {
          v47 /= (unsigned __int16)v31;
          v48 /= (unsigned __int16)v31;
          v49 /= (unsigned __int16)v31;
          v50 /= (unsigned __int16)v31;
          v53 /= (unsigned __int16)v31;
          v52 /= (unsigned __int16)v31;
          v57 /= (unsigned __int16)v31;
          v58 /= (unsigned __int16)v31;
          v59 /= (unsigned __int16)v31;
          v63 /= (unsigned __int16)v31;
          v64 /= (unsigned __int16)v31;
          v65 /= (unsigned __int16)v31;
        }
        if ( v6 )
        {
          v66 = v37 / (unsigned __int16)v31;
          v67 = v38 / (unsigned __int16)v31;
          v68 /= (unsigned __int16)v31;
          v69 /= (unsigned __int16)v31;
          v74 /= (unsigned __int16)v31;
        }
        if ( v5 )
          v72 /= (unsigned __int16)v31;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v32, Data);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v45 = &v47;
        v46 = 200;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          Data = (PPCW_DATA)&v45;
          v26 = guard_dispatch_icall_no_overrides(v9);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v26 = ExpPcwDisabledStatus();
        }
        if ( v26 < 0 )
          return (unsigned int)v26;
      }
      v13 = ++v32;
    }
    if ( (unsigned int)v36 > 1 )
    {
      v75 /= (unsigned int)v36;
      v76 /= (unsigned int)v36;
      v77 /= (unsigned int)v36;
      v78 /= (unsigned int)v36;
      v81 /= (unsigned int)v36;
      v80 /= (unsigned int)v36;
      v85 /= (unsigned int)v36;
      v86 /= (unsigned int)v36;
      v87 /= (unsigned int)v36;
      v91 /= (unsigned int)v36;
      v92 /= (unsigned int)v36;
      v93 /= (unsigned int)v36;
    }
    if ( v6 )
    {
      v94 = v39 / (unsigned int)v36;
      v95 = v40 / (unsigned int)v36;
      v96 /= (unsigned int)v36;
      v97 /= (unsigned int)v36;
      v102 /= (unsigned int)v36;
    }
    if ( v5 )
      v100 /= (unsigned int)v36;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total");
    RtlInitUnicodeString(&DestinationString, pszDest);
    v35.Data = &v75;
    v35.Size = 200;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v4 = guard_dispatch_icall_no_overrides(v9);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
    }
    else
    {
      return (unsigned int)ExpPcwDisabledStatus();
    }
    return v4;
  }
  if ( v7 != 1 )
    return 0LL;
  v8 = *a2;
  v9 = (void *)a2[3];
  v35.Data = v9;
  v10 = (v8 & 0x100E0FF05LL) != 0;
  v29 = v10;
  v5 = (v8 & 0xC00F0000) != 0;
  v6 = (v8 & 0x63F000000LL) != 0;
  LOBYTE(v30) = v5;
  HIBYTE(v30) = v6;
  if ( swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v32, &v33) != 2 )
    goto LABEL_4;
  v22 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)v22 < (unsigned int)KeNumberProcessors_0 )
  {
    v23 = &v103;
    LOBYTE(v12) = v6;
    LOBYTE(v23) = v10;
    LOBYTE(v11) = v5;
    ExpQueryProcessorInformationCounters(KiProcessorBlock[v22], (_DWORD)v23, v11, v12, (__int64)&v103);
    v24 = (const UNICODE_STRING *)a2[1];
    v35.Data = &v103;
    v35.Size = 200;
    v25 = PcwAddInstance((PPCW_BUFFER)v9, v24, v22, 1u, &v35);
    if ( v25 < 0 )
      return (unsigned int)v25;
    return v4;
  }
  return 3221226021LL;
}
