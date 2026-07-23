/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x180075320
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpSetThreadPreferredLangList @ 0x180011370 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x180077060 (LdrpGetRcConfig.c)
 *     LdrpGetFromMUIMemCache @ 0x1800771B0 (LdrpGetFromMUIMemCache.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpIsReparsePoint @ 0x18007A600 (LdrpIsReparsePoint.c)
 *     LdrpGetParentLangId @ 0x180099B74 (LdrpGetParentLangId.c)
 *     LdrpMUIEtwOutput @ 0x1801107C8 (LdrpMUIEtwOutput.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(PVOID DllHandle, __int64 a2, DWORD a3, ULONG a4, __int64 *a5)
{
  PVOID v6; // r10
  unsigned int v7; // eax
  unsigned int v8; // esi
  LANGID v9; // r14
  __int64 v10; // r8
  unsigned int v11; // r12d
  __int64 v12; // r11
  __int64 v13; // rdx
  int v14; // ebx
  unsigned int i; // ecx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdi
  PVOID v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  int v23; // edx
  unsigned int *j; // rax
  int v26; // ecx
  __int16 v27; // ax
  _DWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  bool v31; // zf
  _DWORD *SharedData; // rcx
  __int64 v33; // rcx
  unsigned __int16 *MergedPrefLanguages; // rcx
  int v36; // ecx
  PVOID v37; // rdi
  __int64 v38; // rax
  PVOID v39; // rbx
  int ParentLangId; // eax
  unsigned int v41; // eax
  size_t v42; // rax
  int v43; // ecx
  _WORD v44[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v45; // [rsp+34h] [rbp-CCh]
  _BYTE v46[2]; // [rsp+36h] [rbp-CAh] BYREF
  int v47; // [rsp+38h] [rbp-C8h]
  char v48; // [rsp+3Ch] [rbp-C4h]
  char v49; // [rsp+3Dh] [rbp-C3h]
  PVOID DllHandlea; // [rsp+40h] [rbp-C0h]
  __int64 RcConfig; // [rsp+48h] [rbp-B8h]
  unsigned int v52; // [rsp+50h] [rbp-B0h]
  PVOID ResourceDllBase; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Lcid[2]; // [rsp+60h] [rbp-A0h] BYREF
  int *v55; // [rsp+68h] [rbp-98h]
  ULONG_PTR ResourceOffset; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v58; // [rsp+80h] [rbp-80h]
  _UNICODE_STRING String; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+98h] [rbp-68h]
  const wchar_t *v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  __int64 v63; // [rsp+B0h] [rbp-50h]
  _WORD v64[64]; // [rsp+C0h] [rbp-40h]

  DllHandlea = DllHandle;
  v6 = DllHandle;
  Lcid[1] = a3;
  v60 = a2;
  ResourceDllBase = 0LL;
  v7 = a3 - 3;
  v44[0] = 0;
  v49 = 0;
  v8 = -1073020927;
  ResourceOffset = 0LL;
  v9 = 0;
  v47 = 0;
  LODWORD(v10) = 0;
  v52 = 0;
  v11 = 0;
  RcConfig = 0LL;
  v12 = 0LL;
  Lcid[0] = 0;
  v48 = 0;
  String = 0LL;
  if ( v7 > 1 )
    return (unsigned int)-1073741583;
  v13 = *(unsigned __int16 *)(a2 + 16);
  v45 = v13;
  v46[0] = 0;
LABEL_3:
  while ( 1 )
  {
    v14 = v10;
    if ( (a4 & 0x1000000) != 0 )
      break;
    v26 = v10;
    v10 = (unsigned int)(v10 + 1);
    v47 = v10;
    if ( v26 == 2 )
    {
      v44[0] = 0;
      if ( !LdrpSetThreadPreferredLangList()
        || (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages, v52 >= MergedPrefLanguages[2])
        || (GetLCIDFromLangListNodeWithLICCheck(
              (_DWORD)MergedPrefLanguages,
              NtCurrentTeb()->MergedPrefLanguages,
              v52,
              (unsigned int)v44,
              (__int64)v46),
            (v9 = v44[0]) == 0) )
      {
        v9 = -4370;
        v44[0] = -4370;
LABEL_40:
        LODWORD(v10) = v47;
        goto LABEL_41;
      }
      if ( v46[0] && (a4 & 0x100000) != 0 )
      {
        v9 = -4370;
        v44[0] = -4370;
      }
      ++v52;
      LODWORD(v10) = v14;
      v47 = v14;
      goto LABEL_56;
    }
    if ( !v26 )
    {
      if ( (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
        v27 = v13;
      else
        v27 = -4370;
      v9 = v27;
      v44[0] = v27;
      goto LABEL_28;
    }
    v36 = v26 - 1;
    if ( v36 )
    {
      if ( v36 == 2 )
      {
        if ( (v12 || (RcConfig = LdrpGetRcConfig(v6), (v12 = RcConfig) != 0))
          && *(_DWORD *)v12 == -20054323
          && (*(_BYTE *)(v12 + 24) & 2) != 0
          && (v41 = *(_DWORD *)(v12 + 124)) != 0 )
        {
          *(_QWORD *)&String.Length = 0LL;
          String.Buffer = (wchar_t *)(v12 + v41);
          if ( String.Buffer )
          {
            v42 = 2 * wcslen((const wchar_t *)(v12 + v41));
            if ( v42 >= 0xFFFE )
              LOWORD(v42) = -4;
            String.Length = v42;
            String.MaximumLength = v42 + 2;
          }
          if ( !RtlCultureNameToLCID(&String, Lcid) )
          {
            v12 = RcConfig;
            v8 = -1073020923;
            goto LABEL_97;
          }
          v9 = Lcid[0];
          v44[0] = Lcid[0];
          if ( (a4 & 0x100000) != 0 )
          {
            GetLCIDFromLangListNodeWithLICCheck(
              v43,
              NtCurrentTeb()->MergedPrefLanguages,
              0,
              (unsigned int)v44,
              (__int64)v46);
            if ( v46[0] )
            {
              v9 = -4370;
              v44[0] = -4370;
              goto LABEL_40;
            }
            v9 = v44[0];
          }
          LODWORD(v10) = v47;
LABEL_56:
          v6 = DllHandlea;
          v13 = v45;
          v12 = RcConfig;
LABEL_28:
          if ( v9 != 0xEEEE )
            goto LABEL_5;
        }
        else
        {
LABEL_97:
          LODWORD(v10) = v47;
          v6 = DllHandlea;
          v9 = -4370;
          v13 = v45;
          v44[0] = -4370;
        }
      }
      else
      {
        if ( v49 || v48 || (int)LdrpIsReparsePoint(v6, v13, v10, 3072LL) < 0 )
          return v8;
        a4 |= 0x400000u;
        v48 = 1;
        LODWORD(v10) = 0;
        v47 = 0;
        v11 = 0;
        v52 = 0;
LABEL_41:
        v6 = DllHandlea;
        v13 = v45;
        v12 = RcConfig;
      }
    }
    else
    {
      if ( v9 == 0xEEEE )
        goto LABEL_59;
      if ( (a4 & 4) != 0 )
      {
        v9 = -4370;
        v44[0] = -4370;
        LODWORD(v10) = -2;
        v47 = -2;
      }
      else
      {
        if ( (v13 & 0x3FF) != 0 )
        {
          ParentLangId = LdrpGetParentLangId(v9, v44, v10);
          v6 = DllHandlea;
          v13 = v45;
          v12 = RcConfig;
          if ( ParentLangId >= 0 )
          {
            v9 = v44[0];
            if ( v44[0] )
            {
              LODWORD(v10) = v14;
              v47 = v14;
              goto LABEL_28;
            }
          }
          LODWORD(v10) = -2;
          v47 = -2;
        }
LABEL_59:
        v9 = -4370;
        v44[0] = -4370;
      }
    }
  }
  v9 = -3346;
  v44[0] = -3346;
LABEL_5:
  for ( i = 0; i < v11; ++i )
  {
    if ( v64[i] == v9 )
      goto LABEL_3;
  }
  if ( v11 >= 0x40 )
    return v8;
  v16 = v11;
  ResourceOffset = 0LL;
  ++v11;
  v64[v16] = v9;
  v17 = LdrLoadAlternateResourceModuleEx(v6, v9, &ResourceDllBase, &ResourceOffset, a4);
  v8 = v17;
  if ( v17 < 0 )
  {
    if ( v17 == -1073741772 || v17 == -1073741766 )
      v8 = -1073020927;
    v31 = (a4 & 0x1000000) == 0;
    goto LABEL_39;
  }
  v18 = v60;
  v19 = ResourceDllBase;
  v49 = 1;
  *(_QWORD *)(v60 + 16) = v9;
  v20 = LdrpSearchResourceSection_U(v19, (__int64)a5);
  v8 = v20;
  if ( (a4 & 0x40) == 0 )
    goto LABEL_62;
  if ( v20 < 0 )
    goto LABEL_63;
  v21 = *(_DWORD *)(v18 + 24);
  v22 = *a5;
  v55 = 0LL;
  if ( ResourceDllBase && v22 )
  {
    v8 = LdrpAccessResourceDataNoMultipleLanguage(ResourceDllBase);
    if ( (v8 & 0x80000000) == 0 )
    {
      v23 = *v55;
      for ( j = (unsigned int *)(v55 + 1); v23--; j += 3 )
      {
        if ( v21 >= *j && v21 <= j[1] )
        {
          v8 = 0;
          goto LABEL_20;
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
LABEL_62:
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_63:
    v37 = ResourceDllBase;
    v57 = 0LL;
    v38 = LdrpGetFromMUIMemCache(DllHandlea);
    v58 = (_DWORD *)v38;
    v28 = (_DWORD *)v38;
    if ( v38 != -1 )
    {
      if ( v38 )
        goto LABEL_114;
      v62 = 1LL;
      v61 = L"MUI";
      v39 = DllHandlea;
      v63 = 0LL;
      if ( (int)LdrpSearchResourceSection_U(DllHandlea, (__int64)&v57) < 0
        || (int)LdrpAccessResourceDataNoMultipleLanguage(v39) < 0
        || (v28 = v58, *v58 != -20054323) )
      {
        v28 = 0LL;
      }
      if ( v28 )
      {
LABEL_114:
        v29 = LdrpGetRcConfig(v37);
        if ( v29 )
        {
          if ( *v28 != -20054323 || *(_DWORD *)v29 != -20054323 )
            return v8;
          v30 = *(_QWORD *)(v28 + 7) - *(_QWORD *)(v29 + 28);
          if ( !v30 )
            v30 = *(_QWORD *)(v28 + 9) - *(_QWORD *)(v29 + 36);
          if ( !v30 )
            return v8;
        }
      }
    }
LABEL_38:
    v31 = (a4 & 0x1000000) == 0;
LABEL_39:
    if ( !v31 )
      return v8;
    goto LABEL_40;
  }
LABEL_20:
  if ( *a5 <= (unsigned __int64)ResourceDllBase
    || ResourceOffset && *a5 >= (unsigned __int64)ResourceDllBase + ResourceOffset )
  {
    *a5 = 0LL;
    v8 = -1073741701;
    DbgPrintEx(0x55u, 2u, "'LDR: %s(), invalid image format of MUI file \n", "LdrpLoadResourceFromAlternativeModule");
    goto LABEL_38;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v33 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v33 = 2147353477LL;
  if ( (*(_BYTE *)v33 & 2) != 0 )
    LdrpMUIEtwOutput(ResourceDllBase);
  if ( NtCurrentTeb()->ResourceRetValue )
    *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandlea;
  return v8;
}
