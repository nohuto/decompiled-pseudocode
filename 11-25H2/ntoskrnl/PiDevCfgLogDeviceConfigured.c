/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x14088F39C
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 * Callees:
 *     McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer @ 0x140424D5C (McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer.c)
 *     RtlTimeToTimeFields @ 0x14042E020 (RtlTimeToTimeFields.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140476E64 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x14049FEC0 (RtlUnicodeStringPrintfEx.c)
 *     PnpGetLogString @ 0x1404B8194 (PnpGetLogString.c)
 *     PnpDuplicateUnicodeString @ 0x1404C1CF4 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1405A0850 (RtlUnicodeStringCopyStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpTraceDeviceConfig @ 0x1406EC454 (PnpTraceDeviceConfig.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, int *a7)
{
  __int64 v8; // r8
  PVOID v9; // r13
  PVOID v10; // r15
  PVOID v11; // rsi
  int v12; // r14d
  __int64 v13; // r9
  __int64 v14; // rdx
  wchar_t *Buffer; // r8
  unsigned __int16 Length; // cx
  unsigned int v17; // r9d
  __int64 v18; // rdx
  __int64 **v19; // rsi
  __int64 **v20; // rdx
  int v21; // r8d
  __int64 *v22; // rcx
  __int64 v23; // rax
  _WORD *Pool2; // rax
  TIME_FIELDS v25; // xmm0
  __int64 *v26; // rbx
  char v27; // bl
  const wchar_t *v28; // r14
  __int64 *v29; // rsi
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // r8
  int *v33; // rax
  int v34; // r15d
  const wchar_t *v35; // rdx
  const wchar_t *v36; // r8
  const wchar_t *v37; // r9
  const wchar_t *v38; // r10
  const wchar_t *v39; // r11
  char v40; // bl
  const wchar_t *v41; // r14
  __int64 *v42; // rsi
  __int64 v43; // r15
  __int64 v44; // r12
  __int64 v45; // rdx
  int *v46; // rax
  const wchar_t *v47; // rdx
  const wchar_t *v48; // r8
  const wchar_t *v49; // r9
  const wchar_t *v50; // r10
  const wchar_t *v51; // r11
  char v52; // bl
  const wchar_t *v53; // r14
  __int64 *v54; // rsi
  __int64 v55; // r15
  __int64 v56; // r12
  __int64 v57; // rdx
  int *LogString; // rax
  const wchar_t *v59; // rdx
  const wchar_t *v60; // r8
  const wchar_t *v61; // r9
  const wchar_t *v62; // r10
  const wchar_t *v63; // r11
  char v64; // bl
  const wchar_t *v65; // r14
  __int64 *v66; // rsi
  __int64 v67; // r15
  __int64 v68; // r12
  __int64 v69; // rdx
  int *v70; // rax
  const wchar_t *v71; // rdx
  const wchar_t *v72; // r8
  const wchar_t *v73; // r9
  const wchar_t *v74; // r10
  const wchar_t *v75; // r11
  __int64 v76; // r13
  _QWORD *v77; // rax
  unsigned __int16 v78; // bx
  void *v79; // rax
  __int64 *v80; // rsi
  int v81; // r14d
  int v82; // r9d
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r8
  unsigned __int16 v86; // cx
  unsigned int v87; // r8d
  __int64 v88; // rdx
  UNICODE_STRING *v89; // r8
  UNICODE_STRING *v90; // rdx
  const wchar_t *v91; // rcx
  NTSTATUS v92; // ebx
  const WCHAR *v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  wchar_t *v100; // rbx
  unsigned int v101; // edx
  _WORD *v102; // r12
  unsigned __int64 v103; // rax
  __int64 v104; // rcx
  unsigned int v105; // edx
  unsigned __int64 v106; // rax
  _WORD *v107; // r8
  __int64 v108; // rcx
  unsigned int v109; // edx
  unsigned __int64 v110; // rax
  _WORD *v111; // r8
  __int64 v112; // rcx
  unsigned int v113; // edx
  const WCHAR *v114; // r14
  unsigned __int64 v115; // rax
  __int64 v116; // rcx
  int v117; // ecx
  wchar_t *v118; // r11
  unsigned __int16 v119; // cx
  unsigned int v120; // r8d
  __int64 v121; // rdx
  PVOID v122; // r14
  __int64 v123; // [rsp+20h] [rbp-140h]
  __int64 v124; // [rsp+20h] [rbp-140h]
  __int64 v125; // [rsp+28h] [rbp-138h]
  __int64 v126; // [rsp+28h] [rbp-138h]
  __int64 v127; // [rsp+30h] [rbp-130h]
  const WCHAR *v128; // [rsp+98h] [rbp-C8h]
  const WCHAR *v129; // [rsp+C8h] [rbp-98h]
  int v130; // [rsp+D0h] [rbp-90h]
  char v131; // [rsp+E0h] [rbp-80h] BYREF
  BOOL v132; // [rsp+E4h] [rbp-7Ch]
  int v133; // [rsp+E8h] [rbp-78h]
  PVOID v134; // [rsp+F0h] [rbp-70h]
  __int64 v135; // [rsp+F8h] [rbp-68h] BYREF
  PVOID v136; // [rsp+100h] [rbp-60h]
  __int64 v137; // [rsp+108h] [rbp-58h] BYREF
  PVOID v138; // [rsp+110h] [rbp-50h]
  int v139; // [rsp+118h] [rbp-48h]
  __int64 v140; // [rsp+120h] [rbp-40h]
  __int64 v141; // [rsp+128h] [rbp-38h] BYREF
  PVOID v142; // [rsp+130h] [rbp-30h]
  UNICODE_STRING UnicodeString; // [rsp+138h] [rbp-28h] BYREF
  UNICODE_STRING v144; // [rsp+148h] [rbp-18h] BYREF
  __int64 v145; // [rsp+158h] [rbp-8h] BYREF
  PVOID v146; // [rsp+160h] [rbp+0h]
  TIME_FIELDS TimeFields; // [rsp+170h] [rbp+10h] BYREF
  PVOID P[2]; // [rsp+180h] [rbp+20h] BYREF
  UNICODE_STRING v149; // [rsp+190h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1A0h] [rbp+40h] BYREF
  __int64 v151; // [rsp+1B0h] [rbp+50h]
  UNICODE_STRING v152; // [rsp+1B8h] [rbp+58h] BYREF
  __int64 v153; // [rsp+1C8h] [rbp+68h]
  UNICODE_STRING v154; // [rsp+1D0h] [rbp+70h] BYREF
  TIME_FIELDS v155; // [rsp+1E0h] [rbp+80h]
  int *v156; // [rsp+1F0h] [rbp+90h]
  UNICODE_STRING v157; // [rsp+1F8h] [rbp+98h] BYREF
  UNICODE_STRING v158; // [rsp+208h] [rbp+A8h] BYREF
  __int128 v159; // [rsp+218h] [rbp+B8h] BYREF
  __int64 *v160; // [rsp+230h] [rbp+D0h] BYREF
  int v161; // [rsp+238h] [rbp+D8h]
  UNICODE_STRING *p_DestinationString; // [rsp+240h] [rbp+E0h]
  int v163; // [rsp+24Ch] [rbp+ECh]
  int v164; // [rsp+250h] [rbp+F0h]
  __int64 *v165; // [rsp+258h] [rbp+F8h]
  int v166; // [rsp+260h] [rbp+100h]
  UNICODE_STRING *p_UnicodeString; // [rsp+268h] [rbp+108h]
  int v168; // [rsp+270h] [rbp+110h]
  int v169; // [rsp+274h] [rbp+114h]
  int v170; // [rsp+278h] [rbp+118h]
  __int64 *v171; // [rsp+280h] [rbp+120h]
  int v172; // [rsp+288h] [rbp+128h]
  UNICODE_STRING *v173; // [rsp+290h] [rbp+130h]
  int v174; // [rsp+29Ch] [rbp+13Ch]
  int v175; // [rsp+2A0h] [rbp+140h]
  __int64 *v176; // [rsp+2A8h] [rbp+148h]
  int v177; // [rsp+2B0h] [rbp+150h]
  UNICODE_STRING *v178; // [rsp+2B8h] [rbp+158h]
  int v179; // [rsp+2C0h] [rbp+160h]
  int v180; // [rsp+2C4h] [rbp+164h]
  int v181; // [rsp+2C8h] [rbp+168h]
  wchar_t pszDest[12]; // [rsp+2D0h] [rbp+170h] BYREF
  wchar_t v183[24]; // [rsp+2E8h] [rbp+188h] BYREF

  v156 = a7;
  v151 = a1;
  v139 = a4;
  v140 = a2;
  v8 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0LL;
  UnicodeString.Buffer = 0LL;
  v10 = 0LL;
  *(_QWORD *)&v152.Length = 0LL;
  v11 = 0LL;
  v152.Buffer = 0LL;
  v12 = 0;
  v131 = 0;
  v137 = 0LL;
  v138 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  *(_QWORD *)&v144.Length = 0LL;
  v144.Buffer = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v132 = 1;
  v153 = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  *(_QWORD *)&v154.Length = 0LL;
  v154.Buffer = 0LL;
  v133 = 0;
  *(_QWORD *)&v155.Year = 0LL;
  v134 = 0LL;
  TimeFields = 0LL;
  v157 = 0LL;
  v159 = 0LL;
  v149 = 0LL;
  v158 = 0LL;
  if ( (byte_140EEFA6A & 0x30) != 0x30 )
    return;
  if ( a3 )
  {
    memset_0(&v160, 0, 0xA0uLL);
    v13 = *(_QWORD *)(a3 + 16);
    v163 = 6;
    v169 = 6;
    v160 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
    v174 = 6;
    v14 = *(_QWORD *)(a3 + 64);
    p_DestinationString = &DestinationString;
    v165 = DEVPKEY_DriverPackage_DriverFlightIds;
    p_UnicodeString = &UnicodeString;
    v171 = DEVPKEY_DriverPackage_SubmissionId;
    v173 = &v152;
    v176 = &DEVPKEY_DriverPackage_Isolated;
    v178 = (UNICODE_STRING *)&v131;
    v161 = 18;
    v166 = 8210;
    v172 = 18;
    v177 = 17;
    v179 = 1;
    if ( (int)PiDevCfgQueryObjectProperties(18, v14, 8, v13, (__int64)&v160, 4) < 0 )
    {
LABEL_203:
      v102 = v138;
      goto LABEL_204;
    }
    if ( v164 < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( v170 < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v17 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v18 = 0LL;
        do
        {
          if ( !Buffer[v18] )
          {
            Buffer[v18] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v18 = ++v17;
        }
        while ( v17 < ((unsigned __int64)Length >> 1) - 2 );
        v12 = 0;
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( v175 < 0 )
      RtlInitUnicodeString(&v152, 0LL);
    if ( v181 < 0 )
      v131 = 0;
    if ( DestinationString.Buffer )
      v132 = RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(a3 + 112), &TimeFields);
    LODWORD(v125) = TimeFields.Year;
    LODWORD(v123) = TimeFields.Day;
    if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%02d/%02d/%04d", (unsigned int)TimeFields.Month, v123, v125) < 0 )
      pszDest[0] = 0;
    LODWORD(v126) = *(unsigned __int16 *)(a3 + 122);
    LODWORD(v124) = *(unsigned __int16 *)(a3 + 124);
    if ( RtlStringCchPrintfW(
           v183,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
           v124,
           v126,
           *(unsigned __int16 *)(a3 + 120)) < 0 )
      v183[0] = 0;
    LODWORD(v9) = *(_DWORD *)(a3 + 108);
    v19 = (__int64 **)(a3 + 224);
    v20 = *(__int64 ***)(a3 + 224);
    if ( (_DWORD)v9 == -1 )
      LOBYTE(v9) = 0;
    if ( v20 != v19 )
    {
      v21 = 0;
      do
      {
        v22 = v20[22];
        v21 += *((unsigned __int16 *)v20 + 20) + *((unsigned __int16 *)v20 + 36) + 22;
        if ( v22 )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( *((_WORD *)v22 + v23) );
          v21 += 2 * v23 + 2;
        }
        v20 = (__int64 **)*v20;
      }
      while ( v20 != v19 );
      if ( (unsigned int)(v21 + 2) <= 0xFFFE )
        WORD1(P[0]) = v21 + 2;
      else
        WORD1(P[0]) = -2;
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
      P[1] = Pool2;
      if ( !Pool2 )
        goto LABEL_202;
      v25 = *(TIME_FIELDS *)P;
      *Pool2 = 0;
      v26 = *v19;
      for ( TimeFields = v25; v26 != (__int64 *)v19; v26 = (__int64 *)*v26 )
      {
        if ( v26 != *v19
          && RtlUnicodeStringCopyStringEx((PUNICODE_STRING)&TimeFields, L" ", (PUNICODE_STRING)&TimeFields, 0x800u) < 0 )
        {
          break;
        }
        LODWORD(v127) = *((_DWORD *)v26 + 27);
        if ( RtlUnicodeStringPrintfEx(
               (PUNICODE_STRING)&TimeFields,
               (PUNICODE_STRING)&TimeFields,
               0x800u,
               L"%wZ:%wZ:%08X",
               v26 + 5,
               v26 + 9,
               v127) < 0
          || v26[22]
          && RtlUnicodeStringPrintfEx(
               (PUNICODE_STRING)&TimeFields,
               (PUNICODE_STRING)&TimeFields,
               0x800u,
               L":%ws",
               v26[22]) < 0 )
        {
          break;
        }
      }
    }
    LOBYTE(a4) = v139;
    v8 = v151;
  }
  else
  {
    pszDest[0] = 0;
    v183[0] = 0;
    v132 = 0;
  }
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_140EEFA6A & 0x40) == 0 )
        goto LABEL_90;
      v52 = a4 & 1;
      if ( a3 )
      {
        v53 = *(const wchar_t **)(a3 + 64);
        if ( *(_DWORD *)(a3 + 108) != -1 )
          goto LABEL_77;
      }
      else
      {
        v53 = L"null";
      }
      if ( !a3 )
      {
        v54 = PiDevCfgNullGuid;
        v55 = 0LL;
        v56 = 0LL;
        goto LABEL_79;
      }
LABEL_77:
      v54 = (__int64 *)(a3 + 240);
      v55 = a3 + 272;
      v56 = a3 + 88;
LABEL_79:
      PnpGetLogString(*(_QWORD *)(v8 + 16) + 40LL);
      PnpGetLogString((__int64)P);
      PnpGetLogString(v57);
      PnpGetLogString(v56);
      LogString = PnpGetLogString(v55);
      McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
        v132,
        (__int64)KMPnPEvt_DeviceConfig_Blocked,
        (__int64)v60,
        *(const wchar_t **)(v140 + 8),
        v63,
        (__int64)v54,
        pszDest,
        v183,
        (const wchar_t *)LogString,
        v132,
        v59,
        (char)v9,
        v60,
        v62,
        v52,
        97,
        v61,
        v53);
      v34 = a5;
      goto LABEL_80;
    }
    if ( (byte_140EEFA6A & 0x20) == 0 )
      goto LABEL_90;
    v64 = a4 & 1;
    if ( a3 )
    {
      v65 = *(const wchar_t **)(a3 + 64);
      if ( *(_DWORD *)(a3 + 108) != -1 )
        goto LABEL_87;
    }
    else
    {
      v65 = L"null";
    }
    if ( !a3 )
    {
      v66 = PiDevCfgNullGuid;
      v67 = 0LL;
      v68 = 0LL;
      goto LABEL_89;
    }
LABEL_87:
    v66 = (__int64 *)(a3 + 240);
    v67 = a3 + 272;
    v68 = a3 + 88;
LABEL_89:
    PnpGetLogString(*(_QWORD *)(v8 + 16) + 40LL);
    PnpGetLogString((__int64)P);
    PnpGetLogString(v69);
    PnpGetLogString(v68);
    v70 = PnpGetLogString(v67);
    v34 = a5;
    McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
      v132,
      (__int64)KMPnPEvt_DeviceConfig_Failure,
      (__int64)v72,
      *(const wchar_t **)(v140 + 8),
      v75,
      (__int64)v66,
      pszDest,
      v183,
      (const wchar_t *)v70,
      v132,
      v71,
      (char)v9,
      v72,
      v74,
      v64,
      a5,
      v73,
      v65);
    goto LABEL_80;
  }
  if ( (a4 & 0x70) != 0 )
  {
    if ( (byte_140EEFA6A & 0x40) == 0 )
      goto LABEL_90;
    v40 = a4 & 1;
    if ( a3 )
    {
      v41 = *(const wchar_t **)(a3 + 64);
      if ( *(_DWORD *)(a3 + 108) != -1 )
        goto LABEL_67;
    }
    else
    {
      v41 = L"null";
    }
    if ( !a3 )
    {
      v42 = PiDevCfgNullGuid;
      v43 = 0LL;
      v44 = 0LL;
      goto LABEL_69;
    }
LABEL_67:
    v42 = (__int64 *)(a3 + 240);
    v43 = a3 + 272;
    v44 = a3 + 88;
LABEL_69:
    PnpGetLogString(*(_QWORD *)(v8 + 16) + 40LL);
    PnpGetLogString((__int64)P);
    PnpGetLogString(v45);
    PnpGetLogString(v44);
    v46 = PnpGetLogString(v43);
    v34 = a5;
    McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
      v132,
      (__int64)KMPnPEvt_DeviceConfig_RebootRequired,
      (__int64)v48,
      *(const wchar_t **)(v140 + 8),
      v51,
      (__int64)v42,
      pszDest,
      v183,
      (const wchar_t *)v46,
      v132,
      v47,
      (char)v9,
      v48,
      v50,
      v40,
      a5,
      v49,
      v41);
    goto LABEL_80;
  }
  if ( (byte_140EEFA6A & 0x10) == 0 )
  {
LABEL_90:
    v34 = a5;
    goto LABEL_91;
  }
  v27 = a4 & 1;
  if ( a3 )
  {
    v28 = *(const wchar_t **)(a3 + 64);
    if ( *(_DWORD *)(a3 + 108) != -1 )
      goto LABEL_58;
  }
  else
  {
    v28 = L"null";
  }
  if ( !a3 )
  {
    v29 = PiDevCfgNullGuid;
    v30 = 0LL;
    v31 = 0LL;
    goto LABEL_60;
  }
LABEL_58:
  v29 = (__int64 *)(a3 + 240);
  v30 = a3 + 272;
  v31 = a3 + 88;
LABEL_60:
  PnpGetLogString(*(_QWORD *)(v151 + 16) + 40LL);
  PnpGetLogString(v32);
  PnpGetLogString(v31);
  v33 = PnpGetLogString(v30);
  v34 = a5;
  McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
    v132,
    (__int64)&KMPnPEvt_DeviceConfig_Success,
    (__int64)v36,
    *(const wchar_t **)(v140 + 8),
    v39,
    (__int64)v29,
    pszDest,
    v183,
    (const wchar_t *)v33,
    v132,
    v36,
    (char)v9,
    v37,
    v38,
    v27,
    a5,
    v35,
    v28);
LABEL_80:
  v12 = v133;
LABEL_91:
  if ( !a3 )
    goto LABEL_201;
  v76 = a6;
  v77 = *(_QWORD **)(a3 + 208);
  if ( v77 == (_QWORD *)(a3 + 208) )
    goto LABEL_132;
  do
  {
    v77 = (_QWORD *)*v77;
    ++v12;
  }
  while ( v77 != (_QWORD *)(a3 + 208) );
  if ( !v12 )
    goto LABEL_132;
  v78 = 0x7FFF;
  if ( (unsigned int)(1646 * v12 + 2) <= 0x7FFF )
    v78 = 1646 * v12 + 2;
  v155.Year = 0;
  v79 = (void *)ExAllocatePool2(0x100uLL);
  v134 = v79;
  *(_QWORD *)&v155.Minute = v79;
  if ( !v79 )
  {
LABEL_201:
    v10 = v146;
LABEL_202:
    v11 = v136;
    v9 = v142;
    goto LABEL_203;
  }
  memset_0(v79, 0, v78);
  v80 = *(__int64 **)(a3 + 208);
  v155.Month = v78 - 2;
  TimeFields = v155;
  if ( v80 != (__int64 *)(a3 + 208) )
  {
    v81 = v139 & 1;
    do
    {
      v82 = v81 | 0x10;
      if ( !*((_DWORD *)v80 + 105) )
        v82 = v81;
      PiDevCfgLogDeviceConfigured(v151, v140, (_DWORD)v80, v82, a5, v76, (__int64)v156);
      memset_0(&v160, 0, 0xA0uLL);
      v83 = v80[2];
      v160 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
      p_DestinationString = &v157;
      v165 = DEVPKEY_DriverPackage_ExtensionId;
      p_UnicodeString = (UNICODE_STRING *)&v159;
      v163 = 6;
      v171 = DEVPKEY_DriverPackage_DriverFlightIds;
      v174 = 6;
      v173 = &v149;
      v176 = DEVPKEY_DriverPackage_SubmissionId;
      v178 = &v158;
      v180 = 6;
      v84 = v80[8];
      v161 = 18;
      v166 = 13;
      v168 = 16;
      v172 = 8210;
      v177 = 18;
      if ( (int)PiDevCfgQueryObjectProperties(18, v84, 8, v83, (__int64)&v160, 4) >= 0 )
      {
        if ( v164 < 0 && !RtlCreateUnicodeString(&v157, (PCWSTR)v80[6]) )
          RtlInitUnicodeString(&v157, 0LL);
        if ( v170 < 0 || (LOBYTE(v85) = 1, (int)RtlStringFromGUIDEx(&v159, &v154, v85) < 0) )
          RtlInitUnicodeString(&v154, 0LL);
        if ( v175 < 0 )
          RtlInitUnicodeString(&v149, 0LL);
        if ( v149.Buffer && (v86 = v149.Length, v149.Length > 4u) )
        {
          v87 = 0;
          if ( (unsigned __int64)v149.Length >> 1 != 2 )
          {
            v88 = 0LL;
            do
            {
              if ( !v149.Buffer[v88] )
              {
                v149.Buffer[v88] = 59;
                v86 = v149.Length;
              }
              v88 = ++v87;
            }
            while ( v87 < ((unsigned __int64)v86 >> 1) - 2 );
            v76 = a6;
          }
          v149.Length = v86 - 2;
        }
        else
        {
          RtlFreeAnsiString(&v149);
          RtlInitUnicodeString(&v149, 0LL);
        }
        if ( v181 < 0 )
          RtlInitUnicodeString(&v158, 0LL);
        v89 = &v158;
        if ( !v158.Buffer )
          v89 = (UNICODE_STRING *)&PiDevCfgEmptyString;
        v90 = &v149;
        v91 = L",";
        if ( !v149.Buffer )
          v90 = (UNICODE_STRING *)&PiDevCfgEmptyString;
        if ( v80 == *(__int64 **)(a3 + 208) )
          v91 = &word_140AD8570;
        v92 = RtlUnicodeStringPrintfEx(
                (PUNICODE_STRING)&TimeFields,
                (PUNICODE_STRING)&TimeFields,
                0x800u,
                L"%ws%wZ:%wZ:%wZ:%wZ",
                v91,
                &v157,
                &v154,
                v90,
                v89);
        RtlFreeAnsiString(&v154);
        RtlFreeAnsiString(&v149);
        RtlFreeAnsiString(&v157);
        RtlFreeAnsiString(&v158);
        if ( v92 < 0 )
          break;
      }
      v80 = (__int64 *)*v80;
    }
    while ( v80 != (__int64 *)(a3 + 208) );
    v34 = a5;
  }
LABEL_132:
  v93 = 0LL;
  if ( *(_QWORD *)(v140 + 32) )
    v93 = *(const WCHAR **)(v140 + 32);
  v94 = *(_QWORD *)(v140 + 48);
  if ( v94 )
  {
    if ( *(_WORD *)(v140 + 40) > 2u )
    {
      v153 = *(_QWORD *)(v140 + 48);
      v95 = v94;
      v96 = -1LL;
      do
        ++v96;
      while ( *(_WORD *)(v95 + 2 * v96) );
      if ( *(_WORD *)(v95 + 2 * v96 + 2) )
      {
        do
        {
          v97 = -1LL;
          do
            ++v97;
          while ( *(_WORD *)(v95 + 2 * v97) );
          v98 = v95 + 2 * v97;
          v99 = -1LL;
          v95 = v98 + 2;
          do
            ++v99;
          while ( *(_WORD *)(v95 + 2 * v99) );
        }
        while ( *(_WORD *)(v95 + 2 * v99 + 2) );
        v153 = v95;
      }
    }
  }
  v100 = DestinationString.Buffer;
  if ( !DestinationString.Buffer )
    v100 = *(wchar_t **)(a3 + 48);
  if ( !*(_QWORD *)(a3 + 312) || *(_WORD *)(a3 + 304) <= 4u )
  {
    v102 = v138;
    goto LABEL_159;
  }
  if ( !PnpDuplicateUnicodeString((__int64)&v137, a3 + 304) )
    goto LABEL_201;
  v101 = 0;
  v102 = v138;
  v103 = ((unsigned __int64)(unsigned __int16)v137 >> 1) - 2;
  if ( (unsigned __int64)(unsigned __int16)v137 >> 1 != 2 )
  {
    v104 = 0LL;
    do
    {
      if ( !v102[v104] )
        v102[v104] = 59;
      v104 = ++v101;
    }
    while ( v101 < v103 );
    v76 = a6;
  }
LABEL_159:
  if ( *(_QWORD *)(a3 + 328) && *(_WORD *)(a3 + 320) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v141, a3 + 320) )
      goto LABEL_185;
    v105 = 0;
    v106 = ((unsigned __int64)(unsigned __int16)v141 >> 1) - 2;
    if ( (unsigned __int64)(unsigned __int16)v141 >> 1 != 2 )
    {
      v107 = v142;
      v108 = 0LL;
      do
      {
        if ( !v107[v108] )
          v107[v108] = 59;
        v108 = ++v105;
      }
      while ( v105 < v106 );
    }
  }
  if ( *(_QWORD *)(a3 + 344) && *(_WORD *)(a3 + 336) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v145, a3 + 336) )
      goto LABEL_185;
    v109 = 0;
    v110 = ((unsigned __int64)(unsigned __int16)v145 >> 1) - 2;
    if ( (unsigned __int64)(unsigned __int16)v145 >> 1 != 2 )
    {
      v111 = v146;
      v112 = 0LL;
      do
      {
        if ( !v111[v112] )
          v111[v112] = 59;
        v112 = ++v109;
      }
      while ( v109 < v110 );
      v102 = v138;
    }
  }
  if ( !*(_QWORD *)(a3 + 408) || *(_WORD *)(a3 + 400) <= 4u )
  {
    v114 = (const WCHAR *)v136;
    goto LABEL_187;
  }
  if ( PnpDuplicateUnicodeString((__int64)&v135, a3 + 400) )
  {
    v113 = 0;
    v114 = (const WCHAR *)v136;
    v115 = ((unsigned __int64)(unsigned __int16)v135 >> 1) - 2;
    if ( (unsigned __int64)(unsigned __int16)v135 >> 1 != 2 )
    {
      v116 = 0LL;
      do
      {
        if ( !v114[v116] )
          v114[v116] = 59;
        v116 = ++v113;
      }
      while ( v113 < v115 );
      v102 = v138;
    }
LABEL_187:
    memset_0(&v160, 0, 0xA0uLL);
    p_UnicodeString = 0LL;
    v160 = DEVPKEY_Device_DriverSoftwareLinks;
    p_DestinationString = &v144;
    v165 = DEVPKEY_Device_PendingSoftwareInstall;
    v168 = 0;
    v161 = 8210;
    v163 = 6;
    v166 = 17;
    if ( (int)PiDevCfgQueryObjectProperties(v117, *(_QWORD *)(v140 + 8), 1, *(_QWORD *)(v140 + 16), (__int64)&v160, 2) >= 0 )
    {
      if ( v164 < 0 )
        RtlInitUnicodeString(&v144, 0LL);
      v118 = v144.Buffer;
      if ( v144.Buffer && (v119 = v144.Length, v144.Length > 4u) )
      {
        v120 = 0;
        if ( (unsigned __int64)v144.Length >> 1 != 2 )
        {
          v121 = 0LL;
          do
          {
            if ( !v118[v121] )
            {
              v118[v121] = 59;
              v118 = v144.Buffer;
              v119 = v144.Length;
            }
            v121 = ++v120;
          }
          while ( v120 < ((unsigned __int64)v119 >> 1) - 2 );
          v114 = (const WCHAR *)v136;
        }
        v144.Length = v119 - 2;
      }
      else
      {
        RtlFreeAnsiString(&v144);
        RtlInitUnicodeString(&v144, 0LL);
        v118 = v144.Buffer;
      }
      v102 = v138;
      v130 = v34;
      v10 = v146;
      v129 = (const WCHAR *)v76;
      v9 = v142;
      v128 = v114;
      v122 = v134;
      PnpTraceDeviceConfig(
        (unsigned __int16 *)(v151 + 40),
        (unsigned __int16 *)(*(_QWORD *)(v151 + 16) + 40LL),
        v93,
        v153,
        *(_QWORD *)(a3 + 264),
        *(const WCHAR **)(a3 + 64),
        v100,
        *(const WCHAR **)(a3 + 280),
        pszDest,
        v183,
        v152.Buffer,
        *(const WCHAR **)(a3 + 80),
        *(const WCHAR **)(a3 + 296),
        (const WCHAR *)v138,
        (const WCHAR *)v142,
        (const WCHAR *)v146,
        v118,
        v170 == -1073741789,
        (const WCHAR *)v134,
        v128,
        v132,
        v131 != 0,
        &UnicodeString.Length,
        PnpSetupInProgress != 0,
        (v139 & 0x70) != 0,
        v129,
        v130,
        v156);
      v11 = v136;
      goto LABEL_205;
    }
  }
LABEL_185:
  v11 = v136;
  v10 = v146;
  v9 = v142;
LABEL_204:
  v122 = v134;
LABEL_205:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( P[1] )
    ExFreePool(P[1]);
  if ( UnicodeString.Buffer )
  {
    ExFreePool(UnicodeString.Buffer);
    UnicodeString = 0LL;
  }
  if ( v152.Buffer )
  {
    ExFreePool(v152.Buffer);
    v152 = 0LL;
  }
  if ( v122 )
    ExFreePool(v122);
  if ( v102 )
    ExFreePool(v102);
  if ( v9 )
    ExFreePool(v9);
  if ( v10 )
    ExFreePool(v10);
  if ( v144.Buffer )
  {
    ExFreePool(v144.Buffer);
    v144 = 0LL;
  }
  if ( v11 )
    ExFreePool(v11);
}
