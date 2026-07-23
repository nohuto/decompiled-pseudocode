/*
 * XREFs of MiGetPerfectFreeOrZeroPage @ 0x14033D370
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 * Callees:
 *     MiGetPerfectColorHeadPage @ 0x14033D740 (MiGetPerfectColorHeadPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall MiGetPerfectFreeOrZeroPage(__int64 a1, int a2, int a3)
{
  char v3; // bl
  int v5; // edi
  __int64 *v6; // rax
  char v7; // r13
  unsigned __int64 v8; // r15
  _SLIST_HEADER *v9; // r12
  unsigned __int64 v10; // rdx
  volatile signed __int32 *v11; // r8
  __int64 v12; // r9
  PSLIST_ENTRY v13; // r14
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  volatile signed __int32 *v17; // r9
  unsigned int v18; // eax
  __int64 CurrentIrql; // rcx
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  int v22; // r13d
  unsigned __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-78h]
  unsigned __int64 v25; // [rsp+28h] [rbp-70h]
  _QWORD v26[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-58h]
  int v28; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+4Ch] [rbp-4Ch]
  int v30; // [rsp+50h] [rbp-48h]
  int v31; // [rsp+54h] [rbp-44h]
  __int64 v32; // [rsp+58h] [rbp-40h]
  unsigned __int8 v33; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v34; // [rsp+B8h] [rbp+20h]

  v26[0] = a1;
  v26[1] = 0LL;
  v31 = 0;
  v3 = a3;
  v32 = 0LL;
  v30 = a3;
  v28 = 1;
  v29 = a2;
  v5 = (a3 & 0x10) == 0;
  v6 = &MiZeroThenZero;
  if ( (a3 & 0x10) == 0 )
    v6 = &MiFreeThenFree;
  v27 = v6;
  if ( (a2 & 0x30000) != 0x30000 || (a2 & 0xC0000) != 0x40000 )
    return MiGetPerfectColorHeadPage(v26);
  v7 = a2;
  v8 = (unsigned __int8)a2;
  while ( 1 )
  {
    if ( !_bittest64(*(const signed __int64 **)(a1 + 16 * (v5 + 928LL) + 8), v8) )
      goto LABEL_22;
    v9 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8LL * v5 + 14944) + 16 * v8);
    v13 = RtlpInterlockedPopEntrySList(v9);
    if ( v13 )
      goto LABEL_8;
    if ( v3 & 1 | ((v3 & 2) != 0) )
    {
      v33 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v33 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    }
    v15 = v8 & 0x1F;
    LOBYTE(v16) = 1;
    v34 = v15;
    v24 = 4 * (v8 >> 5);
    v17 = (volatile signed __int32 *)(v24 + *(_QWORD *)(a1 + 16 * (v5 + 928LL) + 8));
    v25 = v15 + 1;
    if ( v15 + 1 <= 0x20 )
    {
      v18 = ~(1 << v15);
LABEL_16:
      _InterlockedAnd(v17, v18);
      goto LABEL_17;
    }
    if ( (v8 & 0x1F) == 0 )
      goto LABEL_28;
    _InterlockedAnd(v17, ~(((1 << (32 - (v7 & 0x1F))) - 1) << v15));
    v16 = 1LL - (32 - (v7 & 0x1Fu));
    ++v17;
    if ( v16 >= 0x20 )
    {
      v21 = v16 >> 5;
      v16 += -32LL * (v16 >> 5);
      do
      {
        *v17++ = 0;
        --v21;
      }
      while ( v21 );
    }
    if ( v16 )
    {
LABEL_28:
      v18 = -1 << v16;
      goto LABEL_16;
    }
LABEL_17:
    v13 = RtlpInterlockedPopEntrySList(v9);
    if ( v13 )
      break;
    if ( v33 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
      __writecr8(v33);
    }
LABEL_22:
    if ( v5 == *((_DWORD *)v27 + 1) )
      return MiGetPerfectColorHeadPage(v26);
    v5 = *((_DWORD *)v27 + 1);
  }
  v10 = 1LL;
  v11 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16 * (v5 + 928LL) + 8) + v24);
  if ( v25 <= 0x20 )
  {
    v20 = 1 << v34;
    goto LABEL_31;
  }
  if ( !v34 )
    goto LABEL_37;
  v22 = v7 & 0x1F;
  _InterlockedOr(v11++, ((1 << (32 - v22)) - 1) << (v8 & 0x1F));
  v10 = 1LL - (unsigned int)(32 - v22);
  if ( v10 >= 0x20 )
  {
    v23 = v10 >> 5;
    v10 += -32LL * (v10 >> 5);
    do
    {
      *v11++ = -1;
      --v23;
    }
    while ( v23 );
  }
  if ( v10 )
  {
LABEL_37:
    v20 = (1 << v10) - 1;
LABEL_31:
    _InterlockedOr(v11, v20);
  }
  if ( v33 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
    __writecr8(v33);
  }
LABEL_8:
  v13[1].Next = (_SLIST_ENTRY *)CLFS_LSN_NULL_EXT;
  if ( v5 )
  {
    MiSetOriginalPtePfnFromFreeList(&v13[1], v10, v11, v12);
LABEL_10:
    v13->Next = 0LL;
    return (__int64)v13;
  }
  if ( (MiFlags & 0x80u) == 0LL )
    goto LABEL_10;
  if ( (++dword_140E302B0 & MmPageValidationFrequency) != 0 )
    goto LABEL_10;
  MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v13[0x22000000000LL] >> 4));
  v13->Next = 0LL;
  return (__int64)v13;
}
