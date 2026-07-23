/*
 * XREFs of MiMirrorZeroFreeListsCallback @ 0x14041D1E0
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateLargePageCandidates @ 0x14021F840 (MiUpdateLargePageCandidates.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402277A0 (MiUpdateLargePageCandidateValue.c)
 *     MiMirrorAddPagesToBrownList @ 0x14026E03C (MiMirrorAddPagesToBrownList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14041D540 (MiMirrorOmitPagesFromCopy.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiMirrorZeroFreeListsCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r15d
  __int64 v5; // rsi
  int v6; // r14d
  __int64 *v7; // r13
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // bp
  __int64 v10; // rcx
  volatile LONG *v11; // rbx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdi
  bool v14; // zf
  __int64 v16; // [rsp+30h] [rbp-58h]
  char v17; // [rsp+90h] [rbp+8h]
  volatile LONG *v18; // [rsp+98h] [rbp+10h]
  unsigned __int64 v19; // [rsp+A0h] [rbp+18h]
  int v20; // [rsp+A8h] [rbp+20h]

  v20 = a4;
  v4 = a4;
  v5 = *(_WORD *)(a3 + 10) & 3;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = *(__int64 **)a1;
  v16 = *(_QWORD *)(a2 + 14984);
  if ( v6 )
    v8 = *v7;
  else
    v8 = 0LL;
  CurrentIrql = 17;
  v10 = MiPageSizes[v5];
  v19 = v10;
  v17 = 17;
  if ( a4 )
  {
    v11 = (volatile LONG *)(a3 + 32);
    v18 = (volatile LONG *)(a3 + 32);
    do
    {
      if ( !v6 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v17 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = 2;
          LOBYTE(v10) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v10, a2);
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(v11);
      }
      v12 = *((_QWORD *)v11 - 2);
      if ( v12 != 0x3FFFFFFFFFLL )
      {
        do
        {
          v13 = (_QWORD *)(48 * v12 - 0x220000000000LL);
          if ( v6 )
          {
            MiMirrorOmitPagesFromCopy(v8, v12, v19);
          }
          else if ( v7 )
          {
            MiMirrorAddPagesToBrownList(v12, v19);
          }
          else if ( (_DWORD)v5 == 3 )
          {
            MiUpdateLargePageCandidateValue(v16, v12, 3, 1, 0LL);
          }
          else
          {
            MiUpdateLargePageCandidates(v12, v5, 1LL);
          }
          v10 = 0xFFFFFFFFFFLL;
          v12 = *v13 & 0xFFFFFFFFFFLL;
        }
        while ( v12 != 0x3FFFFFFFFFLL );
        v11 = v18;
        CurrentIrql = v17;
        v4 = v20;
      }
      if ( !v6 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
        if ( KiIrqlFlags )
        {
          LOBYTE(a2) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
        }
        v10 = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      v11 += 22;
      v14 = v4-- == 1;
      v18 = v11;
      v20 = v4;
    }
    while ( !v14 );
  }
  return 1LL;
}
