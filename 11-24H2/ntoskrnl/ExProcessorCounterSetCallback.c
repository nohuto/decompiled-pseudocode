/*
 * XREFs of ExProcessorCounterSetCallback @ 0x1409D6EC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     swscanf_s @ 0x140501FA0 (swscanf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpQueryProcessorInformationCounters @ 0x1409D78F0 (ExpQueryProcessorInformationCounters.c)
 *     ExpPcwDisabledStatus @ 0x140A43080 (ExpPcwDisabledStatus.c)
 */

__int64 __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  unsigned int v4; // ebx
  bool v5; // r12
  bool v6; // r14
  bool v7; // r15
  int v8; // edi
  __int64 v9; // rax
  __int64 *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // edi
  unsigned int v15; // esi
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  int v19; // edi
  int v20; // esi
  unsigned __int64 **v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+20h] [rbp-E0h]
  bool v23; // [rsp+30h] [rbp-D0h]
  bool v24; // [rsp+31h] [rbp-CFh]
  bool v25; // [rsp+32h] [rbp-CEh]
  unsigned __int16 v26; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h]
  __int64 *v30; // [rsp+48h] [rbp-B8h]
  int v31; // [rsp+50h] [rbp-B0h]
  ULONG ActiveProcessorCount; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+68h] [rbp-98h]
  unsigned __int64 v35; // [rsp+70h] [rbp-90h]
  unsigned __int64 v36; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 *v39; // [rsp+98h] [rbp-68h] BYREF
  int v40; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v41; // [rsp+A8h] [rbp-58h] BYREF
  int v42; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v45; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v48; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F8h] [rbp-8h]
  int v51; // [rsp+FCh] [rbp-4h]
  int v52; // [rsp+100h] [rbp+0h]
  unsigned __int64 v53; // [rsp+108h] [rbp+8h]
  unsigned __int64 v54; // [rsp+110h] [rbp+10h]
  unsigned __int64 v55; // [rsp+118h] [rbp+18h]
  __int64 v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int64 v58; // [rsp+130h] [rbp+30h]
  unsigned __int64 v59; // [rsp+138h] [rbp+38h]
  unsigned int v60; // [rsp+144h] [rbp+44h]
  unsigned int v61; // [rsp+148h] [rbp+48h]
  int v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+154h] [rbp+54h]
  unsigned __int64 v64; // [rsp+158h] [rbp+58h]
  unsigned __int64 v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  __int64 v67; // [rsp+170h] [rbp+70h]
  unsigned int v68; // [rsp+178h] [rbp+78h]
  int v69; // [rsp+17Ch] [rbp+7Ch]
  unsigned __int64 v70; // [rsp+180h] [rbp+80h]
  unsigned __int64 v71; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v72; // [rsp+198h] [rbp+98h]
  unsigned __int64 v73; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v74; // [rsp+1A8h] [rbp+A8h]
  int v75; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v76; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 v77; // [rsp+1C0h] [rbp+C0h]
  int v78; // [rsp+1C8h] [rbp+C8h]
  int v79; // [rsp+1CCh] [rbp+CCh]
  int v80; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v81; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 v82; // [rsp+1E0h] [rbp+E0h]
  unsigned __int64 v83; // [rsp+1E8h] [rbp+E8h]
  __int64 v84; // [rsp+1F0h] [rbp+F0h]
  __int64 v85; // [rsp+1F8h] [rbp+F8h]
  __int64 v86; // [rsp+200h] [rbp+100h]
  unsigned __int64 v87; // [rsp+208h] [rbp+108h]
  unsigned int v88; // [rsp+214h] [rbp+114h]
  unsigned int v89; // [rsp+218h] [rbp+118h]
  int v90; // [rsp+220h] [rbp+120h]
  int v91; // [rsp+224h] [rbp+124h]
  unsigned __int64 v92; // [rsp+228h] [rbp+128h]
  unsigned __int64 v93; // [rsp+230h] [rbp+130h]
  __int64 v94; // [rsp+238h] [rbp+138h]
  __int64 v95; // [rsp+240h] [rbp+140h]
  unsigned int v96; // [rsp+248h] [rbp+148h]
  int v97; // [rsp+24Ch] [rbp+14Ch]
  unsigned __int64 v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+260h] [rbp+160h] BYREF
  __int64 v100; // [rsp+268h] [rbp+168h]
  __int64 v101; // [rsp+270h] [rbp+170h]
  __int64 v102; // [rsp+278h] [rbp+178h]
  int v103; // [rsp+280h] [rbp+180h]
  __int64 v104; // [rsp+288h] [rbp+188h]
  __int64 v105; // [rsp+290h] [rbp+190h]
  int v106; // [rsp+298h] [rbp+198h]
  int v107; // [rsp+29Ch] [rbp+19Ch]
  int v108; // [rsp+2A0h] [rbp+1A0h]
  __int64 v109; // [rsp+2A8h] [rbp+1A8h]
  __int64 v110; // [rsp+2B0h] [rbp+1B0h]
  __int64 v111; // [rsp+2B8h] [rbp+1B8h]
  __int64 v112; // [rsp+2C0h] [rbp+1C0h]
  __int64 v113; // [rsp+2C8h] [rbp+1C8h]
  __int64 v114; // [rsp+2D0h] [rbp+1D0h]
  __int64 v115; // [rsp+2D8h] [rbp+1D8h]
  int v116; // [rsp+2E4h] [rbp+1E4h]
  int v117; // [rsp+2E8h] [rbp+1E8h]
  unsigned int v118; // [rsp+2F0h] [rbp+1F0h]
  unsigned int v119; // [rsp+2F4h] [rbp+1F4h]
  __int64 v120; // [rsp+2F8h] [rbp+1F8h]
  __int64 v121; // [rsp+300h] [rbp+200h]
  __int64 v122; // [rsp+308h] [rbp+208h]
  __int64 v123; // [rsp+310h] [rbp+210h]
  int v124; // [rsp+318h] [rbp+218h]
  int v125; // [rsp+31Ch] [rbp+21Ch]
  __int64 v126; // [rsp+320h] [rbp+220h]
  __int64 v127; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v128[33]; // [rsp+338h] [rbp+238h] BYREF
  wchar_t pszDest[16]; // [rsp+440h] [rbp+340h] BYREF

  memset_0(&v43, 0, 0xC8uLL);
  memset_0(&v71, 0, 0xC8uLL);
  v4 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  DestinationString = 0LL;
  memset_0(&v99, 0, 0xC8uLL);
  memset_0(&v127, 0, 0x108uLL);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v25 = 0;
  v23 = 0;
  v24 = 0;
  v8 = a1 - 2;
  if ( !v8 )
  {
    v10 = (__int64 *)a2[3];
    v30 = v10;
    goto LABEL_12;
  }
  if ( v8 != 1 )
    return 0LL;
  v9 = *a2;
  v10 = (__int64 *)a2[3];
  v30 = v10;
  v5 = (v9 & 0x100E0FF05LL) != 0;
  v25 = v5;
  v6 = (v9 & 0xC00F0000) != 0;
  v7 = (v9 & 0x63F000000LL) != 0;
  v23 = v6;
  v24 = v7;
  if ( swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v27, &v28) != 2 )
  {
LABEL_12:
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v15 = 0;
    v36 = 0LL;
    v35 = 0LL;
    v27 = 0;
    while ( v15 < (unsigned __int16)KeNumberNodes )
    {
      v127 = 2097153LL;
      memset_0(v128, 0, 0x100uLL);
      KeQueryNodeActiveAffinityEx(v15, (unsigned __int16 *)&v127, &v26);
      if ( v26 )
      {
        memset_0(&v43, 0, 0xC8uLL);
        v16 = v128[0];
        LOWORD(v17) = 0;
        v29 = 0;
        v34 = 0LL;
        v33 = 0LL;
        v28 = 0;
LABEL_16:
        LODWORD(v38) = 0;
        while ( 1 )
        {
          if ( v16 )
          {
            _BitScanForward64(&v18, v16);
            v38 = v16 & ~(1LL << v18);
            ExpQueryProcessorInformationCounters(
              KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v17 + (unsigned __int8)v18)],
              v5,
              v6,
              v7,
              (__int64)&v99);
            LODWORD(v22) = v28;
            RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v27, v22);
            ++v28;
            RtlInitUnicodeString(&DestinationString, pszDest);
            v39 = &v99;
            v40 = 200;
            if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
            {
              v21 = (unsigned __int64 **)&v39;
              v19 = guard_dispatch_icall_no_overrides(v10, &DestinationString);
              ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
            }
            else
            {
              v19 = ExpPcwDisabledStatus();
            }
            if ( v19 >= 0 )
            {
              v43 += v99;
              v44 += v100;
              v45 += v101;
              v46 += v102;
              v58 += v114;
              v47 += v103;
              v49 += v105;
              v51 += v107;
              v71 += v99;
              v72 += v100;
              v52 += v108;
              v48 += v104;
              v73 += v101;
              v74 += v102;
              v50 += v106;
              v75 += v103;
              v77 += v105;
              v79 += v107;
              v53 += v109;
              v56 += v112;
              v54 += v110;
              v80 += v108;
              v76 += v104;
              v57 += v113;
              v78 += v106;
              v81 += v109;
              v55 += v111;
              v69 |= v125;
              v66 += v122;
              v67 += v123;
              v59 += v115;
              v60 += v116;
              v61 += v117;
              v33 += v118;
              v34 += v119;
              v64 += v120;
              v65 += v121;
              v70 += v126;
              v68 += v124;
              v84 += v112;
              v82 += v110;
              v85 += v113;
              v83 += v111;
              v86 += v114;
              v94 += v122;
              v95 += v123;
              v87 += v115;
              v89 += v117;
              v93 += v121;
              v96 += v124;
              v88 += v116;
              v35 += v118;
              v36 += v119;
              v92 += v120;
              v98 += v126;
              v97 |= v125;
              v16 = v38;
              v6 = v23;
              v7 = v24;
              v5 = v25;
              v10 = v30;
              LOWORD(v17) = v29;
              goto LABEL_16;
            }
            return (unsigned int)v19;
          }
          v17 = (unsigned __int16)(v17 + 1);
          v29 = v17;
          if ( (unsigned int)v17 >= (unsigned __int16)v127 )
            break;
          v16 = v128[v17];
        }
        if ( v26 > 1u )
        {
          v43 /= v26;
          v44 /= v26;
          v45 /= v26;
          v46 /= v26;
          v49 /= v26;
          v48 /= v26;
          v53 /= v26;
          v54 /= v26;
          v55 /= v26;
          v59 /= v26;
          v60 /= v26;
          v61 /= v26;
        }
        if ( v7 )
        {
          v62 = v33 / v26;
          v63 = v34 / v26;
          v64 /= v26;
          v65 /= v26;
          v70 /= v26;
        }
        if ( v6 )
          v68 /= v26;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v27, v21);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v41 = &v43;
        v42 = 200;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          v21 = &v41;
          v20 = guard_dispatch_icall_no_overrides(v10, &DestinationString);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v20 = ExpPcwDisabledStatus();
        }
        if ( v20 < 0 )
          return (unsigned int)v20;
      }
      v15 = ++v27;
    }
    if ( ActiveProcessorCount > 1 )
    {
      v71 /= ActiveProcessorCount;
      v72 /= ActiveProcessorCount;
      v73 /= ActiveProcessorCount;
      v74 /= ActiveProcessorCount;
      v77 /= ActiveProcessorCount;
      v76 /= ActiveProcessorCount;
      v81 /= ActiveProcessorCount;
      v82 /= ActiveProcessorCount;
      v83 /= ActiveProcessorCount;
      v87 /= ActiveProcessorCount;
      v88 /= ActiveProcessorCount;
      v89 /= ActiveProcessorCount;
    }
    if ( v7 )
    {
      v90 = v35 / ActiveProcessorCount;
      v91 = v36 / ActiveProcessorCount;
      v92 /= ActiveProcessorCount;
      v93 /= ActiveProcessorCount;
      v98 /= ActiveProcessorCount;
    }
    if ( v6 )
      v96 /= ActiveProcessorCount;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total");
    RtlInitUnicodeString(&DestinationString, pszDest);
    v30 = (__int64 *)&v71;
    v31 = 200;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v4 = guard_dispatch_icall_no_overrides(v10, &DestinationString);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
    }
    else
    {
      return (unsigned int)ExpPcwDisabledStatus();
    }
    return v4;
  }
  v11 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)v11 < (unsigned int)KeNumberProcessors_0 )
  {
    ExpQueryProcessorInformationCounters(KiProcessorBlock[v11], v5, v6, v7, (__int64)&v99);
    v12 = a2[1];
    v30 = &v99;
    v31 = 200;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v13 = guard_dispatch_icall_no_overrides(v10, v12);
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
    }
    else
    {
      v13 = ExpPcwDisabledStatus();
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
    return v4;
  }
  return 3221226021LL;
}
