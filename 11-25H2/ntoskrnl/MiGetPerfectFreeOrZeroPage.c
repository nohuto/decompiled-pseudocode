/*
 * XREFs of MiGetPerfectFreeOrZeroPage @ 0x14022BEE0
 * Callers:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPerfectColorHeadPage @ 0x14022C2A0 (MiGetPerfectColorHeadPage.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall MiGetPerfectFreeOrZeroPage(__int64 a1, int a2, int a3)
{
  char v3; // bl
  int v5; // edi
  __int64 *v6; // rax
  char v7; // r13
  unsigned __int64 v8; // r15
  _SLIST_HEADER *v9; // r12
  PSLIST_ENTRY v10; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  volatile signed __int32 *v14; // r9
  unsigned int v15; // eax
  __int64 CurrentIrql; // rcx
  unsigned __int64 v17; // rdx
  volatile signed __int32 *v18; // r8
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  int v21; // r13d
  unsigned __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-78h]
  unsigned __int64 v24; // [rsp+28h] [rbp-70h]
  _QWORD v25[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+48h] [rbp-50h]
  int v28; // [rsp+4Ch] [rbp-4Ch]
  int v29; // [rsp+50h] [rbp-48h]
  int v30; // [rsp+54h] [rbp-44h]
  __int64 v31; // [rsp+58h] [rbp-40h]
  unsigned __int8 v32; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v33; // [rsp+B8h] [rbp+20h]

  v25[0] = a1;
  v25[1] = 0LL;
  v30 = 0;
  v3 = a3;
  v31 = 0LL;
  v29 = a3;
  v27 = 1;
  v28 = a2;
  v5 = (a3 & 0x10) == 0;
  v6 = MiZeroThenZero;
  if ( (a3 & 0x10) == 0 )
    v6 = &MiFreeThenFree;
  v26 = v6;
  if ( (a2 & 0x30000) != 0x30000 || (a2 & 0xC0000) != 0x40000 )
    return MiGetPerfectColorHeadPage(v25);
  v7 = a2;
  v8 = (unsigned __int8)a2;
  while ( 1 )
  {
    if ( !_bittest64(*(const signed __int64 **)(a1 + 16 * (v5 + 928LL) + 8), v8) )
      goto LABEL_22;
    v9 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8LL * v5 + 14944) + 16 * v8);
    v10 = RtlpInterlockedPopEntrySList(v9);
    if ( v10 )
      goto LABEL_8;
    if ( v3 & 1 | ((v3 & 2) != 0) )
    {
      v32 = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      v32 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    }
    v12 = v8 & 0x1F;
    LOBYTE(v13) = 1;
    v33 = v12;
    v23 = 4 * (v8 >> 5);
    v14 = (volatile signed __int32 *)(v23 + *(_QWORD *)(a1 + 16 * (v5 + 928LL) + 8));
    v24 = v12 + 1;
    if ( v12 + 1 <= 0x20 )
    {
      v15 = ~(1 << v12);
LABEL_16:
      _InterlockedAnd(v14, v15);
      goto LABEL_17;
    }
    if ( (v8 & 0x1F) == 0 )
      goto LABEL_30;
    _InterlockedAnd(v14, ~(((1 << (32 - (v7 & 0x1F))) - 1) << v12));
    v13 = 1LL - (32 - (v7 & 0x1Fu));
    ++v14;
    if ( v13 >= 0x20 )
    {
      v20 = v13 >> 5;
      v13 += -32LL * (v13 >> 5);
      do
      {
        *v14++ = 0;
        --v20;
      }
      while ( v20 );
    }
    if ( v13 )
    {
LABEL_30:
      v15 = -1 << v13;
      goto LABEL_16;
    }
LABEL_17:
    v10 = RtlpInterlockedPopEntrySList(v9);
    if ( v10 )
      break;
    if ( v32 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
      __writecr8(v32);
    }
LABEL_22:
    if ( v5 == *((_DWORD *)v26 + 1) )
      return MiGetPerfectColorHeadPage(v25);
    v5 = *((_DWORD *)v26 + 1);
  }
  LOBYTE(v17) = 1;
  v18 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16 * (v5 + 928LL) + 8) + v23);
  if ( v24 <= 0x20 )
  {
    v19 = 1 << v33;
    goto LABEL_33;
  }
  if ( !v33 )
    goto LABEL_39;
  v21 = v7 & 0x1F;
  _InterlockedOr(v18++, ((1 << (32 - v21)) - 1) << (v8 & 0x1F));
  v17 = 1LL - (unsigned int)(32 - v21);
  if ( v17 >= 0x20 )
  {
    v22 = v17 >> 5;
    v17 += -32LL * (v17 >> 5);
    do
    {
      *v18++ = -1;
      --v22;
    }
    while ( v22 );
  }
  if ( v17 )
  {
LABEL_39:
    v19 = (1 << v17) - 1;
LABEL_33:
    _InterlockedOr(v18, v19);
  }
  if ( v32 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
    __writecr8(v32);
  }
LABEL_8:
  v10[1].Next = (_SLIST_ENTRY *)CLFS_LSN_NULL_EXT;
  if ( v5 )
  {
    MiSetOriginalPtePfnFromFreeList((__int64 *)&v10[1]);
    goto LABEL_10;
  }
  if ( (MiFlags & 0x80u) == 0LL || (++dword_140E2FF28, (dword_140E2FF28 & MmPageValidationFrequency) != 0) )
  {
LABEL_10:
    v10->Next = 0LL;
    return (__int64)v10;
  }
  else
  {
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v10[0x22000000000LL] >> 4));
    v10->Next = 0LL;
    return (__int64)v10;
  }
}
