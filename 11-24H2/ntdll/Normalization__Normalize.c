/*
 * XREFs of Normalization__Normalize @ 0x1800B4B80
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x1800B4A68 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     Normalization__GuessCharCountBySize @ 0x1800B4E3C (Normalization__GuessCharCountBySize.c)
 *     Normalization__NormalizeCharacter @ 0x1800B4EFC (Normalization__NormalizeCharacter.c)
 */

__int64 __fastcall Normalization__Normalize(__int64 a1, unsigned __int16 *a2, int a3, _WORD *a4, int a5, _DWORD *a6)
{
  unsigned __int16 *v6; // r10
  unsigned int v8; // r11d
  unsigned __int64 v9; // rax
  unsigned int v10; // edi
  int v11; // ecx
  int v12; // r9d
  int v13; // r10d
  int v14; // eax
  __int64 v15; // r9
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned __int16 *v19; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-31h]
  unsigned __int16 *v21; // [rsp+38h] [rbp-29h]
  _WORD *v22; // [rsp+40h] [rbp-21h]
  _WORD *v23; // [rsp+48h] [rbp-19h]
  _WORD *v24; // [rsp+50h] [rbp-11h]
  int v25; // [rsp+58h] [rbp-9h]
  int v26; // [rsp+5Ch] [rbp-5h]
  int v27; // [rsp+60h] [rbp-1h]
  int v28; // [rsp+64h] [rbp+3h]
  _WORD *v29; // [rsp+68h] [rbp+7h]
  __int16 v30; // [rsp+70h] [rbp+Fh]
  int v31; // [rsp+72h] [rbp+11h]
  __int16 v32; // [rsp+76h] [rbp+15h]
  _WORD *v33; // [rsp+78h] [rbp+17h]
  int v34; // [rsp+80h] [rbp+1Fh]
  __int16 v35; // [rsp+84h] [rbp+23h]
  __int128 v36; // [rsp+86h] [rbp+25h]
  __int16 v37; // [rsp+96h] [rbp+35h]
  __int64 v38; // [rsp+98h] [rbp+37h]

  v28 = 0;
  v6 = a2;
  v31 = 0;
  v32 = 0;
  v37 = 0;
  v36 = 0LL;
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  v8 = 0;
  v19 = a2;
  v26 = a3;
  v22 = a4;
  v20 = &a2[a3];
  v25 = a5;
  v21 = a2;
  v27 = 0;
  v23 = &a4[a5];
  v29 = a4 - 1;
  v30 = 0;
  v33 = a4;
  v34 = 0;
  v35 = 0;
  v38 = a1;
  *a6 = 0;
LABEL_5:
  v24 = a4;
  while ( !v8 )
  {
    if ( v6 == v20 )
    {
      v15 = a4 - v22;
      goto LABEL_15;
    }
    v9 = *v6++;
    v21 = v6;
    if ( (int)v9 < *(_DWORD *)(a1 + 28)
      || (v17 = *(unsigned __int8 *)((v9 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)v17)
      || (_BYTE)v17 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( a4 < v23 )
      {
        *a4 = v9;
        v6 = v21;
        a4 = v24 + 1;
        goto LABEL_5;
      }
      goto LABEL_11;
    }
    v18 = Normalization__NormalizeCharacter(a1, (unsigned int)v9, v17, &v19);
    a4 = v24;
    v8 = v18;
    v6 = v21;
  }
  if ( v8 != -1073741789 )
  {
    LODWORD(v15) = v6 - v19 - 1;
    goto LABEL_15;
  }
LABEL_11:
  v10 = v20 - v6 + 1;
  v11 = Normalization__GuessCharCountBySize(a1, v10);
  v14 = (int)(v10 * v12) / v13;
  if ( v14 <= v11 )
    v14 = v11;
  LODWORD(v15) = v14 + (v14 >> 3) + v12;
LABEL_15:
  *a6 = v15;
  return v8;
}
