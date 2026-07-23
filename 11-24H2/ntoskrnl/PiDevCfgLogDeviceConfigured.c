/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x140ABF650
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer @ 0x1402B8AB0 (McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140419FA0 (RtlTimeToTimeFields.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x140499DB0 (RtlUnicodeStringPrintfEx.c)
 *     PnpGetLogString @ 0x1404B2344 (PnpGetLogString.c)
 *     PnpDuplicateUnicodeString @ 0x1404BBB34 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1405A0F00 (RtlUnicodeStringCopyStringEx.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B10 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B64 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpTraceDeviceConfig @ 0x1406F5BE0 (PnpTraceDeviceConfig.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        const wchar_t *a6,
        int *a7)
{
  const wchar_t *v7; // rsi
  int v10; // r15d
  void *v11; // r9
  WCHAR *v12; // rdx
  wchar_t *Buffer; // r8
  unsigned __int16 Length; // cx
  unsigned int v15; // r9d
  __int64 v16; // rdx
  int v17; // r13d
  __int64 **v18; // r14
  int *v19; // rsi
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  wchar_t *Pool2; // rax
  UNICODE_STRING v26; // xmm0
  __int64 *v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  NTSTATUS v30; // eax
  int *v31; // rsi
  int v32; // ebx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int16 v36; // ax
  wchar_t *v37; // rax
  UNICODE_STRING v38; // xmm0
  __int64 *v39; // rbx
  int v40; // eax
  __int64 v41; // rax
  NTSTATUS v42; // eax
  char v43; // bl
  const wchar_t *v44; // r14
  __int64 *v45; // rsi
  __int64 v46; // r15
  __int64 v47; // r12
  __int64 v48; // rdx
  int *v49; // rax
  int v50; // r14d
  const wchar_t *v51; // rdx
  const wchar_t *v52; // r8
  const wchar_t *v53; // r9
  const wchar_t *v54; // r10
  const wchar_t *v55; // r11
  char v56; // bl
  const wchar_t *v57; // r14
  __int64 *v58; // rsi
  __int64 v59; // r15
  __int64 v60; // r12
  __int64 v61; // rdx
  int *v62; // rax
  const wchar_t *v63; // rdx
  const wchar_t *v64; // r8
  const wchar_t *v65; // r9
  const wchar_t *v66; // r10
  const wchar_t *v67; // r11
  char v68; // bl
  const wchar_t *v69; // r14
  __int64 *v70; // rsi
  __int64 v71; // r15
  __int64 v72; // r12
  __int64 v73; // rdx
  int *LogString; // rax
  const wchar_t *v75; // rdx
  const wchar_t *v76; // r8
  const wchar_t *v77; // r9
  const wchar_t *v78; // r10
  const wchar_t *v79; // r11
  char v80; // bl
  const wchar_t *v81; // r14
  __int64 *v82; // rsi
  __int64 v83; // r15
  __int64 v84; // r12
  __int64 v85; // rdx
  int *v86; // rax
  const wchar_t *v87; // rdx
  const wchar_t *v88; // r8
  const wchar_t *v89; // r9
  const wchar_t *v90; // r10
  const wchar_t *v91; // r11
  const wchar_t *v92; // r13
  _QWORD *v93; // rax
  unsigned __int16 v94; // bx
  wchar_t *v95; // rax
  __int64 *v96; // rsi
  int v97; // r14d
  int v98; // r9d
  void *v99; // r9
  WCHAR *v100; // rdx
  unsigned __int16 v101; // cx
  unsigned int v102; // r8d
  __int64 v103; // rdx
  UNICODE_STRING *v104; // r8
  UNICODE_STRING *v105; // rdx
  const wchar_t *v106; // rcx
  NTSTATUS v107; // ebx
  __int64 v108; // r15
  __int64 v109; // r12
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // r12
  wchar_t *v113; // rbx
  unsigned __int16 v114; // dx
  unsigned int v115; // r8d
  unsigned __int64 v116; // rax
  wchar_t *v117; // r9
  __int64 v118; // rcx
  unsigned __int16 v119; // dx
  unsigned int v120; // r8d
  unsigned __int64 v121; // rax
  wchar_t *v122; // r9
  __int64 v123; // rcx
  unsigned __int16 v124; // dx
  unsigned int v125; // r8d
  unsigned __int64 v126; // rax
  wchar_t *v127; // r9
  __int64 v128; // rcx
  unsigned __int16 v129; // dx
  unsigned int v130; // r9d
  unsigned __int64 v131; // rax
  wchar_t *v132; // r8
  __int64 v133; // rcx
  void *v134; // r9
  WCHAR *v135; // rdx
  wchar_t *v136; // r11
  unsigned __int16 v137; // cx
  unsigned int v138; // r8d
  __int64 v139; // rdx
  __int64 v140; // [rsp+20h] [rbp-140h]
  __int64 v141; // [rsp+20h] [rbp-140h]
  __int64 v142; // [rsp+20h] [rbp-140h]
  __int64 v143; // [rsp+20h] [rbp-140h]
  __int64 v144; // [rsp+20h] [rbp-140h]
  __int64 v145; // [rsp+20h] [rbp-140h]
  __int64 v146; // [rsp+28h] [rbp-138h]
  __int64 v147; // [rsp+28h] [rbp-138h]
  __int64 v148; // [rsp+28h] [rbp-138h]
  __int64 v149; // [rsp+28h] [rbp-138h]
  __int64 v150; // [rsp+30h] [rbp-130h]
  const wchar_t *v151; // [rsp+88h] [rbp-D8h]
  const wchar_t *v152; // [rsp+88h] [rbp-D8h]
  const wchar_t *v153; // [rsp+88h] [rbp-D8h]
  char v154; // [rsp+E0h] [rbp-80h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+F0h] [rbp-70h] BYREF
  int v156; // [rsp+100h] [rbp-60h]
  BOOL v157; // [rsp+104h] [rbp-5Ch]
  int v158; // [rsp+108h] [rbp-58h]
  UNICODE_STRING v159; // [rsp+110h] [rbp-50h] BYREF
  __int64 v160; // [rsp+120h] [rbp-40h]
  UNICODE_STRING UnicodeString; // [rsp+128h] [rbp-38h] BYREF
  UNICODE_STRING v162; // [rsp+138h] [rbp-28h] BYREF
  __int64 v163; // [rsp+148h] [rbp-18h]
  UNICODE_STRING v164; // [rsp+150h] [rbp-10h] BYREF
  UNICODE_STRING v165; // [rsp+160h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+170h] [rbp+10h] BYREF
  UNICODE_STRING v167; // [rsp+180h] [rbp+20h] BYREF
  UNICODE_STRING v168; // [rsp+190h] [rbp+30h] BYREF
  UNICODE_STRING v169; // [rsp+1A0h] [rbp+40h] BYREF
  UNICODE_STRING v170; // [rsp+1B0h] [rbp+50h] BYREF
  UNICODE_STRING GuidString; // [rsp+1C0h] [rbp+60h] BYREF
  UNICODE_STRING v172; // [rsp+1D0h] [rbp+70h] BYREF
  int *v173; // [rsp+1E8h] [rbp+88h]
  UNICODE_STRING v174; // [rsp+1F0h] [rbp+90h] BYREF
  UNICODE_STRING v175; // [rsp+200h] [rbp+A0h] BYREF
  GUID Guid; // [rsp+210h] [rbp+B0h] BYREF
  __int64 *v177; // [rsp+220h] [rbp+C0h] BYREF
  int v178; // [rsp+228h] [rbp+C8h]
  UNICODE_STRING *p_DestinationString; // [rsp+230h] [rbp+D0h]
  int v180; // [rsp+23Ch] [rbp+DCh]
  int v181; // [rsp+240h] [rbp+E0h]
  __int64 *v182; // [rsp+248h] [rbp+E8h]
  int v183; // [rsp+250h] [rbp+F0h]
  void *p_UnicodeString; // [rsp+258h] [rbp+F8h]
  int v185; // [rsp+260h] [rbp+100h]
  int v186; // [rsp+264h] [rbp+104h]
  int v187; // [rsp+268h] [rbp+108h]
  __int64 *v188; // [rsp+270h] [rbp+110h]
  int v189; // [rsp+278h] [rbp+118h]
  UNICODE_STRING *v190; // [rsp+280h] [rbp+120h]
  int v191; // [rsp+28Ch] [rbp+12Ch]
  int v192; // [rsp+290h] [rbp+130h]
  __int64 *v193; // [rsp+298h] [rbp+138h]
  int v194; // [rsp+2A0h] [rbp+140h]
  UNICODE_STRING *v195; // [rsp+2A8h] [rbp+148h]
  int v196; // [rsp+2B0h] [rbp+150h]
  int v197; // [rsp+2B4h] [rbp+154h]
  int v198; // [rsp+2B8h] [rbp+158h]
  wchar_t pszDest[12]; // [rsp+2C0h] [rbp+160h] BYREF
  wchar_t v200[24]; // [rsp+2D8h] [rbp+178h] BYREF

  v7 = 0LL;
  v173 = a7;
  v156 = a4;
  v160 = a2;
  v163 = a1;
  v157 = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v172.Length = 0LL;
  v172.Buffer = 0LL;
  v154 = 0;
  *(_QWORD *)&v167.Length = 0LL;
  v167.Buffer = 0LL;
  *(_QWORD *)&v168.Length = 0LL;
  v168.Buffer = 0LL;
  *(_QWORD *)&v169.Length = 0LL;
  v169.Buffer = 0LL;
  *(_QWORD *)&v162.Length = 0LL;
  v162.Buffer = 0LL;
  *(_QWORD *)&v170.Length = 0LL;
  v170.Buffer = 0LL;
  *(_QWORD *)&v159.Length = 0LL;
  v159.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v158 = 0;
  *(_QWORD *)&v165.Length = 0LL;
  v165.Buffer = 0LL;
  TimeFields = 0LL;
  v174 = 0LL;
  Guid = 0LL;
  v164 = 0LL;
  v175 = 0LL;
  if ( (byte_140EEFF62 & 0x30) != 0x30 )
    goto LABEL_252;
  if ( a3 )
  {
    memset_0(&v177, 0, 0xA0uLL);
    v11 = *(void **)(a3 + 16);
    v180 = 6;
    v186 = 6;
    v177 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
    v191 = 6;
    v12 = *(WCHAR **)(a3 + 64);
    p_DestinationString = &DestinationString;
    v182 = DEVPKEY_DriverPackage_DriverFlightIds;
    p_UnicodeString = &UnicodeString;
    v188 = DEVPKEY_DriverPackage_SubmissionId;
    v190 = &v172;
    v193 = &DEVPKEY_DriverPackage_Isolated;
    v195 = (UNICODE_STRING *)&v154;
    v178 = 18;
    v183 = 8210;
    v189 = 18;
    v194 = 17;
    v196 = 1;
    if ( (int)PiDevCfgQueryObjectProperties(18LL, v12, 8u, v11, (__int64)&v177, 4u) < 0 )
      goto LABEL_252;
    if ( v181 < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( v187 < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v15 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v16 = 0LL;
        do
        {
          if ( !Buffer[v16] )
          {
            Buffer[v16] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v16 = ++v15;
        }
        while ( v15 < ((unsigned __int64)Length >> 1) - 2 );
        v10 = 0;
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( v192 < 0 )
      RtlInitUnicodeString(&v172, 0LL);
    if ( v198 < 0 )
      v154 = 0;
    if ( DestinationString.Buffer )
      v157 = RtlEqualUnicodeString((PCUNICODE_STRING)(a3 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(a3 + 112), &TimeFields);
    LODWORD(v146) = TimeFields.Year;
    LODWORD(v140) = TimeFields.Day;
    if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%02d/%02d/%04d", (unsigned int)TimeFields.Month, v140, v146) < 0 )
      pszDest[0] = 0;
    LODWORD(v147) = *(unsigned __int16 *)(a3 + 122);
    LODWORD(v141) = *(unsigned __int16 *)(a3 + 124);
    if ( RtlStringCchPrintfW(
           v200,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
           v141,
           v147,
           *(unsigned __int16 *)(a3 + 120)) < 0 )
      v200[0] = 0;
    v17 = *(_DWORD *)(a3 + 108);
    if ( v17 == -1 )
      LOBYTE(v17) = 0;
    if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
    {
      v18 = (__int64 **)(a3 + 224);
      v19 = *(int **)(a3 + 224);
      if ( v19 != (int *)(a3 + 224) )
      {
        v20 = 0;
        while ( 1 )
        {
          v20 += *((unsigned __int16 *)v19 + 20) + *((unsigned __int16 *)v19 + 36) + 22;
          v21 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
          v22 = *((_QWORD *)v19 + 22);
          if ( v21 )
            break;
          if ( v22 )
          {
            v23 = -1LL;
            do
              ++v23;
            while ( *(_WORD *)(v22 + 2 * v23) );
LABEL_43:
            v20 += 2 * v23 + 2;
          }
LABEL_44:
          v19 = *(int **)v19;
          if ( v19 == (int *)v18 )
          {
            v24 = v20 + 2;
            if ( (unsigned int)(v20 + 2) <= 0xFFFE )
            {
              v159.MaximumLength = v20 + 2;
            }
            else
            {
              v24 = -2;
              v159.MaximumLength = -2;
            }
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v24, 0x67727453u);
            v7 = 0LL;
            v159.Buffer = Pool2;
            if ( !Pool2 )
              goto LABEL_252;
            v26 = v159;
            *Pool2 = 0;
            v27 = *v18;
            TimeFields = (_TIME_FIELDS)v26;
            while ( 2 )
            {
              if ( v27 == (__int64 *)v18
                || v27 != *v18
                && RtlUnicodeStringCopyStringEx(
                     (PUNICODE_STRING)&TimeFields,
                     L" ",
                     (PUNICODE_STRING)&TimeFields,
                     0x800u) < 0 )
              {
                goto LABEL_66;
              }
              v28 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
              LODWORD(v150) = *((_DWORD *)v27 + 27);
              v148 = (__int64)(v27 + 9);
              v142 = (__int64)(v27 + 5);
              if ( v28 )
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v142,
                       v148,
                       v150) < 0 )
                  goto LABEL_66;
                v29 = v27[22];
                if ( !v29 )
                {
                  if ( *((int *)v27 + 112) < 0 )
                  {
                    LODWORD(v143) = *((_DWORD *)v27 + 112);
                    v30 = RtlUnicodeStringPrintfEx(
                            (PUNICODE_STRING)&TimeFields,
                            (PUNICODE_STRING)&TimeFields,
                            0x800u,
                            L":0x%08X",
                            v143);
LABEL_60:
                    if ( v30 < 0 )
                      goto LABEL_66;
                  }
LABEL_61:
                  v27 = (__int64 *)*v27;
                  continue;
                }
              }
              else
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v142,
                       v148,
                       v150) < 0 )
                  goto LABEL_66;
                v29 = v27[22];
                if ( !v29 )
                  goto LABEL_61;
              }
              break;
            }
            v30 = RtlUnicodeStringPrintfEx(
                    (PUNICODE_STRING)&TimeFields,
                    (PUNICODE_STRING)&TimeFields,
                    0x800u,
                    L":%ws",
                    v29);
            goto LABEL_60;
          }
        }
        if ( !v22 )
        {
          if ( v19[112] < 0 )
            v20 += 22;
          goto LABEL_44;
        }
        v23 = -1LL;
        do
          ++v23;
        while ( *(_WORD *)(v22 + 2 * v23) );
        goto LABEL_43;
      }
      v7 = 0LL;
    }
  }
  else
  {
    pszDest[0] = 0;
    LOBYTE(v17) = 0;
    v200[0] = 0;
    v157 = 0;
  }
LABEL_66:
  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
  {
    v31 = *(int **)(a2 + 24);
    if ( v31 != (int *)(a2 + 24) )
    {
      v32 = 0;
      while ( 1 )
      {
        v32 += *((unsigned __int16 *)v31 + 20) + *((unsigned __int16 *)v31 + 36) + 22;
        v33 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
        v34 = *((_QWORD *)v31 + 22);
        if ( v33 )
          break;
        if ( v34 )
        {
          v35 = -1LL;
          do
            ++v35;
          while ( *(_WORD *)(v34 + 2 * v35) );
LABEL_79:
          v32 += 2 * v35 + 2;
        }
LABEL_80:
        v31 = *(int **)v31;
        if ( v31 == (int *)(a2 + 24) )
        {
          v36 = v32 + 2;
          if ( (unsigned int)(v32 + 2) <= 0xFFFE )
          {
            v159.MaximumLength = v32 + 2;
          }
          else
          {
            v36 = -2;
            v159.MaximumLength = -2;
          }
          v37 = (wchar_t *)ExAllocatePool2(0x100uLL, v36, 0x67727453u);
          v159.Buffer = v37;
          if ( v37 )
          {
            v38 = v159;
            *v37 = 0;
            v39 = *(__int64 **)(a2 + 24);
            TimeFields = (_TIME_FIELDS)v38;
            while ( 2 )
            {
              if ( v39 == (__int64 *)(a2 + 24)
                || v39 != *(__int64 **)(a2 + 24)
                && RtlUnicodeStringCopyStringEx(
                     (PUNICODE_STRING)&TimeFields,
                     L" ",
                     (PUNICODE_STRING)&TimeFields,
                     0x800u) < 0 )
              {
                goto LABEL_99;
              }
              v40 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
              LODWORD(v150) = *((_DWORD *)v39 + 27);
              v149 = (__int64)(v39 + 9);
              v144 = (__int64)(v39 + 5);
              if ( v40 )
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v144,
                       v149,
                       v150) < 0 )
                  goto LABEL_99;
                v41 = v39[22];
                if ( !v41 )
                {
                  if ( *((int *)v39 + 112) < 0 )
                  {
                    LODWORD(v145) = *((_DWORD *)v39 + 112);
                    v42 = RtlUnicodeStringPrintfEx(
                            (PUNICODE_STRING)&TimeFields,
                            (PUNICODE_STRING)&TimeFields,
                            0x800u,
                            L":0x%08X",
                            v145);
LABEL_97:
                    if ( v42 < 0 )
                      goto LABEL_99;
                  }
LABEL_98:
                  v39 = (__int64 *)*v39;
                  continue;
                }
              }
              else
              {
                if ( RtlUnicodeStringPrintfEx(
                       (PUNICODE_STRING)&TimeFields,
                       (PUNICODE_STRING)&TimeFields,
                       0x800u,
                       L"%wZ:%wZ:%08X",
                       v144,
                       v149,
                       v150) < 0 )
                  goto LABEL_99;
                v41 = v39[22];
                if ( !v41 )
                  goto LABEL_98;
              }
              break;
            }
            v42 = RtlUnicodeStringPrintfEx(
                    (PUNICODE_STRING)&TimeFields,
                    (PUNICODE_STRING)&TimeFields,
                    0x800u,
                    L":%ws",
                    v41);
            goto LABEL_97;
          }
          goto LABEL_252;
        }
      }
      if ( !v34 )
      {
        if ( v31[112] < 0 )
          v32 += 22;
        goto LABEL_80;
      }
      v35 = -1LL;
      do
        ++v35;
      while ( *(_WORD *)(v34 + 2 * v35) );
      goto LABEL_79;
    }
LABEL_99:
    v7 = 0LL;
  }
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_140EEFF62 & 0x40) == 0 )
        goto LABEL_140;
      v68 = v156 & 1;
      if ( a3 )
      {
        v69 = *(const wchar_t **)(a3 + 64);
        if ( *(_DWORD *)(a3 + 108) != -1 )
          goto LABEL_127;
      }
      else
      {
        v69 = L"null";
      }
      if ( !a3 )
      {
        v70 = PiDevCfgNullGuid;
        v71 = 0LL;
        v72 = 0LL;
        goto LABEL_129;
      }
LABEL_127:
      v70 = (__int64 *)(a3 + 240);
      v71 = a3 + 272;
      v72 = a3 + 88;
LABEL_129:
      PnpGetLogString(*(_QWORD *)(v163 + 16) + 40LL);
      PnpGetLogString((__int64)&v159);
      PnpGetLogString(v73);
      PnpGetLogString(v72);
      LogString = PnpGetLogString(v71);
      McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
        v157,
        (__int64)KMPnPEvt_DeviceConfig_Blocked,
        (__int64)v76,
        *(const wchar_t **)(v160 + 8),
        v79,
        (__int64)v70,
        pszDest,
        v200,
        (const wchar_t *)LogString,
        v157,
        v75,
        v17,
        v76,
        v78,
        v68,
        97,
        v77,
        v69);
      v50 = a5;
      goto LABEL_130;
    }
    if ( (byte_140EEFF62 & 0x20) == 0 )
      goto LABEL_140;
    v80 = v156 & 1;
    if ( a3 )
    {
      v81 = *(const wchar_t **)(a3 + 64);
      if ( *(_DWORD *)(a3 + 108) != -1 )
        goto LABEL_137;
    }
    else
    {
      v81 = L"null";
    }
    if ( !a3 )
    {
      v82 = PiDevCfgNullGuid;
      v83 = 0LL;
      v84 = 0LL;
      goto LABEL_139;
    }
LABEL_137:
    v82 = (__int64 *)(a3 + 240);
    v83 = a3 + 272;
    v84 = a3 + 88;
LABEL_139:
    PnpGetLogString(*(_QWORD *)(v163 + 16) + 40LL);
    PnpGetLogString((__int64)&v159);
    PnpGetLogString(v85);
    PnpGetLogString(v84);
    v86 = PnpGetLogString(v83);
    v153 = v81;
    v50 = a5;
    McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
      v157,
      (__int64)KMPnPEvt_DeviceConfig_Failure,
      (__int64)v88,
      *(const wchar_t **)(v160 + 8),
      v91,
      (__int64)v82,
      pszDest,
      v200,
      (const wchar_t *)v86,
      v157,
      v87,
      v17,
      v88,
      v90,
      v80,
      a5,
      v89,
      v153);
    goto LABEL_130;
  }
  if ( (v156 & 0x70) != 0 )
  {
    if ( (byte_140EEFF62 & 0x40) == 0 )
      goto LABEL_140;
    v56 = v156 & 1;
    if ( a3 )
    {
      v57 = *(const wchar_t **)(a3 + 64);
      if ( *(_DWORD *)(a3 + 108) != -1 )
        goto LABEL_117;
    }
    else
    {
      v57 = L"null";
    }
    if ( !a3 )
    {
      v58 = PiDevCfgNullGuid;
      v59 = 0LL;
      v60 = 0LL;
      goto LABEL_119;
    }
LABEL_117:
    v58 = (__int64 *)(a3 + 240);
    v59 = a3 + 272;
    v60 = a3 + 88;
LABEL_119:
    PnpGetLogString(*(_QWORD *)(v163 + 16) + 40LL);
    PnpGetLogString((__int64)&v159);
    PnpGetLogString(v61);
    PnpGetLogString(v60);
    v62 = PnpGetLogString(v59);
    v152 = v57;
    v50 = a5;
    McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
      v157,
      (__int64)KMPnPEvt_DeviceConfig_RebootRequired,
      (__int64)v64,
      *(const wchar_t **)(v160 + 8),
      v67,
      (__int64)v58,
      pszDest,
      v200,
      (const wchar_t *)v62,
      v157,
      v63,
      v17,
      v64,
      v66,
      v56,
      a5,
      v65,
      v152);
    goto LABEL_130;
  }
  if ( (byte_140EEFF62 & 0x10) == 0 )
  {
LABEL_140:
    v50 = a5;
    goto LABEL_141;
  }
  v43 = v156 & 1;
  if ( a3 )
  {
    v44 = *(const wchar_t **)(a3 + 64);
    if ( *(_DWORD *)(a3 + 108) != -1 )
      goto LABEL_108;
  }
  else
  {
    v44 = L"null";
  }
  if ( !a3 )
  {
    v45 = PiDevCfgNullGuid;
    v46 = 0LL;
    v47 = 0LL;
    goto LABEL_110;
  }
LABEL_108:
  v45 = (__int64 *)(a3 + 240);
  v46 = a3 + 272;
  v47 = a3 + 88;
LABEL_110:
  PnpGetLogString(*(_QWORD *)(v163 + 16) + 40LL);
  PnpGetLogString((__int64)&v159);
  PnpGetLogString(v48);
  PnpGetLogString(v47);
  v49 = PnpGetLogString(v46);
  v151 = v44;
  v50 = a5;
  McTemplateK0zzjzzztzdzztdzz_EtwWriteTransfer(
    v157,
    (__int64)&KMPnPEvt_DeviceConfig_Success,
    (__int64)v52,
    *(const wchar_t **)(v160 + 8),
    v55,
    (__int64)v45,
    pszDest,
    v200,
    (const wchar_t *)v49,
    v157,
    v51,
    v17,
    v52,
    v54,
    v43,
    a5,
    v53,
    v151);
LABEL_130:
  v10 = v158;
  v7 = 0LL;
LABEL_141:
  if ( !a3 )
    goto LABEL_252;
  v92 = a6;
  v93 = *(_QWORD **)(a3 + 208);
  if ( v93 != (_QWORD *)(a3 + 208) )
  {
    do
    {
      v93 = (_QWORD *)*v93;
      ++v10;
    }
    while ( v93 != (_QWORD *)(a3 + 208) );
    if ( v10 )
    {
      v94 = 0x7FFF;
      if ( (unsigned int)(1646 * v10 + 2) <= 0x7FFF )
      {
        v94 = 1646 * v10 + 2;
        v165.MaximumLength = v94;
      }
      else
      {
        v165.MaximumLength = 0x7FFF;
      }
      v165.Length = 0;
      v95 = (wchar_t *)ExAllocatePool2(0x100uLL, v94, 0x67727453u);
      v165.Buffer = v95;
      if ( !v95 )
        goto LABEL_252;
      memset_0(v95, 0, v94);
      v96 = *(__int64 **)(a3 + 208);
      v165.MaximumLength = v94 - 2;
      TimeFields = (_TIME_FIELDS)v165;
      if ( v96 != (__int64 *)(a3 + 208) )
      {
        v97 = v156 & 1;
        do
        {
          v98 = v97 | 0x10;
          if ( !*((_DWORD *)v96 + 105) )
            v98 = v97;
          PiDevCfgLogDeviceConfigured(v163, v160, (_DWORD)v96, v98, a5, (__int64)v92, (__int64)v173);
          memset_0(&v177, 0, 0xA0uLL);
          v99 = (void *)v96[2];
          v177 = (__int64 *)&DEVPKEY_DriverPackage_OriginalInfName;
          p_DestinationString = &v174;
          v182 = DEVPKEY_DriverPackage_ExtensionId;
          p_UnicodeString = &Guid;
          v180 = 6;
          v188 = DEVPKEY_DriverPackage_DriverFlightIds;
          v191 = 6;
          v190 = &v164;
          v193 = DEVPKEY_DriverPackage_SubmissionId;
          v195 = &v175;
          v197 = 6;
          v100 = (WCHAR *)v96[8];
          v178 = 18;
          v183 = 13;
          v185 = 16;
          v189 = 8210;
          v194 = 18;
          if ( (int)PiDevCfgQueryObjectProperties(18LL, v100, 8u, v99, (__int64)&v177, 4u) >= 0 )
          {
            if ( v181 < 0 && !RtlCreateUnicodeString(&v174, (PCWSTR)v96[6]) )
              RtlInitUnicodeString(&v174, 0LL);
            if ( v187 < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
              RtlInitUnicodeString(&GuidString, 0LL);
            if ( v192 < 0 )
              RtlInitUnicodeString(&v164, 0LL);
            if ( v164.Buffer && (v101 = v164.Length, v164.Length > 4u) )
            {
              v102 = 0;
              if ( (unsigned __int64)v164.Length >> 1 != 2 )
              {
                v103 = 0LL;
                do
                {
                  if ( !v164.Buffer[v103] )
                  {
                    v164.Buffer[v103] = 59;
                    v101 = v164.Length;
                  }
                  v103 = ++v102;
                }
                while ( v102 < ((unsigned __int64)v101 >> 1) - 2 );
                v92 = a6;
              }
              v164.Length = v101 - 2;
            }
            else
            {
              RtlFreeAnsiString(&v164);
              RtlInitUnicodeString(&v164, 0LL);
            }
            if ( v198 < 0 )
              RtlInitUnicodeString(&v175, 0LL);
            v104 = &v175;
            if ( !v175.Buffer )
              v104 = (UNICODE_STRING *)&PiDevCfgEmptyString;
            v105 = &v164;
            v106 = L",";
            if ( !v164.Buffer )
              v105 = (UNICODE_STRING *)&PiDevCfgEmptyString;
            if ( v96 == *(__int64 **)(a3 + 208) )
              v106 = &word_140AEDAC0;
            v107 = RtlUnicodeStringPrintfEx(
                     (PUNICODE_STRING)&TimeFields,
                     (PUNICODE_STRING)&TimeFields,
                     0x800u,
                     L"%ws%wZ:%wZ:%wZ:%wZ",
                     v106,
                     &v174,
                     &GuidString,
                     v105,
                     v104);
            RtlFreeAnsiString(&GuidString);
            RtlFreeAnsiString(&v164);
            RtlFreeAnsiString(&v174);
            RtlFreeAnsiString(&v175);
            if ( v107 < 0 )
              break;
          }
          v96 = (__int64 *)*v96;
        }
        while ( v96 != (__int64 *)(a3 + 208) );
        v50 = a5;
      }
      v7 = 0LL;
    }
  }
  v108 = v160;
  if ( *(_QWORD *)(v160 + 48) )
    v7 = *(const wchar_t **)(v160 + 48);
  if ( *(_QWORD *)(v160 + 64) && *(_WORD *)(v160 + 56) > 2u )
  {
    v109 = *(_QWORD *)(v160 + 64);
    v110 = -1LL;
    do
      ++v110;
    while ( *(_WORD *)(v109 + 2 * v110) );
    while ( *(_WORD *)(v109 + 2 * v110 + 2) )
    {
      v111 = -1LL;
      do
        ++v111;
      while ( *(_WORD *)(v109 + 2 * v111) );
      v112 = v109 + 2 * v111;
      v110 = -1LL;
      v109 = v112 + 2;
      do
        ++v110;
      while ( *(_WORD *)(v109 + 2 * v110) );
    }
  }
  else
  {
    v109 = 0LL;
  }
  v113 = DestinationString.Buffer;
  if ( !DestinationString.Buffer )
    v113 = *(wchar_t **)(a3 + 48);
  if ( *(_QWORD *)(a3 + 312) && *(_WORD *)(a3 + 304) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v167, a3 + 304) )
      goto LABEL_252;
    v114 = v167.Length;
    v115 = 0;
    v116 = ((unsigned __int64)v167.Length >> 1) - 2;
    if ( (unsigned __int64)v167.Length >> 1 != 2 )
    {
      v117 = v167.Buffer;
      v118 = 0LL;
      do
      {
        if ( !v117[v118] )
          v117[v118] = 59;
        v118 = ++v115;
      }
      while ( v115 < v116 );
    }
    v167.Length = v114 - 2;
  }
  if ( *(_QWORD *)(a3 + 328) && *(_WORD *)(a3 + 320) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v168, a3 + 320) )
      goto LABEL_252;
    v119 = v168.Length;
    v120 = 0;
    v121 = ((unsigned __int64)v168.Length >> 1) - 2;
    if ( (unsigned __int64)v168.Length >> 1 != 2 )
    {
      v122 = v168.Buffer;
      v123 = 0LL;
      do
      {
        if ( !v122[v123] )
          v122[v123] = 59;
        v123 = ++v120;
      }
      while ( v120 < v121 );
    }
    v168.Length = v119 - 2;
  }
  if ( *(_QWORD *)(a3 + 344) && *(_WORD *)(a3 + 336) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v169, a3 + 336) )
      goto LABEL_252;
    v124 = v169.Length;
    v125 = 0;
    v126 = ((unsigned __int64)v169.Length >> 1) - 2;
    if ( (unsigned __int64)v169.Length >> 1 != 2 )
    {
      v127 = v169.Buffer;
      v128 = 0LL;
      do
      {
        if ( !v127[v128] )
          v127[v128] = 59;
        v128 = ++v125;
      }
      while ( v125 < v126 );
      v92 = a6;
    }
    v169.Length = v124 - 2;
  }
  if ( *(_QWORD *)(a3 + 408) && *(_WORD *)(a3 + 400) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v170, a3 + 400) )
      goto LABEL_252;
    v129 = v170.Length;
    v130 = 0;
    v131 = ((unsigned __int64)v170.Length >> 1) - 2;
    if ( (unsigned __int64)v170.Length >> 1 != 2 )
    {
      v132 = v170.Buffer;
      v133 = 0LL;
      do
      {
        if ( !v132[v133] )
          v132[v133] = 59;
        v133 = ++v130;
      }
      while ( v130 < v131 );
      v50 = a5;
    }
    v170.Length = v129 - 2;
  }
  memset_0(&v177, 0, 0xA0uLL);
  v134 = *(void **)(v108 + 16);
  v135 = *(WCHAR **)(v108 + 8);
  v177 = DEVPKEY_Device_DriverSoftwareLinks;
  p_DestinationString = &v162;
  v182 = DEVPKEY_Device_PendingSoftwareInstall;
  v178 = 8210;
  v180 = 6;
  v183 = 17;
  p_UnicodeString = 0LL;
  v185 = 0;
  if ( (int)PiDevCfgQueryObjectProperties(0LL, v135, 1u, v134, (__int64)&v177, 2u) >= 0 )
  {
    if ( v181 < 0 )
      RtlInitUnicodeString(&v162, 0LL);
    v136 = v162.Buffer;
    if ( v162.Buffer && (v137 = v162.Length, v162.Length > 4u) )
    {
      v138 = 0;
      if ( (unsigned __int64)v162.Length >> 1 != 2 )
      {
        v139 = 0LL;
        do
        {
          if ( !v136[v139] )
          {
            v136[v139] = 59;
            v136 = v162.Buffer;
            v137 = v162.Length;
          }
          v139 = ++v138;
        }
        while ( v138 < ((unsigned __int64)v137 >> 1) - 2 );
        v92 = a6;
      }
      v162.Length = v137 - 2;
    }
    else
    {
      RtlFreeAnsiString(&v162);
      RtlInitUnicodeString(&v162, 0LL);
      v136 = v162.Buffer;
    }
    PnpTraceDeviceConfig(
      (unsigned __int16 *)(v163 + 40),
      (unsigned __int16 *)(*(_QWORD *)(v163 + 16) + 40LL),
      v7,
      v109,
      *(_QWORD *)(a3 + 264),
      *(const wchar_t **)(a3 + 64),
      v113,
      *(const wchar_t **)(a3 + 280),
      pszDest,
      v200,
      v172.Buffer,
      *(const wchar_t **)(a3 + 80),
      *(const wchar_t **)(a3 + 296),
      v167.Buffer,
      v168.Buffer,
      v169.Buffer,
      v136,
      v187 == -1073741789,
      v165.Buffer,
      v170.Buffer,
      v157,
      v154 != 0,
      &UnicodeString.Length,
      PnpSetupInProgress != 0,
      (v156 & 0x70) != 0,
      v92,
      v50,
      v173);
  }
LABEL_252:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v159);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v172);
  RtlFreeAnsiString(&v165);
  RtlFreeAnsiString(&v167);
  RtlFreeAnsiString(&v168);
  RtlFreeAnsiString(&v169);
  RtlFreeAnsiString(&v162);
  RtlFreeAnsiString(&v170);
}
