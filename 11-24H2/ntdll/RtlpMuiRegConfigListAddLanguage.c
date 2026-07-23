/*
 * XREFs of RtlpMuiRegConfigListAddLanguage @ 0x1800F1478
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180015070 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x18010F064 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegConfigListAddLanguage(__int64 *a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r10
  __int16 v6; // di
  __int16 v7; // r9
  int v8; // r8d
  int i; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  _WORD *v14; // r11
  int j; // edx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rax

  v2 = 0;
  if ( a1 && (v5 = *a1) != 0 && a2 && (v6 = *a2, v7 = (unsigned __int16)a2[1] >> 14, (_BYTE)v7) )
  {
    v8 = *(unsigned __int16 *)(v5 + 4);
    for ( i = 0; ; ++i )
    {
      if ( i >= v8 )
        goto LABEL_7;
      v14 = (_WORD *)(*(_QWORD *)(v5 + 8) + 12LL * i);
      if ( v14[1] >> 14 == v7 && *v14 == v6 )
        break;
    }
    if ( i < 0 )
    {
LABEL_7:
      if ( (unsigned __int16)v8 >= *(_WORD *)(v5 + 6) )
      {
        v16 = v8 + 1;
        v17 = *a1;
        if ( v8 + 1 >= (unsigned int)*(unsigned __int16 *)(v5 + 6) )
        {
          v17 = 0LL;
          if ( v16 >= v8 )
          {
            v18 = SafeReallocBlob(v5, 16, v16, 12);
            v17 = v18;
            if ( v18 )
            {
              *(_DWORD *)v18 = 0;
              *(_QWORD *)(v18 + 8) = v18 + 16;
              *(_WORD *)(v18 + 6) = v16;
            }
          }
          if ( !v17 )
            return (unsigned int)-1073741801;
        }
        v5 = v17;
        *a1 = v17;
      }
      v10 = *(_QWORD *)(v5 + 8);
      v11 = 3LL * *(unsigned __int16 *)(v5 + 4);
      v12 = *((_DWORD *)a2 + 2);
      *(_QWORD *)(v10 + 4 * v11) = *(_QWORD *)a2;
      *(_DWORD *)(v10 + 4 * v11 + 8) = v12;
      ++*(_WORD *)(v5 + 4);
      return v2;
    }
    for ( j = 0; j < 3; ++j )
    {
      if ( (((unsigned __int16)(v14[1] ^ a2[1]) >> (2 * j)) & 3) != 0 || v14[j + 3] != a2[j + 3] )
        return 0x40000000;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
