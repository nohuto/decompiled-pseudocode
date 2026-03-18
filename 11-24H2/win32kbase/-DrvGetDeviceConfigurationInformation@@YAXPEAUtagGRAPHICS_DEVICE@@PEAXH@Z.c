/*
 * XREFs of ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14004E834
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14004E238 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140017264 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14004F4DC (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     _wcsicmp @ 0x1401A0734 (_wcsicmp.c)
 *     RtlStringLengthWorkerW @ 0x1401C93BC (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall DrvGetDeviceConfigurationInformation(PVOID Context, WCHAR *Path, int a3)
{
  unsigned int v3; // r12d
  int v4; // esi
  WCHAR *v5; // r14
  NTSTATUS RegistryValues; // edi
  char v8; // r13
  bool v9; // zf
  struct _RTL_QUERY_REGISTRY_TABLE *p_QueryTable; // r8
  char *v11; // rcx
  char *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r8d
  struct _DEVICE_OBJECT *v15; // rcx
  const wchar_t *v16; // rcx
  char *v17; // rsi
  _DWORD *v18; // r14
  __int64 v19; // r15
  unsigned int v20; // ecx
  _WORD *v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // r13d
  int v24; // eax
  size_t v25; // rdx
  struct _RTL_QUERY_REGISTRY_TABLE *v26; // r8
  __int64 v27; // r14
  __int64 v28; // rax
  WCHAR *v29; // r15
  const wchar_t *v30; // rsi
  unsigned int i; // ecx
  unsigned int v32; // r14d
  void *v33; // rax
  void *v34; // r15
  const void *v35; // rcx
  char *v36; // rcx
  void *v37; // rax
  const void *v38; // rcx
  void *v39; // rax
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h]
  wchar_t v47; // [rsp+78h] [rbp-88h]
  ULONG ResultLength; // [rsp+7Ch] [rbp-84h] BYREF
  size_t pcchLength[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 InputBuffer; // [rsp+90h] [rbp-70h] BYREF
  void *Source2[2]; // [rsp+A0h] [rbp-60h]
  SIZE_T Length[2]; // [rsp+B0h] [rbp-50h]
  ULONG v53; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h]
  void *Src[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE v56; // [rsp+E0h] [rbp-20h] BYREF
  int (*v57)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+118h] [rbp+18h] BYREF
  int v58; // [rsp+120h] [rbp+20h]
  const wchar_t *v59; // [rsp+128h] [rbp+28h]
  void **v60; // [rsp+130h] [rbp+30h]
  int v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  int v63; // [rsp+148h] [rbp+48h]
  __int64 v64; // [rsp+150h] [rbp+50h]
  int v65; // [rsp+158h] [rbp+58h]
  __int64 v66; // [rsp+160h] [rbp+60h]
  __int128 v67; // [rsp+168h] [rbp+68h]
  __int128 v68; // [rsp+178h] [rbp+78h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+190h] [rbp+90h] BYREF
  __int64 v70; // [rsp+1C8h] [rbp+C8h]
  int v71; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v72; // [rsp+1D8h] [rbp+D8h]
  __int64 v73; // [rsp+1E0h] [rbp+E0h]
  int v74; // [rsp+1E8h] [rbp+E8h]
  __int64 v75; // [rsp+1F0h] [rbp+F0h]
  int v76; // [rsp+1F8h] [rbp+F8h]
  __int64 v77; // [rsp+200h] [rbp+100h] BYREF
  int v78; // [rsp+208h] [rbp+108h]
  const wchar_t *v79; // [rsp+210h] [rbp+110h]
  int *v80; // [rsp+218h] [rbp+118h]
  int v81; // [rsp+220h] [rbp+120h]
  int *v82; // [rsp+228h] [rbp+128h]
  int v83; // [rsp+230h] [rbp+130h]
  __int64 v84; // [rsp+238h] [rbp+138h]
  int v85; // [rsp+240h] [rbp+140h]
  const wchar_t *v86; // [rsp+248h] [rbp+148h]
  int *v87; // [rsp+250h] [rbp+150h]
  int v88; // [rsp+258h] [rbp+158h]
  int *v89; // [rsp+260h] [rbp+160h]
  int v90; // [rsp+268h] [rbp+168h]
  __int64 v91; // [rsp+270h] [rbp+170h]
  int v92; // [rsp+278h] [rbp+178h]
  const wchar_t *v93; // [rsp+280h] [rbp+180h]
  int *v94; // [rsp+288h] [rbp+188h]
  int v95; // [rsp+290h] [rbp+190h]
  int *v96; // [rsp+298h] [rbp+198h]
  int v97; // [rsp+2A0h] [rbp+1A0h]
  int (*v98)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2A8h] [rbp+1A8h]
  int v99; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v100; // [rsp+2B8h] [rbp+1B8h]
  __int64 v101; // [rsp+2C0h] [rbp+1C0h]
  int v102; // [rsp+2C8h] [rbp+1C8h]
  __int64 v103; // [rsp+2D0h] [rbp+1D0h]
  int v104; // [rsp+2D8h] [rbp+1D8h]
  int (*v105)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2E0h] [rbp+1E0h]
  int v106; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v107; // [rsp+2F0h] [rbp+1F0h]
  __int64 v108; // [rsp+2F8h] [rbp+1F8h]
  int v109; // [rsp+300h] [rbp+200h]
  __int64 v110; // [rsp+308h] [rbp+208h]
  int v111; // [rsp+310h] [rbp+210h]
  int (*v112)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+318h] [rbp+218h]
  int v113; // [rsp+320h] [rbp+220h]
  const wchar_t *v114; // [rsp+328h] [rbp+228h]
  __int64 v115; // [rsp+330h] [rbp+230h]
  int v116; // [rsp+338h] [rbp+238h]
  __int64 v117; // [rsp+340h] [rbp+240h]
  int v118; // [rsp+348h] [rbp+248h]
  __int64 v119; // [rsp+350h] [rbp+250h]
  int v120; // [rsp+358h] [rbp+258h]
  const wchar_t *v121; // [rsp+360h] [rbp+260h]
  int *v122; // [rsp+368h] [rbp+268h]
  int v123; // [rsp+370h] [rbp+270h]
  int *v124; // [rsp+378h] [rbp+278h]
  int v125; // [rsp+380h] [rbp+280h]
  __int64 v126; // [rsp+388h] [rbp+288h]
  int v127; // [rsp+390h] [rbp+290h]
  __int64 v128; // [rsp+398h] [rbp+298h]
  __int128 v129; // [rsp+3A0h] [rbp+2A0h]
  __int128 v130; // [rsp+3B0h] [rbp+2B0h]
  struct _RTL_QUERY_REGISTRY_TABLE v131; // [rsp+3C0h] [rbp+2C0h] BYREF
  int (*v132)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+3F8h] [rbp+2F8h]
  int v133; // [rsp+400h] [rbp+300h]
  const wchar_t *v134; // [rsp+408h] [rbp+308h]
  __int64 v135; // [rsp+410h] [rbp+310h]
  int v136; // [rsp+418h] [rbp+318h]
  __int64 v137; // [rsp+420h] [rbp+320h]
  int v138; // [rsp+428h] [rbp+328h]
  __int64 v139; // [rsp+430h] [rbp+330h]
  int v140; // [rsp+438h] [rbp+338h]
  const wchar_t *v141; // [rsp+440h] [rbp+340h]
  int *v142; // [rsp+448h] [rbp+348h]
  int v143; // [rsp+450h] [rbp+350h]
  int *v144; // [rsp+458h] [rbp+358h]
  int v145; // [rsp+460h] [rbp+360h]
  __int64 v146; // [rsp+468h] [rbp+368h]
  int v147; // [rsp+470h] [rbp+370h]
  const wchar_t *v148; // [rsp+478h] [rbp+378h]
  int *v149; // [rsp+480h] [rbp+380h]
  int v150; // [rsp+488h] [rbp+388h]
  int *v151; // [rsp+490h] [rbp+390h]
  int v152; // [rsp+498h] [rbp+398h]
  __int64 v153; // [rsp+4A0h] [rbp+3A0h]
  int v154; // [rsp+4A8h] [rbp+3A8h]
  const wchar_t *v155; // [rsp+4B0h] [rbp+3B0h]
  int *v156; // [rsp+4B8h] [rbp+3B8h]
  int v157; // [rsp+4C0h] [rbp+3C0h]
  int *v158; // [rsp+4C8h] [rbp+3C8h]
  int v159; // [rsp+4D0h] [rbp+3D0h]
  __int64 v160; // [rsp+4D8h] [rbp+3D8h]
  int v161; // [rsp+4E0h] [rbp+3E0h]
  __int64 v162; // [rsp+4E8h] [rbp+3E8h]
  __int128 v163; // [rsp+4F0h] [rbp+3F0h]
  __int128 v164; // [rsp+500h] [rbp+400h]

  v3 = 0;
  QueryTable.Name = L"DriverDesc";
  v4 = a3;
  v79 = L"MultiDisplayDriver";
  v5 = Path;
  v80 = &v45;
  KeyHandle = Path;
  v43 = 0;
  v45 = 0;
  v82 = &v43;
  v86 = L"MirrorDriver";
  RegistryValues = 0;
  v41 = 0;
  v87 = &v41;
  v8 = 0;
  v42 = 0;
  v89 = &v43;
  v93 = L"AccDriver";
  v94 = &v42;
  v96 = &v43;
  v100 = L"Device Description";
  v107 = L"HardwareInformation.AdapterString";
  v44 = 0;
  QueryTable.QueryRoutine = __EnumDisplayQueryRoutine;
  QueryTable.Flags = 16;
  QueryTable.EntryContext = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v70 = 0LL;
  v71 = 1;
  v72 = L"Settings";
  v73 = 0LL;
  v74 = 0;
  v75 = 0LL;
  v76 = 0;
  v77 = 0LL;
  v78 = 288;
  v81 = 67108868;
  v83 = 4;
  v84 = 0LL;
  v85 = 288;
  v88 = 67108868;
  v90 = 4;
  v91 = 0LL;
  v92 = 288;
  v95 = 67108868;
  v97 = 4;
  v98 = __EnumDisplayQueryRoutine;
  v99 = 16;
  v101 = 0LL;
  v102 = 0;
  v103 = 0LL;
  v104 = 0;
  v105 = __EnumDisplayQueryRoutine;
  v106 = 16;
  v108 = 0LL;
  v109 = 0;
  v110 = 0LL;
  v111 = 0;
  v112 = __EnumDisplayQueryRoutine;
  v113 = 16;
  v114 = L"HardwareInformation.ChipType";
  v9 = a3 == 0;
  v121 = L"TSCompatible";
  v122 = &v44;
  v123 = 67108868;
  p_QueryTable = (struct _RTL_QUERY_REGISTRY_TABLE *)&v77;
  v124 = &v43;
  v120 = 288;
  if ( !v9 )
    p_QueryTable = &QueryTable;
  v125 = 4;
  v115 = 0LL;
  v116 = 0;
  v117 = 0LL;
  v118 = 0;
  v119 = 0LL;
  v126 = 0LL;
  v127 = 0;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  RtlQueryRegistryValues(0x40000000u, Path, p_QueryTable, Context, 0LL);
  if ( !v4 && !*((_DWORD *)Context + 65) )
  {
    ResultLength = 0;
    v17 = 0LL;
    RegistryValues = ZwQueryKey(v5, KeyNameInformation, 0LL, 0, &ResultLength);
    if ( RegistryValues == -1073741789 )
    {
      v18 = (_DWORD *)PALLOCNOZ(ResultLength, 0x73726447u);
      if ( v18 )
      {
        v53 = 0;
        RegistryValues = ZwQueryKey(KeyHandle, KeyNameInformation, v18, ResultLength, &v53);
        if ( RegistryValues >= 0 )
        {
          LODWORD(v19) = 0;
          v20 = 0;
          if ( *v18 >> 1 )
          {
            v21 = v18 + 1;
            do
            {
              v9 = *v21 == 92;
              v22 = v20;
              ++v21;
              if ( !v9 )
                v22 = v19;
              ++v20;
              v19 = v22;
            }
            while ( v20 < *v18 >> 1 );
            if ( v22 )
            {
              v23 = 2 * v22;
              LODWORD(pcchLength[0]) = *(_DWORD *)L"eo";
              v47 = aVideo[6];
              v54 = *(_QWORD *)L"\\Video";
              v17 = (char *)PALLOCNOZ(2 * v22 + 14, 0x73726447u);
              if ( v17 )
              {
                memmove(v17, v18 + 1, v23);
                v24 = pcchLength[0];
                v8 = 0;
                *(_QWORD *)&v17[2 * v19] = v54;
                *(_DWORD *)&v17[2 * v19 + 8] = v24;
                *(_WORD *)&v17[2 * v19 + 12] = v47;
              }
              else
              {
                RegistryValues = -1073741670;
                v8 = 0;
              }
            }
          }
        }
        GreDeleteFastMutex((char *)v18);
      }
      else
      {
        RegistryValues = -1073741670;
      }
      if ( v17 )
      {
        v56.Flags = 16;
        v56.EntryContext = 0LL;
        v56.QueryRoutine = __EnumDisplayQueryRoutine;
        v56.DefaultType = 0;
        v56.Name = L"DeviceDesc";
        v56.DefaultData = 0LL;
        v59 = L"Driver";
        v56.DefaultLength = 0;
        v60 = Src;
        *(_OWORD *)Src = 0LL;
        v57 = 0LL;
        v58 = 304;
        v61 = 16777217;
        v62 = 0LL;
        v63 = 0;
        v64 = 0LL;
        v65 = 0;
        v66 = 0LL;
        v67 = 0LL;
        v68 = 0LL;
        RegistryValues = RtlQueryRegistryValues(0, (PCWSTR)v17, &v56, Context, 0LL);
        if ( RegistryValues >= 0 )
        {
          v8 = 1;
          if ( LOWORD(Src[0]) )
          {
            v27 = (unsigned int)LOWORD(Src[0]) + 12;
            v54 = *(_QWORD *)L"Class\\";
            v28 = PALLOCNOZ((unsigned int)LOWORD(Src[0]) + 14, 0x73726447u);
            v29 = (WCHAR *)v28;
            if ( v28 )
            {
              *(_QWORD *)v28 = v54;
              *(_DWORD *)(v28 + 8) = *(_DWORD *)L"s\\";
              memmove((void *)(v28 + 12), Src[1], LOWORD(Src[0]));
              v3 = 0;
              v131.Flags = 1;
              v131.QueryRoutine = 0LL;
              *(WCHAR *)((char *)v29 + v27) = 0;
              v143 = 67108868;
              v140 = 288;
              v145 = 4;
              v131.Name = L"Settings";
              v147 = 288;
              v132 = __DisplayDriverQueryRoutine;
              v134 = L"InstalledDisplayDrivers";
              v141 = L"MirrorDriver";
              v142 = &v41;
              v144 = &v43;
              v148 = L"AccDriver";
              v149 = &v42;
              v151 = &v43;
              v155 = L"TSCompatible";
              v156 = &v44;
              v150 = 67108868;
              v152 = 4;
              v154 = 288;
              v157 = 67108868;
              v159 = 4;
              v158 = &v43;
              v131.EntryContext = 0LL;
              v131.DefaultType = 0;
              v131.DefaultData = 0LL;
              v131.DefaultLength = 0;
              v133 = 16;
              v135 = 0LL;
              v136 = 0;
              v137 = 0LL;
              v138 = 0;
              v139 = 0LL;
              v146 = 0LL;
              v153 = 0LL;
              v160 = 0LL;
              v161 = 0;
              v162 = 0LL;
              v163 = 0LL;
              v164 = 0LL;
              RtlQueryRegistryValues(2u, v29, &v131, Context, 0LL);
              GreDeleteFastMutex((char *)v29);
            }
            else
            {
              RegistryValues = -1073741670;
              v3 = 0;
            }
          }
        }
        if ( Src[1] )
        {
          ExFreePoolWithTag(Src[1], 0);
          Src[1] = 0LL;
        }
        GreDeleteFastMutex(v17);
        if ( v8 )
        {
          v30 = (const wchar_t *)*((_QWORD *)Context + 26);
          if ( v30 )
          {
            if ( *((_DWORD *)Context + 65) )
            {
              pcchLength[0] = 0LL;
              RegistryValues = RtlStringLengthWorkerW(v30, v25, pcchLength);
              if ( RegistryValues >= 0 )
              {
                for ( i = 0; i < ((unsigned __int16)(2 * LOWORD(pcchLength[0])) >> 1) - 1; ++i )
                {
                  if ( v30[i] == 59 )
                  {
                    v3 = i + 1;
                    break;
                  }
                }
                v32 = (unsigned __int16)(2 * LOWORD(pcchLength[0])) + 2 * (1 - v3);
                v33 = (void *)PALLOCNOZ(v32, 0x73726447u);
                v34 = v33;
                if ( v33 )
                {
                  memmove(v33, &v30[v3], v32);
                  GreDeleteFastMutex(*((char **)Context + 26));
                  *((_QWORD *)Context + 26) = v34;
                  *((_DWORD *)Context + 65) = v32;
                }
                else
                {
                  RegistryValues = -1073741670;
                  *((_DWORD *)Context + 65) = 0;
                }
              }
            }
          }
        }
      }
      v5 = (WCHAR *)KeyHandle;
    }
    v4 = a3;
  }
  if ( (*((_DWORD *)Context + 40) & 0x800000) != 0 )
  {
    v13 = PALLOCNOZ(10LL, 0x73726447u);
    *((_QWORD *)Context + 25) = v13;
    if ( !v13 )
    {
LABEL_7:
      DrvLogDisplayDriverEvent(1LL);
      v11 = (char *)*((_QWORD *)Context + 25);
      if ( v11 )
      {
        GreDeleteFastMutex(v11);
        *((_QWORD *)Context + 25) = 0LL;
      }
      v12 = (char *)*((_QWORD *)Context + 26);
      if ( v12 )
      {
        GreDeleteFastMutex(v12);
        *((_QWORD *)Context + 26) = 0LL;
      }
      return;
    }
    *(_QWORD *)v13 = *(_QWORD *)L"cdd";
    *(_WORD *)(v13 + 8) = 0;
    *((_DWORD *)Context + 64) = 10;
    RegistryValues = 0;
  }
  else
  {
    if ( !v42 && !v41 )
    {
      v26 = (struct _RTL_QUERY_REGISTRY_TABLE *)&v57;
      v59 = L"InstalledDisplayDrivers";
      v57 = __DisplayDriverQueryRoutine;
      v56.QueryRoutine = 0LL;
      if ( v4 )
        v26 = &v56;
      v56.Flags = 1;
      v56.Name = L"Settings";
      v56.EntryContext = 0LL;
      v56.DefaultType = 0;
      v56.DefaultData = 0LL;
      v56.DefaultLength = 0;
      v58 = 16;
      v60 = 0LL;
      v61 = 0;
      v62 = 0LL;
      v63 = 0;
      v64 = 0LL;
      v65 = 0;
      v66 = 0LL;
      v67 = 0LL;
      v68 = 0LL;
      RegistryValues = RtlQueryRegistryValues(0x40000000u, v5, v26, Context, 0LL);
    }
    if ( RegistryValues < 0 )
      goto LABEL_7;
  }
  InputBuffer = 0LL;
  *(_OWORD *)Source2 = 0LL;
  *(_OWORD *)Length = 0LL;
  if ( v42 )
    v41 = 1;
  GreDeviceIoControlImpl(
    *((PDEVICE_OBJECT *)Context + 17),
    0x23203Bu,
    0LL,
    0,
    &InputBuffer,
    0x30u,
    (unsigned int *)pcchLength,
    1u,
    1);
  v14 = (unsigned int)Source2[1];
  if ( !LODWORD(Source2[1]) || !Source2[0] )
  {
    LODWORD(InputBuffer) = v45;
    HIDWORD(InputBuffer) = v44;
    Source2[0] = *((void **)Context + 25);
    v15 = (struct _DEVICE_OBJECT *)*((_QWORD *)Context + 17);
    LODWORD(Source2[1]) = *((_DWORD *)Context + 64);
    Length[0] = *((_QWORD *)Context + 26);
    LODWORD(Length[1]) = *((_DWORD *)Context + 65);
    *(_QWORD *)((char *)&InputBuffer + 4) = (v42 != 0 ? 2 : 0) | (unsigned __int64)(v41 != 0);
    GreDeviceIoControlImpl(v15, 0x23203Fu, &InputBuffer, 0x30u, 0LL, 0, (unsigned int *)pcchLength, 1u, 1);
    goto LABEL_17;
  }
  if ( v45 != (_DWORD)InputBuffer
    || (v41 != 0) != (BYTE4(InputBuffer) & 1)
    || (v42 != 0 ? 2 : 0) != (BYTE4(InputBuffer) & 2)
    || v44 != HIDWORD(InputBuffer) )
  {
    v45 = InputBuffer;
    v41 = BYTE4(InputBuffer) & 1;
    v42 = (DWORD1(InputBuffer) >> 1) & 1;
    v44 = HIDWORD(InputBuffer);
  }
  v35 = (const void *)*((_QWORD *)Context + 25);
  if ( !v35 || LODWORD(Source2[1]) != *((_DWORD *)Context + 64) )
    goto LABEL_80;
  if ( RtlCompareMemory(v35, Source2[0], LODWORD(Source2[1])) != *((_DWORD *)Context + 64) )
  {
    v14 = (unsigned int)Source2[1];
LABEL_80:
    v36 = (char *)*((_QWORD *)Context + 25);
    if ( v36 )
    {
      GreDeleteFastMutex(v36);
      v14 = (unsigned int)Source2[1];
    }
    v37 = (void *)PALLOCNOZ(v14, 0x73726447u);
    *((_QWORD *)Context + 25) = v37;
    if ( v37 )
      memmove(v37, Source2[0], LODWORD(Source2[1]));
    else
      RegistryValues = -1073741670;
  }
  v38 = (const void *)*((_QWORD *)Context + 26);
  if ( v38
    && Length[0]
    && (LODWORD(Length[1]) != *((_DWORD *)Context + 65)
     || RtlCompareMemory(v38, (const void *)Length[0], LODWORD(Length[1])) != *((_DWORD *)Context + 65)) )
  {
    GreDeleteFastMutex(*((char **)Context + 26));
    v39 = (void *)PALLOCNOZ(LODWORD(Length[1]), 0x73726447u);
    *((_QWORD *)Context + 26) = v39;
    if ( v39 )
      memmove(v39, (const void *)Length[0], LODWORD(Length[1]));
    else
      RegistryValues = -1073741670;
  }
LABEL_17:
  if ( RegistryValues < 0 )
    goto LABEL_7;
  if ( v45 )
    *((_DWORD *)Context + 40) |= 2u;
  if ( v41 )
    *((_DWORD *)Context + 40) |= 8u;
  if ( v42 )
    *((_DWORD *)Context + 40) |= 0x48u;
  if ( v44 )
    *((_DWORD *)Context + 40) |= 0x200000u;
  v16 = (const wchar_t *)*((_QWORD *)Context + 26);
  if ( v16 && !wcsicmp(v16, L"RDPUDD Chained DD") )
    *((_DWORD *)Context + 40) |= 0x1000000u;
}
