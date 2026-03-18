/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140449D18
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140449680 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14044A580 (RtlGetCompressionWorkSpaceSize.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14044A5E8 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x140495634 (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SmCrEncStart @ 0x14079BA38 (SmCrEncStart.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  unsigned int v11; // esi
  void *Pool2; // rax
  int *v13; // rsi
  __int64 v14; // rcx
  int *v15; // r14
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // r9d
  int v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // r9d
  bool v25; // zf
  __int64 v26; // rax
  unsigned int v27; // r8d
  _DWORD *v28; // rax
  unsigned int v29; // esi
  void *v30; // rax
  unsigned int v31; // esi
  void *v32; // rax
  unsigned int v33; // [rsp+68h] [rbp+10h] BYREF

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
    v27 = a2[4];
    if ( !v27 )
      return -1073741811;
    if ( ((v27 - 1) & v27) != 0 )
      return -1073741811;
    if ( v27 > v4 )
      return -1073741811;
    v28 = (_DWORD *)*((_QWORD *)a2 + 7);
    if ( !v28 )
      return -1073741811;
    v25 = *v28 == v5;
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
    v25 = *((_QWORD *)a2 + 7) == 0LL;
  }
  if ( !v25 )
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
  v11 = 2 * a2[3];
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  *(_QWORD *)(a1 + 56) = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memset_0(Pool2, 0, v11);
  if ( (unsigned __int8)*a2 == 1 )
  {
    v29 = a2[3];
    v30 = (void *)SmAllocEx(v29, 1951624563LL, 0xFFFFFFFFLL);
    *(_QWORD *)(a1 + 64) = v30;
    if ( !v30 )
      return -1073741670;
    memset_0(v30, 0, v29);
    v31 = a2[3];
    v32 = (void *)SmAllocEx(v31, 1951624563LL, 0xFFFFFFFFLL);
    *(_QWORD *)(a1 + 72) = v32;
    if ( !v32 )
      return -1073741670;
    memset_0(v32, 0, v31);
  }
  v13 = (int *)(a1 + 4824);
  v14 = a2[16];
  *(_DWORD *)(a1 + 4832) = v14;
  v15 = (int *)(a1 + 4828);
  result = RtlGetCompressionWorkSpaceSize(word_140014BB8[v14], (PULONG)(a1 + 4828), (PULONG)(a1 + 4824));
  if ( result >= 0 )
  {
    v16 = *v15;
    if ( *v15 <= (unsigned int)*v13 )
      v16 = *v13;
    if ( v16 )
    {
      v26 = ExAllocatePool2(0x40uLL);
      *(_QWORD *)(a1 + 4816) = v26;
      if ( !v26 )
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
          v18 = ExAllocatePool2(0x40uLL);
          *(_QWORD *)(a1 + 5008) = v18;
          if ( v18 )
          {
            if ( (unsigned __int8)*a2 != 1 )
            {
              v20 = 0;
LABEL_37:
              v21 = *a2;
              if ( !v20 || (v21 & 0x4000) != 0 )
                v22 = 0;
              else
                v22 = 8;
              v23 = ((unsigned int)*a2 >> 8) & 1 | v22;
              if ( !(_BYTE)v21 )
              {
                v33 = v23 | 0x40;
                if ( (v21 & 0x20000) == 0 )
                  goto LABEL_41;
                if ( (v21 & 0x400000) != 0 )
                {
                  v33 = v23 & 0xFFFFFF9F;
                  goto LABEL_41;
                }
                v23 |= 0x60u;
              }
              v33 = v23;
LABEL_41:
              result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 80, (unsigned int)&v33, v19);
              if ( result >= 0 )
              {
                if ( !v20 )
                  return 0;
                v33 = v33 & 0xFFFFFFE0 | 0x16;
                result = ST_STORE<SM_TRAITS>::StDmStart(a1, (int)a1 + 2416, (unsigned int)&v33, v24);
                if ( result >= 0 )
                  return 0;
              }
              return result;
            }
            v20 = 1;
            if ( RtlNumberOfSetBits(*((PRTL_BITMAP *)a2 + 7)) > 1 )
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
