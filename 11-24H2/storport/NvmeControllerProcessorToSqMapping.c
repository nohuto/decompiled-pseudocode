/*
 * XREFs of NvmeControllerProcessorToSqMapping @ 0x1400F33F0
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400EFCD4 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F3814 (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerProcessorToSqMapping(__int64 a1)
{
  _DWORD *v1; // rbp
  int v3; // edi
  _DWORD *v4; // rsi
  char v5; // r12
  void *v7; // rcx
  __int64 Pool; // rax
  unsigned int v9; // r15d
  __int64 v10; // r9
  _DWORD *v11; // rax
  unsigned int v12; // ecx
  unsigned int i; // edx
  unsigned int v14; // r8d
  unsigned int j; // r9d
  __int64 v16; // r8
  unsigned int k; // r14d
  unsigned int v18; // r8d
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  unsigned int v24; // r14d
  unsigned int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // r11
  unsigned __int64 v30; // rdx
  unsigned int v31; // r10d
  unsigned int v32; // r10d
  __int64 v33; // rdx
  void *v34; // rcx
  __int64 ProcNumber; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v36; // [rsp+88h] [rbp+20h]

  v1 = g_CpuInfo;
  v36 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !g_CpuInfo )
    return 3221225701LL;
  v7 = *(void **)(a1 + 872);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x52436152u);
  Pool = RaidAllocatePool(64LL, 2LL * (unsigned int)v1[2], 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 872) = Pool;
  if ( !Pool )
    goto LABEL_6;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    goto LABEL_18;
  v9 = 4 * v1[2] + 8;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL);
  v36 = v9;
  v11 = (_DWORD *)RaidAllocatePool(256LL, v9, 1380147538LL, v10);
  v4 = v11;
  if ( v11 )
  {
    *v11 = 1;
    v11[1] = v1[2];
    if ( !(unsigned int)NvmeControllerQueryStorMQProperty(a1, 2147483654LL, v9) )
    {
      v12 = v1[2];
      for ( i = 0; i < v12; ++i )
      {
        v14 = v4[i + 2];
        if ( !v14 )
          break;
        if ( v14 > *(unsigned __int16 *)(a1 + 22) )
          break;
      }
      if ( i == v12 )
      {
        v5 = 1;
        for ( j = 0; j < v12; v12 = v1[2] )
        {
          v16 = j++;
          *(_WORD *)(*(_QWORD *)(a1 + 872) + 2 * v16) = *(_WORD *)(192LL * (unsigned int)(v4[v16 + 2] - 1)
                                                                 + *(_QWORD *)(a1 + 728)
                                                                 + 136);
        }
        goto LABEL_41;
      }
    }
LABEL_18:
    for ( k = 0;
          k < *(unsigned __int16 *)(a1 + 22);
          *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)&ProcNumber)) = *(_WORD *)(v19 + 136) )
    {
      LODWORD(ProcNumber) = 0;
      v18 = 0;
      v19 = *(_QWORD *)(a1 + 728) + 192LL * k;
      v20 = *(_QWORD *)(a1 + 912)
          + 32LL
          * *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v19 + 138) << 7) + *(_QWORD *)(a1 + 864) - 104);
      LOWORD(ProcNumber) = *(_WORD *)(v20 + 16);
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 )
      {
        while ( !_bittest64(&v21, v18) )
          ++v18;
      }
      BYTE2(ProcNumber) = v18;
      ++k;
    }
    v12 = v1[2];
    v22 = 0;
    v23 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        if ( !*(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * v23) )
        {
          v24 = *(unsigned __int16 *)(a1 + 22);
          v25 = v22;
          if ( v22 < v24 )
            break;
        }
LABEL_38:
        v12 = v1[2];
        if ( ++v23 >= v12 )
        {
          v5 = 0;
          goto LABEL_40;
        }
      }
      v26 = *(_QWORD *)(a1 + 728);
      v27 = *(_QWORD *)(a1 + 864);
      ProcNumber = v26;
      v28 = 56LL * v23;
      while ( 1 )
      {
        v29 = v26 + 192LL * v22;
        v30 = (unsigned __int64)*(unsigned __int16 *)(v29 + 138) << 7;
        if ( FeatureFixTRIMAddSCSIPassthrough )
        {
          if ( (*(_DWORD *)(a1 + 136) & 0x8000000) != 0
            || (*(_BYTE *)(v30 + v27 - 100) & 0xF) == *(_BYTE *)(*((_QWORD *)v1 + 4) + v28 + 4) )
          {
            *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * v23) = *(_WORD *)(v29 + 136);
            v22 = v22 + 1 < *(unsigned __int16 *)(a1 + 22) ? v22 + 1 : 0;
            goto LABEL_38;
          }
          v22 = v22 + 1 < v24 ? v22 + 1 : 0;
        }
        else
        {
          v31 = v22 + 1;
          if ( (*(_BYTE *)(v30 + v27 - 100) & 0xF) == *(_BYTE *)(*((_QWORD *)v1 + 4) + v28 + 4) )
          {
            *(_WORD *)(*(_QWORD *)(a1 + 872) + 2LL * v23) = *(_WORD *)(v29 + 136);
            v22 = v31 < *(unsigned __int16 *)(a1 + 22) ? v31 : 0;
            goto LABEL_38;
          }
          v22 = v31 < v24 ? v31 : 0;
        }
        if ( v25 == v22 )
          break;
        if ( v22 >= v24 )
          goto LABEL_38;
        v26 = ProcNumber;
      }
      v3 = -1073741595;
LABEL_46:
      if ( v4 )
        ExFreePoolWithTag(v4, 0x52436152u);
      if ( v3 >= 0 )
        return (unsigned int)v3;
      goto LABEL_49;
    }
LABEL_40:
    v9 = v36;
LABEL_41:
    if ( *(_BYTE *)(a1 + 1728) == 1 )
    {
      if ( !v5 )
      {
        v32 = 0;
        if ( v12 )
        {
          do
          {
            v33 = v32++;
            v4[v33 + 2] = *(unsigned __int16 *)(*(_QWORD *)(a1 + 872) + 2 * v33);
          }
          while ( v32 < v1[2] );
        }
      }
      NvmeControllerSetStorMQProperty(a1, 2147483654LL, v9);
    }
    goto LABEL_46;
  }
LABEL_6:
  v3 = -1073741670;
LABEL_49:
  v34 = *(void **)(a1 + 872);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0x52436152u);
    *(_QWORD *)(a1 + 872) = 0LL;
  }
  return (unsigned int)v3;
}
