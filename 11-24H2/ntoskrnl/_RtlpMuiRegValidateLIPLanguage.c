/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x14082F264
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x14082EEA4 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x14082CA40 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // r12d
  _WORD *v7; // rbx
  int i; // edi
  unsigned __int16 v9; // si
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 v12; // rdx
  _WORD *v13; // r8
  __int16 v14; // ax
  __int16 v15; // ax
  __int64 v16; // r14
  __int16 v17; // r8
  __int16 v18; // r9
  __int16 v19; // dx
  __int16 v22; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 28LL * a2;
  v5 = a1;
  v6 = 0;
  v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v4);
  for ( i = 0; i < 8; i += 2 )
  {
    v9 = v7[4];
    v10 = (v9 >> (2 * v6)) & 3;
    if ( v10 )
    {
      v11 = (__int16)v7[v6 + 6];
      if ( v10 == 2 )
      {
        if ( (v11 & 0x8000u) != 0LL
          || (v12 = *(_QWORD *)(v5 + 24), (int)v11 >= *(unsigned __int16 *)(v12 + 6))
          || (_DWORD)v11 == a2 )
        {
          v7[4] = v9 & ~(3 << i);
          v7[v6 + 6] = 0;
        }
        else
        {
          v13 = (_WORD *)(*(_QWORD *)(v12 + 16) + 28 * v11);
          if ( (*v13 & 4) != 0 )
          {
            *v7 |= 0x1000u;
            break;
          }
          if ( (*v13 & 0x1820) == 0x820 )
          {
            ++v3;
          }
          else
          {
            if ( v13[2] )
            {
              v7[4] = v9 & ~(3 << i) | (1 << i);
              v14 = v13[2];
            }
            else
            {
              v15 = v9 & ~(3 << i);
              if ( (__int16)v13[3] <= 0 )
              {
                v7[4] = v15;
                v14 = 0;
              }
              else
              {
                v7[4] = (3 << i) | v15;
                v14 = v13[3];
              }
            }
            v7[v6 + 6] = v14;
          }
        }
      }
      else
      {
        v16 = *(_QWORD *)(v5 + 24);
        v22 = -1;
        if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v16, v10, v11, &v22) < 0
          || (v17 = v22, v22 < 0)
          || v22 >= (int)*(unsigned __int16 *)(v16 + 6)
          || v22 == a2 )
        {
          v7[4] = v9 & ~(3 << i);
        }
        else
        {
          v18 = *(_WORD *)(28LL * v22 + *(_QWORD *)(v16 + 16));
          v19 = v9 & ~(3 << i);
          if ( (v18 & 4) != 0 || (v18 & 0x1820) != 0x820 )
          {
            v7[4] = v19;
          }
          else
          {
            v7[4] = v19 | (2 << i);
            ++v3;
            v7[v6 + 6] = v17;
          }
        }
      }
    }
    v5 = a1;
    ++v6;
  }
  if ( v3 >= 1 )
    return 0LL;
  *v7 |= 0x1000u;
  return 3221225473LL;
}
