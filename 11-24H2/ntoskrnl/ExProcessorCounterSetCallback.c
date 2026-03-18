/*
 * XREFs of ExProcessorCounterSetCallback @ 0x1409DD2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinityEx @ 0x140208AA0 (KeQueryNodeActiveAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     swscanf_s @ 0x1405046E0 (swscanf_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpQueryProcessorInformationCounters @ 0x1409DDD20 (ExpQueryProcessorInformationCounters.c)
 *     ExpPcwDisabledStatus @ 0x140A4C4F0 (ExpPcwDisabledStatus.c)
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
  __int64 v19; // rsi
  int v20; // edi
  unsigned int v21; // ebx
  unsigned int v22; // esi
  int v23; // esi
  unsigned __int64 **v24; // [rsp+20h] [rbp-E0h]
  __int64 v25; // [rsp+20h] [rbp-E0h]
  bool v26; // [rsp+30h] [rbp-D0h]
  bool v27; // [rsp+31h] [rbp-CFh]
  bool v28; // [rsp+32h] [rbp-CEh]
  unsigned __int16 v29; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h]
  __int64 *v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+50h] [rbp-B0h]
  ULONG ActiveProcessorCount; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+68h] [rbp-98h]
  unsigned __int64 v38; // [rsp+70h] [rbp-90h]
  unsigned __int64 v39; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 *v42; // [rsp+98h] [rbp-68h] BYREF
  int v43; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v44; // [rsp+A8h] [rbp-58h] BYREF
  int v45; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v46; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v48; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v51; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v52; // [rsp+F0h] [rbp-10h]
  int v53; // [rsp+F8h] [rbp-8h]
  int v54; // [rsp+FCh] [rbp-4h]
  int v55; // [rsp+100h] [rbp+0h]
  unsigned __int64 v56; // [rsp+108h] [rbp+8h]
  unsigned __int64 v57; // [rsp+110h] [rbp+10h]
  unsigned __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  __int64 v61; // [rsp+130h] [rbp+30h]
  unsigned __int64 v62; // [rsp+138h] [rbp+38h]
  unsigned int v63; // [rsp+144h] [rbp+44h]
  unsigned int v64; // [rsp+148h] [rbp+48h]
  int v65; // [rsp+150h] [rbp+50h]
  int v66; // [rsp+154h] [rbp+54h]
  unsigned __int64 v67; // [rsp+158h] [rbp+58h]
  unsigned __int64 v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  __int64 v70; // [rsp+170h] [rbp+70h]
  unsigned int v71; // [rsp+178h] [rbp+78h]
  int v72; // [rsp+17Ch] [rbp+7Ch]
  unsigned __int64 v73; // [rsp+180h] [rbp+80h]
  unsigned __int64 v74; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v75; // [rsp+198h] [rbp+98h]
  unsigned __int64 v76; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v77; // [rsp+1A8h] [rbp+A8h]
  int v78; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v79; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 v80; // [rsp+1C0h] [rbp+C0h]
  int v81; // [rsp+1C8h] [rbp+C8h]
  int v82; // [rsp+1CCh] [rbp+CCh]
  int v83; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v84; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 v85; // [rsp+1E0h] [rbp+E0h]
  unsigned __int64 v86; // [rsp+1E8h] [rbp+E8h]
  __int64 v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+200h] [rbp+100h]
  unsigned __int64 v90; // [rsp+208h] [rbp+108h]
  unsigned int v91; // [rsp+214h] [rbp+114h]
  unsigned int v92; // [rsp+218h] [rbp+118h]
  int v93; // [rsp+220h] [rbp+120h]
  int v94; // [rsp+224h] [rbp+124h]
  unsigned __int64 v95; // [rsp+228h] [rbp+128h]
  unsigned __int64 v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  __int64 v98; // [rsp+240h] [rbp+140h]
  unsigned int v99; // [rsp+248h] [rbp+148h]
  int v100; // [rsp+24Ch] [rbp+14Ch]
  unsigned __int64 v101; // [rsp+250h] [rbp+150h]
  __int64 v102; // [rsp+260h] [rbp+160h] BYREF
  __int64 v103; // [rsp+268h] [rbp+168h]
  __int64 v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h]
  int v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  __int64 v108; // [rsp+290h] [rbp+190h]
  int v109; // [rsp+298h] [rbp+198h]
  int v110; // [rsp+29Ch] [rbp+19Ch]
  int v111; // [rsp+2A0h] [rbp+1A0h]
  __int64 v112; // [rsp+2A8h] [rbp+1A8h]
  __int64 v113; // [rsp+2B0h] [rbp+1B0h]
  __int64 v114; // [rsp+2B8h] [rbp+1B8h]
  __int64 v115; // [rsp+2C0h] [rbp+1C0h]
  __int64 v116; // [rsp+2C8h] [rbp+1C8h]
  __int64 v117; // [rsp+2D0h] [rbp+1D0h]
  __int64 v118; // [rsp+2D8h] [rbp+1D8h]
  int v119; // [rsp+2E4h] [rbp+1E4h]
  int v120; // [rsp+2E8h] [rbp+1E8h]
  unsigned int v121; // [rsp+2F0h] [rbp+1F0h]
  unsigned int v122; // [rsp+2F4h] [rbp+1F4h]
  __int64 v123; // [rsp+2F8h] [rbp+1F8h]
  __int64 v124; // [rsp+300h] [rbp+200h]
  __int64 v125; // [rsp+308h] [rbp+208h]
  __int64 v126; // [rsp+310h] [rbp+210h]
  int v127; // [rsp+318h] [rbp+218h]
  int v128; // [rsp+31Ch] [rbp+21Ch]
  __int64 v129; // [rsp+320h] [rbp+220h]
  __int64 v130; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v131[33]; // [rsp+338h] [rbp+238h] BYREF
  wchar_t pszDest[16]; // [rsp+440h] [rbp+340h] BYREF

  memset_0(&v46, 0, 0xC8uLL);
  memset_0(&v74, 0, 0xC8uLL);
  v4 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  DestinationString = 0LL;
  memset_0(&v102, 0, 0xC8uLL);
  memset_0(&v130, 0, 0x108uLL);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v8 = a1 - 2;
  if ( !v8 )
  {
    v10 = (__int64 *)a2[3];
    v33 = v10;
    goto LABEL_12;
  }
  if ( v8 != 1 )
    return 0LL;
  v9 = *a2;
  v10 = (__int64 *)a2[3];
  v33 = v10;
  v5 = (v9 & 0x100E0FF05LL) != 0;
  v28 = v5;
  v6 = (v9 & 0xC00F0000) != 0;
  v7 = (v9 & 0x63F000000LL) != 0;
  v26 = v6;
  v27 = v7;
  if ( swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v30, &v31) != 2 )
  {
LABEL_12:
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v15 = 0;
    v39 = 0LL;
    v38 = 0LL;
    v30 = 0;
    while ( v15 < (unsigned __int16)KeNumberNodes )
    {
      v130 = 2097153LL;
      memset_0(v131, 0, 0x100uLL);
      KeQueryNodeActiveAffinityEx(v15, (unsigned __int16 *)&v130, &v29);
      if ( v29 )
      {
        memset_0(&v46, 0, 0xC8uLL);
        v16 = v131[0];
        LOWORD(v17) = 0;
        v32 = 0;
        v37 = 0LL;
        v36 = 0LL;
        v31 = 0;
LABEL_16:
        LODWORD(v41) = 0;
        while ( 1 )
        {
          if ( v16 )
          {
            _BitScanForward64(&v18, v16);
            v41 = v16 & ~(1LL << v18);
            v19 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int16)v17 + (unsigned __int8)v18);
            ExpQueryProcessorInformationCounters(KiProcessorBlock[v19], v5, v6, v7, (__int64)&v102);
            LODWORD(v25) = v31;
            RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v30, v25);
            ++v31;
            RtlInitUnicodeString(&DestinationString, pszDest);
            v42 = &v102;
            v43 = 200;
            if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
            {
              v24 = (unsigned __int64 **)&v42;
              v20 = guard_dispatch_icall_no_overrides(v10, &DestinationString, (unsigned int)v19, 1LL);
              ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
            }
            else
            {
              v20 = ExpPcwDisabledStatus();
            }
            if ( v20 >= 0 )
            {
              v46 += v102;
              v47 += v103;
              v48 += v104;
              v49 += v105;
              v61 += v117;
              v50 += v106;
              v52 += v108;
              v54 += v110;
              v74 += v102;
              v75 += v103;
              v55 += v111;
              v51 += v107;
              v76 += v104;
              v77 += v105;
              v53 += v109;
              v78 += v106;
              v80 += v108;
              v82 += v110;
              v56 += v112;
              v59 += v115;
              v57 += v113;
              v83 += v111;
              v79 += v107;
              v60 += v116;
              v81 += v109;
              v84 += v112;
              v58 += v114;
              v72 |= v128;
              v69 += v125;
              v70 += v126;
              v62 += v118;
              v63 += v119;
              v64 += v120;
              v36 += v121;
              v37 += v122;
              v67 += v123;
              v68 += v124;
              v73 += v129;
              v71 += v127;
              v87 += v115;
              v85 += v113;
              v88 += v116;
              v86 += v114;
              v89 += v117;
              v97 += v125;
              v98 += v126;
              v90 += v118;
              v92 += v120;
              v96 += v124;
              v99 += v127;
              v91 += v119;
              v38 += v121;
              v39 += v122;
              v95 += v123;
              v101 += v129;
              v100 |= v128;
              v16 = v41;
              v6 = v26;
              v7 = v27;
              v5 = v28;
              v10 = v33;
              LOWORD(v17) = v32;
              goto LABEL_16;
            }
            return (unsigned int)v20;
          }
          v17 = (unsigned __int16)(v17 + 1);
          v32 = v17;
          if ( (unsigned int)v17 >= (unsigned __int16)v130 )
            break;
          v16 = v131[v17];
        }
        if ( v29 > 1u )
        {
          v46 /= v29;
          v47 /= v29;
          v48 /= v29;
          v49 /= v29;
          v52 /= v29;
          v51 /= v29;
          v56 /= v29;
          v57 /= v29;
          v58 /= v29;
          v62 /= v29;
          v63 /= v29;
          v64 /= v29;
        }
        if ( v7 )
        {
          v65 = v36 / v29;
          v66 = v37 / v29;
          v67 /= v29;
          v68 /= v29;
          v73 /= v29;
        }
        if ( v6 )
          v71 /= v29;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v30, v24);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v22 = v30 + KeMaximumProcessors;
        v44 = &v46;
        v45 = 200;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          v24 = &v44;
          v23 = guard_dispatch_icall_no_overrides(v10, &DestinationString, v22, 1LL);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v23 = ExpPcwDisabledStatus();
        }
        if ( v23 < 0 )
          return (unsigned int)v23;
      }
      v15 = ++v30;
    }
    if ( ActiveProcessorCount > 1 )
    {
      v74 /= ActiveProcessorCount;
      v75 /= ActiveProcessorCount;
      v76 /= ActiveProcessorCount;
      v77 /= ActiveProcessorCount;
      v80 /= ActiveProcessorCount;
      v79 /= ActiveProcessorCount;
      v84 /= ActiveProcessorCount;
      v85 /= ActiveProcessorCount;
      v86 /= ActiveProcessorCount;
      v90 /= ActiveProcessorCount;
      v91 /= ActiveProcessorCount;
      v92 /= ActiveProcessorCount;
    }
    if ( v7 )
    {
      v93 = v38 / ActiveProcessorCount;
      v94 = v39 / ActiveProcessorCount;
      v95 /= ActiveProcessorCount;
      v96 /= ActiveProcessorCount;
      v101 /= ActiveProcessorCount;
    }
    if ( v6 )
      v99 /= ActiveProcessorCount;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total");
    RtlInitUnicodeString(&DestinationString, pszDest);
    v21 = KeMaximumProcessors + (unsigned __int16)KeNumberNodes;
    v33 = (__int64 *)&v74;
    v34 = 200;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v4 = guard_dispatch_icall_no_overrides(v10, &DestinationString, v21, 1LL);
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
    ExpQueryProcessorInformationCounters(KiProcessorBlock[v11], v5, v6, v7, (__int64)&v102);
    v12 = a2[1];
    v33 = &v102;
    v34 = 200;
    if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    {
      v13 = guard_dispatch_icall_no_overrides(v10, v12, (unsigned int)v11, 1LL);
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
