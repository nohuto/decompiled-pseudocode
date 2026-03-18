/*
 * XREFs of MiDemoteLocalLargePage @ 0x140229CD0
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x14022A544 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiCacheAttributeHasValue @ 0x140229CA8 (MiCacheAttributeHasValue.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiInsertDemotedPages @ 0x140386CE0 (MiInsertDemotedPages.c)
 *     MiAddPageToHeatRanges @ 0x1404404A4 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // edi
  unsigned __int8 v16; // bp
  unsigned int v17; // esi
  __int64 Page; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int v20; // eax
  int v21; // r13d
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // r9
  volatile signed __int64 *v32; // r9
  signed __int64 v33; // rax
  unsigned __int64 v34; // rcx
  signed __int64 v35; // rtt
  unsigned int v36; // esi
  __int64 v37; // r8
  int v38; // [rsp+20h] [rbp-88h]
  unsigned int v39; // [rsp+24h] [rbp-84h]
  unsigned int v40; // [rsp+28h] [rbp-80h]
  unsigned int v41; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v42; // [rsp+34h] [rbp-74h]
  __int64 v43; // [rsp+38h] [rbp-70h]
  __int128 v45; // [rsp+48h] [rbp-60h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h]

  v4 = a2;
  if ( (a3 & 0x4000) != 0 )
    return 0LL;
  v41 = HIWORD(a2);
  v6 = BYTE2(a2) & 3;
  v7 = v6;
  if ( (a2 & 0x30000) == 0 )
    return 0LL;
  v42 = v6;
  v8 = *(_QWORD *)(a1 + 16) + 57216LL * ((a2 >> 9) & 0x3F);
  v9 = (a2 >> 18) & 3;
  v10 = v8 + 1280 * v6;
  v40 = (a2 >> 18) & 3;
  v11 = (a2 >> 15) & 1;
  v38 = v40;
  v43 = v8;
  if ( (_DWORD)v6 == 3 )
  {
    v11 = 0LL;
    if ( (unsigned int)(v9 - 1) <= 1 )
    {
      v13 = *(int *)(*(_QWORD *)(v8 + 14984) + 16976LL);
      if ( v13 >= 0x10 )
        v13 = 16LL;
      v12 = (unsigned int)(dword_140E2D980[v6] - 1) * v13;
      if ( v12 < 0x10 )
        v12 = 16LL;
    }
    else
    {
      v12 = 16LL;
    }
  }
  else
  {
    v12 = 1LL;
    if ( (_DWORD)v6 == 2 )
    {
      v12 = 16LL;
    }
    else if ( (_DWORD)v6 == 1 )
    {
      v12 = 4LL;
    }
  }
  if ( *(_QWORD *)(v10 + 8 * (v9 + 4 * v11) + 24) >= v12 )
    return 0LL;
  if ( (a3 & 0x8000) != 0 )
  {
    v14 = 3;
  }
  else
  {
    v14 = 0;
    if ( (a3 & 0x800) != 0 )
      v14 = 2;
  }
  v39 = v14;
  if ( v14 >= (unsigned int)v6 )
    return 0LL;
  v15 = a3 & 0xFFFC89DB | 0x37604;
  v16 = v4;
  v17 = v4;
  Page = -1LL;
  if ( (v15 & 1) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v15 |= 1u;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      LODWORD(v9) = (v4 >> 18) & 3;
    }
  }
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
    v20 = v4;
    goto LABEL_37;
  }
  if ( (_DWORD)v6 != 3 )
  {
    v4 = v4 & 0xFFF3FFFF | 0x40000;
    v38 = 1;
    Page = MiGetPage(a1, v4, v15 | 8);
  }
  v20 = v4;
  if ( Page == -1 )
  {
LABEL_37:
    v24 = v4 & 0xFFFF7FFF;
    if ( (_DWORD)v6 != 3 )
      v24 = v20;
    while ( 1 )
    {
      do
      {
        v7 = (unsigned int)(v7 - 1);
        v15 &= ~8u;
        v24 ^= (v24 ^ ((_DWORD)v7 << 16)) & 0x30000 ^ (unsigned __int8)((_InterlockedExchangeAdd(
                                                                           (volatile signed __int32 *)(v43 + 1280 * v7),
                                                                           1u)
                                                                       % (unsigned int)dword_140E2D980[v7 & 3]) ^ v24);
        if ( !(_DWORD)v7 || (_DWORD)v7 == 1 && v38 != 1 && v38 != 2 )
          v15 |= 8u;
        Page = MiGetPage(a1, v24, v15);
        if ( Page != -1 )
        {
          v21 = 1;
          goto LABEL_30;
        }
      }
      while ( (_DWORD)v7 != v39 );
      if ( (_DWORD)v6 != 3 || (v24 & 0x8000) != 0 )
        break;
      LODWORD(v7) = 3;
      v24 = (v24 ^ (v41 << 16)) & 0x30000 ^ v24 | 0x8000;
    }
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  v21 = 0;
LABEL_30:
  v22 = 48 * Page - 0x220000000000LL;
  if ( (unsigned int)MiIsFreeZeroPfnCold(v22, v12, v10, a4) && (HvlEnlightenments & 0x200000) != 0 )
  {
    v45 = 0LL;
    LODWORD(v45) = 9;
    v46 = 0LL;
    if ( (unsigned int)MiAddPageToHeatRanges(&v45, Page, (unsigned int)v7) )
      MiIssuePageHeatList(&v45);
    v23 = *(_QWORD *)(v22 + 16);
    if ( v23 )
    {
      if ( qword_140E2D940 )
      {
        if ( (v23 & 0x10) != 0 )
          LODWORD(v23) = v23 & 0xFFFFFFEF;
        else
          LODWORD(v23) = ~(_DWORD)qword_140E2D940 & v23;
      }
    }
    else
    {
      LODWORD(v23) = 0;
    }
    v26 = (unsigned int)v23;
    if ( qword_140E2D940 )
    {
      if ( ((unsigned int)v23 & (unsigned int)qword_140E2D940) != 0 )
        v26 = (unsigned int)v23 | 0x10LL;
      else
        v26 = qword_140E2D940 | (unsigned int)v23;
    }
    *(_QWORD *)(v22 + 16) = v26;
  }
  v27 = 48 * Page - 0x220000000000LL;
  if ( !v21 )
    goto LABEL_76;
  v28 = (unsigned __int8)BYTE2(*(_DWORD *)(v22 + 32)) >> 6;
  if ( (_DWORD)v7 || v28 != 1 )
  {
    v29 = v40;
    v30 = v28;
    if ( v28 != v40 )
      v30 = v40;
    if ( (_DWORD)v7 != 1 || MiCacheAttributeHasValue((v17 >> 18) & 3) )
      goto LABEL_73;
    if ( !MiCacheAttributeHasValue(v28) )
    {
      v30 = 1LL;
LABEL_73:
      if ( v28 != v29 )
        MiChangePageAttribute(v22, v30, 16LL);
    }
  }
  v27 = v22 + 48 * (MiPageSizes[(unsigned int)(v7 + 1)] * (unsigned __int64)v16 % MiPageSizes[v7]);
  MiInsertDemotedPages(v43, v22, v27, v42);
  MiGetPfnPageSizeIndex(v27);
LABEL_76:
  v31 = 15192LL;
  if ( (unsigned int)v7 < 2 )
    v31 = 15200LL;
  v32 = (volatile signed __int64 *)(v43 + v31);
  v33 = *v32;
  do
  {
    v34 = (v33 - 1) ^ (v33 ^ (v33 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v33 == 1 )
      v34 = (v33 - 1) ^ ((v33 - 1) ^ (v34 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v35 = v33;
    v33 = _InterlockedCompareExchange64(v32, v34, v33);
  }
  while ( v35 != v33 );
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v36 = (v17 >> 18) & 3;
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v27 + 32)) >> 6 != v36 )
  {
    v37 = 0LL;
    if ( CurrentIrql >= 2u )
      v37 = 16LL;
    MiChangePageAttribute(v27, v36, v37);
  }
  return v27;
}
