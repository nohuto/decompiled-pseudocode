/*
 * XREFs of MiWalkPagesOnLists @ 0x14048A518
 * Callers:
 *     MiCreatePfnBitMaps @ 0x1407EA93C (MiCreatePfnBitMaps.c)
 *     MiMirrorBrownPhase @ 0x140B5DB2C (MiMirrorBrownPhase.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038E19C (MiMirrorAddPagesToBrownList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiMirrorNodeFreeZeroPages @ 0x1404F87E8 (MiMirrorNodeFreeZeroPages.c)
 */

__int64 __fastcall MiWalkPagesOnLists(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int8 v10; // si
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rbx
  unsigned __int8 v16; // si
  volatile LONG *v17; // rbp
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 result; // rax
  unsigned int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned __int8 CurrentIrql; // r12
  volatile LONG *v26; // r13
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rbp
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  _QWORD *v34; // r14
  __int64 v35; // [rsp+30h] [rbp-58h]
  volatile LONG *v36; // [rsp+48h] [rbp-40h]
  __int64 v37; // [rsp+90h] [rbp+8h]
  __int64 v38; // [rsp+90h] [rbp+8h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v37 = a1;
  v5 = a3;
  v7 = a1;
  v8 = 16LL;
  v35 = 16LL;
  if ( a3 <= 4LL )
  {
    v22 = a5;
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(a2 + 8 * v5 + 7136);
        if ( v5 > 1 )
          break;
        MiMirrorNodeFreeZeroPages(v7, a2, 0LL);
        v5 = 2LL;
      }
      if ( v5 == 2 )
        break;
      if ( v5 == 3 )
      {
        if ( *(_QWORD *)v23 == *(_QWORD *)(a2 + 19616) )
          goto LABEL_43;
        v24 = 88 * (v22 + 64LL);
        goto LABEL_31;
      }
LABEL_32:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1);
      }
      v26 = (volatile LONG *)(v23 + 32);
      v36 = (volatile LONG *)(v23 + 32);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v23 + 32));
      v27 = *(_QWORD *)(v23 + 16);
      v28 = 0x3FFFFFFFFFLL;
      if ( v27 != 0x3FFFFFFFFFLL )
      {
        while ( 1 )
        {
          v29 = 48 * v27 - 0x220000000000LL;
          if ( !_bittest64((const signed __int64 *)(v29 + 40), 0x35u) )
          {
            if ( v5 == 2 && MiIsDecayPfn(v27) )
            {
              v31 = *(_QWORD *)(v29 + 16);
              if ( qword_140E2D940 && (v31 & 0x10) == 0 )
                v31 &= ~qword_140E2D940;
              v33 = (v31 >> 12) & 0xFFFFFFFFFFLL;
              if ( v33 == v27 )
                goto LABEL_36;
              do
              {
                v34 = (_QWORD *)(48 * v33 - 0x220000000000LL);
                if ( v37 )
                  MiMirrorAddPagesToBrownList(v33, 1uLL);
                else
                  MiUpdateLargePageCandidateValue(a2, v33, 3, 3, 0LL);
                v33 = *v34 & 0xFFFFFFFFFFLL;
              }
              while ( v33 != v27 );
              v8 = 16LL;
            }
            else if ( v37 )
            {
              MiMirrorAddPagesToBrownList(v27, 1uLL);
            }
            else
            {
              MiUpdateLargePageCandidateValue(a2, v27, 3, 3, 0LL);
            }
            v28 = 0x3FFFFFFFFFLL;
          }
LABEL_36:
          v27 = *(_QWORD *)v29 & 0xFFFFFFFFFFLL;
          if ( v27 == v28 )
          {
            v22 = a5;
            v26 = v36;
            break;
          }
        }
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v26);
      if ( KiIrqlFlags )
      {
        LOBYTE(v30) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
      }
      __writecr8(CurrentIrql);
      if ( v5 == 2 )
      {
        v32 = v22 + 1;
        a1 = 1LL;
        if ( v22 == 7 )
          v32 = 0;
        else
          v5 = 1LL;
        v22 = v32;
        a5 = v32;
        goto LABEL_42;
      }
      if ( v5 != 3 || (++v22, a5 = v22, v22 == 16) )
      {
LABEL_42:
        v7 = v37;
LABEL_43:
        if ( ++v5 > 4 )
          goto LABEL_2;
      }
      else
      {
        v7 = v37;
        v5 = 3LL;
      }
    }
    v24 = 88LL * v22 + 3264;
LABEL_31:
    v23 = a2 + v24;
    goto LABEL_32;
  }
LABEL_2:
  v9 = a2 + 4240;
  v38 = a2 + 4240;
  do
  {
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = v10;
      KiRaiseIrqlProcessIrqlFlags(a1);
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
          MiUpdateLargePageCandidateValue(a2, v11, 3, 3, 0LL);
        v11 = *v12 & 0xFFFFFFFFFFLL;
      }
      while ( v11 != 0x3FFFFFFFFFLL );
      v9 = v38;
      v8 = v35;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 16));
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = v10;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    }
    __writecr8(v10);
    v9 += 88LL;
    --v8;
    v38 = v9;
    v35 = v8;
  }
  while ( v8 );
  v14 = 0;
  v39 = 0;
  do
  {
    v15 = v14 != 0 ? 4096LL : 3968LL;
    v16 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = v16;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v17 = (volatile LONG *)(v15 + a2 + 32);
    ExAcquireSpinLockExclusiveAtDpcLevel(v17);
    v18 = *(_QWORD *)(v15 + a2 + 16);
    if ( v18 != 0x3FFFFFFFFFLL )
    {
      do
      {
        v19 = (_QWORD *)(48 * v18 - 0x220000000000LL);
        if ( v7 )
          MiMirrorAddPagesToBrownList(v18, 1uLL);
        else
          MiUpdateLargePageCandidateValue(a2, v18, 3, 3, 0LL);
        v18 = *v19 & 0xFFFFFFFFFFLL;
      }
      while ( v18 != 0x3FFFFFFFFFLL );
      v14 = v39;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v17);
    if ( KiIrqlFlags )
    {
      LOBYTE(v20) = v16;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
    }
    result = v16;
    __writecr8(v16);
    v39 = ++v14;
  }
  while ( v14 < 2 );
  return result;
}
