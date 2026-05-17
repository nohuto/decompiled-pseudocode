/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x1800F16E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180061A10 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18007CA30 (LdrpSetThreadPreferredLangList.c)
 *     LdrpCompareServiceChecksum @ 0x1800F1AFC (LdrpCompareServiceChecksum.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModule(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  int v7; // r14d
  __int64 v8; // r10
  __int64 v9; // rdx
  _DWORD *RcConfig; // rdi
  int AlternateResourceModule; // esi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r15d
  unsigned __int16 v15; // bx
  unsigned int i; // ecx
  __int64 *v17; // r8
  int v19; // eax
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  const wchar_t *v24; // rcx
  size_t v25; // rax
  bool v26[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v27[2]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+3Ch] [rbp-C4h]
  unsigned int v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 *v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  _WORD v37[64]; // [rsp+80h] [rbp-80h] BYREF

  v34 = a2;
  v31 = a1;
  v7 = 0;
  memset_thunk_772440563353939046(v37, 0, 0x80uLL);
  v8 = v31;
  v28 = 0;
  v9 = 0LL;
  v30 = 0;
  v32 = 0;
  RcConfig = 0LL;
  v33 = 0LL;
  AlternateResourceModule = -1073020927;
  v35 = 0LL;
  v36 = 0LL;
  if ( !v31 || !a2 )
    return 3221225485LL;
  v26[0] = 0;
  v12 = a4 & 0x1000000;
  v29 = a4 & 0x1000000;
LABEL_4:
  while ( 2 )
  {
    v13 = 61166LL;
    do
    {
      v14 = v7;
      if ( v12 )
      {
        v15 = -3346;
        goto LABEL_7;
      }
      while ( 1 )
      {
        v19 = v7++;
        if ( v19 )
          break;
        v15 = 0;
        v27[0] = 0;
        if ( !LdrpSetThreadPreferredLangList(v13, v9) )
          goto LABEL_22;
        v13 = v28;
        if ( v28 < *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2) )
        {
          GetLCIDFromLangListNodeWithLICCheck(v28, (__int64)NtCurrentTeb()->MergedPrefLanguages, v28, v27, v26);
          v15 = v27[0];
LABEL_22:
          v13 = v28;
          goto LABEL_23;
        }
        v15 = v27[0];
LABEL_23:
        if ( v15 )
        {
          if ( (a4 & 0x80u) == 0 && v26[0] )
          {
            if ( (RcConfig || (RcConfig = (_DWORD *)LdrpGetRcConfig(v31, v9, 0, 1)) != 0LL) && *RcConfig == -20054323 )
            {
              LODWORD(v13) = v28;
              if ( (RcConfig[5] & 0x100) != 0 )
                v15 = -4370;
            }
            else
            {
              LODWORD(v13) = v28;
            }
          }
          v7 = v14;
          v28 = v13 + 1;
LABEL_26:
          v12 = v29;
          v8 = v31;
          v9 = v30;
LABEL_27:
          v13 = 61166LL;
          goto LABEL_7;
        }
LABEL_52:
        v14 = v7;
LABEL_36:
        v8 = v31;
      }
      if ( v19 != 1 )
        goto LABEL_12;
      v21 = LdrpGetRcConfig(v8, v9, 1, 1);
      RcConfig = (_DWORD *)v21;
      if ( !v21 || *(_DWORD *)v21 != -20054323 || (*(_BYTE *)(v21 + 24) & 2) == 0 || !*(_DWORD *)(v21 + 124) )
        goto LABEL_52;
      v22 = *(unsigned int *)(v21 + 124);
      v23 = v21 + v22 == 0;
      v24 = (const wchar_t *)(v21 + v22);
      *(_QWORD *)&v36 = 0LL;
      *((_QWORD *)&v36 + 1) = v24;
      if ( !v23 )
      {
        v25 = 2 * wcslen(v24);
        if ( v25 >= 0xFFFE )
          LOWORD(v25) = -4;
        LOWORD(v36) = v25;
        WORD1(v36) = v25 + 2;
      }
      if ( !RtlCultureNameToLCID((unsigned __int16 *)&v36, &v32) )
        goto LABEL_52;
      v15 = v32;
      v27[0] = v32;
      if ( (a4 & 0x80u) != 0 || (RcConfig[5] & 0x100) == 0 )
        goto LABEL_26;
      GetLCIDFromLangListNodeWithLICCheck(v13, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v27, v26);
      v12 = v29;
      v8 = v31;
      v9 = v30;
      if ( !v26[0] )
      {
        v15 = v27[0];
        goto LABEL_27;
      }
      v15 = -4370;
      v13 = 61166LL;
LABEL_7:
      v14 = v7;
    }
    while ( v15 == 0xEEEE );
    for ( i = 0; i < (unsigned int)v9; ++i )
    {
      v12 = v29;
      if ( v37[i] == v15 )
        goto LABEL_4;
    }
    if ( (unsigned int)v9 >= 0x40
      || (v17 = v34,
          v30 = v9 + 1,
          v37[(unsigned int)v9] = v15,
          AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v8, v15, v17, a3, a4),
          (v12 = v29) != 0) )
    {
LABEL_12:
      if ( AlternateResourceModule < 0 && (a4 & 0x80u) != 0 && v33 )
      {
        *v34 = v33;
        if ( a3 )
          *a3 = v35;
        return 0;
      }
      return (unsigned int)AlternateResourceModule;
    }
    if ( AlternateResourceModule < 0 )
    {
      v8 = v31;
      v9 = v30;
      continue;
    }
    break;
  }
  if ( (a4 & 0x80u) != 0 )
  {
    v20 = v34;
    if ( !(unsigned __int8)LdrpCompareServiceChecksum(v31, *v34, 0LL) )
    {
      if ( !v33 )
      {
        v33 = *v20;
        if ( a3 )
          v35 = *a3;
        else
          v35 = 0LL;
      }
      AlternateResourceModule = -1073020927;
      goto LABEL_36;
    }
  }
  return (unsigned int)AlternateResourceModule;
}
