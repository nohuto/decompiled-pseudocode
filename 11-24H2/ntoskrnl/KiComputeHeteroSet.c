/*
 * XREFs of KiComputeHeteroSet @ 0x1404A7EBC
 * Callers:
 *     KiInstallSubNodeHeteroSets @ 0x1404A7D80 (KiInstallSubNodeHeteroSets.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall KiComputeHeteroSet(int a1, int a2, int a3, __int64 *a4, _WORD *a5, __int64 *a6)
{
  __int64 v7; // r9
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int64 v13; // r11
  _WORD *v14; // rcx
  __int64 v15; // r10
  _WORD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // ebp
  int v22; // ebp
  int v23; // ebp
  __int64 result; // rax
  __int64 v25; // rdx
  _WORD *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ebp
  int v37; // ebp
  int v38; // ebp

  v7 = a2;
  v9 = *((unsigned __int16 *)a4 + 4);
  v10 = 0LL;
  if ( PpmHeteroMultiCoreClassesEnabled )
  {
    v11 = a1;
    v12 = &a5[264 * a1 + 792 + 132 * v7];
    if ( (unsigned __int16)v9 >= *v12 )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)&v12[4 * v9 + 4];
    v14 = &a5[264 * v11 + 4488 + 132 * v7];
    if ( (unsigned __int16)v9 >= *v14 )
      v15 = 0LL;
    else
      v15 = *(_QWORD *)&v14[4 * v9 + 4];
    v16 = &a5[264 * v11 + 2640 + 132 * v7];
    if ( (unsigned __int16)v9 >= *v16 )
      v17 = 0LL;
    else
      v17 = *(_QWORD *)&v16[4 * v9 + 4];
    v18 = v13 & *a4;
    v19 = v15 & *a4;
    v20 = v17 & *a4;
    Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline();
    if ( !a3 )
    {
LABEL_16:
      v18 = *a4;
LABEL_17:
      v20 = v18;
      v19 = v18;
      goto LABEL_18;
    }
    v21 = a3 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_18;
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
          goto LABEL_18;
        goto LABEL_16;
      }
    }
    goto LABEL_24;
  }
  if ( (unsigned __int16)v9 >= *a5 )
    v28 = 0LL;
  else
    v28 = *(_QWORD *)&a5[4 * v9 + 4];
  if ( (unsigned __int16)v9 >= a5[132] )
    v29 = 0LL;
  else
    v29 = *(_QWORD *)&a5[4 * v9 + 136];
  if ( (unsigned __int16)v9 >= a5[264] )
    v30 = 0LL;
  else
    v30 = *(_QWORD *)&a5[4 * v9 + 268];
  if ( (unsigned __int16)v9 >= a5[396] )
    v31 = 0LL;
  else
    v31 = *(_QWORD *)&a5[4 * v9 + 400];
  if ( (unsigned __int16)v9 >= a5[528] )
    v32 = 0LL;
  else
    v32 = *(_QWORD *)&a5[4 * v9 + 532];
  if ( (unsigned __int16)v9 >= a5[660] )
    v33 = 0LL;
  else
    v33 = *(_QWORD *)&a5[4 * v9 + 664];
  v18 = *a4;
  v34 = *a4 & v28;
  v35 = *a4 & v29;
  v20 = *a4 & v30;
  v19 = *a4 & v31;
  if ( !a3 )
    goto LABEL_17;
  v36 = a3 - 1;
  if ( !v36 )
  {
    v18 = v34;
    goto LABEL_50;
  }
  v37 = v36 - 1;
  if ( !v37 )
  {
    v18 &= v33;
LABEL_50:
    v20 = v34;
    v19 = v35;
    goto LABEL_18;
  }
  v38 = v37 - 1;
  if ( !v38 )
  {
LABEL_24:
    v18 = v20;
    goto LABEL_18;
  }
  if ( v38 != 1 )
    goto LABEL_17;
  v18 &= v32;
LABEL_18:
  *a6 = v19;
  a6[1] = v20;
  a6[2] = v18;
  result = KeIsEmptyAffinityEx(&a5[264 * a1 + 6336 + 132 * a2]);
  if ( !(_DWORD)result )
  {
    result = a2 + 48LL + 2LL * a1;
    v25 = *((unsigned __int16 *)a4 + 4);
    v26 = &a5[132 * result];
    if ( (unsigned __int16)v25 < *v26 )
      v10 = *(_QWORD *)&v26[4 * v25 + 4];
    v27 = v10 & v18;
    if ( v27 )
    {
      a6[2] = v27;
      a6[1] = v10 & v20;
      *a6 = v10 & v19;
    }
  }
  return result;
}
