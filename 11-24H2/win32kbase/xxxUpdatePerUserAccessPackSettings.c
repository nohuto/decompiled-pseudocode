/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1400A0F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     FastGetProfileIntW @ 0x14009FA20 (FastGetProfileIntW.c)
 *     FastGetProfileStringW @ 0x14009FE20 (FastGetProfileStringW.c)
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     GetProcessLuid @ 0x1400A05A0 (GetProcessLuid.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400A0750 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A24D0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1400A2700 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1400A3940 (-CalculateMouseTable@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x14014D7E0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x14019ED60 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x14019F990 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1)
{
  char v1; // bl
  __int64 UserSessionState; // r13
  int v4; // r14d
  int v5; // r12d
  char v6; // di
  int v7; // edi
  char v8; // si
  int v9; // esi
  int v10; // ebx
  int ProfileStringW; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  volatile signed __int32 *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // ebx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // ebx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // ebx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rax
  int v82; // ebx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rax
  int v86; // ebx
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  int v93; // ebx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rax
  unsigned int v98; // eax
  __int64 v99; // rcx
  unsigned int v100; // eax
  _DWORD *v101; // rbx
  __int64 v102; // rcx
  __int64 v103; // rsi
  __int64 v104; // rcx
  __int16 v105; // bx
  __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  int v109; // edi
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rcx
  unsigned int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // rcx
  unsigned int v116; // eax
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rbx
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rcx
  unsigned int v124; // eax
  __int64 v125; // rcx
  void *v126; // rdi
  __int64 v127; // rbx
  NTSTATUS ValueKey; // eax
  int v129; // ecx
  int v130; // esi
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengtha; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthb; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthc; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthd; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthe; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthf; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthg; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthh; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthm; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthi; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthj; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthk; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthl; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengthn; // [rsp+30h] [rbp-D8h]
  _QWORD Value[3]; // [rsp+48h] [rbp-C0h] BYREF
  int v147; // [rsp+60h] [rbp-A8h] BYREF
  int v148; // [rsp+64h] [rbp-A4h]
  int v149; // [rsp+68h] [rbp-A0h]
  int v150; // [rsp+6Ch] [rbp-9Ch]
  struct _LUID DestinationString[3]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING String; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v153; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v154; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v155; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v156; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING v157; // [rsp+D8h] [rbp-30h] BYREF
  WCHAR v158[40]; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+138h] [rbp+30h] BYREF
  WCHAR v160[40]; // [rsp+188h] [rbp+80h] BYREF
  WCHAR v161[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  WCHAR v162[40]; // [rsp+228h] [rbp+120h] BYREF
  WCHAR v163[40]; // [rsp+278h] [rbp+170h] BYREF
  WCHAR v164[40]; // [rsp+2C8h] [rbp+1C0h] BYREF
  WCHAR v165[40]; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int16 v166[128]; // [rsp+368h] [rbp+260h] BYREF

  v1 = 0;
  DestinationString[0] = 0LL;
  LODWORD(Value[0]) = 0;
  UserSessionState = W32GetUserSessionState(a1);
  GetProcessLuid(0LL, DestinationString);
  if ( DestinationString[0].LowPart != 999 || (v4 = 1, DestinationString[0].HighPart) )
    v4 = 0;
  LODWORD(ResultLength) = 40;
  *(_OWORD *)&DestinationString[1].LowPart = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 15LL, L"Flags", 0LL, SourceString, (unsigned __int64)ResultLength, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], SourceString);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&DestinationString[1], 0xAu, (PULONG)Value);
  }
  LODWORD(ResultLengtha) = 40;
  v5 = Value[0] & 1;
  String = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 14LL, L"Flags", 0LL, v160, (unsigned __int64)ResultLengtha, 0) )
  {
    RtlInitUnicodeString(&String, v160);
    RtlUnicodeStringToInteger(&String, 0xAu, (PULONG)Value);
    v6 = Value[0];
  }
  else
  {
    v6 = 0;
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthb) = 40;
  v7 = v6 & 1;
  v153 = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 16LL, L"Flags", 0LL, v161, (unsigned __int64)ResultLengthb, 0) )
  {
    RtlInitUnicodeString(&v153, v161);
    RtlUnicodeStringToInteger(&v153, 0xAu, (PULONG)Value);
    v8 = Value[0];
  }
  else
  {
    v8 = 0;
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthc) = 40;
  v9 = v8 & 1;
  v154 = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 17LL, L"Flags", 0LL, v162, (unsigned __int64)ResultLengthc, 0) )
  {
    RtlInitUnicodeString(&v154, v162);
    RtlUnicodeStringToInteger(&v154, 0xAu, (PULONG)Value);
    v1 = Value[0];
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthd) = 40;
  v10 = v1 & 1;
  v150 = v10;
  v155 = 0LL;
  if ( !(unsigned int)FastGetProfileStringW(
                        a1,
                        27LL,
                        (const WCHAR *)L"On",
                        0LL,
                        v163,
                        (unsigned __int64)ResultLengthd,
                        0) )
  {
    LODWORD(Value[0]) = 0;
LABEL_17:
    v148 = 0;
    goto LABEL_18;
  }
  RtlInitUnicodeString(&v155, v163);
  RtlUnicodeStringToInteger(&v155, 0xAu, (PULONG)Value);
  if ( !LODWORD(Value[0]) )
    goto LABEL_17;
  v148 = 1;
LABEL_18:
  LODWORD(ResultLengthe) = 40;
  v156 = 0LL;
  if ( !(unsigned int)FastGetProfileStringW(
                        a1,
                        28LL,
                        (const WCHAR *)L"On",
                        0LL,
                        v164,
                        (unsigned __int64)ResultLengthe,
                        0) )
  {
    LODWORD(Value[0]) = 0;
LABEL_20:
    HIDWORD(Value[0]) = 0;
    goto LABEL_21;
  }
  RtlInitUnicodeString(&v156, v164);
  RtlUnicodeStringToInteger(&v156, 0xAu, (PULONG)Value);
  if ( !LODWORD(Value[0]) )
    goto LABEL_20;
  HIDWORD(Value[0]) = 1;
LABEL_21:
  LODWORD(ResultLengthf) = 40;
  v157 = 0LL;
  ProfileStringW = FastGetProfileStringW(a1, 18LL, L"Flags", 0LL, v165, (unsigned __int64)ResultLengthf, 0);
  if ( ProfileStringW )
  {
    RtlInitUnicodeString(&v157, v165);
    RtlUnicodeStringToInteger(&v157, 0xAu, (PULONG)Value);
    LOBYTE(ProfileStringW) = Value[0];
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  LODWORD(ResultLengthg) = 40;
  v149 = ProfileStringW & 1;
  *(_OWORD *)&Value[1] = 0LL;
  v12 = FastGetProfileStringW(a1, 29LL, L"Flags", 0LL, v158, (unsigned __int64)ResultLengthg, 0);
  if ( v12 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
    LOBYTE(v12) = Value[0];
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  v147 = v12 & 1;
  if ( v4 )
  {
    v14 = W32GetUserSessionState(v13);
    if ( v5 )
    {
      *(_DWORD *)(v14 + 67056) |= 1u;
      v16 = W32GetUserSessionState(v15);
      *(_DWORD *)(v16 + 20524) |= 1u;
    }
    else
    {
      *(_DWORD *)(v14 + 67056) &= ~1u;
      v18 = W32GetUserSessionState(v15);
      *(_DWORD *)(v18 + 20524) &= ~1u;
    }
    v19 = *(unsigned int *)(W32GetUserSessionState(v17) + 20628);
    if ( (v19 & 1) != 0 && !v5 )
      xxxTurnOffStickyKeys();
    v20 = W32GetUserSessionState(v19);
    if ( v7 )
    {
      *(_DWORD *)(v20 + 67056) |= 2u;
      v22 = W32GetUserSessionState(v21);
      *(_DWORD *)(v22 + 20628) |= 1u;
    }
    else
    {
      *(_DWORD *)(v20 + 67056) &= ~2u;
      v24 = W32GetUserSessionState(v21);
      *(_DWORD *)(v24 + 20628) &= ~1u;
    }
    v25 = W32GetUserSessionState(v23);
    if ( v9 )
    {
      *(_DWORD *)(v25 + 67056) |= 4u;
      v27 = W32GetUserSessionState(v26);
      *(_DWORD *)(v27 + 20636) |= 1u;
    }
    else
    {
      *(_DWORD *)(v25 + 67056) &= ~4u;
      v29 = W32GetUserSessionState(v26);
      *(_DWORD *)(v29 + 20636) &= ~1u;
    }
    v30 = W32GetUserSessionState(v28);
    if ( v10 )
    {
      *(_DWORD *)(v30 + 67056) |= 8u;
      v32 = W32GetUserSessionState(v31);
      *(_DWORD *)(v32 + 20972) |= 1u;
    }
    else
    {
      *(_DWORD *)(v30 + 67056) &= ~8u;
      v34 = W32GetUserSessionState(v31);
      *(_DWORD *)(v34 + 20972) &= ~1u;
    }
    v35 = W32GetUserSessionState(v33);
    if ( v149 )
    {
      *(_DWORD *)(v35 + 67056) |= 0x10u;
      v37 = W32GetUserSessionState(v36);
      *(_DWORD *)(v37 + 20948) |= 1u;
    }
    else
    {
      *(_DWORD *)(v35 + 67056) &= ~0x10u;
      v39 = W32GetUserSessionState(v36);
      *(_DWORD *)(v39 + 20948) &= ~1u;
    }
    v40 = W32GetUserSessionState(v38);
    if ( v148 )
    {
      *(_DWORD *)(v40 + 67056) |= 0x20u;
      v42 = W32GetUserSessionState(v41);
      *(_DWORD *)(v42 + 67056) |= 0x20000u;
      v44 = *(volatile signed __int32 **)(W32GetUserSessionState(v43) + 19928);
      _InterlockedOr(v44, 0x80u);
    }
    else
    {
      *(_DWORD *)(v40 + 67056) &= ~0x20u;
      v45 = W32GetUserSessionState(v41);
      *(_DWORD *)(v45 + 67056) &= ~0x20000u;
      v44 = *(volatile signed __int32 **)(W32GetUserSessionState(v46) + 19928);
      _InterlockedAnd(v44, 0xFFFFFF7F);
    }
    v47 = W32GetUserSessionState(v44);
    if ( HIDWORD(Value[0]) )
    {
      *(_DWORD *)(v47 + 67056) |= 0x40u;
      v49 = W32GetUserSessionState(v48);
      *(_DWORD *)(v49 + 67056) |= 0x40000u;
    }
    else
    {
      *(_DWORD *)(v47 + 67056) &= ~0x40u;
      v51 = W32GetUserSessionState(v48);
      *(_DWORD *)(v51 + 67056) &= ~0x40000u;
    }
    v52 = W32GetUserSessionState(v50);
    if ( v147 )
    {
      *(_DWORD *)(v52 + 67056) |= 0x80u;
LABEL_95:
      v88 = W32GetUserSessionState(v53);
      *(_DWORD *)(v88 + 21100) |= 1u;
      goto LABEL_60;
    }
    *(_DWORD *)(v52 + 67056) &= ~0x80u;
LABEL_59:
    v54 = W32GetUserSessionState(v53);
    *(_DWORD *)(v54 + 21100) &= ~1u;
    goto LABEL_60;
  }
  v56 = *(_DWORD *)(W32GetUserSessionState(v13) + 20524) & 1;
  v58 = *(_DWORD *)(W32GetUserSessionState(v57) + 67056) & 1;
  if ( v56 == (_DWORD)v58 )
  {
    v59 = W32GetUserSessionState(v58);
    if ( v5 )
      *(_DWORD *)(v59 + 20524) |= 1u;
    else
      *(_DWORD *)(v59 + 20524) &= ~1u;
  }
  v60 = *(_DWORD *)(W32GetUserSessionState(v58) + 20628) & 1;
  v62 = (*(_DWORD *)(W32GetUserSessionState(v61) + 67056) >> 1) & 1;
  if ( v60 == (_DWORD)v62 )
  {
    v63 = *(unsigned int *)(W32GetUserSessionState(v62) + 20628);
    if ( (v63 & 1) != 0 )
    {
      if ( !v7 )
      {
        xxxTurnOffStickyKeys();
LABEL_70:
        v64 = W32GetUserSessionState(v63);
        *(_DWORD *)(v64 + 20628) &= ~1u;
        goto LABEL_71;
      }
    }
    else if ( !v7 )
    {
      goto LABEL_70;
    }
    v69 = W32GetUserSessionState(v63);
    *(_DWORD *)(v69 + 20628) |= 1u;
  }
LABEL_71:
  v65 = *(_DWORD *)(W32GetUserSessionState(v62) + 20636) & 1;
  v67 = (*(_DWORD *)(W32GetUserSessionState(v66) + 67056) >> 2) & 1;
  if ( v65 == (_DWORD)v67 )
  {
    v68 = W32GetUserSessionState(v67);
    if ( v9 )
      *(_DWORD *)(v68 + 20636) |= 1u;
    else
      *(_DWORD *)(v68 + 20636) &= ~1u;
  }
  v70 = *(_DWORD *)(W32GetUserSessionState(v67) + 20972) & 1;
  v72 = (*(_DWORD *)(W32GetUserSessionState(v71) + 67056) >> 3) & 1;
  if ( v70 == (_DWORD)v72 )
  {
    v73 = W32GetUserSessionState(v72);
    if ( v150 )
      *(_DWORD *)(v73 + 20972) |= 1u;
    else
      *(_DWORD *)(v73 + 20972) &= ~1u;
  }
  v74 = *(_DWORD *)(W32GetUserSessionState(v72) + 20948) & 1;
  v76 = (*(_DWORD *)(W32GetUserSessionState(v75) + 67056) >> 4) & 1;
  if ( v74 == (_DWORD)v76 )
  {
    v77 = W32GetUserSessionState(v76);
    if ( v149 )
      *(_DWORD *)(v77 + 20948) |= 1u;
    else
      *(_DWORD *)(v77 + 20948) &= ~1u;
  }
  v78 = *(_DWORD *)(W32GetUserSessionState(v76) + 67056);
  v80 = (*(_DWORD *)(W32GetUserSessionState(v79) + 67056) >> 5) & 1;
  if ( ((v78 & 0x20000) != 0) == (_DWORD)v80 )
  {
    v81 = W32GetUserSessionState(v80);
    if ( v148 )
      *(_DWORD *)(v81 + 67056) |= 0x20000u;
    else
      *(_DWORD *)(v81 + 67056) &= ~0x20000u;
  }
  v82 = *(_DWORD *)(W32GetUserSessionState(v80) + 67056);
  v84 = (*(_DWORD *)(W32GetUserSessionState(v83) + 67056) >> 6) & 1;
  if ( ((v82 & 0x40000) != 0) == (_DWORD)v84 )
  {
    v85 = W32GetUserSessionState(v84);
    if ( HIDWORD(Value[0]) )
      *(_DWORD *)(v85 + 67056) |= 0x40000u;
    else
      *(_DWORD *)(v85 + 67056) &= ~0x40000u;
  }
  v86 = *(_DWORD *)(W32GetUserSessionState(v84) + 21100) & 1;
  v53 = (*(_DWORD *)(W32GetUserSessionState(v87) + 67056) >> 7) & 1;
  if ( v86 == (_DWORD)v53 )
  {
    if ( v147 )
      goto LABEL_95;
    goto LABEL_59;
  }
LABEL_60:
  LODWORD(ResultLengthh) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 15LL, L"Flags", 0LL, v158, (unsigned __int64)ResultLengthh, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 82;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v55) + 20524) & 1) != 0 )
    v89 = LODWORD(Value[0]) | 1;
  else
    v89 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v89;
  *(_DWORD *)(UserSessionState + 20524) = v89;
  FastGetProfileIntW(a1, 15LL, (__int64)L"DelayBeforeAcceptance", 0x3E8u, (PULONG)(UserSessionState + 20528), 0);
  FastGetProfileIntW(a1, 15LL, (__int64)L"AutoRepeatRate", 0x1F4u, (PULONG)(UserSessionState + 20536), 0);
  FastGetProfileIntW(a1, 15LL, (__int64)L"AutoRepeatDelay", 0x3E8u, (PULONG)(UserSessionState + 20532), 0);
  FastGetProfileIntW(a1, 15LL, (__int64)L"BounceTime", 0, (PULONG)(UserSessionState + 20540), 0);
  FastGetProfileIntW(a1, 19LL, (__int64)L"Flags", 2u, (PULONG)(UserSessionState + 21004), 0);
  FastGetProfileIntW(a1, 19LL, (__int64)L"FSTextEffect", 0, (PULONG)(UserSessionState + 21008), 0);
  FastGetProfileIntW(a1, 19LL, (__int64)L"WindowsEffect", 0, (PULONG)(UserSessionState + 21032), 0);
  LODWORD(ResultLengthm) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(
                       a1,
                       20LL,
                       (const WCHAR *)L"On",
                       0LL,
                       v158,
                       (unsigned __int64)ResultLengthm,
                       0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
    if ( LODWORD(Value[0]) )
    {
      v97 = W32GetUserSessionState(v90);
      *(_DWORD *)(v97 + 67056) |= 0x8000u;
      goto LABEL_103;
    }
  }
  else
  {
    LODWORD(Value[0]) = 0;
  }
  v91 = W32GetUserSessionState(v90);
  *(_DWORD *)(v91 + 67056) &= ~0x8000u;
LABEL_103:
  v93 = (*(_DWORD *)(W32GetUserSessionState(v92) + 67056) >> 15) & 1;
  LODWORD(ResultLengthi) = 40;
  v95 = *(_QWORD *)(W32GetUserSessionState(v94) + 19928);
  *(_OWORD *)&Value[1] = 0LL;
  *(_DWORD *)(v95 + 2176) = v93;
  if ( (unsigned int)FastGetProfileStringW(a1, 14LL, L"Flags", 0LL, v158, (unsigned __int64)ResultLengthi, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 466;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v96) + 20628) & 1) != 0 )
    v98 = LODWORD(Value[0]) | 1;
  else
    v98 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v98;
  *(_DWORD *)(UserSessionState + 20628) = v98;
  LODWORD(ResultLengthj) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 16LL, L"Flags", 0LL, v158, (unsigned __int64)ResultLengthj, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 18;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v99) + 20636) & 1) != 0 )
    v100 = LODWORD(Value[0]) | 1;
  else
    v100 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v100;
  *(_DWORD *)(UserSessionState + 20636) = v100;
  FastGetProfileIntW(a1, 16LL, (__int64)L"MaximumSpeed", 0x28u, (PULONG)(UserSessionState + 20640), 0);
  v101 = (_DWORD *)(UserSessionState + 20644);
  FastGetProfileIntW(a1, 16LL, (__int64)L"TimeToMaximumSpeed", 0xBB8u, (PULONG)(UserSessionState + 20644), 0);
  if ( (unsigned int)(*(_DWORD *)(UserSessionState + 20640) - 10) > 0x15E )
    *(_DWORD *)(UserSessionState + 20640) = 40;
  if ( (unsigned int)(*v101 - 1000) > 0xFA0 )
    *v101 = 3000;
  CalculateMouseTable();
  v103 = W32GetUserSessionState(v102);
  v105 = *(_WORD *)(W32GetUserSessionState(v104) + 13984);
  v107 = W32GetUserSessionState(v106);
  v108 = (unsigned __int64)(unsigned __int8)v105 >> 2;
  v109 = *(unsigned __int8 *)(v108 + v103 + 14336) & (1 << (2 * (*(_WORD *)(v107 + 13984) & 3) + 1));
  LOBYTE(v105) = (v109 != 0) ^ ((*(_DWORD *)(W32GetUserSessionState(v108) + 20636) & 0x80) != 0);
  *(_BYTE *)(W32GetUserSessionState(v110) + 20943) = v105;
  if ( (*(_DWORD *)(W32GetUserSessionState(v111) + 20636) & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  LODWORD(ResultLengthk) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 17LL, L"Flags", 0LL, v158, (unsigned __int64)ResultLengthk, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 18;
  }
  if ( (*(_DWORD *)(W32GetUserSessionState(v112) + 20972) & 1) != 0 )
    v113 = LODWORD(Value[0]) | 1;
  else
    v113 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v113;
  *(_DWORD *)(UserSessionState + 20972) = v113;
  LODWORD(ResultLengthl) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 18LL, L"Flags", 0LL, v158, (unsigned __int64)ResultLengthl, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 2;
  }
  v115 = *(unsigned int *)(W32GetUserSessionState(v114) + 20948);
  if ( (v115 & 1) != 0 )
    v116 = LODWORD(Value[0]) | 1;
  else
    v116 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v116;
  *(_DWORD *)(UserSessionState + 20948) = v116;
  if ( *(_QWORD *)(W32GetUserSessionState(v115) + 14072) )
  {
    v118 = *(_QWORD *)(W32GetUserSessionState(v117) + 14072);
    if ( *(_DWORD *)(v118 + 16) == 16 )
    {
      v118 = *(_QWORD *)(W32GetUserSessionState(v118) + 14072);
      if ( *(_QWORD *)(v118 + 24) )
      {
        v119 = *(_QWORD *)(W32GetUserSessionState(v118) + 14072);
        v120 = *(_QWORD *)(v119 + 24);
        *(_QWORD *)(W32GetUserSessionState(v119) + 14200) = v120;
      }
    }
    v121 = *(_QWORD *)(W32GetUserSessionState(v118) + 14072);
    if ( (*(_BYTE *)(v121 + 2) & 2) != 0 )
    {
      *(_WORD *)(W32GetUserSessionState(v121) + 13984) = 36;
      *(_WORD *)(W32GetUserSessionState(36LL) + 13986) = 21;
    }
  }
  FastGetProfileIntW(a1, 18LL, (__int64)L"TimeToWait", 0x493E0u, (PULONG)(UserSessionState + 20952), 0);
  LODWORD(ResultLengthn) = 40;
  *(_OWORD *)&Value[1] = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, 29LL, L"Flags", 0LL, v158, (unsigned __int64)ResultLengthn, 0) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], v158);
    RtlUnicodeStringToInteger((PCUNICODE_STRING)&Value[1], 0xAu, (PULONG)Value);
  }
  else
  {
    LODWORD(Value[0]) = 82;
  }
  v123 = *(unsigned int *)(W32GetUserSessionState(v122) + 21100);
  if ( (v123 & 1) != 0 )
    v124 = LODWORD(Value[0]) | 1;
  else
    v124 = Value[0] & 0xFFFFFFFE;
  LODWORD(Value[0]) = v124;
  *(_OWORD *)&Value[1] = 0LL;
  *(_DWORD *)(UserSessionState + 21100) = v124;
  HIDWORD(Value[0]) = 0;
  v147 = *(_DWORD *)(W32GetUserSessionState(v123) + 62824);
  while ( 1 )
  {
    v126 = OpenCacheKeyEx(a1, 29LL, 131097LL, &v147);
    if ( !v126 )
      break;
    HIDWORD(Value[0]) = 268;
    v127 = Win32AllocPoolWithQuotaZInitImpl(v125, 0x10CuLL, 0x72707355u);
    if ( !v127 )
      goto LABEL_157;
    RtlInitUnicodeString((PUNICODE_STRING)&Value[1], L"High Contrast Scheme");
    ValueKey = ZwQueryValueKey(
                 v126,
                 (PUNICODE_STRING)&Value[1],
                 KeyValuePartialInformation,
                 (PVOID)v127,
                 HIDWORD(Value[0]),
                 (PULONG)Value + 1);
    v129 = 0;
    if ( ValueKey != -2147483643 )
      v129 = ValueKey;
    if ( v129 >= 0 )
    {
      v130 = 128;
      if ( *(_DWORD *)(v127 + 8) >> 1 < 0x80u )
        v130 = *(_DWORD *)(v127 + 8) >> 1;
      if ( *(_DWORD *)(v127 + 8) < 2u )
      {
        v166[0] = 0;
      }
      else
      {
        *(_WORD *)(v127 + 2LL * (unsigned int)(v130 - 1) + 12) = 0;
        RtlStringCchCopyW((char *)v166, 128LL, (char *)(v127 + 12));
      }
      GreDeleteFastMutex((char *)v127);
      ZwClose(v126);
      if ( v130 )
        RtlStringCchCopyW((char *)(UserSessionState + 21112), 128LL, (char *)v166);
      break;
    }
    if ( !v147 )
    {
      GreDeleteFastMutex((char *)v127);
LABEL_157:
      ZwClose(v126);
      break;
    }
    GreDeleteFastMutex((char *)v127);
    ZwClose(v126);
  }
  *(_DWORD *)(UserSessionState + 21888) = 12;
  FastGetProfileIntW(a1, 48LL, (__int64)L"On", 0, (PULONG)(UserSessionState + 21892), 0);
  FastGetProfileIntW(a1, 48LL, (__int64)L"Locale", 0, (PULONG)(UserSessionState + 21896), 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
