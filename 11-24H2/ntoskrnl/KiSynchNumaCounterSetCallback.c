/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x140A58E70
 * Callers:
 *     <none>
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x14026FE00 (KiQuerySubNodeActiveAffinity.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwDereferenceSpinLockCounters @ 0x1407AD2B8 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1407AD314 (EtwReferenceSpinLockCounters.c)
 *     PcwAddInstance @ 0x1409F7360 (PcwAddInstance.c)
 *     ExpPcwDisabledStatus @ 0x140A43080 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v4; // ebx
  struct _PCW_BUFFER *v6; // r12
  __int64 i; // rdi
  int v8; // r15d
  int v9; // ebx
  unsigned __int16 v10; // si
  __int16 v11; // r8
  __int16 v12; // ax
  unsigned __int64 v13; // r13
  int v14; // r14d
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rbx
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  _QWORD DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h]
  int *v24; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+80h] [rbp-88h]
  struct _PCW_DATA v26; // [rsp+88h] [rbp-80h] BYREF
  int v27; // [rsp+98h] [rbp-70h] BYREF
  int v28; // [rsp+9Ch] [rbp-6Ch]
  int v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A4h] [rbp-64h]
  int v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+ACh] [rbp-5Ch]
  int v33; // [rsp+B0h] [rbp-58h]
  int v34; // [rsp+B4h] [rbp-54h]
  int v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+BCh] [rbp-4Ch]
  int v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C4h] [rbp-44h]
  int v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+CCh] [rbp-3Ch]
  int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D4h] [rbp-34h]
  int v43; // [rsp+D8h] [rbp-30h]
  int v44; // [rsp+DCh] [rbp-2Ch]
  int v45; // [rsp+E0h] [rbp-28h]
  int v46; // [rsp+E4h] [rbp-24h]
  int v47; // [rsp+E8h] [rbp-20h]
  int v48; // [rsp+ECh] [rbp-1Ch]
  int v49; // [rsp+F0h] [rbp-18h]
  int v50; // [rsp+F4h] [rbp-14h]
  int v51; // [rsp+F8h] [rbp-10h]
  int v52; // [rsp+FCh] [rbp-Ch]
  int v53; // [rsp+100h] [rbp-8h]
  int v54; // [rsp+104h] [rbp-4h]
  int v55; // [rsp+108h] [rbp+0h]
  int v56; // [rsp+10Ch] [rbp+4h]
  int v57; // [rsp+110h] [rbp+8h]
  int v58; // [rsp+114h] [rbp+Ch]
  int v59; // [rsp+118h] [rbp+10h]
  int v60; // [rsp+11Ch] [rbp+14h]
  int v61; // [rsp+120h] [rbp+18h]
  int v62; // [rsp+124h] [rbp+1Ch]
  int v63; // [rsp+128h] [rbp+20h]
  int v64; // [rsp+12Ch] [rbp+24h]
  int v65; // [rsp+130h] [rbp+28h]
  int v66; // [rsp+134h] [rbp+2Ch]
  int v67; // [rsp+140h] [rbp+38h]
  int v68; // [rsp+144h] [rbp+3Ch]
  int v69; // [rsp+158h] [rbp+50h] BYREF
  int v70; // [rsp+15Ch] [rbp+54h]
  int v71; // [rsp+160h] [rbp+58h]
  int v72; // [rsp+164h] [rbp+5Ch]
  int v73; // [rsp+168h] [rbp+60h]
  int v74; // [rsp+16Ch] [rbp+64h]
  int v75; // [rsp+170h] [rbp+68h]
  int v76; // [rsp+174h] [rbp+6Ch]
  int v77; // [rsp+178h] [rbp+70h]
  int v78; // [rsp+17Ch] [rbp+74h]
  int v79; // [rsp+180h] [rbp+78h]
  int v80; // [rsp+184h] [rbp+7Ch]
  int v81; // [rsp+188h] [rbp+80h]
  int v82; // [rsp+18Ch] [rbp+84h]
  int v83; // [rsp+190h] [rbp+88h]
  int v84; // [rsp+194h] [rbp+8Ch]
  int v85; // [rsp+198h] [rbp+90h]
  int v86; // [rsp+19Ch] [rbp+94h]
  int v87; // [rsp+1A0h] [rbp+98h]
  int v88; // [rsp+1A4h] [rbp+9Ch]
  int v89; // [rsp+1A8h] [rbp+A0h]
  int v90; // [rsp+1ACh] [rbp+A4h]
  int v91; // [rsp+1B0h] [rbp+A8h]
  int v92; // [rsp+1B4h] [rbp+ACh]
  int v93; // [rsp+1B8h] [rbp+B0h]
  int v94; // [rsp+1BCh] [rbp+B4h]
  int v95; // [rsp+1C0h] [rbp+B8h]
  int v96; // [rsp+1C4h] [rbp+BCh]
  int v97; // [rsp+1C8h] [rbp+C0h]
  int v98; // [rsp+1CCh] [rbp+C4h]
  int v99; // [rsp+1D0h] [rbp+C8h]
  int v100; // [rsp+1D4h] [rbp+CCh]
  int v101; // [rsp+1D8h] [rbp+D0h]
  int v102; // [rsp+1DCh] [rbp+D4h]
  int v103; // [rsp+1E0h] [rbp+D8h]
  int v104; // [rsp+1E4h] [rbp+DCh]
  int v105; // [rsp+1E8h] [rbp+E0h]
  int v106; // [rsp+1ECh] [rbp+E4h]
  int v107; // [rsp+1F0h] [rbp+E8h]
  int v108; // [rsp+1F4h] [rbp+ECh]
  int v109; // [rsp+200h] [rbp+F8h]
  int v110; // [rsp+204h] [rbp+FCh]
  __int128 v111; // [rsp+218h] [rbp+110h] BYREF
  __int64 v112; // [rsp+228h] [rbp+120h]
  wchar_t pszDest[12]; // [rsp+230h] [rbp+128h] BYREF

  v112 = 0LL;
  v111 = 0LL;
  memset_0(&v27, 0, 0xB8uLL);
  memset_0(&v69, 0, 0xB8uLL);
  v20 = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v4 - 1) >= 2 )
    return 0;
  v6 = *(struct _PCW_BUFFER **)(a2 + 24);
  v21 = 0LL;
  for ( i = 0LL; (unsigned int)i < (unsigned __int16)KeNumberNodes; i = (unsigned int)(i + 1) )
  {
    memset_0(&v27, 0, 0xB8uLL);
    v8 = 0;
    KeInitializeSchedulerSubNodeEnumerationContext(&v111, KeNodeBlock[i]);
LABEL_8:
    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v111, &v20) )
    {
      KiQuerySubNodeActiveAffinity(v20, (__int64)&v21, 0LL);
      v10 = WORD4(v21);
      v12 = v11 + 1;
      v13 = v21;
      v14 = WORD4(v21);
      while ( 1 )
      {
        v15 = v14 + 1;
        while ( !v13 )
        {
          v10 += v12;
          v14 = v10;
          if ( v10 >= v15 )
            goto LABEL_8;
          v13 = *(_QWORD *)(8LL * v10 + 8);
          v12 = 1;
        }
        _BitScanForward64(&v16, v13);
        v13 &= ~(1LL << v16);
        v17 = (_DWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998
                                          + 64 * v14
                                          + (unsigned int)(unsigned __int8)v16)]
                       + 36544);
        v27 += *v17;
        v28 += v17[1];
        v29 += v17[2];
        v30 += v17[3];
        v31 += v17[4];
        v32 += v17[5];
        v33 += v17[6];
        v34 += v17[7];
        v35 += v17[8];
        v36 += v17[9];
        v37 += v17[10];
        v38 += v17[11];
        v39 += v17[12];
        v40 += v17[13];
        v41 += v17[14];
        v42 += v17[15];
        v43 += v17[16];
        v44 += v17[17];
        v45 += v17[18];
        v46 += v17[19];
        v47 += v17[20];
        v48 += v17[21];
        v49 += v17[22];
        v50 += v17[23];
        v51 += v17[24];
        v52 += v17[25];
        v53 += v17[26];
        v54 += v17[27];
        v55 += v17[28];
        v56 += v17[29];
        v57 += v17[30];
        v58 += v17[31];
        v59 += v17[32];
        v60 += v17[33];
        v61 += v17[34];
        v62 += v17[35];
        v63 += v17[36];
        v64 += v17[37];
        v65 += v17[38];
        v66 += v17[39];
        v67 += v17[42];
        v68 += v17[43];
        v69 += *v17;
        v70 += v17[1];
        v71 += v17[2];
        v72 += v17[3];
        v73 += v17[4];
        v74 += v17[5];
        v75 += v17[6];
        v76 += v17[7];
        v77 += v17[8];
        v78 += v17[9];
        v79 += v17[10];
        v80 += v17[11];
        v81 += v17[12];
        v82 += v17[13];
        v83 += v17[14];
        v84 += v17[15];
        v85 += v17[16];
        v86 += v17[17];
        v87 += v17[18];
        v88 += v17[19];
        v89 += v17[20];
        v90 += v17[21];
        v91 += v17[22];
        v92 += v17[23];
        v93 += v17[24];
        v94 += v17[25];
        v95 += v17[26];
        v96 += v17[27];
        v97 += v17[28];
        v98 += v17[29];
        v99 += v17[30];
        v100 += v17[31];
        v101 += v17[32];
        v102 += v17[33];
        v103 += v17[34];
        v104 += v17[35];
        v105 += v17[36];
        v106 += v17[37];
        v107 += v17[38];
        v108 += v17[39];
        v109 += v17[42];
        v110 += v17[43];
        LODWORD(Data) = v8;
        RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", (unsigned int)i, Data);
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
        v22 = v17;
        LODWORD(v23) = 184;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
        {
          Data = (PPCW_DATA)&v22;
          v9 = guard_dispatch_icall_no_overrides(v6, &DestinationString[1]);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
        }
        else
        {
          v9 = ExpPcwDisabledStatus();
        }
        if ( v9 < 0 )
          return v9;
        v12 = 1;
        ++v8;
      }
    }
    if ( v8 )
    {
      RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", (unsigned int)i);
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
      v24 = &v27;
      v25 = 184;
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
      {
        Data = (PPCW_DATA)&v24;
        v9 = guard_dispatch_icall_no_overrides(v6, &DestinationString[1]);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
      }
      else
      {
        v9 = ExpPcwDisabledStatus();
      }
      if ( v9 < 0 )
        return v9;
    }
  }
  RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
  v26.Data = &v69;
  v26.Size = 184;
  return PcwAddInstance(
           v6,
           (PCUNICODE_STRING)&DestinationString[1],
           KeMaximumProcessors + (unsigned __int16)KeNumberNodes,
           1u,
           &v26);
}
