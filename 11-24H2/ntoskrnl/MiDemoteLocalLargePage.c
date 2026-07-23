/*
 * XREFs of MiDemoteLocalLargePage @ 0x14033E130
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x14033FA14 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiCacheAttributeHasValue @ 0x14033DD8C (MiCacheAttributeHasValue.c)
 *     MiAddPageToHeatRanges @ 0x140435BC4 (MiAddPageToHeatRanges.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned __int8 v13; // bp
  unsigned int v14; // esi
  __int64 Page; // r15
  unsigned __int8 CurrentIrql; // r12
  unsigned int v17; // eax
  int v18; // r13d
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // r8d
  int v26; // r9d
  unsigned int v27; // edx
  __int64 v28; // r9
  volatile signed __int64 *v29; // r9
  signed __int64 v30; // rax
  unsigned __int64 v31; // rcx
  signed __int64 v32; // rtt
  unsigned int v33; // esi
  int v34; // [rsp+20h] [rbp-88h]
  unsigned int v35; // [rsp+24h] [rbp-84h]
  int v36; // [rsp+28h] [rbp-80h]
  unsigned int v37; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v38; // [rsp+34h] [rbp-74h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int128 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+58h] [rbp-50h]

  v3 = a2;
  if ( (a3 & 0x4000) != 0 )
    return 0LL;
  v37 = HIWORD(a2);
  v4 = BYTE2(a2) & 3;
  v5 = v4;
  if ( (a2 & 0x30000) == 0 )
    return 0LL;
  v38 = v4;
  v6 = *(_QWORD *)(a1 + 16) + 57216LL * ((a2 >> 9) & 0x3F);
  v7 = (a2 >> 18) & 3;
  v36 = (a2 >> 18) & 3;
  v8 = (a2 >> 15) & 1;
  v34 = v36;
  v39 = v6;
  if ( (_DWORD)v4 == 3 )
  {
    v8 = 0LL;
    if ( (unsigned int)(v7 - 1) <= 1 )
    {
      v10 = *(int *)(*(_QWORD *)(v6 + 14984) + 16976LL);
      if ( v10 >= 0x10 )
        v10 = 16LL;
      v9 = (unsigned int)(dword_140E2DD00[v4] - 1) * v10;
      if ( v9 < 0x10 )
        v9 = 16LL;
    }
    else
    {
      v9 = 16LL;
    }
  }
  else
  {
    v9 = 1LL;
    if ( (_DWORD)v4 == 2 )
    {
      v9 = 16LL;
    }
    else if ( (_DWORD)v4 == 1 )
    {
      v9 = 4LL;
    }
  }
  if ( *(_QWORD *)(v6 + 1280 * v4 + 8 * (v7 + 4 * v8) + 24) >= v9 )
    return 0LL;
  if ( (a3 & 0x8000) != 0 )
  {
    v11 = 3;
  }
  else
  {
    v11 = 0;
    if ( (a3 & 0x800) != 0 )
      v11 = 2;
  }
  v35 = v11;
  if ( v11 >= (unsigned int)v4 )
    return 0LL;
  v12 = a3 & 0xFFFC89DB | 0x37604;
  v13 = v3;
  v14 = v3;
  Page = -1LL;
  if ( (a3 & 1) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v12 = a3 & 0xFFFC89DA | 0x37605;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      LODWORD(v7) = (v3 >> 18) & 3;
    }
  }
  if ( (unsigned int)(v7 - 1) <= 1 )
  {
    v17 = v3;
    goto LABEL_37;
  }
  if ( (_DWORD)v4 != 3 )
  {
    v3 = v3 & 0xFFF3FFFF | 0x40000;
    v34 = 1;
    Page = MiGetPage(a1, v3, v12 | 8);
  }
  v17 = v3;
  if ( Page == -1 )
  {
LABEL_37:
    v21 = v3 & 0xFFFF7FFF;
    if ( (_DWORD)v4 != 3 )
      v21 = v17;
    while ( 1 )
    {
      do
      {
        v5 = (unsigned int)(v5 - 1);
        v12 &= ~8u;
        v21 ^= (v21 ^ ((_DWORD)v5 << 16)) & 0x30000 ^ (unsigned __int8)((_InterlockedExchangeAdd(
                                                                           (volatile signed __int32 *)(v39 + 1280 * v5),
                                                                           1u)
                                                                       % (unsigned int)dword_140E2DD00[v5 & 3]) ^ v21);
        if ( !(_DWORD)v5 || (_DWORD)v5 == 1 && v34 != 1 && v34 != 2 )
          v12 |= 8u;
        Page = MiGetPage(a1, v21, v12);
        if ( Page != -1 )
        {
          v18 = 1;
          goto LABEL_30;
        }
      }
      while ( (_DWORD)v5 != v35 );
      if ( (_DWORD)v4 != 3 || (v21 & 0x8000) != 0 )
        break;
      LODWORD(v5) = 3;
      v21 = (v21 ^ (v37 << 16)) & 0x30000 ^ v21 | 0x8000;
    }
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  v18 = 0;
LABEL_30:
  v19 = 48 * Page - 0x220000000000LL;
  if ( (unsigned int)MiIsFreeZeroPfnCold(v19) && (HvlEnlightenments & 0x200000) != 0 )
  {
    v41 = 0LL;
    LODWORD(v41) = 9;
    v42 = 0LL;
    if ( (unsigned int)MiAddPageToHeatRanges(&v41, Page, (unsigned int)v5) )
      MiIssuePageHeatList(&v41);
    v20 = *(_QWORD *)(v19 + 16);
    if ( v20 )
    {
      if ( qword_140E2DCC0 )
      {
        if ( (v20 & 0x10) != 0 )
          LODWORD(v20) = v20 & 0xFFFFFFEF;
        else
          LODWORD(v20) = ~(_DWORD)qword_140E2DCC0 & v20;
      }
    }
    else
    {
      LODWORD(v20) = 0;
    }
    v23 = (unsigned int)v20;
    if ( qword_140E2DCC0 )
    {
      if ( ((unsigned int)v20 & (unsigned int)qword_140E2DCC0) != 0 )
        v23 = (unsigned int)v20 | 0x10LL;
      else
        v23 = qword_140E2DCC0 | (unsigned int)v20;
    }
    *(_QWORD *)(v19 + 16) = v23;
  }
  v24 = 48 * Page - 0x220000000000LL;
  if ( !v18 )
    goto LABEL_76;
  v25 = (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 32)) >> 6;
  if ( (_DWORD)v5 || v25 != 1 )
  {
    v26 = v36;
    v27 = (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 32)) >> 6;
    if ( v25 != v36 )
      v27 = v36;
    if ( (_DWORD)v5 != 1 || MiCacheAttributeHasValue((v14 >> 18) & 3) )
      goto LABEL_73;
    if ( !MiCacheAttributeHasValue(v25) )
    {
      v27 = 1;
LABEL_73:
      if ( v25 != v26 )
        MiChangePageAttribute(v19, v27);
    }
  }
  v24 = v19 + 48 * (MiPageSizes[(unsigned int)(v5 + 1)] * (unsigned __int64)v13 % MiPageSizes[v5]);
  MiInsertDemotedPages(v39, v19, v24, v38);
  MiGetPfnPageSizeIndex(v24);
LABEL_76:
  v28 = 15192LL;
  if ( (unsigned int)v5 < 2 )
    v28 = 15200LL;
  v29 = (volatile signed __int64 *)(v39 + v28);
  v30 = *v29;
  do
  {
    v31 = (v30 - 1) ^ (v30 ^ (v30 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v30 == 1 )
      v31 = (v30 - 1) ^ ((v30 - 1) ^ (v31 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v32 = v30;
    v30 = _InterlockedCompareExchange64(v29, v31, v30);
  }
  while ( v32 != v30 );
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v33 = (v14 >> 18) & 3;
  if ( (unsigned __int8)BYTE2(*(_DWORD *)(v24 + 32)) >> 6 != v33 )
    MiChangePageAttribute(v24, v33);
  return v24;
}
