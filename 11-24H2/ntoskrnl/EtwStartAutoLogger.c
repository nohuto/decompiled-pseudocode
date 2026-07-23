/*
 * XREFs of EtwStartAutoLogger @ 0x1407AE248
 * Callers:
 *     PerfDiagpStartPerfDiagLogger @ 0x1407A0A84 (PerfDiagpStartPerfDiagLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF5E4 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcscmp @ 0x1404FD6E0 (wcscmp.c)
 *     EtwpCreateKeyTreeForPath @ 0x14064EB5C (EtwpCreateKeyTreeForPath.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpEnableKeyProviders @ 0x1407AF1DC (EtwpEnableKeyProviders.c)
 *     EtwpParsePoolTagFilter @ 0x1407AF8C0 (EtwpParsePoolTagFilter.c)
 *     EtwpUpdateDisallowList @ 0x140831B84 (EtwpUpdateDisallowList.c)
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x1409B6290 (RtlWriteRegistryValue.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, __int64 a2, const WCHAR *a3)
{
  void *v4; // rsi
  char *v5; // rbx
  PCWSTR v6; // rdx
  int RegistryValues; // edi
  __int64 v8; // rax
  _WORD *v9; // rsi
  _WORD *v10; // r12
  char *v11; // r14
  char *v12; // r13
  int v13; // r15d
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned __int16 v19; // cx
  char *v20; // r12
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // si
  __int64 v23; // rcx
  char *v24; // rcx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  const WCHAR *v28; // rdx
  GUID v29; // xmm0
  __int64 v30; // rsi
  __int64 v31; // rcx
  int started; // eax
  unsigned int v33; // r15d
  unsigned int i; // eax
  unsigned int v35; // esi
  __int64 v36; // r12
  unsigned int v37; // r14d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v39; // rax
  const WCHAR *v40; // rdx
  ULONG v41; // eax
  ULONG Class; // [rsp+20h] [rbp-E0h]
  ULONG Classa; // [rsp+20h] [rbp-E0h]
  ULONG Classb; // [rsp+20h] [rbp-E0h]
  _WORD v46[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  __int64 Pool2; // [rsp+48h] [rbp-B8h]
  unsigned int v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v52; // [rsp+60h] [rbp-A0h]
  ULONG Disposition; // [rsp+64h] [rbp-9Ch] BYREF
  int v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG ValueData; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v58; // [rsp+80h] [rbp-80h] BYREF
  char *v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  char *v61; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v62; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-50h] BYREF
  char *v64; // [rsp+B8h] [rbp-48h]
  int v65; // [rsp+C0h] [rbp-40h] BYREF
  int v66; // [rsp+C4h] [rbp-3Ch] BYREF
  int v67; // [rsp+C8h] [rbp-38h] BYREF
  PCWSTR SourceStringa; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING v69; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING GuidString; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F8h] [rbp-8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+38h] BYREF
  wchar_t *Str1; // [rsp+148h] [rbp+48h]
  __int64 v75; // [rsp+150h] [rbp+50h]
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  int v77; // [rsp+170h] [rbp+70h] BYREF
  int *v78; // [rsp+178h] [rbp+78h]
  int v79; // [rsp+180h] [rbp+80h] BYREF
  int *v80; // [rsp+188h] [rbp+88h]
  int v81; // [rsp+190h] [rbp+90h] BYREF
  char *v82; // [rsp+198h] [rbp+98h]
  int v83; // [rsp+1A0h] [rbp+A0h] BYREF
  char *v84; // [rsp+1A8h] [rbp+A8h]
  int v85; // [rsp+1B0h] [rbp+B0h] BYREF
  char *v86; // [rsp+1B8h] [rbp+B8h]
  int v87; // [rsp+1C0h] [rbp+C0h] BYREF
  char *v88; // [rsp+1C8h] [rbp+C8h]
  int v89; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v90; // [rsp+1D8h] [rbp+D8h]
  int v91; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v92; // [rsp+1E8h] [rbp+E8h]
  int v93; // [rsp+1F0h] [rbp+F0h] BYREF
  char *v94; // [rsp+1F8h] [rbp+F8h]
  int v95; // [rsp+200h] [rbp+100h] BYREF
  char *v96; // [rsp+208h] [rbp+108h]
  int v97; // [rsp+210h] [rbp+110h] BYREF
  char *v98; // [rsp+218h] [rbp+118h]
  int v99; // [rsp+220h] [rbp+120h] BYREF
  int *v100; // [rsp+228h] [rbp+128h]
  int v101; // [rsp+230h] [rbp+130h] BYREF
  UNICODE_STRING *p_GuidString; // [rsp+238h] [rbp+138h]
  int v103; // [rsp+240h] [rbp+140h] BYREF
  char *v104; // [rsp+248h] [rbp+148h]
  int v105; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v106; // [rsp+258h] [rbp+158h]
  int v107; // [rsp+260h] [rbp+160h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+268h] [rbp+168h]
  int v109; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v110; // [rsp+278h] [rbp+178h]
  int v111; // [rsp+280h] [rbp+180h] BYREF
  int *v112; // [rsp+288h] [rbp+188h]
  int v113; // [rsp+290h] [rbp+190h] BYREF
  UNICODE_STRING *v114; // [rsp+298h] [rbp+198h]
  int v115; // [rsp+2A0h] [rbp+1A0h] BYREF
  char *v116; // [rsp+2A8h] [rbp+1A8h]
  int v117[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  const wchar_t *v118; // [rsp+2D0h] [rbp+1D0h]
  int *v119; // [rsp+2D8h] [rbp+1D8h]
  int v120; // [rsp+2E0h] [rbp+1E0h]
  int *v121; // [rsp+2E8h] [rbp+1E8h]
  __int128 v122; // [rsp+2F8h] [rbp+1F8h]
  __int128 v123; // [rsp+308h] [rbp+208h]
  __int128 v124; // [rsp+318h] [rbp+218h]
  __int64 v125; // [rsp+328h] [rbp+228h]
  void *v126; // [rsp+330h] [rbp+230h]
  const wchar_t *v127; // [rsp+340h] [rbp+240h]
  int *v128; // [rsp+348h] [rbp+248h]
  int v129; // [rsp+350h] [rbp+250h]
  char *v130; // [rsp+358h] [rbp+258h]
  void *v131; // [rsp+368h] [rbp+268h]
  const wchar_t *v132; // [rsp+378h] [rbp+278h]
  int *v133; // [rsp+380h] [rbp+280h]
  int v134; // [rsp+388h] [rbp+288h]
  char *v135; // [rsp+390h] [rbp+290h]
  void *v136; // [rsp+3A0h] [rbp+2A0h]
  const wchar_t *v137; // [rsp+3B0h] [rbp+2B0h]
  int *v138; // [rsp+3B8h] [rbp+2B8h]
  int v139; // [rsp+3C0h] [rbp+2C0h]
  char *v140; // [rsp+3C8h] [rbp+2C8h]
  void *v141; // [rsp+3D8h] [rbp+2D8h]
  const wchar_t *v142; // [rsp+3E8h] [rbp+2E8h]
  int *v143; // [rsp+3F0h] [rbp+2F0h]
  int v144; // [rsp+3F8h] [rbp+2F8h]
  _WORD *v145; // [rsp+400h] [rbp+300h]
  int v146; // [rsp+408h] [rbp+308h]
  void *v147; // [rsp+410h] [rbp+310h]
  const wchar_t *v148; // [rsp+420h] [rbp+320h]
  int *v149; // [rsp+428h] [rbp+328h]
  int v150; // [rsp+430h] [rbp+330h]
  char *v151; // [rsp+438h] [rbp+338h]
  int v152; // [rsp+440h] [rbp+340h]
  void *v153; // [rsp+448h] [rbp+348h]
  const wchar_t *v154; // [rsp+458h] [rbp+358h]
  int *v155; // [rsp+460h] [rbp+360h]
  int v156; // [rsp+468h] [rbp+368h]
  char *v157; // [rsp+470h] [rbp+370h]
  int v158; // [rsp+478h] [rbp+378h]
  void *v159; // [rsp+480h] [rbp+380h]
  const wchar_t *v160; // [rsp+490h] [rbp+390h]
  int *v161; // [rsp+498h] [rbp+398h]
  int v162; // [rsp+4A0h] [rbp+3A0h]
  int *v163; // [rsp+4A8h] [rbp+3A8h]
  int v164; // [rsp+4B0h] [rbp+3B0h]
  void *v165; // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v166; // [rsp+4C8h] [rbp+3C8h]
  int *v167; // [rsp+4D0h] [rbp+3D0h]
  int v168; // [rsp+4D8h] [rbp+3D8h]
  int *v169; // [rsp+4E0h] [rbp+3E0h]
  int v170; // [rsp+4E8h] [rbp+3E8h]
  void *v171; // [rsp+4F0h] [rbp+3F0h]
  const wchar_t *v172; // [rsp+500h] [rbp+400h]
  int *v173; // [rsp+508h] [rbp+408h]
  int v174; // [rsp+510h] [rbp+410h]
  int *v175; // [rsp+518h] [rbp+418h]
  int v176; // [rsp+520h] [rbp+420h]
  void *v177; // [rsp+528h] [rbp+428h]
  const wchar_t *v178; // [rsp+538h] [rbp+438h]
  int *v179; // [rsp+540h] [rbp+440h]
  int v180; // [rsp+548h] [rbp+448h]
  int *v181; // [rsp+550h] [rbp+450h]
  void *v182; // [rsp+560h] [rbp+460h]
  const wchar_t *v183; // [rsp+570h] [rbp+470h]
  int *v184; // [rsp+578h] [rbp+478h]
  int v185; // [rsp+580h] [rbp+480h]
  wchar_t *Buffer; // [rsp+588h] [rbp+488h]
  int Length; // [rsp+590h] [rbp+490h]
  void *v188; // [rsp+598h] [rbp+498h]
  const WCHAR *v189; // [rsp+5A8h] [rbp+4A8h]
  int *v190; // [rsp+5B0h] [rbp+4B0h]
  int v191; // [rsp+5B8h] [rbp+4B8h]
  char *v192; // [rsp+5C0h] [rbp+4C0h]
  void *v193; // [rsp+5D0h] [rbp+4D0h]
  const wchar_t *v194; // [rsp+5E0h] [rbp+4E0h]
  int *v195; // [rsp+5E8h] [rbp+4E8h]
  int v196; // [rsp+5F0h] [rbp+4F0h]
  unsigned int *v197; // [rsp+5F8h] [rbp+4F8h]
  void *v198; // [rsp+608h] [rbp+508h]
  const wchar_t *v199; // [rsp+618h] [rbp+518h]
  int *v200; // [rsp+620h] [rbp+520h]
  int v201; // [rsp+628h] [rbp+528h]
  wchar_t *v202; // [rsp+630h] [rbp+530h]
  int v203; // [rsp+638h] [rbp+538h]
  void *v204; // [rsp+640h] [rbp+540h]
  const wchar_t *v205; // [rsp+650h] [rbp+550h]
  int *v206; // [rsp+658h] [rbp+558h]
  int v207; // [rsp+660h] [rbp+560h]
  char *v208; // [rsp+668h] [rbp+568h]
  int v209; // [rsp+670h] [rbp+570h]
  void *v210; // [rsp+678h] [rbp+578h]
  const wchar_t *v211; // [rsp+688h] [rbp+588h]
  int *v212; // [rsp+690h] [rbp+590h]
  int v213; // [rsp+698h] [rbp+598h]
  int *v214; // [rsp+6A0h] [rbp+5A0h]
  void *v215; // [rsp+6B0h] [rbp+5B0h]
  const wchar_t *v216; // [rsp+6C0h] [rbp+5C0h]
  int *v217; // [rsp+6C8h] [rbp+5C8h]
  int v218; // [rsp+6D0h] [rbp+5D0h]
  wchar_t *v219; // [rsp+6D8h] [rbp+5D8h]
  int v220; // [rsp+6E0h] [rbp+5E0h]
  void *v221; // [rsp+6E8h] [rbp+5E8h]
  const wchar_t *v222; // [rsp+6F8h] [rbp+5F8h]
  int *v223; // [rsp+700h] [rbp+600h]
  int v224; // [rsp+708h] [rbp+608h]
  int v225; // [rsp+718h] [rbp+618h]

  SourceStringa = a3;
  v75 = a2;
  LODWORD(v64) = 0;
  LODWORD(v61) = 0;
  LODWORD(v59) = 0;
  Str1 = SourceString;
  v65 = 1;
  v4 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ValueData = 0;
  v54 = 0;
  GuidString = 0LL;
  v63 = 0LL;
  UnicodeString = 0LL;
  v60 = 0LL;
  v69 = 0LL;
  v58 = 0LL;
  v49 = 0;
  v55 = 0;
  v50 = 0;
  v47 = 0;
  v46[0] = 0;
  v67 = 0;
  v66 = 100;
  v52 = 0;
  Guid = 0LL;
  *(_QWORD *)&v62.Length = PsGetCurrentServerSiloGlobals()[52].Flink;
  RtlInitUnicodeString(&DestinationString, v6);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x2000uLL, 0x50777445u);
    v4 = (void *)Pool2;
    if ( !Pool2 || (v8 = ExAllocatePool2(0x100uLL, 0x504uLL, 0x50777445u), (v5 = (char *)v8) == 0LL) )
    {
      RegistryValues = -1073741801;
      goto LABEL_92;
    }
    *(_DWORD *)(v8 + 44) = 0x20000;
    *(_DWORD *)(v8 + 48) = 4;
    RtlInitUnicodeString((PUNICODE_STRING)(v8 + 144), SourceString);
    *((_DWORD *)v5 + 18) = 0x80000000;
    v9 = v5 + 180;
    v10 = v5 + 224;
    v5[74] = -1;
    v11 = v5 + 1252;
    *((_WORD *)v5 + 36) = 176;
    *((_DWORD *)v5 + 44) = 1;
    v12 = v5 + 1272;
    v13 = 180;
    memset_0(v117, 0, 0x498uLL);
    *(_QWORD *)v117 = &EtwpQueryRegistryCallback;
    v120 = 4;
    v119 = &v77;
    v77 = 4;
    v118 = L"Start";
    v78 = &v54;
    *((_QWORD *)&v123 + 1) = &v79;
    *(_QWORD *)&v123 = L"Immutable";
    *(_QWORD *)&v122 = &EtwpQueryRegistryCallback;
    LODWORD(v124) = 4;
    v79 = 4;
    v80 = &v47;
    RegistryValues = RtlpQueryRegistryValues(0x40000000, (int)KeyHandle, (int)v117, 0, Class, 1);
    if ( RegistryValues < 0 )
      goto LABEL_91;
    if ( !SourceStringa )
    {
LABEL_14:
      if ( !v47 )
      {
        if ( Handle )
        {
          v125 = 0LL;
          v121 = &v54;
          v122 = 0LL;
          v123 = 0LL;
          v124 = 0LL;
          RegistryValues = RtlpQueryRegistryValues(0x40000000, (int)Handle, (int)v117, 0, Classa, 1);
          if ( RegistryValues < 0 )
            RegistryValues = 0;
        }
      }
      if ( !v54 )
        goto LABEL_91;
      LODWORD(v63) = 40;
      v120 = 4;
      *(_QWORD *)v117 = &EtwpQueryRegistryCallback;
      v119 = &v77;
      v118 = L"FlushThreshold";
      v77 = 4;
      v78 = (int *)(v5 + 76);
      *(_QWORD *)&v122 = &EtwpQueryRegistryCallback;
      *((_QWORD *)&v123 + 1) = &v79;
      *(_QWORD *)&v123 = L"BufferSize";
      v80 = (int *)(v5 + 48);
      v128 = &v81;
      v127 = L"MinimumBuffers";
      v82 = v5 + 52;
      v133 = &v83;
      v132 = L"FlushTimer";
      v84 = v5 + 68;
      v138 = &v85;
      v137 = L"MaximumBuffers";
      v86 = v5 + 56;
      v143 = &v87;
      v142 = L"FileName";
      v145 = v46;
      v88 = v5 + 128;
      v64 = v5 + 184;
      v149 = &v89;
      v148 = L"EnableKernelFlags";
      v90 = &v63;
      v59 = v5 + 228;
      v155 = &v91;
      v154 = L"StackWalkingFilter";
      LODWORD(v124) = 4;
      v79 = 4;
      v126 = &EtwpQueryRegistryCallback;
      v129 = 4;
      v81 = 4;
      v131 = &EtwpQueryRegistryCallback;
      v134 = 4;
      v83 = 4;
      v136 = &EtwpQueryRegistryCallback;
      v139 = 4;
      v85 = 4;
      v141 = &EtwpQueryRegistryCallback;
      v144 = 1;
      v87 = 1;
      v147 = &EtwpQueryRegistryCallback;
      v150 = 3;
      v89 = 3;
      LODWORD(v58) = 1024;
      v153 = &EtwpQueryRegistryCallback;
      v156 = 3;
      v91 = 3;
      v92 = &v58;
      v161 = &v93;
      v160 = L"ClockType";
      v163 = &v65;
      v94 = v5 + 40;
      v167 = &v95;
      v166 = L"MaxFileSize";
      v169 = &v66;
      v96 = v5 + 60;
      v173 = &v97;
      v172 = L"LogFileMode";
      v175 = &v67;
      v98 = v5 + 64;
      v179 = &v99;
      v178 = L"DisableRealtimePersistence";
      v100 = &v55;
      v184 = &v101;
      v183 = L"Guid";
      Buffer = v46;
      p_GuidString = &GuidString;
      v190 = &v103;
      v189 = L"FileCounter";
      v104 = v5 + 96;
      v195 = &v105;
      v194 = L"FileMax";
      v106 = &v49;
      v200 = &v107;
      v159 = &EtwpQueryRegistryCallback;
      v162 = 4;
      v164 = 4;
      v93 = 4;
      v165 = &EtwpQueryRegistryCallback;
      v168 = 4;
      v170 = 4;
      v95 = 4;
      v171 = &EtwpQueryRegistryCallback;
      v174 = 4;
      v176 = 4;
      v97 = 4;
      v177 = &EtwpQueryRegistryCallback;
      v180 = 4;
      v99 = 4;
      v182 = &EtwpQueryRegistryCallback;
      v185 = 1;
      v101 = 1;
      v188 = &EtwpQueryRegistryCallback;
      v191 = 4;
      v103 = 4;
      v193 = &EtwpQueryRegistryCallback;
      v196 = 4;
      v105 = 4;
      v198 = &EtwpQueryRegistryCallback;
      v199 = L"PoolTagFilter";
      v201 = 1;
      v202 = v46;
      p_UnicodeString = &UnicodeString;
      v61 = v5 + 1276;
      v206 = &v109;
      v205 = L"StackCaching";
      v110 = &v60;
      v212 = &v111;
      v211 = L"EnableSecurityProvider";
      v112 = &v50;
      v217 = &v113;
      v216 = L"DisallowList";
      v219 = v46;
      v114 = &v69;
      v223 = &v115;
      v222 = L"V2Options";
      v224 = 11;
      v115 = 11;
      v107 = 1;
      v204 = &EtwpQueryRegistryCallback;
      v207 = 3;
      v109 = 3;
      v210 = &EtwpQueryRegistryCallback;
      v213 = 4;
      v111 = 4;
      v215 = &EtwpQueryRegistryCallback;
      v218 = 1;
      v113 = 1;
      v221 = &EtwpQueryRegistryCallback;
      v116 = v5 + 80;
      LODWORD(v60) = 8;
      v225 = 8;
      RegistryValues = RtlpQueryRegistryValues(0x40000000, (int)KeyHandle, (int)v117, 0, Classa, 1);
      if ( RegistryValues < 0 )
        goto LABEL_91;
      if ( Handle )
      {
        if ( v47 )
        {
          *(_QWORD *)&v122 = 0LL;
          v119 = &v103;
          *(_QWORD *)v117 = &EtwpQueryRegistryCallback;
          v118 = L"FileCounter";
          v120 = 4;
          v121 = (int *)(v5 + 96);
          v78 = (int *)(v5 + 96);
          v77 = 4;
        }
        else
        {
          v121 = (int *)(v5 + 76);
          *((_QWORD *)&v124 + 1) = v5 + 48;
          v130 = v5 + 52;
          v135 = v5 + 68;
          v140 = v5 + 56;
          v145 = (_WORD *)*((_QWORD *)v5 + 17);
          v146 = *((unsigned __int16 *)v5 + 64);
          v151 = v64;
          v152 = v63;
          v157 = v59;
          v158 = v58;
          v163 = (int *)(v5 + 40);
          v169 = (int *)(v5 + 60);
          v175 = (int *)(v5 + 64);
          v181 = &v55;
          Buffer = GuidString.Buffer;
          Length = GuidString.Length;
          v192 = v5 + 96;
          v197 = &v49;
          v202 = UnicodeString.Buffer;
          v203 = UnicodeString.Length;
          v208 = v61;
          v209 = v60;
          v214 = &v50;
          v219 = v69.Buffer;
          v220 = v69.Length;
        }
        RtlpQueryRegistryValues(0x40000000, (int)Handle, (int)v117, 0, Classb, 1);
      }
      v14 = 1LL;
      v15 = *((_DWORD *)v5 + 28) | 2;
      *((_DWORD *)v5 + 28) = v15;
      if ( !v55 )
        *((_DWORD *)v5 + 28) = v15 | 1;
      v16 = (unsigned int)v63 >> 2;
      if ( (unsigned __int16)((unsigned int)v63 >> 2) )
      {
        *((_WORD *)v5 + 91) = 1;
        *v9 = v16 + 1;
        ++*((_WORD *)v5 + 89);
        *((_WORD *)v5 + 88) += v16 + 1;
        v13 = 4 * (unsigned __int16)*v9 + 180;
      }
      v17 = v58;
      if ( (_DWORD)v58 )
      {
        v18 = (unsigned int)v58 >> 2;
        *((_WORD *)v5 + 113) = 3;
        v19 = (v17 >> 2) + 1;
        if ( (v17 & 3) == 0 )
          v19 = v18;
        *v10 = v19 + 1;
        ++*((_WORD *)v5 + 89);
        *((_WORD *)v5 + 88) += *v10;
        v13 += 4 * (unsigned __int16)*v10;
        if ( (_WORD)v16 )
          v9 += 2 * (unsigned __int16)*v9;
        if ( v9 != v10 )
          memmove(v9, v5 + 224, 4LL * v19 + 4);
      }
      if ( UnicodeString.Buffer )
      {
        v20 = &v5[4 * *((unsigned __int16 *)v5 + 88) + 176];
        v21 = EtwpParsePoolTagFilter(&UnicodeString, v5 + 1256, 0LL, v14);
        v22 = v21;
        if ( v21 )
        {
          *((_WORD *)v5 + 627) = 4;
          *(_WORD *)v11 = v21 + 1;
          ++*((_WORD *)v5 + 89);
          *((_WORD *)v5 + 88) += *(_WORD *)v11;
          v13 += 4 * *(unsigned __int16 *)v11;
          if ( v20 != v11 )
            memmove(v20, v5 + 1252, 4LL * v21 + 4);
        }
      }
      else
      {
        v22 = v52;
      }
      if ( (_DWORD)v60 == 8 )
      {
        v23 = *((unsigned __int16 *)v5 + 88);
        *(_DWORD *)v12 = 327683;
        ++*((_WORD *)v5 + 89);
        *((_WORD *)v5 + 88) += *(_WORD *)v12;
        v24 = &v5[4 * v23 + 176];
        v13 += 4 * *(unsigned __int16 *)v12;
        if ( v24 != v12 )
          memmove(v24, v5 + 1272, 0xCuLL);
      }
      if ( !(_WORD)v16 && !(_DWORD)v58 && !(_DWORD)v60 && !v22 )
        *((_DWORD *)v5 + 18) = 0;
      v25 = *((_DWORD *)v5 + 16);
      if ( ((v25 & 0x500) == 0 || (v25 & 0x200) != 0)
        && !*((_QWORD *)v5 + 17)
        && !RtlCreateUnicodeString((PUNICODE_STRING)v5 + 8, L"%SystemRoot%") )
      {
        RegistryValues = -1073741801;
LABEL_91:
        v4 = (void *)Pool2;
        goto LABEL_92;
      }
      if ( v50 )
      {
        v26 = *((_DWORD *)v5 + 16);
        if ( (v26 & 0x80u) == 0 || (v26 & 0x100) == 0 || *((_QWORD *)v5 + 17) )
        {
          RegistryValues = -1073741790;
          goto LABEL_91;
        }
        *((_DWORD *)v5 + 28) |= 0x8004000u;
      }
      if ( v49 )
      {
        v27 = *((_DWORD *)v5 + 24) + 1;
        *((_DWORD *)v5 + 24) = v27;
        if ( v27 > v49 || v27 > 0x10 )
          *((_DWORD *)v5 + 24) = 1;
        v28 = (const WCHAR *)Handle;
        if ( !Handle )
          v28 = (const WCHAR *)KeyHandle;
        RtlWriteRegistryValue(0x40000000u, v28, L"FileCounter", 4u, v5 + 96, 4u);
      }
      if ( !wcscmp(Str1, L"GlobalLogger") )
      {
        v29 = GlobalLoggerGuid;
        Guid = GlobalLoggerGuid;
      }
      else
      {
        if ( GuidString.Buffer )
          RegistryValues = RtlGUIDFromString(&GuidString, &Guid);
        else
          RegistryValues = -1073741811;
        if ( RegistryValues < 0 )
          goto LABEL_91;
        v29 = Guid;
      }
      v30 = *(_QWORD *)&v62.Length;
      v31 = *(_QWORD *)&v62.Length;
      *(_DWORD *)v5 = v13;
      *(GUID *)(v5 + 24) = v29;
      started = EtwpStartLogger(v31, v5);
      v33 = *((unsigned __int16 *)v5 + 4);
      RegistryValues = started;
      if ( started >= 0 )
      {
        if ( *((_WORD *)v5 + 4) && v50 )
        {
          for ( i = 0; i < 0x10; ++i )
          {
            if ( !*(_WORD *)(v30 + 2LL * i + 4304) )
            {
              *(_WORD *)(v30 + 2LL * i + 4304) = v33;
              break;
            }
          }
        }
        if ( v69.Length )
        {
          if ( v69.Length == 76 * (v69.Length / 0x4Cu) )
          {
            v62.Buffer = v69.Buffer;
            v62.Length = 76;
            *(&v62.MaximumLength + 2) = 0;
            *(_DWORD *)&v62.MaximumLength = (unsigned __int16)(v69.MaximumLength - v69.Length + 76);
            v35 = v69.Length / 0x4Cu;
            if ( v35 <= 0x200 )
            {
              v36 = Pool2;
              v37 = 0;
              if ( v35 )
              {
                while ( 1 )
                {
                  RegistryValues = RtlGUIDFromString(&v62, (GUID *)(v36 + 16LL * v37));
                  if ( RegistryValues )
                    break;
                  v62.Buffer += 38;
                  if ( ++v37 >= v35 )
                    goto LABEL_88;
                }
              }
              else
              {
LABEL_88:
                if ( !RegistryValues )
                {
                  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                  EtwpUpdateDisallowList(CurrentServerSiloGlobals[52].Flink, v33, v35, v36);
                }
              }
            }
          }
        }
        v39 = PsGetCurrentServerSiloGlobals();
        EtwpEnableKeyProviders(v39[52].Flink, v33, v75, (_DWORD)SourceStringa, v47);
      }
      goto LABEL_91;
    }
    Disposition = 0;
    RtlInitUnicodeString(&DestinationString, SourceStringa);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( RegistryValues == -1073741772 )
    {
      if ( (unsigned int)EtwpCreateKeyTreeForPath((__int64)SourceStringa) )
      {
LABEL_11:
        RegistryValues = 0;
        Handle = 0LL;
LABEL_12:
        if ( Disposition == 1 )
          v47 = 1;
        goto LABEL_14;
      }
      RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    }
    if ( !RegistryValues )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_92:
  v40 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v41 = RtlNtStatusToDosError(RegistryValues);
      v40 = (const WCHAR *)KeyHandle;
      ValueData = v41;
    }
    if ( Handle )
      v40 = (const WCHAR *)Handle;
    RtlWriteRegistryValue(0x40000000u, v40, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)v5 + 8);
    ExFreePoolWithTag(v5, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v69);
  return (unsigned int)RegistryValues;
}
