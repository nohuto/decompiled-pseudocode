/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x18005F740
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x1800615D0 (LdrpGetFromMUIMemCache.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180061A10 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpIsReparsePoint @ 0x180064A20 (LdrpIsReparsePoint.c)
 *     LdrpSetThreadPreferredLangList @ 0x18007CA30 (LdrpSetThreadPreferredLangList.c)
 *     LdrpGetParentLangId @ 0x1800D1514 (LdrpGetParentLangId.c)
 *     LdrpMUIEtwOutput @ 0x18011554C (LdrpMUIEtwOutput.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned __int16 v9; // r14
  __int64 v10; // r8
  unsigned int v11; // r12d
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // ebx
  unsigned int i; // ecx
  __int64 v17; // rax
  int AlternateResourceModule; // eax
  __int64 v19; // rdi
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  unsigned int v23; // ebx
  unsigned __int64 v24; // rdx
  int v25; // edx
  unsigned int *j; // rax
  __int64 v28; // rcx
  __int16 v29; // ax
  _DWORD *v30; // rbx
  __int64 RcConfig; // rax
  __int64 v32; // rcx
  bool v33; // zf
  _DWORD *SharedData; // rcx
  __int64 v35; // rcx
  unsigned __int16 *MergedPrefLanguages; // rcx
  int v38; // ecx
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  int ParentLangId; // eax
  unsigned int v44; // eax
  size_t v45; // rax
  int v46; // ecx
  unsigned int v47; // eax
  _WORD v48[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v49; // [rsp+34h] [rbp-CCh]
  _BYTE v50[2]; // [rsp+36h] [rbp-CAh] BYREF
  int v51; // [rsp+38h] [rbp-C8h]
  char v52; // [rsp+3Ch] [rbp-C4h]
  char v53; // [rsp+3Dh] [rbp-C3h]
  __int64 v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h]
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+64h] [rbp-9Ch]
  int *v60; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v63; // [rsp+80h] [rbp-80h] BYREF
  __int128 v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  _QWORD v66[20]; // [rsp+A0h] [rbp-60h] BYREF

  v54 = a1;
  v6 = a1;
  v59 = a3;
  v65 = a2;
  v57 = 0LL;
  v7 = a3 - 3;
  v48[0] = 0;
  v53 = 0;
  v8 = -1073020927;
  v61 = 0LL;
  v9 = 0;
  v51 = 0;
  LODWORD(v10) = 0;
  v56 = 0;
  v11 = 0;
  v55 = 0LL;
  v12 = 0LL;
  v58 = 0;
  v52 = 0;
  v64 = 0LL;
  if ( v7 > 1 )
    return (unsigned int)-1073741583;
  v13 = *(unsigned __int16 *)(a2 + 16);
  v49 = v13;
  v50[0] = 0;
LABEL_3:
  while ( 2 )
  {
    v14 = 3072LL;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_4:
        v15 = v10;
        if ( (a4 & 0x1000000) != 0 )
        {
          v9 = -3346;
          v48[0] = -3346;
LABEL_6:
          for ( i = 0; i < v11; ++i )
          {
            if ( *((_WORD *)&v66[4] + i) == v9 )
              goto LABEL_4;
          }
          if ( v11 >= 0x40 )
            return v8;
          v17 = v11;
          v61 = 0LL;
          ++v11;
          *((_WORD *)&v66[4] + v17) = v9;
          AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v6, v9, (unsigned int)&v57, (unsigned int)&v61, a4);
          v8 = AlternateResourceModule;
          if ( AlternateResourceModule < 0 )
          {
            if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
              v8 = -1073020927;
            v33 = (a4 & 0x1000000) == 0;
            goto LABEL_40;
          }
          v19 = v65;
          v20 = v57;
          v21 = v65;
          v53 = 1;
          *(_QWORD *)(v65 + 16) = v9;
          v22 = LdrpSearchResourceSection_U(v20, v21, 3, 33554480, (__int64)a5);
          v8 = v22;
          if ( (a4 & 0x40) != 0 )
          {
            if ( v22 < 0 )
              goto LABEL_63;
            v23 = *(_DWORD *)(v19 + 24);
            v24 = *a5;
            v60 = 0LL;
            if ( v57 && v24 )
            {
              v8 = LdrpAccessResourceDataNoMultipleLanguage(v57, v24, &v60, 0LL);
              if ( (v8 & 0x80000000) == 0 )
              {
                v25 = *v60;
                for ( j = (unsigned int *)(v60 + 1); v25--; j += 3 )
                {
                  if ( v23 >= *j && v23 <= j[1] )
                  {
                    v8 = 0;
                    goto LABEL_21;
                  }
                }
                v8 = -1073741559;
              }
            }
            else
            {
              v8 = -1073741811;
            }
            *a5 = 0LL;
          }
          if ( (v8 & 0x80000000) == 0 )
          {
LABEL_21:
            if ( *a5 > v57 && (!v61 || *a5 < v61 + v57) )
            {
              SharedData = NtCurrentPeb()->SharedData;
              if ( SharedData && *SharedData )
                v35 = (__int64)NtCurrentPeb()->SharedData + 555;
              else
                v35 = 2147353477LL;
              if ( (*(_BYTE *)v35 & 2) != 0 )
              {
                if ( (a4 & 0x40) != 0 )
                {
                  v47 = 9;
                }
                else
                {
                  v47 = 3;
                  if ( (a4 & 1) != 0 )
                    v47 = 5;
                }
                LdrpMUIEtwOutput(v57, v19, v59, v47);
              }
              if ( NtCurrentTeb()->ResourceRetValue )
                *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v54;
              return v8;
            }
            *a5 = 0LL;
            v8 = -1073741701;
            DbgPrintEx(
              85,
              2,
              "'LDR: %s(), invalid image format of MUI file \n",
              "LdrpLoadResourceFromAlternativeModule");
LABEL_39:
            v33 = (a4 & 0x1000000) == 0;
LABEL_40:
            if ( !v33 )
              return v8;
LABEL_41:
            LODWORD(v10) = v51;
LABEL_42:
            v6 = v54;
            v13 = v49;
            v12 = v55;
            goto LABEL_3;
          }
LABEL_63:
          v39 = v57;
          v62 = 0LL;
          v40 = LdrpGetFromMUIMemCache(v54, 0LL, 0LL, 8LL);
          v63 = (_DWORD *)v40;
          v30 = (_DWORD *)v40;
          if ( v40 != -1 )
          {
            if ( v40 )
              goto LABEL_120;
            v66[1] = 1LL;
            v66[0] = L"MUI";
            v42 = v54;
            v66[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(v54, (unsigned int)v66, 3, 33554480, (__int64)&v62) < 0
              || (int)LdrpAccessResourceDataNoMultipleLanguage(v42, v62, &v63, &v60) < 0
              || (v30 = v63, *v63 != -20054323) )
            {
              v30 = 0LL;
            }
            if ( v30 )
            {
LABEL_120:
              RcConfig = LdrpGetRcConfig(v39, v41, 0LL, 0LL);
              if ( RcConfig )
              {
                if ( *v30 != -20054323 || *(_DWORD *)RcConfig != -20054323 )
                  return v8;
                v32 = *(_QWORD *)(v30 + 7) - *(_QWORD *)(RcConfig + 28);
                if ( !v32 )
                  v32 = *(_QWORD *)(v30 + 9) - *(_QWORD *)(RcConfig + 36);
                if ( !v32 )
                  return v8;
              }
            }
          }
          goto LABEL_39;
        }
        v28 = (unsigned int)v10;
        v10 = (unsigned int)(v10 + 1);
        v51 = v10;
        if ( (_DWORD)v28 != 2 )
          break;
        v48[0] = 0;
        if ( !(unsigned __int8)LdrpSetThreadPreferredLangList(v28, v13, v10, 3072LL)
          || (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
              v56 >= MergedPrefLanguages[2])
          || (GetLCIDFromLangListNodeWithLICCheck(
                (_DWORD)MergedPrefLanguages,
                NtCurrentTeb()->MergedPrefLanguages,
                v56,
                (unsigned int)v48,
                (__int64)v50),
              (v9 = v48[0]) == 0) )
        {
          v9 = -4370;
          v48[0] = -4370;
          goto LABEL_41;
        }
        if ( v50[0] && (a4 & 0x100000) != 0 )
        {
          v9 = -4370;
          v48[0] = -4370;
        }
        ++v56;
        LODWORD(v10) = v15;
        v51 = v15;
LABEL_56:
        v6 = v54;
        v14 = 3072LL;
        v13 = v49;
        v12 = v55;
LABEL_29:
        if ( v9 != 0xEEEE )
          goto LABEL_6;
      }
      if ( !(_DWORD)v28 )
      {
        if ( (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
          v29 = v13;
        else
          v29 = -4370;
        v9 = v29;
        v48[0] = v29;
        goto LABEL_29;
      }
      v38 = v28 - 1;
      if ( v38 )
        break;
      if ( v9 == 0xEEEE )
        goto LABEL_59;
      if ( (a4 & 4) != 0 )
      {
        v9 = -4370;
        v48[0] = -4370;
        LODWORD(v10) = -2;
        v51 = -2;
      }
      else
      {
        if ( (v13 & 0x3FF) != 0 )
        {
          ParentLangId = LdrpGetParentLangId(v9, v48, v10, 3072LL);
          v6 = v54;
          v14 = 3072LL;
          v13 = v49;
          v12 = v55;
          if ( ParentLangId >= 0 )
          {
            v9 = v48[0];
            if ( v48[0] )
            {
              LODWORD(v10) = v15;
              v51 = v15;
              goto LABEL_29;
            }
          }
          LODWORD(v10) = -2;
          v51 = -2;
        }
LABEL_59:
        v9 = -4370;
        v48[0] = -4370;
      }
    }
    if ( v38 == 2 )
    {
      if ( !v12 )
      {
        LOBYTE(v14) = 1;
        v55 = LdrpGetRcConfig(v6, v13, 0LL, v14);
        v12 = v55;
        if ( !v55 )
          goto LABEL_97;
      }
      if ( *(_DWORD *)v12 != -20054323 )
        goto LABEL_97;
      if ( (*(_BYTE *)(v12 + 24) & 2) == 0 )
        goto LABEL_97;
      v44 = *(_DWORD *)(v12 + 124);
      if ( !v44 )
        goto LABEL_97;
      *(_QWORD *)&v64 = 0LL;
      *((_QWORD *)&v64 + 1) = v12 + v44;
      if ( *((_QWORD *)&v64 + 1) )
      {
        v45 = 2 * wcslen((const wchar_t *)(v12 + v44));
        if ( v45 >= 0xFFFE )
          LOWORD(v45) = -4;
        LOWORD(v64) = v45;
        WORD1(v64) = v45 + 2;
      }
      if ( !RtlCultureNameToLCID((unsigned __int16 *)&v64, &v58) )
      {
        v12 = v55;
        v8 = -1073020923;
LABEL_97:
        LODWORD(v10) = v51;
        v6 = v54;
        v9 = -4370;
        v13 = v49;
        v48[0] = -4370;
        continue;
      }
      v9 = v58;
      v48[0] = v58;
      if ( (a4 & 0x100000) != 0 )
      {
        GetLCIDFromLangListNodeWithLICCheck(
          v46,
          NtCurrentTeb()->MergedPrefLanguages,
          0,
          (unsigned int)v48,
          (__int64)v50);
        if ( v50[0] )
        {
          v9 = -4370;
          v48[0] = -4370;
          goto LABEL_41;
        }
        v9 = v48[0];
      }
      LODWORD(v10) = v51;
      goto LABEL_56;
    }
    break;
  }
  if ( !v53 && !v52 && (int)LdrpIsReparsePoint(v6, v13, v10, 3072LL) >= 0 )
  {
    a4 |= 0x400000u;
    v52 = 1;
    LODWORD(v10) = 0;
    v51 = 0;
    v11 = 0;
    v56 = 0;
    goto LABEL_42;
  }
  return v8;
}
