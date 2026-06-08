/*
 * XREFs of sub_140032E50 @ 0x140032E50
 * Callers:
 *     sub_140027BB0 @ 0x140027BB0 (sub_140027BB0.c)
 *     sub_14003382C @ 0x14003382C (sub_14003382C.c)
 * Callees:
 *     sub_140009A48 @ 0x140009A48 (sub_140009A48.c)
 *     sub_14000A1EC @ 0x14000A1EC (sub_14000A1EC.c)
 *     sub_14000A340 @ 0x14000A340 (sub_14000A340.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 *     sub_140033E48 @ 0x140033E48 (sub_140033E48.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 */

__int64 __fastcall sub_140032E50(__int64 a1, const wchar_t *a2, char a3, _QWORD *a4)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  unsigned int v9; // ecx
  int v10; // r13d
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // r12d
  unsigned __int16 v19; // r9
  __int64 v20; // rax
  char *v21; // r14
  __int64 v22; // rcx
  int v23; // r12d
  __int64 Pool2; // rax
  _DWORD *v25; // rsi
  __int64 v26; // rdx
  unsigned __int16 v27; // cx
  unsigned int v28; // ebx
  __int64 v29; // rax
  char *v30; // r13
  unsigned int i; // r14d
  __int64 v32; // rcx
  char *v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // r8
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  unsigned __int16 v40; // cx
  __int64 v41; // rax
  unsigned __int16 v42; // r9
  unsigned __int16 v43; // r9
  unsigned int j; // edi
  __int64 v45; // rcx
  __int64 v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+44h] [rbp-BCh]
  __int64 v51; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v52; // [rsp+50h] [rbp-B0h]
  char v53; // [rsp+60h] [rbp-A0h] BYREF
  int v54; // [rsp+62h] [rbp-9Eh]
  const char *v55; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v56)(); // [rsp+70h] [rbp-90h]
  char v57; // [rsp+78h] [rbp-88h]
  int v58; // [rsp+7Ah] [rbp-86h]
  const char *v59; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v60)(); // [rsp+88h] [rbp-78h]
  char v61; // [rsp+90h] [rbp-70h]
  int v62; // [rsp+92h] [rbp-6Eh]
  const char *v63; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v64)(); // [rsp+A0h] [rbp-60h]
  char v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+AAh] [rbp-56h]
  const char *v67; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v68)(); // [rsp+B8h] [rbp-48h]
  char v69; // [rsp+C0h] [rbp-40h]
  int v70; // [rsp+C2h] [rbp-3Eh]
  const char *v71; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v72)(); // [rsp+D0h] [rbp-30h]
  char v73; // [rsp+D8h] [rbp-28h]
  int v74; // [rsp+DAh] [rbp-26h]
  const char *v75; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v76)(); // [rsp+E8h] [rbp-18h]
  char v77; // [rsp+F0h] [rbp-10h]
  int v78; // [rsp+F2h] [rbp-Eh]
  const char *v79; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v80)(); // [rsp+100h] [rbp+0h]
  char v81; // [rsp+108h] [rbp+8h]
  int v82; // [rsp+10Ah] [rbp+Ah]
  const char *v83; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v84)(); // [rsp+118h] [rbp+18h]
  char v85; // [rsp+120h] [rbp+20h]
  int v86; // [rsp+122h] [rbp+22h]
  const char *v87; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v88)(); // [rsp+130h] [rbp+30h]
  char v89; // [rsp+138h] [rbp+38h]
  int v90; // [rsp+13Ah] [rbp+3Ah]
  const char *v91; // [rsp+140h] [rbp+40h]
  NTSTATUS (__fastcall *v92)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+148h] [rbp+48h]
  char v93; // [rsp+150h] [rbp+50h] BYREF
  int v94; // [rsp+152h] [rbp+52h]
  const char *v95; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v96)(); // [rsp+160h] [rbp+60h]
  char v97; // [rsp+168h] [rbp+68h]
  int v98; // [rsp+16Ah] [rbp+6Ah]
  const char *v99; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v100)(); // [rsp+178h] [rbp+78h]
  char v101; // [rsp+180h] [rbp+80h]
  int v102; // [rsp+182h] [rbp+82h]
  const char *v103; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v104)(); // [rsp+190h] [rbp+90h]
  char v105; // [rsp+198h] [rbp+98h]
  int v106; // [rsp+19Ah] [rbp+9Ah]
  const char *v107; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v108)(); // [rsp+1A8h] [rbp+A8h]
  char v109; // [rsp+1B0h] [rbp+B0h]
  int v110; // [rsp+1B2h] [rbp+B2h]
  const char *v111; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v112)(); // [rsp+1C0h] [rbp+C0h]
  char v113; // [rsp+1C8h] [rbp+C8h]
  int v114; // [rsp+1CAh] [rbp+CAh]
  const char *v115; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v116)(); // [rsp+1D8h] [rbp+D8h]
  char v117; // [rsp+1E0h] [rbp+E0h]
  int v118; // [rsp+1E2h] [rbp+E2h]
  const char *v119; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v120)(); // [rsp+1F0h] [rbp+F0h]
  char v121; // [rsp+1F8h] [rbp+F8h]
  int v122; // [rsp+1FAh] [rbp+FAh]
  const char *v123; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v124)(); // [rsp+208h] [rbp+108h]
  char v125; // [rsp+210h] [rbp+110h]
  int v126; // [rsp+212h] [rbp+112h]
  const char *v127; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v128)(); // [rsp+220h] [rbp+120h]
  char v129; // [rsp+228h] [rbp+128h]
  int v130; // [rsp+22Ah] [rbp+12Ah]
  const char *v131; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v132)(); // [rsp+238h] [rbp+138h]
  char v133; // [rsp+240h] [rbp+140h]
  int v134; // [rsp+242h] [rbp+142h]
  const char *v135; // [rsp+248h] [rbp+148h]
  NTSTATUS (__fastcall *v136)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+250h] [rbp+150h]

  v55 = "MinimumResidency";
  v52 = a4;
  v53 = 0;
  v54 = 0;
  v56 = sub_140045530;
  v57 = 1;
  v60 = sub_140045530;
  v64 = sub_140045530;
  v67 = "ArchitectureFlags";
  v59 = "WakeupLatency";
  v93 = 0;
  v94 = 0;
  v68 = sub_140045530;
  v95 = "MinimumResidency";
  v69 = 4;
  v96 = sub_140045530;
  v72 = sub_140045530;
  v99 = "WakeupLatency";
  v76 = sub_140045530;
  v100 = sub_140045530;
  v63 = "Flags";
  v80 = sub_140045480;
  v84 = sub_140045480;
  v85 = 8;
  v88 = sub_140045480;
  v103 = "Flags";
  v58 = 0x40000;
  v61 = 2;
  v62 = 0x80000;
  v65 = 3;
  v66 = 786432;
  v70 = 0x100000;
  v71 = "ResidencyCounterFrequency";
  v73 = 5;
  v74 = 1310720;
  v75 = "EnabledParentState";
  v77 = 6;
  v78 = 1572866;
  v79 = "EntryMethod";
  v81 = 7;
  v82 = 2359298;
  v83 = "ResidencyCounter";
  v86 = 3145730;
  v87 = "UsageCounter";
  v89 = 9;
  v90 = 4194305;
  v91 = "StateName";
  v92 = sub_140032A60;
  v97 = 1;
  v98 = 0x40000;
  v101 = 2;
  v102 = 0x80000;
  v115 = "EnabledParentState";
  v104 = sub_140045530;
  v120 = sub_1400339D0;
  v107 = "ArchitectureFlags";
  v127 = "ResidencyCounter";
  v6 = *(unsigned int *)(a1 + 4);
  v124 = sub_140033AC0;
  v119 = "EntryMethod";
  v123 = "EntryMethod";
  v108 = sub_140045530;
  v112 = sub_140045530;
  v116 = sub_140045530;
  v111 = "ResidencyCounterFrequency";
  v128 = sub_140045480;
  v132 = sub_140045480;
  v105 = 3;
  v106 = 786432;
  v109 = 4;
  v110 = 0x100000;
  v113 = 5;
  v114 = 1310720;
  v117 = 6;
  v118 = 1572866;
  v121 = 6;
  v122 = 1572864;
  v125 = 7;
  v126 = 2359298;
  v129 = 8;
  v130 = 3145730;
  v131 = "UsageCounter";
  v133 = 9;
  v134 = 4194305;
  v135 = "StateName";
  v136 = sub_140032A60;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_140009A48((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x34u, (__int64)&unk_140012FE8, a2);
    return (unsigned int)-1073741275;
  }
  if ( *(_WORD *)(a1 + 12) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v8 = 53;
LABEL_8:
    sub_140009A48((__int64)off_140018050->DeviceExtension, 2u, 1u, v8, (__int64)&unk_140012FE8, a2);
    return (unsigned int)-1072431096;
  }
  v9 = *(unsigned __int16 *)(a1 + 14);
  v10 = *(_DWORD *)(a1 + 16);
  v11 = 4LL;
  if ( (unsigned __int16)v9 >= 4u )
    v11 = v9;
  v12 = -4 - v11 + v6 - 12;
  v13 = 4LL;
  if ( (unsigned __int16)v9 >= 4u )
    v13 = *(unsigned __int16 *)(a1 + 14);
  v14 = (char *)(v13 + a1 + 16);
  if ( v12 < 8 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_14000A1EC(
        (__int64)off_140018050->DeviceExtension,
        v11,
        4LL,
        0x36u,
        (__int64)&unk_140012FE8,
        a2,
        -4 - v11 + v6 - 12);
    return (unsigned int)-1072431096;
  }
  if ( (unsigned __int64)v14 >= a1 + v6 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v8 = 55;
    goto LABEL_8;
  }
  v15 = *(unsigned __int16 *)v14;
  if ( (v15 & 0xFFFD) != 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v8 = 56;
    goto LABEL_8;
  }
  v16 = *((unsigned __int16 *)v14 + 1);
  v17 = 4LL;
  if ( (unsigned __int16)v16 >= 4u )
    v17 = *((unsigned __int16 *)v14 + 1);
  v18 = *((unsigned __int16 *)v14 + 1);
  if ( v12 < (unsigned __int64)(v17 + 4) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v19 = 57;
LABEL_28:
    sub_14000A1EC((__int64)off_140018050->DeviceExtension, v15, 4LL, v19, (__int64)&unk_140012FE8, a2, v12);
    return (unsigned int)-1072431096;
  }
  if ( (_WORD)v15 )
  {
    if ( (unsigned __int16)v16 > 8u )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)-1072431096;
      v8 = 58;
      goto LABEL_8;
    }
    v51 = 0LL;
    sub_140010380((char *)&v51, v14 + 4, v16);
  }
  else
  {
    v51 = *((unsigned int *)v14 + 1);
  }
  if ( (unsigned __int16)v16 < 4u )
    v18 = 4;
  v12 += -4 - v18;
  if ( (unsigned __int16)v16 >= 4u )
  {
    _mm_lfence();
    v20 = *((unsigned __int16 *)v14 + 1);
  }
  else
  {
    v20 = 4LL;
  }
  v21 = &v14[v20 + 4];
  if ( v12 < 8 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v19 = 59;
    goto LABEL_28;
  }
  if ( (unsigned __int64)v21 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v8 = 60;
    goto LABEL_8;
  }
  if ( *(_WORD *)v21 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v8 = 61;
    goto LABEL_8;
  }
  v22 = 4LL;
  if ( *((_WORD *)v21 + 1) >= 4u )
    v22 = *((unsigned __int16 *)v21 + 1);
  if ( v12 < (unsigned __int64)(v22 + 4) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1072431096;
    v19 = 62;
    goto LABEL_28;
  }
  _mm_lfence();
  v23 = *((_DWORD *)v21 + 1);
  v50 = v23;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(80 * v23 + 24), 1919119952LL);
  v25 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool2 = v10;
  v26 = 4LL;
  *(_QWORD *)(Pool2 + 8) = v51;
  *(_DWORD *)(Pool2 + 16) = v23;
  v27 = *((_WORD *)v21 + 1);
  if ( v27 >= 4u )
    v26 = *((unsigned __int16 *)v21 + 1);
  v28 = -4 - v26 + v12;
  if ( v27 >= 4u )
  {
    _mm_lfence();
    v29 = *((unsigned __int16 *)v21 + 1);
  }
  else
  {
    v29 = 4LL;
  }
  v30 = &v21[v29 + 4];
  for ( i = 0; ; ++i )
  {
    if ( (unsigned __int64)v30 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
    {
      if ( i == v23 )
      {
        if ( i )
        {
          v7 = 0;
          *v52 = v25;
          return v7;
        }
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_102;
        v43 = 69;
      }
      else
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_102;
        v43 = 68;
      }
      goto LABEL_101;
    }
    if ( i == v23 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_102;
      v43 = 63;
LABEL_101:
      sub_140009A48((__int64)off_140018050->DeviceExtension, 2u, 1u, v43, (__int64)&unk_140012FE8, a2);
      goto LABEL_102;
    }
    if ( v28 < 8 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v42 = 64;
LABEL_88:
        LODWORD(v48) = v28;
        LODWORD(v47) = i + 3;
        sub_14000A340((__int64)off_140018050->DeviceExtension, v26, 4LL, v42, (__int64)&unk_140012FE8, a2, v47, v48);
      }
LABEL_102:
      v7 = -1072431096;
      goto LABEL_103;
    }
    if ( *(_WORD *)v30 != 3 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v47) = i + 3;
        sub_14000A1EC((__int64)off_140018050->DeviceExtension, v26, 4LL, 0x41u, (__int64)&unk_140012FE8, a2, v47);
      }
      goto LABEL_102;
    }
    v26 = *((unsigned __int16 *)v30 + 1);
    v32 = 4LL;
    if ( (unsigned __int16)v26 >= 4u )
      v32 = *((unsigned __int16 *)v30 + 1);
    if ( v28 < (unsigned __int64)(v32 + 4) )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v42 = 66;
        goto LABEL_88;
      }
      goto LABEL_102;
    }
    LODWORD(v48) = 1;
    v33 = &v93;
    v34 = 20LL * i;
    if ( !a3 )
      v33 = &v53;
    if ( (int)sub_14003F9A0(
                (_DWORD)v33,
                (unsigned int)(a3 != 0) + 10,
                (int)v30 + 4,
                v26,
                (__int64)&v25[v34 + 6],
                80,
                (__int64)"_LPI",
                v48) < 0 )
      break;
    v37 = &v25[v34 + 12];
    if ( *v37 != 127 )
      sub_140033E48(v37);
    v38 = &v25[v34 + 15];
    if ( *v38 != 127 )
      sub_140033E48(v38);
    v39 = &v25[v34 + 18];
    if ( *v39 != 127 )
      sub_140033E48(v39);
    v40 = *((_WORD *)v30 + 1);
    v26 = 4LL;
    if ( v40 >= 4u )
      v26 = *((unsigned __int16 *)v30 + 1);
    v28 += -4 - v26;
    v41 = 4LL;
    if ( v40 >= 4u )
      v41 = *((unsigned __int16 *)v30 + 1);
    v23 = v50;
    v30 += v41 + 4;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LODWORD(v47) = i + 3;
    sub_14000A1EC((__int64)off_140018050->DeviceExtension, v35, v36, 0x43u, (__int64)&unk_140012FE8, a2, v47);
  }
  v7 = -1072431089;
LABEL_103:
  for ( j = 0; j < v25[4]; ++j )
  {
    v45 = 20LL * j;
    if ( *(_QWORD *)&v25[v45 + 24] )
      RtlFreeUnicodeString((PUNICODE_STRING)&v25[v45 + 22]);
  }
  ExFreePoolWithTag(v25, 0);
  return v7;
}
