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
  _TIME_FIELDS v25; // xmm0
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
  unsigned __int16 v85; // cx
  unsigned int v86; // r8d
  __int64 v87; // rdx
  UNICODE_STRING *v88; // r8
  UNICODE_STRING *v89; // rdx
  const wchar_t *v90; // rcx
  NTSTATUS v91; // ebx
  const WCHAR *v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  wchar_t *v99; // rbx
  unsigned int v100; // edx
  _WORD *v101; // r12
  unsigned __int64 v102; // rax
  __int64 v103; // rcx
  unsigned int v104; // edx
  unsigned __int64 v105; // rax
  _WORD *v106; // r8
  __int64 v107; // rcx
  unsigned int v108; // edx
  unsigned __int64 v109; // rax
  _WORD *v110; // r8
  __int64 v111; // rcx
  unsigned int v112; // edx
  const WCHAR *v113; // r14
  unsigned __int64 v114; // rax
  __int64 v115; // rcx
  int v116; // ecx
  wchar_t *v117; // r11
  unsigned __int16 v118; // cx
  unsigned int v119; // r8d
  __int64 v120; // rdx
  PVOID v121; // r14
  __int64 v122; // [rsp+20h] [rbp-140h]
  __int64 v123; // [rsp+20h] [rbp-140h]
  __int64 v124; // [rsp+28h] [rbp-138h]
  __int64 v125; // [rsp+28h] [rbp-138h]
  __int64 v126; // [rsp+30h] [rbp-130h]
  const WCHAR *v127; // [rsp+98h] [rbp-C8h]
  const WCHAR *v128; // [rsp+C8h] [rbp-98h]
  int v129; // [rsp+D0h] [rbp-90h]
  char v130; // [rsp+E0h] [rbp-80h] BYREF
  BOOL v131; // [rsp+E4h] [rbp-7Ch]
  int v132; // [rsp+E8h] [rbp-78h]
  PVOID v133; // [rsp+F0h] [rbp-70h]
  __int64 v134; // [rsp+F8h] [rbp-68h] BYREF
  PVOID v135; // [rsp+100h] [rbp-60h]
  __int64 v136; // [rsp+108h] [rbp-58h] BYREF
  PVOID v137; // [rsp+110h] [rbp-50h]
  int v138; // [rsp+118h] [rbp-48h]
  __int64 v139; // [rsp+120h] [rbp-40h]
  __int64 v140; // [rsp+128h] [rbp-38h] BYREF
  PVOID v141; // [rsp+130h] [rbp-30h]
  UNICODE_STRING UnicodeString; // [rsp+138h] [rbp-28h] BYREF
  UNICODE_STRING v143; // [rsp+148h] [rbp-18h] BYREF
  __int64 v144; // [rsp+158h] [rbp-8h] BYREF
  PVOID v145; // [rsp+160h] [rbp+0h]
  _TIME_FIELDS TimeFields; // [rsp+170h] [rbp+10h] BYREF
  PVOID P[2]; // [rsp+180h] [rbp+20h] BYREF
  UNICODE_STRING v148; // [rsp+190h] [rbp+30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+1A0h] [rbp+40h] BYREF
  __int64 v150; // [rsp+1B0h] [rbp+50h]
  UNICODE_STRING v151; // [rsp+1B8h] [rbp+58h] BYREF
  __int64 v152; // [rsp+1C8h] [rbp+68h]
  UNICODE_STRING GuidString; // [rsp+1D0h] [rbp+70h] BYREF
  _TIME_FIELDS v154; // [rsp+1E0h] [rbp+80h]
  int *v155; // [rsp+1F0h] [rbp+90h]
  UNICODE_STRING v156; // [rsp+1F8h] [rbp+98h] BYREF
  UNICODE_STRING v157; // [rsp+208h] [rbp+A8h] BYREF
  GUID Guid; // [rsp+218h] [rbp+B8h] BYREF
  __int64 *v159; // [rsp+230h] [rbp+D0h] BYREF
  int v160; // [rsp+238h] [rbp+D8h]
  UNICODE_STRING *p_DestinationString; // [rsp+240h] [rbp+E0h]
  int v162; // [rsp+24Ch] [rbp+ECh]
  int v163; // [rsp+250h] [rbp+F0h]
  __int64 *v164; // [rsp+258h] [rbp+F8h]
  int v165; // [rsp+260h] [rbp+100h]
  void *p_UnicodeString; // [rsp+268h] [rbp+108h]
  int v167; // [rsp+270h] [rbp+110h]
  int v168; // [rsp+274h] [rbp+114h]
  int v169; // [rsp+278h] [rbp+118h]
  __int64 *v170; // [rsp+280h] [rbp+120h]
  int v171; // [rsp+288h] [rbp+128h]
  UNICODE_STRING *v172; // [rsp+290h] [rbp+130h]
  int v173; // [rsp+29Ch] [rbp+13Ch]
  int v174; // [rsp+2A0h] [rbp+140h]
  __int64 *v175; // [rsp+2A8h] [rbp+148h]
  int v176; // [rsp+2B0h] [rbp+150h]
  UNICODE_STRING *v177; // [rsp+2B8h] [rbp+158h]
  int v178; // [rsp+2C0h] [rbp+160h]
  int v179; // [rsp+2C4h] [rbp+164h]
  int v180; // [rsp+2C8h] [rbp+168h]
  wchar_t pszDest[12]; // [rsp+2D0h] [rbp+170h] BYREF
  wchar_t v182[24]; // [rsp+2E8h] [rbp+188h] BYREF

  v155 = a7;
  v150 = a1;
  v138 = a4;
  v139 = a2;
  v8 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0LL;
  UnicodeString.Buffer = 0LL;
  v10 = 0LL;
  *(_QWORD *)&v151.Length = 0LL;
  v11 = 0LL;
  v151.Buffer = 0LL;
  v12 = 0;
  v130 = 0;
  v136 = 0LL;
  v137 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  *(_QWORD *)&v143.Length = 0LL;
  v143.Buffer = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v131 = 1;
  v152 = 0LL;
  P[0] = 0LL;
  P[1] = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v132 = 0;
  *(_QWORD *)&v154.Year = 0LL;
  v133 = 0LL;
  TimeFields = 0LL;
  v156 = 0LL;
  Guid = 0LL;
  v148 = 0LL;
  v157 = 0LL;
  if ( (byte_140EEFA6A & 0x30) != 0x30 )
    return;
  if ( a3 )
  {
    memset_0(&v159, 0, 0xA0uLL);
    v13 = *(_QWORD *)(a3 + 16);
    v162 = 6;
    v168 = 6;
    v159 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
    v173 = 6;
    v14 = *(_QWORD *)(a3 + 64);
    p_DestinationString = &DestinationString;
    v164 = DEVPKEY_DriverPackage_DriverFlightIds;
    p_UnicodeString = &UnicodeString;
    v170 = DEVPKEY_DriverPackage_SubmissionId;
    v172 = &v151;
    v175 = &DEVPKEY_DriverPackage_Isolated;
    v177 = (UNICODE_STRING *)&v130;
    v160 = 18;
    v165 = 8210;
    v171 = 18;
    v176 = 17;
    v178 = 1;
    if ( (int)PiDevCfgQueryObjectProperties(18, v14, 8, v13, (__int64)&v159, 4) < 0 )
    {
LABEL_203:
      v101 = v137;
      goto LABEL_204;
    }
    if ( v163 < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( v169 < 0 )
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
    if ( v174 < 0 )
      RtlInitUnicodeString(&v151, 0LL);
    if ( v180 < 0 )
      v130 = 0;
    if ( DestinationString.Buffer )
      v131 = RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(a3 + 112), &TimeFields);
    LODWORD(v124) = TimeFields.Year;
    LODWORD(v122) = TimeFields.Day;
    if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%02d/%02d/%04d", (unsigned int)TimeFields.Month, v122, v124) < 0 )
      pszDest[0] = 0;
    LODWORD(v125) = *(unsigned __int16 *)(a3 + 122);
    LODWORD(v123) = *(unsigned __int16 *)(a3 + 124);
    if ( RtlStringCchPrintfW(
           v182,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
           v123,
           v125,
           *(unsigned __int16 *)(a3 + 120)) < 0 )
      v182[0] = 0;
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
      v25 = *(_TIME_FIELDS *)P;
      *Pool2 = 0;
      v26 = *v19;
      for ( TimeFields = v25; v26 != (__int64 *)v19; v26 = (__int64 *)*v26 )
      {
        if ( v26 != *v19
          && RtlUnicodeStringCopyStringEx((PUNICODE_STRING)&TimeFields, L" ", (PUNICODE_STRING)&TimeFields, 0x800u) < 0 )
        {
          break;
        }
        LODWORD(v126) = *((_DWORD *)v26 + 27);
        if ( RtlUnicodeStringPrintfEx(
               (PUNICODE_STRING)&TimeFields,
               (PUNICODE_STRING)&TimeFields,
               0x800u,
               L"%wZ:%wZ:%08X",
               v26 + 5,
               v26 + 9,
               v126) < 0
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
    LOBYTE(a4) = v138;
    v8 = v150;
  }
  else
  {
    pszDest[0] = 0;
    v182[0] = 0;
    v131 = 0;
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
        v131,
        (__int64)KMPnPEvt_DeviceConfig_Blocked,
        (__int64)v60,
        *(const wchar_t **)(v139 + 8),
        v63,
        (__int64)v54,
        pszDest,
        v182,
        (const wchar_t *)LogString,
        v131,
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
      v131,
      (__int64)KMPnPEvt_DeviceConfig_Failure,
      (__int64)v72,
      *(const wchar_t **)(v139 + 8),
      v75,
      (__int64)v66,
      pszDest,
      v182,
      (const wchar_t *)v70,
      v131,
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
      v131,
      (__int64)KMPnPEvt_DeviceConfig_RebootRequired,
      (__int64)v48,
      *(const wchar_t **)(v139 + 8),
      v51,
      (__int64)v42,
      pszDest,
      v182,
      (const wchar_t *)v46,
      v131,
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
  PnpGetLogString(*(_QWORD *)(v150 + 16) + 40LL);
  PnpGetLogString(v32);
  PnpGetLogString(v31);
  v33 = PnpGetLogString(v30);
  v34 = a5;
  McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
    v131,
    (__int64)&KMPnPEvt_DeviceConfig_Success,
    (__int64)v36,
    *(const wchar_t **)(v139 + 8),
    v39,
    (__int64)v29,
    pszDest,
    v182,
    (const wchar_t *)v33,
    v131,
    v36,
    (char)v9,
    v37,
    v38,
    v27,
    a5,
    v35,
    v28);
LABEL_80:
  v12 = v132;
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
  v154.Year = 0;
  v79 = (void *)ExAllocatePool2(0x100uLL);
  v133 = v79;
  *(_QWORD *)&v154.Minute = v79;
  if ( !v79 )
  {
LABEL_201:
    v10 = v145;
LABEL_202:
    v11 = v135;
    v9 = v141;
    goto LABEL_203;
  }
  memset_0(v79, 0, v78);
  v80 = *(__int64 **)(a3 + 208);
  v154.Month = v78 - 2;
  TimeFields = v154;
  if ( v80 != (__int64 *)(a3 + 208) )
  {
    v81 = v138 & 1;
    do
    {
      v82 = v81 | 0x10;
      if ( !*((_DWORD *)v80 + 105) )
        v82 = v81;
      PiDevCfgLogDeviceConfigured(v150, v139, (_DWORD)v80, v82, a5, v76, (__int64)v155);
      memset_0(&v159, 0, 0xA0uLL);
      v83 = v80[2];
      v159 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
      p_DestinationString = &v156;
      v164 = DEVPKEY_DriverPackage_ExtensionId;
      p_UnicodeString = &Guid;
      v162 = 6;
      v170 = DEVPKEY_DriverPackage_DriverFlightIds;
      v173 = 6;
      v172 = &v148;
      v175 = DEVPKEY_DriverPackage_SubmissionId;
      v177 = &v157;
      v179 = 6;
      v84 = v80[8];
      v160 = 18;
      v165 = 13;
      v167 = 16;
      v171 = 8210;
      v176 = 18;
      if ( (int)PiDevCfgQueryObjectProperties(18, v84, 8, v83, (__int64)&v159, 4) >= 0 )
      {
        if ( v163 < 0 && !RtlCreateUnicodeString(&v156, (PCWSTR)v80[6]) )
          RtlInitUnicodeString(&v156, 0LL);
        if ( v169 < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
          RtlInitUnicodeString(&GuidString, 0LL);
        if ( v174 < 0 )
          RtlInitUnicodeString(&v148, 0LL);
        if ( v148.Buffer && (v85 = v148.Length, v148.Length > 4u) )
        {
          v86 = 0;
          if ( (unsigned __int64)v148.Length >> 1 != 2 )
          {
            v87 = 0LL;
            do
            {
              if ( !v148.Buffer[v87] )
              {
                v148.Buffer[v87] = 59;
                v85 = v148.Length;
              }
              v87 = ++v86;
            }
            while ( v86 < ((unsigned __int64)v85 >> 1) - 2 );
            v76 = a6;
          }
          v148.Length = v85 - 2;
        }
        else
        {
          RtlFreeAnsiString(&v148);
          RtlInitUnicodeString(&v148, 0LL);
        }
        if ( v180 < 0 )
          RtlInitUnicodeString(&v157, 0LL);
        v88 = &v157;
        if ( !v157.Buffer )
          v88 = (UNICODE_STRING *)&PiDevCfgEmptyString;
        v89 = &v148;
        v90 = L",";
        if ( !v148.Buffer )
          v89 = (UNICODE_STRING *)&PiDevCfgEmptyString;
        if ( v80 == *(__int64 **)(a3 + 208) )
          v90 = &word_140AD8570;
        v91 = RtlUnicodeStringPrintfEx(
                (PUNICODE_STRING)&TimeFields,
                (PUNICODE_STRING)&TimeFields,
                0x800u,
                L"%ws%wZ:%wZ:%wZ:%wZ",
                v90,
                &v156,
                &GuidString,
                v89,
                v88);
        RtlFreeAnsiString(&GuidString);
        RtlFreeAnsiString(&v148);
        RtlFreeAnsiString(&v156);
        RtlFreeAnsiString(&v157);
        if ( v91 < 0 )
          break;
      }
      v80 = (__int64 *)*v80;
    }
    while ( v80 != (__int64 *)(a3 + 208) );
    v34 = a5;
  }
LABEL_132:
  v92 = 0LL;
  if ( *(_QWORD *)(v139 + 32) )
    v92 = *(const WCHAR **)(v139 + 32);
  v93 = *(_QWORD *)(v139 + 48);
  if ( v93 )
  {
    if ( *(_WORD *)(v139 + 40) > 2u )
    {
      v152 = *(_QWORD *)(v139 + 48);
      v94 = v93;
      v95 = -1LL;
      do
        ++v95;
      while ( *(_WORD *)(v94 + 2 * v95) );
      if ( *(_WORD *)(v94 + 2 * v95 + 2) )
      {
        do
        {
          v96 = -1LL;
          do
            ++v96;
          while ( *(_WORD *)(v94 + 2 * v96) );
          v97 = v94 + 2 * v96;
          v98 = -1LL;
          v94 = v97 + 2;
          do
            ++v98;
          while ( *(_WORD *)(v94 + 2 * v98) );
        }
        while ( *(_WORD *)(v94 + 2 * v98 + 2) );
        v152 = v94;
      }
    }
  }
  v99 = DestinationString.Buffer;
  if ( !DestinationString.Buffer )
    v99 = *(wchar_t **)(a3 + 48);
  if ( !*(_QWORD *)(a3 + 312) || *(_WORD *)(a3 + 304) <= 4u )
  {
    v101 = v137;
    goto LABEL_159;
  }
  if ( !PnpDuplicateUnicodeString((__int64)&v136, a3 + 304) )
    goto LABEL_201;
  v100 = 0;
  v101 = v137;
  v102 = ((unsigned __int64)(unsigned __int16)v136 >> 1) - 2;
  if ( (unsigned __int64)(unsigned __int16)v136 >> 1 != 2 )
  {
    v103 = 0LL;
    do
    {
      if ( !v101[v103] )
        v101[v103] = 59;
      v103 = ++v100;
    }
    while ( v100 < v102 );
    v76 = a6;
  }
LABEL_159:
  if ( *(_QWORD *)(a3 + 328) && *(_WORD *)(a3 + 320) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v140, a3 + 320) )
      goto LABEL_185;
    v104 = 0;
    v105 = ((unsigned __int64)(unsigned __int16)v140 >> 1) - 2;
    if ( (unsigned __int64)(unsigned __int16)v140 >> 1 != 2 )
    {
      v106 = v141;
      v107 = 0LL;
      do
      {
        if ( !v106[v107] )
          v106[v107] = 59;
        v107 = ++v104;
      }
      while ( v104 < v105 );
    }
  }
  if ( *(_QWORD *)(a3 + 344) && *(_WORD *)(a3 + 336) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v144, a3 + 336) )
      goto LABEL_185;
    v108 = 0;
    v109 = ((unsigned __int64)(unsigned __int16)v144 >> 1) - 2;
    if ( (unsigned __int64)(unsigned __int16)v144 >> 1 != 2 )
    {
      v110 = v145;
      v111 = 0LL;
      do
      {
        if ( !v110[v111] )
          v110[v111] = 59;
        v111 = ++v108;
      }
      while ( v108 < v109 );
      v101 = v137;
    }
  }
  if ( !*(_QWORD *)(a3 + 408) || *(_WORD *)(a3 + 400) <= 4u )
  {
    v113 = (const WCHAR *)v135;
    goto LABEL_187;
  }
  if ( PnpDuplicateUnicodeString((__int64)&v134, a3 + 400) )
  {
    v112 = 0;
    v113 = (const WCHAR *)v135;
    v114 = ((unsigned __int64)(unsigned __int16)v134 >> 1) - 2;
    if ( (unsigned __int64)(unsigned __int16)v134 >> 1 != 2 )
    {
      v115 = 0LL;
      do
      {
        if ( !v113[v115] )
          v113[v115] = 59;
        v115 = ++v112;
      }
      while ( v112 < v114 );
      v101 = v137;
    }
LABEL_187:
    memset_0(&v159, 0, 0xA0uLL);
    p_UnicodeString = 0LL;
    v159 = DEVPKEY_Device_DriverSoftwareLinks;
    p_DestinationString = &v143;
    v164 = DEVPKEY_Device_PendingSoftwareInstall;
    v167 = 0;
    v160 = 8210;
    v162 = 6;
    v165 = 17;
    if ( (int)PiDevCfgQueryObjectProperties(v116, *(_QWORD *)(v139 + 8), 1, *(_QWORD *)(v139 + 16), (__int64)&v159, 2) >= 0 )
    {
      if ( v163 < 0 )
        RtlInitUnicodeString(&v143, 0LL);
      v117 = v143.Buffer;
      if ( v143.Buffer && (v118 = v143.Length, v143.Length > 4u) )
      {
        v119 = 0;
        if ( (unsigned __int64)v143.Length >> 1 != 2 )
        {
          v120 = 0LL;
          do
          {
            if ( !v117[v120] )
            {
              v117[v120] = 59;
              v117 = v143.Buffer;
              v118 = v143.Length;
            }
            v120 = ++v119;
          }
          while ( v119 < ((unsigned __int64)v118 >> 1) - 2 );
          v113 = (const WCHAR *)v135;
        }
        v143.Length = v118 - 2;
      }
      else
      {
        RtlFreeAnsiString(&v143);
        RtlInitUnicodeString(&v143, 0LL);
        v117 = v143.Buffer;
      }
      v101 = v137;
      v129 = v34;
      v10 = v145;
      v128 = (const WCHAR *)v76;
      v9 = v141;
      v127 = v113;
      v121 = v133;
      PnpTraceDeviceConfig(
        (unsigned __int16 *)(v150 + 40),
        (unsigned __int16 *)(*(_QWORD *)(v150 + 16) + 40LL),
        v92,
        v152,
        *(_QWORD *)(a3 + 264),
        *(const WCHAR **)(a3 + 64),
        v99,
        *(const WCHAR **)(a3 + 280),
        pszDest,
        v182,
        v151.Buffer,
        *(const WCHAR **)(a3 + 80),
        *(const WCHAR **)(a3 + 296),
        (const WCHAR *)v137,
        (const WCHAR *)v141,
        (const WCHAR *)v145,
        v117,
        v169 == -1073741789,
        (const WCHAR *)v133,
        v127,
        v131,
        v130 != 0,
        &UnicodeString.Length,
        PnpSetupInProgress != 0,
        (v138 & 0x70) != 0,
        v128,
        v129,
        v155);
      v11 = v135;
      goto LABEL_205;
    }
  }
LABEL_185:
  v11 = v135;
  v10 = v145;
  v9 = v141;
LABEL_204:
  v121 = v133;
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
  if ( v151.Buffer )
  {
    ExFreePool(v151.Buffer);
    v151 = 0LL;
  }
  if ( v121 )
    ExFreePool(v121);
  if ( v101 )
    ExFreePool(v101);
  if ( v9 )
    ExFreePool(v9);
  if ( v10 )
    ExFreePool(v10);
  if ( v143.Buffer )
  {
    ExFreePool(v143.Buffer);
    v143 = 0LL;
  }
  if ( v11 )
    ExFreePool(v11);
}
