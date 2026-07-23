/*
 * XREFs of RtlpFcValidateGovernedFeatures @ 0x1405F00D8
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E4630 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E4C9C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 */

__int64 __fastcall RtlpFcValidateGovernedFeatures(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // r10
  int *v7; // r10
  unsigned __int64 v8; // r11
  ULONGLONG v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // esi
  unsigned int v12; // r11d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int i; // edx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF
  ULONGLONG v18; // [rsp+40h] [rbp+18h] BYREF

  pullResult = 0LL;
  v18 = 0LL;
  if ( a1 )
  {
    if ( (a1 & 7) != 0 )
      return (unsigned int)-1073741811;
    v3 = a1 + a2;
    v4 = a1 + *(_QWORD *)(a1 + 16);
    v5 = a1 + *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      if ( v5 >= v3 || (v5 & 3) != 0 )
        return (unsigned int)-1073741811;
    }
    if ( v4 && (v4 >= v3 || (v4 & 3) != 0)
      || RtlULongLongMult((unsigned __int16)*(_DWORD *)a1, 0x10uLL, &pullResult) < 0
      || RtlULongLongMult(*(unsigned int *)(v6 + 4), 4uLL, &v18) < 0 )
    {
      return (unsigned int)-1073741811;
    }
    v9 = pullResult + 24;
    if ( pullResult >= 0xFFFFFFFFFFFFFFE8uLL )
      return (unsigned int)-1073741675;
    v10 = v9 + v18;
    if ( v9 + v18 < v9 || v10 + 4 < v10 || v10 + 8 < v10 + 4 )
      return (unsigned int)-1073741675;
    if ( v10 + 8 > v8 )
      return (unsigned int)-1073741811;
    v11 = *v7;
    v12 = v7[1];
    if ( (unsigned __int16)*(_DWORD *)(v5 + 16LL * (unsigned __int16)*v7 + 4) != v12 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v13 = v2;
      v14 = (unsigned __int16)v11;
      while ( v13 < v12 )
      {
        v14 = (unsigned __int16)v11;
        if ( (unsigned __int16)*(_DWORD *)(v4 + 4LL * v13) >= (unsigned int)(unsigned __int16)v11 )
          return (unsigned int)-1073741811;
        ++v13;
      }
      for ( i = v2; i < v14; ++i )
      {
        if ( (unsigned __int16)*(_DWORD *)(v5 + 16LL * i + 4) > v12 )
          return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    return a2 != 0 ? 0xC000000D : 0;
  }
  return v2;
}
