/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x1801493D4
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x1800E9F4C (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  int v3; // ebp
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // r12d
  _WORD *v7; // rbx
  int i; // edi
  unsigned __int8 v9; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // r8
  __int16 v13; // ax
  __int16 v14; // ax
  __int64 v15; // r14
  __int16 v16; // r8
  __int16 v17; // r9
  __int16 v18; // dx
  __int16 v19; // dx
  __int16 v22; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 28LL * a2;
  v5 = a1;
  v6 = 0;
  v7 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v4);
  for ( i = 0; i < 8; i += 2 )
  {
    v9 = (v7[4] >> (2 * v6)) & 3;
    if ( v9 )
    {
      v10 = (__int16)v7[v6 + 6];
      if ( v9 == 2 )
      {
        if ( (v10 & 0x8000u) != 0LL
          || (v11 = *(_QWORD *)(v5 + 24), (int)v10 >= *(unsigned __int16 *)(v11 + 6))
          || (_DWORD)v10 == a2 )
        {
          v7[4] &= ~(3 << i);
          v7[v6 + 6] = 0;
        }
        else
        {
          v12 = (_WORD *)(*(_QWORD *)(v11 + 16) + 28 * v10);
          if ( (*v12 & 4) != 0 )
          {
            *v7 |= 0x1000u;
            break;
          }
          if ( (*v12 & 0x1820) == 0x820 )
          {
            ++v3;
          }
          else
          {
            if ( v12[2] )
            {
              v7[4] = v7[4] & ~(3 << i) | (1 << i);
              v13 = v12[2];
            }
            else
            {
              v14 = v7[4] & ~(3 << i);
              if ( (__int16)v12[3] <= 0 )
              {
                v7[4] = v14;
                v13 = 0;
              }
              else
              {
                v7[4] = (3 << i) | v14;
                v13 = v12[3];
              }
            }
            v7[v6 + 6] = v13;
          }
        }
      }
      else
      {
        v15 = *(_QWORD *)(v5 + 24);
        v22 = -1;
        if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v15, v9, v10, &v22) < 0
          || (v16 = v22, v22 < 0)
          || v22 >= (int)*(unsigned __int16 *)(v15 + 6)
          || v22 == a2 )
        {
          v7[4] &= ~(3 << i);
        }
        else
        {
          v17 = *(_WORD *)(28LL * v22 + *(_QWORD *)(v15 + 16));
          v18 = ~(3 << i);
          if ( (v17 & 4) != 0 )
          {
            v7[4] &= v18;
          }
          else
          {
            v19 = v7[4] & v18;
            if ( (v17 & 0x1820) == 0x820 )
            {
              v7[4] = v19 | (2 << i);
              ++v3;
              v7[v6 + 6] = v16;
            }
            else
            {
              v7[4] = v19;
            }
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
