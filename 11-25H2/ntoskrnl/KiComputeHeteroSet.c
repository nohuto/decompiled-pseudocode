/*
 * XREFs of KiComputeHeteroSet @ 0x1404A598C
 * Callers:
 *     KiInstallSubNodeHeteroSets @ 0x1404A5850 (KiInstallSubNodeHeteroSets.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 */

__int64 __fastcall KiComputeHeteroSet(int a1, int a2, int a3, __int64 *a4, _WORD *a5, __int64 *a6)
{
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r11
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r8d
  __int64 result; // rax
  __int64 v24; // rdx
  _WORD *v25; // rcx
  __int64 v26; // rbx
  int v27; // r8d
  __int64 v28; // rdx
  _WORD *v29; // rcx
  _WORD *v30; // rcx
  __int64 v31; // r11
  _WORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // r8d
  int v37; // r8d
  __int64 v38; // rdi

  v7 = a2;
  v8 = *((unsigned __int16 *)a4 + 4);
  v9 = 0LL;
  if ( PpmHeteroMultiCoreClassesEnabled )
  {
    v24 = a1;
    v25 = &a5[264 * a1 + 792 + 132 * v7];
    if ( (unsigned __int16)v8 >= *v25 )
      v26 = 0LL;
    else
      v26 = *(_QWORD *)&v25[4 * v8 + 4];
    v30 = &a5[264 * v24 + 4488 + 132 * v7];
    if ( (unsigned __int16)v8 >= *v30 )
      v31 = 0LL;
    else
      v31 = *(_QWORD *)&v30[4 * v8 + 4];
    v32 = &a5[264 * v24 + 2640 + 132 * v7];
    if ( (unsigned __int16)v8 >= *v32 )
      v33 = 0LL;
    else
      v33 = *(_QWORD *)&v32[4 * v8 + 4];
    v34 = *a4;
    v16 = v26 & *a4;
    v20 = v31 & v34;
    v19 = v33 & v34;
    if ( a3 )
    {
      v35 = a3 - 1;
      if ( !v35 )
        goto LABEL_49;
      v36 = v35 - 1;
      if ( !v36 )
        goto LABEL_19;
      v37 = v36 - 1;
      if ( !v37 )
        goto LABEL_49;
      if ( v37 == 1 )
        goto LABEL_19;
    }
    v16 = v34;
    v19 = v34;
    v20 = v34;
    goto LABEL_19;
  }
  if ( (unsigned __int16)v8 >= *a5 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a5[4 * v8 + 4];
  if ( (unsigned __int16)v8 >= a5[132] )
    v11 = 0LL;
  else
    v11 = *(_QWORD *)&a5[4 * v8 + 136];
  if ( (unsigned __int16)v8 >= a5[264] )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)&a5[4 * v8 + 268];
  if ( (unsigned __int16)v8 >= a5[396] )
    v13 = 0LL;
  else
    v13 = *(_QWORD *)&a5[4 * v8 + 400];
  if ( (unsigned __int16)v8 >= a5[528] )
    v14 = 0LL;
  else
    v14 = *(_QWORD *)&a5[4 * v8 + 532];
  if ( (unsigned __int16)v8 >= a5[660] )
    v15 = 0LL;
  else
    v15 = *(_QWORD *)&a5[4 * v8 + 664];
  v16 = *a4;
  v17 = v16 & v10;
  v18 = v16 & v11;
  v19 = v16 & v12;
  v20 = v16 & v13;
  if ( !a3 )
  {
LABEL_33:
    v19 = v16;
    v20 = v16;
    goto LABEL_19;
  }
  v21 = a3 - 1;
  if ( !v21 )
  {
    v16 = v17;
    goto LABEL_18;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v16 &= v15;
LABEL_18:
    v19 = v17;
    v20 = v18;
    goto LABEL_19;
  }
  v27 = v22 - 1;
  if ( v27 )
  {
    if ( v27 == 1 )
    {
      v16 &= v14;
      goto LABEL_19;
    }
    goto LABEL_33;
  }
LABEL_49:
  v16 = v19;
LABEL_19:
  *a6 = v20;
  a6[1] = v19;
  a6[2] = v16;
  result = KeIsEmptyAffinityEx(&a5[264 * a1 + 6336 + 132 * a2]);
  if ( !(_DWORD)result )
  {
    result = a2 + 48LL + 2LL * a1;
    v28 = *((unsigned __int16 *)a4 + 4);
    v29 = &a5[132 * result];
    if ( (unsigned __int16)v28 < *v29 )
      v9 = *(_QWORD *)&v29[4 * v28 + 4];
    v38 = v9 & v16;
    if ( v38 )
    {
      a6[2] = v38;
      a6[1] = v9 & v19;
      *a6 = v9 & v20;
    }
  }
  return result;
}
