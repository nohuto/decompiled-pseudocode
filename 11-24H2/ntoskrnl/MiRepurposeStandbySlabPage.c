/*
 * XREFs of MiRepurposeStandbySlabPage @ 0x1403F80A4
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     MiReInitializeFreeSlabPfn @ 0x140218778 (MiReInitializeFreeSlabPfn.c)
 *     MiDiscardTransitionPteEx @ 0x1402188CC (MiDiscardTransitionPteEx.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiLockLowestPrioritySecondaryStandbyPage @ 0x1403F8350 (MiLockLowestPrioritySecondaryStandbyPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiRepurposeStandbySlabPage(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r13
  unsigned __int8 v3; // bp
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned __int8 v6; // r15
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // rdx
  unsigned int v11; // edx
  char v12; // r8
  int v13; // r9d
  unsigned __int64 v14; // r10
  bool i; // zf
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  bool v23; // al
  unsigned int v24; // ecx
  volatile signed __int32 *v25; // r8
  unsigned int v26; // eax
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned int v29; // r9d
  volatile signed __int32 *v30; // r8
  unsigned int v31; // eax
  int v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+60h] [rbp+8h] BYREF
  int v35; // [rsp+68h] [rbp+10h]
  __int64 v36; // [rsp+70h] [rbp+18h]

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 57216LL * *(unsigned int *)(a1 + 132);
  if ( a2 == 0xFF )
  {
    v5 = *(_DWORD *)(a1 + 128);
    v3 = 0;
    if ( v5 != 8 )
    {
      v6 = 0;
      LOBYTE(v35) = 0;
      v7 = v4 + 56984;
      goto LABEL_4;
    }
    v5 = 0;
    v7 = *(_QWORD *)(v4 + 57008) + 314096LL;
    v6 = 64;
    LOBYTE(v35) = 64;
    v11 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      if ( v11 > 1 )
      {
        a1 = *(_QWORD *)(v7 + 8);
        v12 = v11 - 1;
        v13 = *(_DWORD *)a1;
        v14 = a1 + 4 * ((unsigned __int64)(v11 - 1) >> 5);
        if ( a1 != v14 )
        {
          for ( i = v13 == 0; i; i = v16 == 0 )
          {
            a1 += 4LL;
            v16 = *(_DWORD *)a1;
            if ( a1 == v14 )
            {
              v22 = (v16 & (0xFFFFFFFF >> ~v12)) == 0;
              goto LABEL_23;
            }
          }
          goto LABEL_4;
        }
        a1 = 32 - v11;
        v22 = (v13 & (0xFFFFFFFF >> (32 - v11))) == 0;
LABEL_23:
        v23 = v22;
        goto LABEL_24;
      }
      if ( v11 == 1 )
      {
        v23 = !_bittest(*(const signed __int32 **)(v7 + 8), 0);
LABEL_24:
        if ( v23 )
          return -1LL;
      }
    }
  }
  else
  {
    v6 = a2;
    v7 = *(_QWORD *)(v4 + 57008) + 314096LL;
    LOBYTE(v35) = a2;
    v5 = a2;
  }
LABEL_4:
  v34 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  while ( v3 <= v6 )
  {
    if ( !_bittest64(*(const signed __int64 **)(v7 + 8), v5) )
      goto LABEL_8;
    v17 = *(_QWORD *)(v2 + 24);
    v36 = *(_QWORD *)(v2 + 72) + 704LL * v3;
    v18 = MiLockLowestPrioritySecondaryStandbyPage(v17, v36, &v34, 0LL);
    if ( v18 != -1 )
      goto LABEL_20;
    LOBYTE(v24) = 1;
    v25 = (volatile signed __int32 *)(*(_QWORD *)(v7 + 8) + 4 * ((unsigned __int64)v5 >> 5));
    if ( (unsigned __int64)(v5 & 0x1F) + 1 <= 0x20 )
    {
      v26 = ~(1 << (v5 & 0x1F));
LABEL_37:
      _InterlockedAnd(v25, v26);
      goto LABEL_38;
    }
    v27 = v5 & 0x1F;
    if ( (v5 & 0x1F) == 0 )
      goto LABEL_36;
    _InterlockedAnd(v25++, ~(((1 << (32 - v27)) - 1) << (v5 & 0x1F)));
    v24 = 1 - (32 - v27);
    if ( v24 >= 0x20 )
    {
      v28 = (unsigned __int64)v24 >> 5;
      do
      {
        *v25 = 0;
        v24 -= 32;
        ++v25;
        --v28;
      }
      while ( v28 );
    }
    if ( v24 )
    {
LABEL_36:
      v26 = -1 << v24;
      goto LABEL_37;
    }
LABEL_38:
    v18 = MiLockLowestPrioritySecondaryStandbyPage(*(_QWORD *)(v2 + 24), v36, &v34, 0LL);
    if ( v18 != -1 )
    {
      LOBYTE(v29) = 1;
      v30 = (volatile signed __int32 *)(*(_QWORD *)(v7 + 8) + 4 * ((unsigned __int64)v5 >> 5));
      if ( (unsigned __int64)(v5 & 0x1F) + 1 <= 0x20 )
      {
        v31 = 1 << (v5 & 0x1F);
        goto LABEL_47;
      }
      v32 = v5 & 0x1F;
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_46;
      _InterlockedOr(v30, ((1 << (32 - v32)) - 1) << (v5 & 0x1F));
      v29 = 1 - (32 - v32);
      ++v30;
      if ( v29 >= 0x20 )
      {
        v33 = (unsigned __int64)v29 >> 5;
        do
        {
          *v30 = -1;
          v29 -= 32;
          ++v30;
          --v33;
        }
        while ( v33 );
      }
      if ( v29 )
      {
LABEL_46:
        v31 = (1 << v29) - 1;
LABEL_47:
        _InterlockedOr(v30, v31);
      }
LABEL_20:
      v19 = 48 * v18 - 0x220000000000LL;
      MiUnlinkPageFromListEx(v19, 1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v34 + 32));
      MiDiscardTransitionPteEx(v19);
      v35 = *(_DWORD *)(v19 + 32);
      BYTE2(v35) = BYTE2(v35) & 0xF8 | 1;
      *(_DWORD *)(v19 + 32) = v35;
      MiReInitializeFreeSlabPfn((_QWORD *)v19, v2, v20, v21);
      MiUnlockPage(v19, CurrentIrql);
      return v18;
    }
LABEL_8:
    v6 = v35;
    ++v3;
    ++v5;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(CurrentIrql);
  return -1LL;
}
