/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1409AE35C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1402F329C (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x1402F38B8 (LdrpGetRcConfig.c)
 *     LdrFindResourceDirectory_U @ 0x14076F3E0 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x14076F400 (LdrFindResourceEx_U.c)
 *     LdrFindResource_U @ 0x14076F440 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x14076FC90 (RtlLoadString.c)
 *     RtlFindMessage @ 0x1409AE2A0 (RtlFindMessage.c)
 * Callees:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1402F329C (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x1402F3E1C (LdrIsResItemExist.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1404737B4 (LdrpCompareResourceNamesWithValidation.c)
 *     LdrpGetParentLangId @ 0x1404B40F0 (LdrpGetParentLangId.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, ULONG a4, char **a5)
{
  ULONG v5; // r15d
  int v6; // r12d
  __int64 *v7; // r13
  int v8; // eax
  unsigned __int16 v9; // r14
  char *v10; // rax
  unsigned __int16 *v11; // rbx
  char *v12; // rsi
  int v13; // r9d
  __int64 v14; // rcx
  char v15; // di
  char v16; // dl
  __int64 v17; // rax
  char v18; // di
  unsigned int *v19; // r15
  const wchar_t *v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // ecx
  int v27; // r8d
  int v28; // eax
  __int64 v29; // rdi
  unsigned int *v30; // rsi
  unsigned int *v31; // rax
  unsigned __int16 v32; // r12
  const wchar_t *v33; // r8
  bool v34; // cl
  int v35; // ebx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  NTSTATUS result; // eax
  __int16 v40; // ax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int16 v44; // cx
  __int64 v45; // rax
  __int16 v46[2]; // [rsp+30h] [rbp-118h] BYREF
  char v47; // [rsp+34h] [rbp-114h]
  bool v48; // [rsp+35h] [rbp-113h]
  char v49; // [rsp+36h] [rbp-112h]
  int v50; // [rsp+38h] [rbp-110h]
  char v51; // [rsp+3Ch] [rbp-10Ch]
  int v52; // [rsp+40h] [rbp-108h]
  char v53; // [rsp+44h] [rbp-104h] BYREF
  char v54[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-100h]
  ULONG Size; // [rsp+4Ch] [rbp-FCh] BYREF
  int v57; // [rsp+50h] [rbp-F8h]
  ULONG v58; // [rsp+54h] [rbp-F4h]
  char **v59; // [rsp+58h] [rbp-F0h]
  __int64 v60; // [rsp+60h] [rbp-E8h] BYREF
  void *v61; // [rsp+68h] [rbp-E0h]
  char *v62; // [rsp+70h] [rbp-D8h]
  bool v63; // [rsp+78h] [rbp-D0h]
  char v64; // [rsp+79h] [rbp-CFh]
  __int16 v65; // [rsp+7Ch] [rbp-CCh]
  int v66; // [rsp+80h] [rbp-C8h]
  __int64 v67; // [rsp+88h] [rbp-C0h]
  __int64 v68; // [rsp+90h] [rbp-B8h]
  char *v69; // [rsp+98h] [rbp-B0h]
  char *v70; // [rsp+A0h] [rbp-A8h]
  unsigned int v71; // [rsp+A8h] [rbp-A0h]
  unsigned int *v72; // [rsp+B0h] [rbp-98h]
  unsigned int *v73; // [rsp+B8h] [rbp-90h]
  unsigned int *v74; // [rsp+C0h] [rbp-88h]
  int v75; // [rsp+C8h] [rbp-80h]
  __int64 v76; // [rsp+D0h] [rbp-78h]
  __int64 *v77; // [rsp+D8h] [rbp-70h]
  __int64 *v78; // [rsp+E0h] [rbp-68h]
  _QWORD v79[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-50h]
  __int64 v81; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v58 = a4;
  v6 = a3;
  v71 = a3;
  v7 = a2;
  v61 = a1;
  v59 = a5;
  v60 = 0LL;
  v77 = a2;
  v48 = 0;
  v51 = 1;
  v49 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return -1073741583;
  v8 = 3;
  if ( a3 != 4 )
    v8 = a3;
  v55 = v8;
  v57 = v8;
  LOWORD(v52) = 0;
  v9 = 0;
  v46[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v10 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v69 = v10;
  if ( !v10 )
    return -1073741687;
  v11 = (unsigned __int16 *)v10;
  v67 = (__int64)v10;
  v60 = 61166LL;
  v66 = 0;
  v12 = 0LL;
  v62 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  v76 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v55 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_19;
  if ( v55 == 3 )
    v13 = *((unsigned __int16 *)v7 + 8);
  else
    v13 = 0;
  v52 = v13;
  v65 = v13;
  v14 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v14, L"MUI") )
      goto LABEL_18;
    LOWORD(v13) = v52;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
  {
LABEL_18:
    v5 |= LdrIsResItemExist(v61, v7);
    v58 = v5;
LABEL_19:
    LOWORD(v13) = v52;
    goto LABEL_20;
  }
  v5 |= 0x10u;
  v58 = v5;
LABEL_20:
  if ( PnPBootDriversInitialized == 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 )
  {
    v15 = 1;
    v47 = 1;
  }
  else
  {
    v15 = 0;
    v47 = 0;
  }
  if ( !PnPBootDriversInitialized || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v16 = 0;
    v49 = 0;
  }
  else
  {
    v16 = v49;
  }
  if ( !v15 && !v16 )
    goto LABEL_35;
  v79[0] = *v7;
  v26 = v55;
  if ( v55 < 2 )
    v45 = 0LL;
  else
    v45 = v7[1];
  v79[1] = v45;
  if ( v6 == 4 )
    v81 = v7[3];
LABEL_36:
  v27 = v57;
  if ( !v11 || (v28 = v57, v27 = v57 - 1, v57 = v27, v75 = v27, !v28) )
  {
    v22 = v68;
    goto LABEL_78;
  }
  if ( v27 )
    goto LABEL_39;
  if ( v16 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5 | 0x1000000, v59);
    v50 = result;
    if ( result >= 0 )
      return result;
    v27 = v57;
  }
  if ( v27 )
  {
LABEL_39:
    v22 = v68;
  }
  else
  {
    v22 = v68;
    if ( v55 == 3 )
      v22 = (__int64)v11;
    v68 = v22;
    v76 = v22;
  }
  if ( !v22 )
    goto LABEL_41;
  v13 = *((unsigned __int16 *)v77 + 8);
  v52 = v13;
  v65 = v13;
  v34 = (v13 & 0x3FF) == 0;
  v48 = v34;
  v63 = v34;
  while ( 2 )
  {
    v35 = v66;
    while ( 1 )
    {
      v36 = v35++;
      v66 = v35;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            v41 = v38 - 1;
            if ( !v41 )
            {
              if ( PsInstallUILanguageId == PsMachineUILanguageId )
                goto LABEL_108;
              if ( v15 )
              {
                v80 = (unsigned __int16)PsInstallUILanguageId;
                result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
                v50 = result;
                if ( result >= 0 )
                  return result;
              }
              v40 = PsInstallUILanguageId;
              goto LABEL_105;
            }
            v42 = v41 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                if ( v43 != 1 )
                  goto LABEL_163;
                v5 |= 0x20u;
                v58 = v5;
              }
              else
              {
                v9 = 1033;
                v46[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033 || PsInstallUILanguageId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_108;
                if ( v15 )
                {
                  v80 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
                  v50 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v9 = PsDefaultSystemLocaleId;
              v46[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
LABEL_108:
                v9 = v60;
                v46[0] = v60;
                goto LABEL_64;
              }
              if ( v15 )
              {
                v80 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
                v50 = result;
                if ( result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v34 )
              goto LABEL_163;
            if ( v15 && PsMachineUILanguageId )
            {
              v80 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
              v50 = result;
              if ( result >= 0 )
                return result;
              v40 = PsMachineUILanguageId;
LABEL_105:
              v9 = v40;
              v46[0] = v40;
              goto LABEL_64;
            }
            v44 = v60;
            if ( PsMachineUILanguageId )
              v44 = PsMachineUILanguageId;
            v9 = v44;
            v46[0] = v44;
          }
        }
        else
        {
          if ( v9 )
          {
            if ( (int)LdrpGetParentLangId(v9, v46) >= 0 )
            {
              v9 = v46[0];
            }
            else
            {
              v9 = 0;
              v46[0] = 0;
            }
          }
          if ( v15 )
          {
            if ( !v9 )
              goto LABEL_64;
            v80 = v9;
            result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
            v50 = result;
            if ( result >= 0 )
              return result;
          }
          if ( v9 )
            v66 = --v35;
        }
      }
      else
      {
        if ( v15 && (_WORD)v13 )
        {
          v80 = (unsigned __int16)v13;
          result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
          v50 = result;
          if ( result >= 0 )
            return result;
          LOWORD(v13) = v52;
        }
        v9 = v13;
        v46[0] = v13;
      }
LABEL_64:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v60 )
        break;
      LOWORD(v13) = v52;
      v34 = v48;
    }
    v60 = v9;
    v7 = &v60;
    v78 = &v60;
    v22 = v68;
    v11 = (unsigned __int16 *)v68;
    v67 = v68;
    v27 = v57;
LABEL_41:
    v29 = v11[6];
    LOWORD(Size) = v29;
    v30 = (unsigned int *)(v11 + 8);
    v73 = (unsigned int *)(v11 + 8);
    v23 = (unsigned __int16)v29;
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v30 += 2 * v29;
      v73 = v30;
      LOWORD(v29) = v11[7];
      LOWORD(Size) = v29;
      v23 = (unsigned __int16)v29;
    }
    if ( !(_WORD)v23 )
    {
      v67 = 0LL;
      v51 = 0;
      v64 = 0;
      v15 = v47;
      LOWORD(v13) = v52;
      v26 = v55;
      goto LABEL_80;
    }
    if ( !v22 || (v5 & 0x20) == 0 )
    {
      v11 = 0LL;
      v67 = 0LL;
      v31 = &v30[2 * (unsigned __int16)v23 - 2];
      v74 = v31;
      while ( 1 )
      {
        if ( v30 > v31 )
          goto LABEL_33;
        v32 = (unsigned __int16)v29 >> 1;
        if ( !((unsigned __int16)v29 >> 1) )
        {
          if ( (_WORD)v29 )
          {
            v33 = (const wchar_t *)*v7;
            v54[0] = 0;
            v25 = (__int64)v69;
            if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v23, v22, v33, (__int64)v69, v30, v54) )
            {
              v24 = v30[1];
              if ( (v30[1] & 0x80000000) == 0 )
              {
                v12 = (char *)(v24 + v25);
                goto LABEL_122;
              }
LABEL_32:
              v11 = (unsigned __int16 *)(v25 + (v24 & 0xFFFFFFFF7FFFFFFFuLL));
              v67 = (__int64)v11;
            }
          }
LABEL_33:
          v12 = v62;
          goto LABEL_34;
        }
        v72 = v30;
        v17 = 2LL * v32;
        v18 = v29 & 1;
        if ( v18 )
          v19 = &v30[v17];
        else
          v19 = &v30[v17 - 2];
        v72 = v19;
        v20 = (const wchar_t *)*v7;
        v53 = 0;
        v21 = LdrpCompareResourceNamesWithValidation(v23, v22, v20, (__int64)v69, v19, &v53);
        if ( !v21 )
        {
          v24 = v19[1];
          if ( (v19[1] & 0x80000000) != 0 )
          {
            v25 = (__int64)v69;
            goto LABEL_32;
          }
          v11 = 0LL;
          v67 = 0LL;
          v12 = &v69[v24];
LABEL_122:
          v62 = v12;
          v70 = v12;
LABEL_34:
          v78 = ++v7;
          v5 = v58;
          v6 = v71;
          v15 = v47;
          LOWORD(v13) = v52;
          v16 = v49;
LABEL_35:
          v26 = v55;
          goto LABEL_36;
        }
        if ( v21 >= 0 )
          break;
        v31 = v19 - 2;
        v74 = v19 - 2;
        if ( v18 )
        {
          LOWORD(Size) = v32;
LABEL_93:
          LOWORD(v29) = v32;
        }
        else
        {
          LOWORD(v29) = v32 - 1;
          LOWORD(Size) = v32 - 1;
        }
      }
      v30 = v19 + 2;
      v73 = v19 + 2;
      LOWORD(Size) = v32;
      v31 = v74;
      goto LABEL_93;
    }
    v11 = 0LL;
    v67 = 0LL;
    v60 = *v30;
    v12 = &v69[v30[1]];
    v70 = v12;
    v15 = v47;
    LOWORD(v13) = v52;
    v26 = v55;
LABEL_78:
    if ( v12 && (v5 & 2) == 0 )
    {
      *v59 = v12;
      goto LABEL_96;
    }
    if ( !v11 || (v5 & 2) == 0 )
    {
LABEL_80:
      switch ( v26 - v27 )
      {
        case 1u:
          result = -1073741686;
          goto LABEL_97;
        case 2u:
          result = -1073741685;
          break;
        case 3u:
          result = -1073741308;
          v50 = -1073741308;
          if ( !v22 )
            return result;
          v62 = 0LL;
          v70 = 0LL;
          if ( v51 )
          {
            v34 = v48;
            continue;
          }
LABEL_163:
          result = -1073741308;
          break;
        default:
          result = -1073741811;
          goto LABEL_97;
      }
      v50 = result;
      return result;
    }
    break;
  }
  *v59 = (char *)v11;
LABEL_96:
  result = 0;
LABEL_97:
  v50 = result;
  return result;
}
