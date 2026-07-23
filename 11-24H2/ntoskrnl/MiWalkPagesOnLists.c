/*
 * XREFs of MiWalkPagesOnLists @ 0x14026E7E0
 * Callers:
 *     MiCreatePfnBitMaps @ 0x1407FAF3C (MiCreatePfnBitMaps.c)
 *     MiMirrorBrownPhase @ 0x140B6E4AC (MiMirrorBrownPhase.c)
 * Callees:
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     MiMirrorAddPagesToBrownList @ 0x14026E03C (MiMirrorAddPagesToBrownList.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiMirrorNodeFreeZeroPages @ 0x1404F8568 (MiMirrorNodeFreeZeroPages.c)
 */

__int64 __fastcall MiWalkPagesOnLists(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // si
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdi
  unsigned int v13; // edi
  __int64 v14; // rbx
  unsigned __int8 v15; // si
  volatile LONG *v16; // rbp
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 result; // rax
  unsigned int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned __int8 CurrentIrql; // r12
  volatile LONG *v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rbp
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rcx
  _QWORD *v33; // r14
  __int64 v34; // [rsp+30h] [rbp-58h]
  volatile LONG *v35; // [rsp+48h] [rbp-40h]
  __int64 v36; // [rsp+90h] [rbp+8h]
  __int64 v37; // [rsp+90h] [rbp+8h]
  unsigned int v38; // [rsp+A8h] [rbp+20h]

  v36 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 16LL;
  v34 = 16LL;
  if ( a3 <= 4LL )
  {
    v20 = a5;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v6 + 8 * v5 + 7136);
        if ( v5 > 1 )
          break;
        MiMirrorNodeFreeZeroPages(v7, v6, 0LL);
        v5 = 2LL;
      }
      if ( v5 == 2 )
        break;
      if ( v5 == 3 )
      {
        if ( *(_QWORD *)v21 == *(_QWORD *)(v6 + 19616) )
          goto LABEL_43;
        v22 = 88 * (v20 + 64LL);
        goto LABEL_31;
      }
LABEL_32:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, a2);
      }
      v24 = (volatile LONG *)(v21 + 32);
      v35 = (volatile LONG *)(v21 + 32);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v21 + 32));
      v27 = *(_QWORD *)(v21 + 16);
      v28 = 0x3FFFFFFFFFLL;
      if ( v27 != 0x3FFFFFFFFFLL )
      {
        while ( 1 )
        {
          v29 = 48 * v27 - 0x220000000000LL;
          if ( !_bittest64((const signed __int64 *)(v29 + 40), 0x35u) )
          {
            if ( v5 == 2 && (unsigned int)MiIsDecayPfn(v27, v25, v28, v26) )
            {
              v30 = *(_QWORD *)(v29 + 16);
              if ( qword_140E2DCC0 && (v30 & 0x10) == 0 )
                v30 &= ~qword_140E2DCC0;
              v32 = (v30 >> 12) & 0xFFFFFFFFFFLL;
              if ( v32 == v27 )
                goto LABEL_36;
              do
              {
                v33 = (_QWORD *)(48 * v32 - 0x220000000000LL);
                if ( v36 )
                  MiMirrorAddPagesToBrownList(v32, 1uLL);
                else
                  MiUpdateLargePageCandidateValue(v6, v32, 3, 3, 0LL);
                v32 = *v33 & 0xFFFFFFFFFFLL;
              }
              while ( v32 != v27 );
              v8 = 16LL;
            }
            else if ( v36 )
            {
              MiMirrorAddPagesToBrownList(v27, 1uLL);
            }
            else
            {
              MiUpdateLargePageCandidateValue(v6, v27, 3, 3, 0LL);
            }
            v28 = 0x3FFFFFFFFFLL;
          }
LABEL_36:
          v27 = *(_QWORD *)v29 & 0xFFFFFFFFFFLL;
          if ( v27 == v28 )
          {
            v20 = a5;
            v24 = v35;
            break;
          }
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v24);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      }
      __writecr8(CurrentIrql);
      if ( v5 == 2 )
      {
        v31 = v20 + 1;
        a1 = 1LL;
        if ( v20 == 7 )
          v31 = 0;
        else
          v5 = 1LL;
        v20 = v31;
        a5 = v31;
        goto LABEL_42;
      }
      if ( v5 != 3 || (++v20, a5 = v20, v20 == 16) )
      {
LABEL_42:
        v7 = v36;
LABEL_43:
        if ( ++v5 > 4 )
          goto LABEL_2;
      }
      else
      {
        v7 = v36;
        v5 = 3LL;
      }
    }
    v22 = 88LL * v20 + 3264;
LABEL_31:
    v21 = v6 + v22;
    goto LABEL_32;
  }
LABEL_2:
  v9 = v6 + 4240;
  v37 = v6 + 4240;
  do
  {
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = v10;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 16));
    v11 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 != 0x3FFFFFFFFFLL )
    {
      do
      {
        v12 = (_QWORD *)(48 * v11 - 0x220000000000LL);
        if ( v7 )
          MiMirrorAddPagesToBrownList(v11, 1uLL);
        else
          MiUpdateLargePageCandidateValue(v6, v11, 3, 3, 0LL);
        v11 = *v12 & 0xFFFFFFFFFFLL;
      }
      while ( v11 != 0x3FFFFFFFFFLL );
      v9 = v37;
      v8 = v34;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 16));
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = v10;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    __writecr8(v10);
    v9 += 88LL;
    --v8;
    v37 = v9;
    v34 = v8;
  }
  while ( v8 );
  v13 = 0;
  v38 = 0;
  do
  {
    v14 = v13 != 0 ? 4096LL : 3968LL;
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = v15;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v16 = (volatile LONG *)(v14 + v6 + 32);
    ExAcquireSpinLockExclusiveAtDpcLevel(v16);
    v17 = *(_QWORD *)(v14 + v6 + 16);
    if ( v17 != 0x3FFFFFFFFFLL )
    {
      do
      {
        v18 = (_QWORD *)(48 * v17 - 0x220000000000LL);
        if ( v7 )
          MiMirrorAddPagesToBrownList(v17, 1uLL);
        else
          MiUpdateLargePageCandidateValue(v6, v17, 3, 3, 0LL);
        v17 = *v18 & 0xFFFFFFFFFFLL;
      }
      while ( v17 != 0x3FFFFFFFFFLL );
      v13 = v38;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = v15;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    result = v15;
    __writecr8(v15);
    v38 = ++v13;
  }
  while ( v13 < 2 );
  return result;
}
