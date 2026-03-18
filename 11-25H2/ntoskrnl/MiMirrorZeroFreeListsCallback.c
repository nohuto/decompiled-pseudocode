/*
 * XREFs of MiMirrorZeroFreeListsCallback @ 0x14042FD10
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateLargePageCandidateValue @ 0x14024FD70 (MiUpdateLargePageCandidateValue.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateLargePageCandidates @ 0x1403476B0 (MiUpdateLargePageCandidates.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038E19C (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140430070 (MiMirrorOmitPagesFromCopy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-58h]
  char v18; // [rsp+90h] [rbp+8h]
  volatile LONG *v19; // [rsp+98h] [rbp+10h]
  unsigned __int64 v20; // [rsp+A0h] [rbp+18h]
  int v21; // [rsp+A8h] [rbp+20h]

  v21 = a4;
  v4 = a4;
  v5 = *(_WORD *)(a3 + 10) & 3;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = *(__int64 **)a1;
  v17 = *(_QWORD *)(a2 + 14984);
  if ( v6 )
    v8 = *v7;
  else
    v8 = 0LL;
  CurrentIrql = 17;
  v10 = MiPageSizes[v5];
  v20 = v10;
  v18 = 17;
  if ( a4 )
  {
    v11 = (volatile LONG *)(a3 + 32);
    v19 = (volatile LONG *)(a3 + 32);
    do
    {
      if ( !v6 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v18 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v10) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v10);
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
            MiMirrorOmitPagesFromCopy(v8, v12, v20);
          }
          else if ( v7 )
          {
            MiMirrorAddPagesToBrownList(v12, v20);
          }
          else if ( (_DWORD)v5 == 3 )
          {
            MiUpdateLargePageCandidateValue(v17, v12, 3, 1, 0LL);
          }
          else
          {
            MiUpdateLargePageCandidates(v12, v5, 1LL);
          }
          v10 = 0xFFFFFFFFFFLL;
          v12 = *v13 & 0xFFFFFFFFFFLL;
        }
        while ( v12 != 0x3FFFFFFFFFLL );
        v11 = v19;
        CurrentIrql = v18;
        v4 = v21;
      }
      if ( !v6 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v11);
        if ( KiIrqlFlags )
        {
          LOBYTE(v16) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
        }
        v10 = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      v11 += 22;
      v14 = v4-- == 1;
      v19 = v11;
      v21 = v4;
    }
    while ( !v14 );
  }
  return 1LL;
}
