/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x18014AC60
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x18011F248 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18007D410 (RtlpIsALicensedRegularLanguage.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4 (_RtlpMuiRegAddNeutralLanguage.c)
 *     _MuiRegAllocArray @ 0x1800D2690 (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800D2A40 (RtlpMuiRegGetOrAddString.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800E1030 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800ED404 (RtlpInitAndCallLcidToCultureName.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180149894 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x18014B024 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x18014B25C (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x18014B394 (_RtlpRemovePendingDeleteLanguages.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // si
  int v3; // edi
  int v4; // r14d
  unsigned __int64 v5; // r12
  int IsUILanguageComitted; // eax
  unsigned __int16 v7; // dx
  int v8; // r13d
  __int64 result; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int16 v14; // cx
  __int64 v15; // rcx
  int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int16 v20; // cx
  int v21; // r10d
  __int64 v22; // r8
  __int64 v23; // r11
  __int16 v24; // cx
  unsigned int v25; // edx
  int v26; // edi
  __int64 v27; // rsi
  unsigned __int16 v28; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v29[2]; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-D8h]
  __int128 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v32; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v33[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v34[176]; // [rsp+78h] [rbp-90h] BYREF

  v28 = 0;
  v2 = -1;
  v29[0] = -1;
  v30 = 0LL;
  v3 = -1;
  v4 = 0;
  v32 = 0LL;
  v5 = 0LL;
  memset(v33, 0, 28);
  v31 = 0LL;
  memset_thunk_772440563353939046(v34, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  v8 = IsUILanguageComitted;
  if ( v7 )
  {
    v28 = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = NtQueryInstallUILanguage(&v28);
    if ( (int)result < 0 )
      return result;
    v7 = v28;
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, v29);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v29[0] = -1;
    v12 = MuiRegAllocArray(v11, 0x55u);
    v30 = v12;
    v5 = v12;
    if ( !v12 )
      return 3221225495LL;
    if ( (unsigned __int8)RtlpInitAndCallLcidToCultureName((__int64)&v32, v12, v28) )
    {
      v13 = RtlpMuiRegGetOrAddString(a1, *((__int64 *)&v32 + 1), 1, v29);
      v14 = -1;
      if ( v13 >= 0 )
        v14 = v29[0];
      HIWORD(v33[0]) = v14;
      WORD2(v33[0]) = v28;
      LODWORD(v33[0]) = 49;
      LOWORD(v33[1]) = 0;
      *(_QWORD *)((char *)&v33[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v33[2] + 4) = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)v33, *((wchar_t **)&v32 + 1));
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)v33, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v29[0];
LABEL_16:
    if ( v3 != -1 )
    {
      *((_QWORD *)&v31 + 1) = v34;
      WORD1(v31) = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v31) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, *((wchar_t **)&v31 + 1)) >= 0 )
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
  if ( !v8 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v15 = *(_QWORD *)(a1 + 24);
  v16 = 0;
  if ( *(_WORD *)(v15 + 6) )
  {
    v17 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v17 + *(_QWORD *)(v15 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v16);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v19 = v4 + 1;
        v20 = *(_WORD *)(v18 + v17);
        if ( (v20 & 0x1000) != 0 )
          v19 = v4;
        v4 = v19;
        if ( !v8 && v16 != v3 && v19 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v18 + v17) = v20 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v17) |= 0x8000u;
        }
      }
      v15 = *(_QWORD *)(a1 + 24);
      ++v16;
      v17 += 28LL;
    }
    while ( v16 < *(unsigned __int16 *)(v15 + 6) );
    v5 = v30;
  }
  v21 = 0;
  if ( *(_WORD *)(v15 + 6) )
  {
    v22 = 0LL;
    do
    {
      v23 = *(_QWORD *)(v15 + 16);
      v24 = *(_WORD *)(v23 + v22);
      if ( (v24 & 0x21) == 0x21 )
      {
        v25 = v4 + 1;
        if ( (v24 & 0x1000) != 0 )
          v25 = v4;
        v4 = v25;
        if ( !v8 && v21 != v3 && v25 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v23 + v22) = v24 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v22) |= 0x8000u;
        }
      }
      v15 = *(_QWORD *)(a1 + 24);
      ++v21;
      v22 += 28LL;
    }
    while ( v21 < *(unsigned __int16 *)(v15 + 6) );
    v5 = v30;
  }
  v26 = 0;
  if ( *(_WORD *)(v15 + 6) )
  {
    v27 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v27 + *(_QWORD *)(v15 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v26);
      v15 = *(_QWORD *)(a1 + 24);
      ++v26;
      v27 += 28LL;
    }
    while ( v26 < *(unsigned __int16 *)(v15 + 6) );
  }
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
