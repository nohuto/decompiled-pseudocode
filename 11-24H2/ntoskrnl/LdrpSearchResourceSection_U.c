/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1409B999C
 * Callers:
 *     LdrpGetRcConfig @ 0x1402DC5EC (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1402DCCD4 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrFindResourceDirectory_U @ 0x14077E560 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x14077E580 (LdrFindResourceEx_U.c)
 *     LdrFindResource_U @ 0x14077E5C0 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x14077EE10 (RtlLoadString.c)
 *     RtlFindMessage @ 0x1409B98E0 (RtlFindMessage.c)
 * Callees:
 *     LdrIsResItemExist @ 0x1402DC488 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1402DCCD4 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x14046EA24 (LdrpCompareResourceNamesWithValidation.c)
 *     LdrpGetParentLangId @ 0x1404AE270 (LdrpGetParentLangId.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, ULONG a4, char **a5)
{
  ULONG v5; // r15d
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
  unsigned __int16 *v19; // rbx
  char *v20; // rsi
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
  NTSTATUS result; // eax
  __int16 v38; // ax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int16 v42; // cx
  char *v43; // rax
  unsigned __int64 v44; // rcx
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
  v43 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v69 = v43;
  if ( !v43 )
    return -1073741687;
  v19 = (unsigned __int16 *)v43;
  v67 = (__int64)v43;
  v60 = 61166LL;
  v66 = 0;
  v20 = 0LL;
  v62 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  v76 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v55 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_120;
  if ( v55 == 3 )
    v22 = *((unsigned __int16 *)v7 + 8);
  else
    v22 = 0;
  v52 = v22;
  v65 = v22;
  v44 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v44 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v44, L"MUI") )
      goto LABEL_119;
    LOWORD(v22) = v52;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v22 & 0xF3FF) != 0 || (_WORD)v22 == 3072 )
  {
LABEL_119:
    v5 |= LdrIsResItemExist(v61, (unsigned __int64 *)v7);
    v58 = v5;
LABEL_120:
    LOWORD(v22) = v52;
    goto LABEL_121;
  }
  v5 |= 0x10u;
  v58 = v5;
LABEL_121:
  if ( PnPBootDriversInitialized == 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 )
  {
    v21 = 1;
    v47 = 1;
  }
  else
  {
    v21 = 0;
    v47 = 0;
  }
  if ( !PnPBootDriversInitialized || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v23 = 0;
    v49 = 0;
  }
  else
  {
    v23 = v49;
  }
  if ( !v21 && !v23 )
    goto LABEL_17;
  v79[0] = *v7;
  v24 = v55;
  if ( v55 < 2 )
    v45 = 0LL;
  else
    v45 = v7[1];
  v79[1] = v45;
  if ( v6 == 4 )
    v81 = v7[3];
LABEL_18:
  v25 = v57;
  if ( !v19 || (v26 = v57, v25 = v57 - 1, v57 = v25, v75 = v25, !v26) )
  {
    v15 = v68;
    goto LABEL_60;
  }
  if ( v25 )
    goto LABEL_21;
  if ( v23 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5 | 0x1000000, v59);
    v50 = result;
    if ( result >= 0 )
      return result;
    v25 = v57;
  }
  if ( v25 )
  {
LABEL_21:
    v15 = v68;
  }
  else
  {
    v15 = v68;
    if ( v55 == 3 )
      v15 = (__int64)v19;
    v68 = v15;
    v76 = v15;
  }
  if ( !v15 )
    goto LABEL_23;
  v22 = *((unsigned __int16 *)v77 + 8);
  v52 = v22;
  v65 = v22;
  v32 = (v22 & 0x3FF) == 0;
  v48 = v32;
  v63 = v32;
  while ( 2 )
  {
    v33 = v66;
    while ( 1 )
    {
      v34 = v33++;
      v66 = v33;
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
                v80 = (unsigned __int16)PsInstallUILanguageId;
                result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
                v50 = result;
                if ( result >= 0 )
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
                v58 = v5;
              }
              else
              {
                v9 = 1033;
                v46[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033 || PsInstallUILanguageId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_90;
                if ( v21 )
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
LABEL_90:
                v9 = v60;
                v46[0] = v60;
                goto LABEL_46;
              }
              if ( v21 )
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
            if ( !v32 )
              goto LABEL_165;
            if ( v21 && PsMachineUILanguageId )
            {
              v80 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
              v50 = result;
              if ( result >= 0 )
                return result;
              v38 = PsMachineUILanguageId;
LABEL_87:
              v9 = v38;
              v46[0] = v38;
              goto LABEL_46;
            }
            v42 = v60;
            if ( PsMachineUILanguageId )
              v42 = PsMachineUILanguageId;
            v9 = v42;
            v46[0] = v42;
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
          if ( v21 )
          {
            if ( !v9 )
              goto LABEL_46;
            v80 = v9;
            result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
            v50 = result;
            if ( result >= 0 )
              return result;
          }
          if ( v9 )
            v66 = --v33;
        }
      }
      else
      {
        if ( v21 && (_WORD)v22 )
        {
          v80 = (unsigned __int16)v22;
          result = LdrpLoadResourceFromAlternativeModule(v61, (__int64)v79, v6, v5, v59);
          v50 = result;
          if ( result >= 0 )
            return result;
          LOWORD(v22) = v52;
        }
        v9 = v22;
        v46[0] = v22;
      }
LABEL_46:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v60 )
        break;
      LOWORD(v22) = v52;
      v32 = v48;
    }
    v60 = v9;
    v7 = &v60;
    v78 = &v60;
    v15 = v68;
    v19 = (unsigned __int16 *)v68;
    v67 = v68;
    v25 = v57;
LABEL_23:
    v27 = v19[6];
    LOWORD(Size) = v27;
    v28 = (unsigned int *)(v19 + 8);
    v73 = (unsigned int *)(v19 + 8);
    v16 = (unsigned __int16)v27;
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v28 += 2 * v27;
      v73 = v28;
      LOWORD(v27) = v19[7];
      LOWORD(Size) = v27;
      v16 = (unsigned __int16)v27;
    }
    if ( !(_WORD)v16 )
    {
      v67 = 0LL;
      v51 = 0;
      v64 = 0;
      v21 = v47;
      LOWORD(v22) = v52;
      v24 = v55;
      goto LABEL_62;
    }
    if ( !v15 || (v5 & 0x20) == 0 )
    {
      v19 = 0LL;
      v67 = 0LL;
      v29 = &v28[2 * (unsigned __int16)v16 - 2];
      v74 = v29;
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
            v54[0] = 0;
            v18 = (__int64)v69;
            if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(v16, v15, v31, (__int64)v69, v28, v54) )
            {
              v17 = v28[1];
              if ( (v28[1] & 0x80000000) == 0 )
              {
                v20 = (char *)(v17 + v18);
                goto LABEL_104;
              }
LABEL_14:
              v19 = (unsigned __int16 *)(v18 + (v17 & 0xFFFFFFFF7FFFFFFFuLL));
              v67 = (__int64)v19;
            }
          }
LABEL_15:
          v20 = v62;
          goto LABEL_16;
        }
        v72 = v28;
        v10 = 2LL * v30;
        v11 = v27 & 1;
        if ( v11 )
          v12 = &v28[v10];
        else
          v12 = &v28[v10 - 2];
        v72 = v12;
        v13 = (const wchar_t *)*v7;
        v53 = 0;
        v14 = LdrpCompareResourceNamesWithValidation(v16, v15, v13, (__int64)v69, v12, &v53);
        if ( !v14 )
        {
          v17 = v12[1];
          if ( (v12[1] & 0x80000000) != 0 )
          {
            v18 = (__int64)v69;
            goto LABEL_14;
          }
          v19 = 0LL;
          v67 = 0LL;
          v20 = &v69[v17];
LABEL_104:
          v62 = v20;
          v70 = v20;
LABEL_16:
          v78 = ++v7;
          v5 = v58;
          v6 = v71;
          v21 = v47;
          LOWORD(v22) = v52;
          v23 = v49;
LABEL_17:
          v24 = v55;
          goto LABEL_18;
        }
        if ( v14 >= 0 )
          break;
        v29 = v12 - 2;
        v74 = v12 - 2;
        if ( v11 )
        {
          LOWORD(Size) = v30;
LABEL_75:
          LOWORD(v27) = v30;
        }
        else
        {
          LOWORD(v27) = v30 - 1;
          LOWORD(Size) = v30 - 1;
        }
      }
      v28 = v12 + 2;
      v73 = v12 + 2;
      LOWORD(Size) = v30;
      v29 = v74;
      goto LABEL_75;
    }
    v19 = 0LL;
    v67 = 0LL;
    v60 = *v28;
    v20 = &v69[v28[1]];
    v70 = v20;
    v21 = v47;
    LOWORD(v22) = v52;
    v24 = v55;
LABEL_60:
    if ( v20 && (v5 & 2) == 0 )
    {
      *v59 = v20;
      goto LABEL_78;
    }
    if ( !v19 || (v5 & 2) == 0 )
    {
LABEL_62:
      switch ( v24 - v25 )
      {
        case 1u:
          result = -1073741686;
          goto LABEL_79;
        case 2u:
          result = -1073741685;
          break;
        case 3u:
          result = -1073741308;
          v50 = -1073741308;
          if ( !v15 )
            return result;
          v62 = 0LL;
          v70 = 0LL;
          if ( v51 )
          {
            v32 = v48;
            continue;
          }
LABEL_165:
          result = -1073741308;
          break;
        default:
          result = -1073741811;
          goto LABEL_79;
      }
      v50 = result;
      return result;
    }
    break;
  }
  *v59 = (char *)v19;
LABEL_78:
  result = 0;
LABEL_79:
  v50 = result;
  return result;
}
