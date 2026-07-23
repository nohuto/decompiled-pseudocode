/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403767E4
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140375DFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x140376230 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x14048FEF4 (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmCrEncStart @ 0x14079BB48 (SmCrEncStart.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

int __fastcall ST_STORE<SM_TRAITS>::StStart(__int64 a1, int *a2)
{
  unsigned int v4; // ecx
  int v5; // r9d
  int v6; // edx
  int result; // eax
  unsigned int v8; // r8d
  int v9; // edx
  int v10; // ecx
  ULONG_PTR v11; // rsi
  void *Pool2; // rax
  unsigned int *v13; // rsi
  __int64 v14; // rcx
  unsigned int *v15; // r14
  unsigned int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r9
  ULONG v20; // r8d
  int v21; // esi
  int v22; // edx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r9
  bool v26; // zf
  __int64 v27; // rax
  unsigned int v28; // r8d
  _DWORD *v29; // rax
  unsigned int v30; // esi
  void *v31; // rax
  unsigned int v32; // esi
  void *v33; // rax
  int v34; // [rsp+20h] [rbp-38h]
  int v35; // [rsp+20h] [rbp-38h]
  unsigned int v36; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2[2];
  if ( !v4 || ((v4 - 1) & v4) != 0 || v4 - 4096 > 0x1F000 )
    return -1073741453;
  v5 = a2[3];
  if ( (unsigned int)(v5 - 1) > 0x3FFFF )
    return -1073741811;
  v6 = *a2;
  if ( (v6 & 0x100) != 0 )
    return -1073741811;
  if ( (unsigned __int8)v6 == 1 )
  {
    v28 = a2[4];
    if ( !v28 )
      return -1073741811;
    if ( ((v28 - 1) & v28) != 0 )
      return -1073741811;
    if ( v28 > v4 )
      return -1073741811;
    v29 = (_DWORD *)*((_QWORD *)a2 + 7);
    if ( !v29 )
      return -1073741811;
    v26 = *v29 == v5;
  }
  else
  {
    if ( (_BYTE)v6 )
    {
      if ( (unsigned __int8)v6 >= 2u )
        return -1073741811;
      goto LABEL_9;
    }
    if ( a2[4] )
      return -1073741811;
    v26 = *((_QWORD *)a2 + 7) == 0LL;
  }
  if ( !v26 )
    return -1073741811;
LABEL_9:
  if ( *((_BYTE *)a2 + 3)
    || (v6 & 0x600) == 0x600
    || (*((_QWORD *)a2 + 4) == 0LL) != (a2[10] == 0)
    || (v6 & 0x100000) != 0 && (_BYTE)v6 != 0
    || (v6 & 0x200000) != 0 && (_BYTE)v6 != 0
    || (v6 & 0x300000) == 0x100000
    || (v6 & 0xA00000) == 0x800000
    || (v6 & 0x420000) == 0x400000 )
  {
    return -1073741811;
  }
  v8 = a2[2];
  v9 = 0;
  if ( v8 > 0x10 )
  {
    do
      ++v9;
    while ( 16 << v9 < v8 );
  }
  *(_DWORD *)(a1 + 36) = v9;
  *(_DWORD *)(a1 + 40) = 1 << v9;
  v10 = (1 << v9) - 1;
  *(_DWORD *)(a1 + 32) = v10;
  if ( a2[2] == 0x20000 )
    *(_DWORD *)(a1 + 40) = v10;
  if ( *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 48) = a2[10] != 0 ? 16 : 4;
  *(_DWORD *)(a1 + 44) = (unsigned int)(*(_DWORD *)(a1 + 48) + 4111) >> 4;
  if ( a2[3] > (unsigned int)(1 << (32 - v9)) )
    return -1073741306;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  v11 = (unsigned int)(2 * a2[3]);
  Pool2 = (void *)ExAllocatePool2(0x40uLL, v11, 0x74536D73u);
  *(_QWORD *)(a1 + 56) = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memset_0(Pool2, 0, (unsigned int)v11);
  if ( (unsigned __int8)*a2 == 1 )
  {
    v30 = a2[3];
    v31 = (void *)SmAllocEx(v30, 0x74536D73u, -1);
    *(_QWORD *)(a1 + 64) = v31;
    if ( !v31 )
      return -1073741670;
    memset_0(v31, 0, v30);
    v32 = a2[3];
    v33 = (void *)SmAllocEx(v32, 0x74536D73u, -1);
    *(_QWORD *)(a1 + 72) = v33;
    if ( !v33 )
      return -1073741670;
    memset_0(v33, 0, v32);
  }
  v13 = (unsigned int *)(a1 + 4824);
  v14 = a2[16];
  *(_DWORD *)(a1 + 4832) = v14;
  v15 = (unsigned int *)(a1 + 4828);
  result = RtlGetCompressionWorkSpaceSize(word_140011540[v14], (PULONG)(a1 + 4828), (PULONG)(a1 + 4824));
  if ( result >= 0 )
  {
    v16 = *v15;
    if ( *v15 <= *v13 )
      v16 = *v13;
    if ( v16 )
    {
      v27 = ExAllocatePool2(0x40uLL, v16, 0x74536D73u);
      *(_QWORD *)(a1 + 4816) = v27;
      if ( !v27 )
        return -1073741670;
    }
    v17 = *((_QWORD *)a2 + 6);
    if ( v17
      || (v17 = a1 + 4760, result = StEtaHelper::StartHelper((struct _ST_ETA_CONTEXT *)(a1 + 4760), 0), result >= 0) )
    {
      *(_QWORD *)(a1 + 4752) = v17;
      if ( !a2[10] )
        goto LABEL_34;
      if ( !(unsigned __int8)*a2 )
        return -1073741066;
      result = SmCrEncStart(a1 + 4864, *((_QWORD *)a2 + 4));
      if ( result >= 0 )
      {
        if ( (-*(_DWORD *)(a1 + 4872) & (*(_DWORD *)(a1 + 4872) + 15)) == 0x10 )
        {
LABEL_34:
          v18 = ExAllocatePool2(0x40uLL, (-(__int64)((*a2 & 0x8000) != 0) & 0x1000) + 4096, 0x74536D73u);
          *(_QWORD *)(a1 + 5008) = v18;
          if ( v18 )
          {
            if ( (unsigned __int8)*a2 != 1 )
            {
              v20 = a2[3];
              v21 = 0;
LABEL_37:
              v22 = *a2;
              if ( !v21 || (v22 & 0x4000) != 0 )
                v23 = 0;
              else
                v23 = 8;
              v24 = ((unsigned int)*a2 >> 8) & 1 | v23;
              if ( !(_BYTE)v22 )
              {
                v36 = v24 | 0x40;
                if ( (v22 & 0x20000) == 0 )
                  goto LABEL_41;
                if ( (v22 & 0x400000) != 0 )
                {
                  v36 = v24 & 0xFFFFFF9F;
                  goto LABEL_41;
                }
                v24 |= 0x60u;
              }
              v36 = v24;
LABEL_41:
              result = ST_STORE<SM_TRAITS>::StDmStart(a1, a1 + 80, (int *)&v36, v19, v34, v20 - v21);
              if ( result >= 0 )
              {
                if ( !v21 )
                  return 0;
                v36 = v36 & 0xFFFFFFE0 | 0x16;
                result = ST_STORE<SM_TRAITS>::StDmStart(a1, a1 + 2416, (int *)&v36, v25, v35, v21);
                if ( result >= 0 )
                  return 0;
              }
              return result;
            }
            v21 = 1;
            v20 = RtlNumberOfSetBits(*((PRTL_BITMAP *)a2 + 7));
            if ( v20 > 1 )
              goto LABEL_37;
            return -1073741811;
          }
          return -1073741670;
        }
        return -1073741453;
      }
    }
  }
  return result;
}
