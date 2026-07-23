/*
 * XREFs of _RtlpMuiRegValidatePartialLanguage @ 0x14082F490
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x14082EEA4 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x14082CA40 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidatePartialLanguage(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  char v6; // r15
  _WORD *v7; // rbx
  int v8; // esi
  __int16 *v9; // r14
  unsigned __int16 v10; // r12
  unsigned __int8 v11; // al
  int v12; // r8d
  __int64 v13; // rbp
  __int16 v14; // r8
  __int16 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 28LL * a2;
  v5 = a1;
  v6 = 0;
  v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v4);
  v8 = 0;
  v9 = v7 + 6;
  do
  {
    v10 = v7[4];
    v11 = (v10 >> (2 * v6)) & 3;
    if ( v11 )
    {
      v12 = *v9;
      if ( v11 == 2 )
      {
        if ( v12 == a2 )
          v7[4] = v10 & ~(3 << v8);
        else
          ++v3;
      }
      else
      {
        v13 = *(_QWORD *)(v5 + 24);
        v17 = -1;
        if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v13, v11, v12, &v17) < 0 )
        {
          ++v3;
        }
        else
        {
          v14 = v17;
          if ( v17 >= 0 && v17 < (int)*(unsigned __int16 *)(v13 + 6) && v17 != a2 )
          {
            ++v3;
            if ( (*(_BYTE *)(28LL * v17 + *(_QWORD *)(v13 + 16)) & 1) != 0 )
            {
              v7[4] = (2 << v8) | v10 & ~(3 << v8);
              *v9 = v14;
            }
          }
        }
        v5 = a1;
      }
    }
    ++v6;
    ++v9;
    v8 += 2;
  }
  while ( v8 < 8 );
  if ( v3 >= 1 )
    return 0LL;
  *v7 |= 0x1000u;
  return 3221225473LL;
}
