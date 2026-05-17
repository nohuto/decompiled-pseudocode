/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x18014C210
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180120B18 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180089DF0 (RtlpIsALicensedRegularLanguage.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 *     _MuiRegAllocArray @ 0x1800A7340 (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800DE3D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800EDA84 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x18014AE44 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x18014C5D4 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x18014C80C (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014C944 (_RtlpRemovePendingDeleteLanguages.c)
 *     NtIsUILanguageComitted @ 0x180165390 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180165D90 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // si
  int v3; // edi
  int v4; // r14d
  __int64 v5; // r12
  int IsUILanguageComitted; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r13d
  __int64 result; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int16 v15; // cx
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int16 v22; // cx
  int v23; // r10d
  __int64 v24; // r8
  __int64 v25; // r11
  __int16 v26; // cx
  unsigned int v27; // edx
  int v28; // edi
  __int64 v29; // rsi
  unsigned __int16 v30; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v31[2]; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h]
  __int128 v33; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v36[176]; // [rsp+78h] [rbp-90h] BYREF

  v30 = 0;
  v2 = -1;
  v31[0] = -1;
  v32 = 0LL;
  v3 = -1;
  v4 = 0;
  v34 = 0LL;
  v5 = 0LL;
  memset(v35, 0, 28);
  v33 = 0LL;
  memset_thunk_772440563353939046(v36, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v8 = *(unsigned __int16 *)(a1 + 4);
  v9 = IsUILanguageComitted;
  if ( (_WORD)v8 )
  {
    v30 = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = NtQueryInstallUILanguage(&v30, v8, v7);
    if ( (int)result < 0 )
      return result;
    LOWORD(v8) = v30;
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v8, 0, v31);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v31[0] = -1;
    v13 = MuiRegAllocArray(v12, 0x55u);
    v32 = v13;
    v5 = v13;
    if ( !v13 )
      return 3221225495LL;
    if ( (unsigned __int8)RtlpInitAndCallLcidToCultureName((__int64)&v34, v13, v30) )
    {
      v14 = RtlpMuiRegGetOrAddString(a1, *((__int64 *)&v34 + 1), 1, v31);
      v15 = -1;
      if ( v14 >= 0 )
        v15 = v31[0];
      HIWORD(v35[0]) = v15;
      WORD2(v35[0]) = v30;
      LODWORD(v35[0]) = 49;
      LOWORD(v35[1]) = 0;
      *(_QWORD *)((char *)&v35[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v35[2] + 4) = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)v35, *((wchar_t **)&v34 + 1));
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)v35, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v31[0];
LABEL_16:
    if ( v3 != -1 )
    {
      *((_QWORD *)&v33 + 1) = v36;
      WORD1(v33) = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v33) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, *((wchar_t **)&v33 + 1)) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  if ( !v9 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v17 = *(_QWORD *)(a1 + 24);
  v18 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v19 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v19 + *(_QWORD *)(v17 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v18);
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v21 = v4 + 1;
        v22 = *(_WORD *)(v20 + v19);
        if ( (v22 & 0x1000) != 0 )
          v21 = v4;
        v4 = v21;
        if ( !v9 && v18 != v3 && v21 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v20 + v19) = v22 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      ++v18;
      v19 += 28LL;
    }
    while ( v18 < *(unsigned __int16 *)(v17 + 6) );
    v5 = v32;
  }
  v23 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = *(_QWORD *)(v17 + 16);
      v26 = *(_WORD *)(v25 + v24);
      if ( (v26 & 0x21) == 0x21 )
      {
        v27 = v4 + 1;
        if ( (v26 & 0x1000) != 0 )
          v27 = v4;
        v4 = v27;
        if ( !v9 && v23 != v3 && v27 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v25 + v24) = v26 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v24) |= 0x8000u;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      ++v23;
      v24 += 28LL;
    }
    while ( v23 < *(unsigned __int16 *)(v17 + 6) );
    v5 = v32;
  }
  v28 = 0;
  if ( *(_WORD *)(v17 + 6) )
  {
    v29 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v29 + *(_QWORD *)(v17 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v28);
      v17 = *(_QWORD *)(a1 + 24);
      ++v28;
      v29 += 28LL;
    }
    while ( v28 < *(unsigned __int16 *)(v17 + 6) );
  }
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v16);
  return 0LL;
}
