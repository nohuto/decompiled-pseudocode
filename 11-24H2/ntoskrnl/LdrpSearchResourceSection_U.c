/*
 * XREFs of LdrpSearchResourceSection_U @ 0x140A0253C
 * Callers:
 *     LdrpGetRcConfig @ 0x14044EB54 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14044EC90 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrFindResourceDirectory_U @ 0x14077E630 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x14077E650 (LdrFindResourceEx_U.c)
 *     LdrFindResource_U @ 0x14077E690 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x14077EEE0 (RtlLoadString.c)
 *     RtlFindMessage @ 0x140A02480 (RtlFindMessage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     LdrIsResItemExist @ 0x14044EAD4 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14044EC90 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x140472754 (LdrpCompareResourceNamesWithValidation.c)
 *     LdrpGetParentLangId @ 0x1404B3A20 (LdrpGetParentLangId.c)
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(unsigned __int64 a1, __int64 *a2, unsigned int a3, int a4, __int64 *a5)
{
  int v5; // r15d
  int v6; // r12d
  __int64 *v7; // r13
  int v8; // eax
  unsigned __int16 v9; // r14
  __int64 v10; // rax
  char v11; // di
  unsigned int *v12; // r15
  const wchar_t *v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rsi
  char v21; // di
  int v22; // r9d
  char v23; // dl
  unsigned int v24; // ecx
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rdi
  unsigned int *v28; // rsi
  unsigned int *v29; // rax
  unsigned __int16 v30; // r12
  const wchar_t *v31; // r8
  bool v32; // cl
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 result; // rax
  __int16 v38; // ax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int16 v42; // cx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rax
  __int16 v47[2]; // [rsp+30h] [rbp-118h] BYREF
  char v48; // [rsp+34h] [rbp-114h]
  bool v49; // [rsp+35h] [rbp-113h]
  char v50; // [rsp+36h] [rbp-112h]
  int v51; // [rsp+38h] [rbp-110h]
  char v52; // [rsp+3Ch] [rbp-10Ch]
  int v53; // [rsp+40h] [rbp-108h]
  char v54; // [rsp+44h] [rbp-104h] BYREF
  char v55[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v56; // [rsp+48h] [rbp-100h]
  int v57; // [rsp+4Ch] [rbp-FCh] BYREF
  int v58; // [rsp+50h] [rbp-F8h]
  int v59; // [rsp+54h] [rbp-F4h]
  __int64 *v60; // [rsp+58h] [rbp-F0h]
  __int64 v61; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-E0h]
  __int64 v63; // [rsp+70h] [rbp-D8h]
  bool v64; // [rsp+78h] [rbp-D0h]
  char v65; // [rsp+79h] [rbp-CFh]
  __int16 v66; // [rsp+7Ch] [rbp-CCh]
  int v67; // [rsp+80h] [rbp-C8h]
  __int64 v68; // [rsp+88h] [rbp-C0h]
  __int64 v69; // [rsp+90h] [rbp-B8h]
  __int64 v70; // [rsp+98h] [rbp-B0h]
  __int64 v71; // [rsp+A0h] [rbp-A8h]
  unsigned int v72; // [rsp+A8h] [rbp-A0h]
  unsigned int *v73; // [rsp+B0h] [rbp-98h]
  unsigned int *v74; // [rsp+B8h] [rbp-90h]
  unsigned int *v75; // [rsp+C0h] [rbp-88h]
  int v76; // [rsp+C8h] [rbp-80h]
  __int64 v77; // [rsp+D0h] [rbp-78h]
  __int64 *v78; // [rsp+D8h] [rbp-70h]
  __int64 *v79; // [rsp+E0h] [rbp-68h]
  _QWORD v80[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-50h]
  __int64 v82; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v59 = a4;
  v6 = a3;
  v72 = a3;
  v7 = a2;
  v62 = a1;
  v60 = a5;
  v61 = 0LL;
  v78 = a2;
  v49 = 0;
  v52 = 1;
  v50 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v8 = 3;
  if ( a3 != 4 )
    v8 = a3;
  v56 = v8;
  v58 = v8;
  LOWORD(v53) = 0;
  v9 = 0;
  v47[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return 3221225485LL;
  }
  v43 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v57);
  v70 = v43;
  if ( !v43 )
    return 3221225609LL;
  v19 = v43;
  v68 = v43;
  v61 = 61166LL;
  v67 = 0;
  v20 = 0LL;
  v63 = 0LL;
  v71 = 0LL;
  v69 = 0LL;
  v77 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v56 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_120;
  if ( v56 == 3 )
    v22 = *((unsigned __int16 *)v7 + 8);
  else
    v22 = 0;
  v53 = v22;
  v66 = v22;
  v45 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v45 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v45, L"MUI") )
      goto LABEL_119;
    LOWORD(v22) = v53;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v22 & 0xF3FF) != 0 || (_WORD)v22 == 3072 )
  {
LABEL_119:
    v5 |= LdrIsResItemExist(v62, v7, v44);
    v59 = v5;
LABEL_120:
    LOWORD(v22) = v53;
    goto LABEL_121;
  }
  v5 |= 0x10u;
  v59 = v5;
LABEL_121:
  if ( PnPBootDriversInitialized == 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 )
  {
    v21 = 1;
    v48 = 1;
  }
  else
  {
    v21 = 0;
    v48 = 0;
  }
  if ( !PnPBootDriversInitialized || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v23 = 0;
    v50 = 0;
  }
  else
  {
    v23 = v50;
  }
  if ( !v21 && !v23 )
    goto LABEL_17;
  v80[0] = *v7;
  v24 = v56;
  if ( v56 < 2 )
    v46 = 0LL;
  else
    v46 = v7[1];
  v80[1] = v46;
  if ( v6 == 4 )
    v82 = v7[3];
LABEL_18:
  v25 = v58;
  if ( !v19 || (v26 = v58, v25 = v58 - 1, v58 = v25, v76 = v25, !v26) )
  {
    v15 = v69;
    goto LABEL_60;
  }
  if ( v25 )
    goto LABEL_21;
  if ( v23 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5 | 0x1000000u, v60);
    v51 = result;
    if ( (int)result >= 0 )
      return result;
    v25 = v58;
  }
  if ( v25 )
  {
LABEL_21:
    v15 = v69;
  }
  else
  {
    v15 = v69;
    if ( v56 == 3 )
      v15 = v19;
    v69 = v15;
    v77 = v15;
  }
  if ( !v15 )
    goto LABEL_23;
  v22 = *((unsigned __int16 *)v78 + 8);
  v53 = v22;
  v66 = v22;
  v32 = (v22 & 0x3FF) == 0;
  v49 = v32;
  v64 = v32;
  while ( 2 )
  {
    v33 = v67;
    while ( 1 )
    {
      v34 = v33++;
      v67 = v33;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v39 = v36 - 1;
            if ( !v39 )
            {
              if ( PsInstallUILanguageId == PsMachineUILanguageId )
                goto LABEL_90;
              if ( v21 )
              {
                v81 = (unsigned __int16)PsInstallUILanguageId;
                result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
                v51 = result;
                if ( (int)result >= 0 )
                  return result;
              }
              v38 = PsInstallUILanguageId;
              goto LABEL_87;
            }
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                if ( v41 != 1 )
                  goto LABEL_165;
                v5 |= 0x20u;
                v59 = v5;
              }
              else
              {
                v9 = 1033;
                v47[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033 || PsInstallUILanguageId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_90;
                if ( v21 )
                {
                  v81 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
                  v51 = result;
                  if ( (int)result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v9 = PsDefaultSystemLocaleId;
              v47[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
LABEL_90:
                v9 = v61;
                v47[0] = v61;
                goto LABEL_46;
              }
              if ( v21 )
              {
                v81 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
                v51 = result;
                if ( (int)result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v32 )
              goto LABEL_165;
            if ( v21 && PsMachineUILanguageId )
            {
              v81 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
              v51 = result;
              if ( (int)result >= 0 )
                return result;
              v38 = PsMachineUILanguageId;
LABEL_87:
              v9 = v38;
              v47[0] = v38;
              goto LABEL_46;
            }
            v42 = v61;
            if ( PsMachineUILanguageId )
              v42 = PsMachineUILanguageId;
            v9 = v42;
            v47[0] = v42;
          }
        }
        else
        {
          if ( v9 )
          {
            if ( (int)LdrpGetParentLangId(v9, v47) >= 0 )
            {
              v9 = v47[0];
            }
            else
            {
              v9 = 0;
              v47[0] = 0;
            }
          }
          if ( v21 )
          {
            if ( !v9 )
              goto LABEL_46;
            v81 = v9;
            result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
            v51 = result;
            if ( (int)result >= 0 )
              return result;
          }
          if ( v9 )
            v67 = --v33;
        }
      }
      else
      {
        if ( v21 && (_WORD)v22 )
        {
          v81 = (unsigned __int16)v22;
          result = LdrpLoadResourceFromAlternativeModule(v62, (__int64)v80, v6, v5, v60);
          v51 = result;
          if ( (int)result >= 0 )
            return result;
          LOWORD(v22) = v53;
        }
        v9 = v22;
        v47[0] = v22;
      }
LABEL_46:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v61 )
        break;
      LOWORD(v22) = v53;
      v32 = v49;
    }
    v61 = v9;
    v7 = &v61;
    v79 = &v61;
    v15 = v69;
    v19 = v69;
    v68 = v69;
    v25 = v58;
LABEL_23:
    v27 = *(unsigned __int16 *)(v19 + 12);
    LOWORD(v57) = v27;
    v28 = (unsigned int *)(v19 + 16);
    v74 = (unsigned int *)(v19 + 16);
    v16 = (unsigned __int16)v27;
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v28 += 2 * v27;
      v74 = v28;
      LOWORD(v27) = *(_WORD *)(v19 + 14);
      LOWORD(v57) = v27;
      v16 = (unsigned __int16)v27;
    }
    if ( !(_WORD)v16 )
    {
      v68 = 0LL;
      v52 = 0;
      v65 = 0;
      v21 = v48;
      LOWORD(v22) = v53;
      v24 = v56;
      goto LABEL_62;
    }
    if ( !v15 || (v5 & 0x20) == 0 )
    {
      v19 = 0LL;
      v68 = 0LL;
      v29 = &v28[2 * (unsigned __int16)v16 - 2];
      v75 = v29;
      while ( 1 )
      {
        if ( v28 > v29 )
          goto LABEL_15;
        v30 = (unsigned __int16)v27 >> 1;
        if ( !((unsigned __int16)v27 >> 1) )
        {
          if ( (_WORD)v27 )
          {
            v31 = (const wchar_t *)*v7;
            v55[0] = 0;
            v18 = v70;
            if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v16, v15, v31, v70, v28, v55) )
            {
              v17 = v28[1];
              if ( (v28[1] & 0x80000000) == 0 )
              {
                v20 = v17 + v18;
                goto LABEL_104;
              }
LABEL_14:
              v19 = v18 + (v17 & 0xFFFFFFFF7FFFFFFFuLL);
              v68 = v19;
            }
          }
LABEL_15:
          v20 = v63;
          goto LABEL_16;
        }
        v73 = v28;
        v10 = 2LL * v30;
        v11 = v27 & 1;
        if ( v11 )
          v12 = &v28[v10];
        else
          v12 = &v28[v10 - 2];
        v73 = v12;
        v13 = (const wchar_t *)*v7;
        v54 = 0;
        v14 = LdrpCompareResourceNamesWithValidation(v16, v15, v13, v70, v12, &v54);
        if ( !v14 )
        {
          v17 = v12[1];
          if ( (v12[1] & 0x80000000) != 0 )
          {
            v18 = v70;
            goto LABEL_14;
          }
          v19 = 0LL;
          v68 = 0LL;
          v20 = v17 + v70;
LABEL_104:
          v63 = v20;
          v71 = v20;
LABEL_16:
          v79 = ++v7;
          v5 = v59;
          v6 = v72;
          v21 = v48;
          LOWORD(v22) = v53;
          v23 = v50;
LABEL_17:
          v24 = v56;
          goto LABEL_18;
        }
        if ( v14 >= 0 )
          break;
        v29 = v12 - 2;
        v75 = v12 - 2;
        if ( v11 )
        {
          LOWORD(v57) = v30;
LABEL_75:
          LOWORD(v27) = v30;
        }
        else
        {
          LOWORD(v27) = v30 - 1;
          LOWORD(v57) = v30 - 1;
        }
      }
      v28 = v12 + 2;
      v74 = v12 + 2;
      LOWORD(v57) = v30;
      v29 = v75;
      goto LABEL_75;
    }
    v19 = 0LL;
    v68 = 0LL;
    v61 = *v28;
    v20 = v70 + v28[1];
    v71 = v20;
    v21 = v48;
    LOWORD(v22) = v53;
    v24 = v56;
LABEL_60:
    if ( v20 && (v5 & 2) == 0 )
    {
      *v60 = v20;
      goto LABEL_78;
    }
    if ( !v19 || (v5 & 2) == 0 )
    {
LABEL_62:
      switch ( v24 - v25 )
      {
        case 1u:
          result = 3221225610LL;
          goto LABEL_79;
        case 2u:
          result = 3221225611LL;
          break;
        case 3u:
          result = 3221225988LL;
          v51 = -1073741308;
          if ( !v15 )
            return result;
          v63 = 0LL;
          v71 = 0LL;
          if ( v52 )
          {
            v32 = v49;
            continue;
          }
LABEL_165:
          result = 3221225988LL;
          break;
        default:
          result = 3221225485LL;
          goto LABEL_79;
      }
      v51 = result;
      return result;
    }
    break;
  }
  *v60 = v19;
LABEL_78:
  result = 0LL;
LABEL_79:
  v51 = result;
  return result;
}
