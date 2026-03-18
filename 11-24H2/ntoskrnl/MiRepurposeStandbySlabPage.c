/*
 * XREFs of MiRepurposeStandbySlabPage @ 0x1403A3810
 * Callers:
 *     MiGetPageFromSlabAllocator @ 0x1403A2ED0 (MiGetPageFromSlabAllocator.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403A1C18 (MiReInitializeFreeSlabPfn.c)
 *     MiDiscardTransitionPteEx @ 0x1403A1C98 (MiDiscardTransitionPteEx.c)
 *     MiLockLowestPrioritySecondaryStandbyPage @ 0x1403A3ABC (MiLockLowestPrioritySecondaryStandbyPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  bool v20; // zf
  bool v21; // al
  unsigned int v22; // ecx
  volatile signed __int32 *v23; // r8
  unsigned int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rax
  unsigned int v27; // r9d
  volatile signed __int32 *v28; // r8
  unsigned int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+10h]
  __int64 v34; // [rsp+70h] [rbp+18h]

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
      LOBYTE(v33) = 0;
      v7 = v4 + 56984;
      goto LABEL_4;
    }
    v5 = 0;
    v7 = *(_QWORD *)(v4 + 57008) + 314096LL;
    v6 = 64;
    LOBYTE(v33) = 64;
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
              v20 = (v16 & (0xFFFFFFFF >> ~v12)) == 0;
              goto LABEL_23;
            }
          }
          goto LABEL_4;
        }
        a1 = 32 - v11;
        v20 = (v13 & (0xFFFFFFFF >> (32 - v11))) == 0;
LABEL_23:
        v21 = v20;
        goto LABEL_24;
      }
      if ( v11 == 1 )
      {
        v21 = !_bittest(*(const signed __int32 **)(v7 + 8), 0);
LABEL_24:
        if ( v21 )
          return -1LL;
      }
    }
  }
  else
  {
    v6 = a2;
    v7 = *(_QWORD *)(v4 + 57008) + 314096LL;
    LOBYTE(v33) = a2;
    v5 = a2;
  }
LABEL_4:
  v32 = 0LL;
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
    v34 = *(_QWORD *)(v2 + 72) + 704LL * v3;
    v18 = MiLockLowestPrioritySecondaryStandbyPage(v17, v34, &v32, 0LL);
    if ( v18 != -1 )
      goto LABEL_20;
    LOBYTE(v22) = 1;
    v23 = (volatile signed __int32 *)(*(_QWORD *)(v7 + 8) + 4 * ((unsigned __int64)v5 >> 5));
    if ( (unsigned __int64)(v5 & 0x1F) + 1 <= 0x20 )
    {
      v24 = ~(1 << (v5 & 0x1F));
LABEL_37:
      _InterlockedAnd(v23, v24);
      goto LABEL_38;
    }
    v25 = v5 & 0x1F;
    if ( (v5 & 0x1F) == 0 )
      goto LABEL_36;
    _InterlockedAnd(v23++, ~(((1 << (32 - v25)) - 1) << (v5 & 0x1F)));
    v22 = 1 - (32 - v25);
    if ( v22 >= 0x20 )
    {
      v26 = (unsigned __int64)v22 >> 5;
      do
      {
        *v23 = 0;
        v22 -= 32;
        ++v23;
        --v26;
      }
      while ( v26 );
    }
    if ( v22 )
    {
LABEL_36:
      v24 = -1 << v22;
      goto LABEL_37;
    }
LABEL_38:
    v18 = MiLockLowestPrioritySecondaryStandbyPage(*(_QWORD *)(v2 + 24), v34, &v32, 0LL);
    if ( v18 != -1 )
    {
      LOBYTE(v27) = 1;
      v28 = (volatile signed __int32 *)(*(_QWORD *)(v7 + 8) + 4 * ((unsigned __int64)v5 >> 5));
      if ( (unsigned __int64)(v5 & 0x1F) + 1 <= 0x20 )
      {
        v29 = 1 << (v5 & 0x1F);
        goto LABEL_47;
      }
      v30 = v5 & 0x1F;
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_46;
      _InterlockedOr(v28, ((1 << (32 - v30)) - 1) << (v5 & 0x1F));
      v27 = 1 - (32 - v30);
      ++v28;
      if ( v27 >= 0x20 )
      {
        v31 = (unsigned __int64)v27 >> 5;
        do
        {
          *v28 = -1;
          v27 -= 32;
          ++v28;
          --v31;
        }
        while ( v31 );
      }
      if ( v27 )
      {
LABEL_46:
        v29 = (1 << v27) - 1;
LABEL_47:
        _InterlockedOr(v28, v29);
      }
LABEL_20:
      v19 = 48 * v18 - 0x220000000000LL;
      MiUnlinkPageFromListEx(v19, 1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v32 + 32));
      MiDiscardTransitionPteEx(v19, 2048);
      v33 = *(_DWORD *)(v19 + 32);
      BYTE2(v33) = BYTE2(v33) & 0xF8 | 1;
      *(_DWORD *)(v19 + 32) = v33;
      MiReInitializeFreeSlabPfn((_QWORD *)v19, v2);
      MiUnlockPage(v19, CurrentIrql);
      return v18;
    }
LABEL_8:
    v6 = v33;
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
