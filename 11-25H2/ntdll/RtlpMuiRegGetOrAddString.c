/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x1800A7910
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800890A4 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpPopulateLanguageConfigList @ 0x18008C780 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1800A781C (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x18014B270 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014B788 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014C210 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800A7B60 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x180120918 (RtlpMuiRegGrowStringPool.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, const wchar_t *a2, char a3, __int16 *a4)
{
  __int16 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rdi
  _WORD *v10; // r12
  __int64 v11; // rbp
  const wchar_t *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rbp
  __int64 v15; // r9
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int16 v20; // [rsp+28h] [rbp-40h]
  bool v21; // [rsp+70h] [rbp+8h]

  v6 = -1;
  if ( !a1 || !a2 || !*a2 )
  {
LABEL_28:
    v8 = -1073741811;
    goto LABEL_14;
  }
  v21 = a3 && (*(_DWORD *)a1 & 2) != 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = 0;
  if ( v7 )
  {
    LODWORD(v9) = 0;
    v10 = (_WORD *)(v7 + 6);
    v11 = 0LL;
    while ( (int)v9 < (unsigned __int16)*v10 )
    {
      v12 = (const wchar_t *)(*(_QWORD *)(v7 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v7 + 16) + v11));
      if ( v12 == a2 || !wcsicmp(v12, a2) )
      {
        if ( (int)v9 < 0 )
          goto LABEL_18;
        goto LABEL_13;
      }
      LODWORD(v9) = v9 + 1;
      v11 += 2LL;
    }
  }
  v10 = (_WORD *)(v7 + 6);
LABEL_18:
  if ( !v7 )
    goto LABEL_19;
  v14 = -1LL;
  do
    ++v14;
  while ( a2[v14] );
  v15 = *(unsigned __int16 *)(v7 + 10);
  v16 = v14 + 1;
  v20 = *(_WORD *)(v7 + 10);
  if ( v15 + v16 > *(unsigned __int16 *)(v7 + 8) )
  {
    LOWORD(v9) = -1;
  }
  else
  {
    if ( !v21 || *v10 >= *(_WORD *)(v7 + 4) || !is_mul_ok(v16, 2uLL) )
    {
LABEL_19:
      LOWORD(v9) = -1;
      goto LABEL_13;
    }
    v9 = (unsigned __int16)*v10;
    *(_WORD *)(v7 + 6) = *v10 + 1;
    *(_WORD *)(v7 + 10) = v15 + 1;
    memmove((void *)(*(_QWORD *)(v7 + 24) + 2LL * (__int16)v15), a2, 2 * v16);
    v17 = *(_QWORD *)(v7 + 16);
    *(_WORD *)(v7 + 10) += v16;
    *(_WORD *)(v17 + 2 * v9) = v20;
  }
LABEL_13:
  v6 = v9;
  if ( (v9 & 0x8000u) == 0LL )
    goto LABEL_14;
  if ( !a3 )
    goto LABEL_28;
  v18 = RtlpMuiRegGrowStringPool(*(PVOID *)(a1 + 32));
  if ( v18 )
  {
    *(_DWORD *)a1 |= 2u;
    LOBYTE(v19) = 1;
    *(_QWORD *)(a1 + 32) = v18;
    v6 = RtlpMuiRegGetOrAddStringToPool(v18, a2, v19, 0LL, 0LL);
    if ( v6 < 0 )
      v8 = -1073741801;
  }
  else
  {
    v8 = -1073741801;
  }
LABEL_14:
  result = v8;
  if ( a4 )
    *a4 = v6;
  return result;
}
