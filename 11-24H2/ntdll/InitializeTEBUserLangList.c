/*
 * XREFs of InitializeTEBUserLangList @ 0x180016D00
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800C7F30 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180015820 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180016B90 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall InitializeTEBUserLangList(char a1, __int64 a2)
{
  struct _TEB *v2; // r8
  unsigned int LanguageConfigList; // ebx
  bool v4; // r15
  bool v5; // bp
  bool v6; // r14
  int WowTebOffset; // eax
  unsigned int v10; // r13d
  struct _TEB *v11; // rdx
  __int64 v12; // rax
  struct _TEB *v13; // rcx
  __int64 v14; // rax
  unsigned int MuiImpersonation; // r8d
  unsigned int v16; // edx
  _BYTE **UserPrefLanguages; // rdi
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  __int64 v20; // r9
  __int64 v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rax
  struct _TEB *v24; // r9
  int v25; // eax
  struct _TEB *v26; // r8
  __int64 v27; // rax
  struct _TEB *v28; // rcx
  __int64 v29; // rax
  int v30; // r8d
  _DWORD *MergedPrefLanguages; // rcx
  int v32; // ecx
  bool v34; // di
  int PreferredUILanguages; // ecx
  __int64 LanguageList; // rax
  unsigned int v37; // r10d
  unsigned int i; // r8d
  unsigned int v39; // eax
  __int64 v40; // [rsp+30h] [rbp-58h] BYREF
  __int64 v41[10]; // [rsp+38h] [rbp-50h] BYREF
  bool v43; // [rsp+98h] [rbp+10h]
  char v44; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v45; // [rsp+A8h] [rbp+20h]

  v2 = NtCurrentTeb();
  LanguageConfigList = 0;
  v4 = 0;
  v45 = 0;
  v5 = 0;
  v40 = 0LL;
  v6 = 0;
  v43 = 0;
  WowTebOffset = v2->WowTebOffset;
  v41[0] = 0LL;
  v10 = 0;
  if ( WowTebOffset < 0 )
    LODWORD(v2) = WowTebOffset + (_DWORD)v2;
  v11 = NtCurrentTeb();
  v12 = v11->WowTebOffset;
  if ( (int)v12 < 0 )
    v11 = (struct _TEB *)((char *)v11 + v12);
  v13 = NtCurrentTeb();
  v14 = v13->WowTebOffset;
  if ( (_DWORD)v2 == LODWORD(v11->NtTib.SubSystemTib) )
  {
    if ( (int)v14 < 0 )
      v13 = (struct _TEB *)((char *)v13 + v14);
    MuiImpersonation = HIDWORD(v13->glDispatchTable[186]);
  }
  else
  {
    if ( (int)v14 < 0 )
      v13 = (struct _TEB *)((char *)v13 + v14);
    MuiImpersonation = v13->MuiImpersonation;
  }
  v16 = MEMORY[0x7FFE03A4];
  if ( !MEMORY[0x7FFE03A4] )
    v16 = 1;
  UserPrefLanguages = (_BYTE **)NtCurrentTeb()->UserPrefLanguages;
  if ( a2 )
  {
    v18 = *(_QWORD *)(a2 + 24);
    if ( v18 )
    {
      v19 = *(_WORD *)(v18 + 6);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v18 + 16);
        if ( v20 )
        {
          if ( MuiImpersonation >= v16 )
            goto LABEL_16;
          if ( v19 <= 1u )
          {
            if ( (*(_BYTE *)v20 & 1) != 0 )
            {
LABEL_24:
              v24 = NtCurrentTeb();
              v25 = v24->WowTebOffset;
              if ( v25 < 0 )
                LODWORD(v24) = v25 + (_DWORD)v24;
              v26 = NtCurrentTeb();
              v27 = v26->WowTebOffset;
              if ( (int)v27 < 0 )
                v26 = (struct _TEB *)((char *)v26 + v27);
              v28 = NtCurrentTeb();
              v29 = v28->WowTebOffset;
              if ( (_DWORD)v24 == LODWORD(v26->NtTib.SubSystemTib) )
              {
                if ( (int)v29 < 0 )
                  v28 = (struct _TEB *)((char *)v28 + v29);
                HIDWORD(v28->glDispatchTable[186]) = v16;
              }
              else
              {
                if ( (int)v29 < 0 )
                  v28 = (struct _TEB *)((char *)v28 + v29);
                v28->MuiImpersonation = v16;
              }
              if ( v4 )
              {
                if ( !UserPrefLanguages )
                  goto LABEL_38;
                v22 = *UserPrefLanguages;
                v23 = *UserPrefLanguages;
                if ( !*UserPrefLanguages )
                  goto LABEL_38;
                goto LABEL_35;
              }
LABEL_16:
              if ( !UserPrefLanguages )
              {
LABEL_80:
                if ( !a1 && !v6 && !v5 )
                {
                  PreferredUILanguages = RtlpSetProcUserMachineLangList(a2, 1u);
                  if ( PreferredUILanguages >= 0 )
                  {
                    LanguageList = *(_QWORD *)(a2 + 64);
                    LanguageConfigList = PreferredUILanguages;
                    v34 = v4;
                    goto LABEL_59;
                  }
                  LanguageList = v40;
                  goto LABEL_57;
                }
LABEL_55:
                v44 = 0;
                v34 = v4;
                PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                                         a2,
                                         v16,
                                         1,
                                         3 - (unsigned int)(a1 != 0),
                                         (__int64)&v44,
                                         (__int64)&v40);
                LanguageList = v40;
                if ( !v40 )
                {
                  LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a2);
                  if ( !LanguageList )
                    return (unsigned int)-1073741801;
                  goto LABEL_60;
                }
                v45 = v10;
                v43 = v4;
                if ( PreferredUILanguages )
                {
                  v45 = v10;
                  v43 = v4;
                  if ( PreferredUILanguages != -1073741801 )
                  {
                    v45 = v10;
                    v43 = v4;
                    if ( v44 )
                    {
LABEL_59:
                      if ( !LanguageList )
                      {
LABEL_69:
                        if ( v34 )
                        {
                          LanguageConfigList = RtlpLoadLanguageConfigList(8u, v41, a2);
                          if ( (LanguageConfigList & 0x80000000) == 0 )
                            return (unsigned int)RtlpUpdateTEBLanguage(0LL, v41[0], 5);
                        }
                        return LanguageConfigList;
                      }
LABEL_60:
                      if ( a1 )
                        *(_DWORD *)(LanguageList + 40) |= 0x20u;
                      else
                        *(_DWORD *)(LanguageList + 40) |= 0x10u;
                      if ( v6 )
                        *(_DWORD *)(LanguageList + 40) |= 2u;
                      if ( v5 )
                        *(_DWORD *)(LanguageList + 40) |= 4u;
                      if ( v6 || v5 )
                        *(_DWORD *)(LanguageList + 40) |= v10;
                      LanguageConfigList = RtlpUpdateTEBLanguage(LanguageList, 0LL, 4);
                      goto LABEL_69;
                    }
                  }
                }
LABEL_57:
                LanguageConfigList = PreferredUILanguages;
                if ( PreferredUILanguages < 0 )
                  return LanguageConfigList;
                v34 = v43;
                v10 = v45;
                goto LABEL_59;
              }
              if ( !*UserPrefLanguages
                || (v21 = *((_QWORD *)*UserPrefLanguages + 2)) == 0
                || *(_DWORD *)(v21 + 12) >= *(_DWORD *)(a2 + 12) )
              {
LABEL_41:
                if ( *UserPrefLanguages )
                {
                  v32 = *((_DWORD *)*UserPrefLanguages + 10);
                  if ( a1 )
                  {
                    if ( (v32 & 0x20) != 0 )
                      return LanguageConfigList;
                  }
                  else if ( (v32 & 0x10) != 0 )
                  {
                    return LanguageConfigList;
                  }
                  if ( (v32 & 2) != 0 )
                    v6 = 1;
                  if ( (v32 & 4) != 0 )
                    v5 = 1;
                  if ( v6 || v5 )
                  {
                    v10 = v32 & 0xFFFF0000;
                    v45 = v32 & 0xFFFF0000;
                  }
                  RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
                  *UserPrefLanguages = 0LL;
                  if ( NtCurrentTeb()->MergedPrefLanguages )
                  {
                    RtlpMuiRegFreeLanguageList((_BYTE *)NtCurrentTeb()->MergedPrefLanguages);
                    NtCurrentTeb()->MergedPrefLanguages = 0LL;
                  }
                }
LABEL_54:
                if ( v4 )
                  goto LABEL_55;
                goto LABEL_80;
              }
              v22 = *UserPrefLanguages;
              v23 = *UserPrefLanguages;
LABEL_35:
              v30 = *((_DWORD *)v23 + 10);
              v6 = (v30 & 2) != 0;
              v5 = (v30 & 4) != 0;
              if ( (v30 & 2) != 0 || (*((_DWORD *)v23 + 10) & 4) != 0 )
              {
                v10 = v30 & 0xFFFF0000;
                v45 = v30 & 0xFFFF0000;
              }
              RtlpMuiRegFreeLanguageList(v22);
              *UserPrefLanguages = 0LL;
LABEL_38:
              if ( NtCurrentTeb()->MergedPrefLanguages )
              {
                MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
                MergedPrefLanguages[10] |= 0x80u;
              }
              if ( !UserPrefLanguages )
                goto LABEL_54;
              goto LABEL_41;
            }
            v37 = 0;
            for ( i = 0; i < 3; ++i )
            {
              v39 = v37 + 1;
              if ( ((*(_WORD *)(v20 + 8) >> (2 * i)) & 3) == 0 )
                v39 = v37;
              v37 = v39;
            }
            v4 = v39 > 1;
          }
          else
          {
            v4 = 1;
          }
          v43 = v4;
          goto LABEL_24;
        }
      }
    }
  }
  return 3221225485LL;
}
