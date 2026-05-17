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

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, __int64 a2, char a3, __int16 *a4)
{
  unsigned __int128 v4; // rax
  const wchar_t *v5; // rsi
  __int16 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  _WORD *v11; // r12
  __int64 v12; // rbp
  const wchar_t *v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // [rsp+24h] [rbp-44h]
  __int16 *v21; // [rsp+28h] [rbp-40h]
  bool v22; // [rsp+70h] [rbp+8h]
  __int16 *v24; // [rsp+88h] [rbp+20h]

  *((_QWORD *)&v4 + 1) = a2;
  v24 = a4;
  v5 = (const wchar_t *)*((_QWORD *)&v4 + 1);
  v7 = -1;
  if ( !a1 || !*((_QWORD *)&v4 + 1) || !**((_WORD **)&v4 + 1) )
  {
LABEL_28:
    v9 = -1073741811;
    goto LABEL_14;
  }
  v20 = *(_DWORD *)a1 & 2;
  v22 = a3 && (*(_DWORD *)a1 & 2) != 0;
  v8 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  if ( v8 )
  {
    LODWORD(v10) = 0;
    v11 = (_WORD *)(v8 + 6);
    v12 = 0LL;
    while ( (int)v10 < (unsigned __int16)*v11 )
    {
      v13 = (const wchar_t *)(*(_QWORD *)(v8 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v8 + 16) + v12));
      if ( v13 == v5 || !wcsicmp(v13, v5) )
      {
        v14 = 0LL;
        if ( (int)v10 < 0 )
          goto LABEL_18;
        goto LABEL_13;
      }
      LODWORD(v10) = v10 + 1;
      v12 += 2LL;
    }
  }
  v11 = (_WORD *)(v8 + 6);
  v14 = 0LL;
LABEL_18:
  if ( !v8 )
    goto LABEL_19;
  v16 = -1LL;
  do
    ++v16;
  while ( v5[v16] );
  a4 = (__int16 *)*(unsigned __int16 *)(v8 + 10);
  v17 = v16 + 1;
  v21 = a4;
  if ( (unsigned __int64)a4 + v17 > *(unsigned __int16 *)(v8 + 8) )
  {
    v14 = (unsigned int)v17;
    LOWORD(v10) = -1;
  }
  else
  {
    if ( !v22 || *v11 >= *(_WORD *)(v8 + 4) || (v4 = v17 * (unsigned __int128)2uLL, !is_mul_ok(v17, 2uLL)) )
    {
LABEL_19:
      LOWORD(v10) = -1;
      goto LABEL_13;
    }
    v10 = (unsigned __int16)*v11;
    *(_WORD *)(v8 + 6) = *v11 + 1;
    *(_WORD *)(v8 + 10) = (_WORD)a4 + 1;
    memmove((void *)(*(_QWORD *)(v8 + 24) + 2LL * (__int16)a4), v5, 2 * v17);
    *(_QWORD *)&v4 = *(_QWORD *)(v8 + 16);
    *((_QWORD *)&v4 + 1) = v21;
    *(_WORD *)(v8 + 10) += v17;
    v14 = 0LL;
    *(_WORD *)(v4 + 2 * v10) = (_WORD)v21;
  }
LABEL_13:
  v7 = v10;
  if ( (v10 & 0x8000u) == 0LL )
    goto LABEL_14;
  if ( !a3 )
    goto LABEL_28;
  LOBYTE(a4) = v20 == 0;
  v18 = RtlpMuiRegGrowStringPool(*(_QWORD *)(a1 + 32), *((_QWORD *)&v4 + 1), v14, a4);
  if ( v18 )
  {
    *(_DWORD *)a1 |= 2u;
    LOBYTE(v19) = 1;
    *(_QWORD *)(a1 + 32) = v18;
    v7 = RtlpMuiRegGetOrAddStringToPool(v18, v5, v19, 0LL);
    if ( v7 < 0 )
      v9 = -1073741801;
  }
  else
  {
    v9 = -1073741801;
  }
LABEL_14:
  result = v9;
  if ( v24 )
    *v24 = v7;
  return result;
}
