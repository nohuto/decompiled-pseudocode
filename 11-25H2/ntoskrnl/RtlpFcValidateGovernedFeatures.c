/*
 * XREFs of RtlpFcValidateGovernedFeatures @ 0x1405E6748
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 */

__int64 __fastcall RtlpFcValidateGovernedFeatures(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r10
  unsigned int v7; // r9d
  int *v8; // r10
  unsigned __int64 v9; // r11
  ULONGLONG v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // esi
  unsigned int v15; // r11d
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF
  ULONGLONG v18; // [rsp+40h] [rbp+18h] BYREF

  pullResult = 0LL;
  v18 = 0LL;
  if ( a1 )
  {
    if ( (a1 & 7) == 0 )
    {
      v3 = a2 + a1;
      v4 = a1 + *(_QWORD *)(a1 + 16);
      v5 = a1 + *(_QWORD *)(a1 + 8);
      if ( (!v5 || v5 < v3 && (v5 & 3) == 0)
        && (!v4 || v4 < v3 && (v4 & 3) == 0)
        && RtlULongLongMult((unsigned __int16)*(_DWORD *)a1, 0x10uLL, &pullResult) >= 0
        && RtlULongLongMult(*(unsigned int *)(v6 + 4), 4uLL, &v18) >= 0 )
      {
        v10 = pullResult + 24;
        if ( pullResult >= 0xFFFFFFFFFFFFFFE8uLL )
          return (unsigned int)-1073741675;
        v11 = v10 + v18;
        if ( v10 + v18 < v10 )
          return (unsigned int)-1073741675;
        if ( v11 + 4 < v11 )
          return (unsigned int)-1073741675;
        v12 = v11 + 8;
        if ( v11 + 8 < v11 + 4 )
          return (unsigned int)-1073741675;
        v2 = v7;
        if ( v12 <= v9 )
        {
          v13 = *v8;
          v14 = v8[1];
          if ( (unsigned __int16)*(_DWORD *)(v5 + 16LL * (unsigned __int16)*v8 + 4) == v14 )
          {
            v15 = v7;
            if ( v14 )
            {
              while ( (unsigned __int16)*(_DWORD *)(v4 + 4LL * v15) < (unsigned int)(unsigned __int16)v13 )
              {
                if ( ++v15 >= v14 )
                  goto LABEL_22;
              }
            }
            else
            {
LABEL_22:
              if ( !(_WORD)v13 )
                return v2;
              while ( (unsigned __int16)*(_DWORD *)(v5 + 16LL * v7 + 4) <= v14 )
              {
                if ( ++v7 >= (unsigned __int16)v13 )
                  return v2;
              }
            }
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  else
  {
    return a2 != 0 ? 0xC000000D : 0;
  }
}
