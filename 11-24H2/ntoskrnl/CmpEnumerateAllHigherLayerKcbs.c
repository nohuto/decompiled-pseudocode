/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x140A14F28
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407E1740 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E17F0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E192C (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A144A0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A14CEC (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 */

void __fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  _QWORD *v7; // rdi
  ULONG_PTR v8; // rbp
  bool v9; // r13
  char v11; // dl
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  ULONG_PTR v14; // rsi
  _QWORD *v15; // r14

  v7 = *(_QWORD **)(a1 + 192);
  v8 = 0LL;
  v9 = 0;
  if ( v7 )
  {
    v11 = 0;
    v12 = (_QWORD *)v7[4];
    if ( v12 != v7 + 4 )
    {
      v13 = *(_QWORD **)(a1 + 192);
      do
      {
        if ( v12 == v13 )
          return;
        if ( v12 == v7 + 4 )
        {
          v12 = v7;
          v11 = 1;
          v7 = (_QWORD *)v7[3];
        }
        else
        {
          v14 = v12[2];
          v15 = v12;
          if ( v11 )
          {
            v12 = (_QWORD *)*v12;
            if ( v12 != v7 + 4 )
            {
              v8 = v12[2];
              CmpReferenceKeyControlBlock(v8);
            }
            if ( !v9 )
              v9 = (unsigned int)guard_dispatch_icall_no_overrides(v14, a4) == 1;
            if ( !a6 )
              CmpUnlockKcb(v14);
            CmpDelayDerefKeyControlBlock(v14, a4);
            if ( v9 )
            {
              if ( v8 )
              {
                CmpDelayDerefKeyControlBlock(v8, a4);
                v8 = 0LL;
              }
              v12 = v7;
              v11 = 1;
              v7 = (_QWORD *)v7[3];
              goto LABEL_21;
            }
          }
          else
          {
            if ( !a6 )
            {
              if ( a7 )
                CmpLockKcbExclusive(v14);
              else
                CmpLockKcbShared(v14);
            }
            if ( v14 == v8 )
              v8 = 0LL;
            else
              CmpReferenceKeyControlBlock(v14);
            if ( (unsigned int)guard_dispatch_icall_no_overrides(v14, a5) == 1 )
            {
              v12 = (_QWORD *)v12[4];
              v7 = v15;
            }
            else
            {
              v12 = (_QWORD *)*v12;
              if ( !a6 )
                CmpUnlockKcb(v14);
              CmpDelayDerefKeyControlBlock(v14, a4);
            }
          }
          v11 = 0;
        }
LABEL_21:
        v13 = *(_QWORD **)(a1 + 192);
      }
      while ( v12 != v13 + 4 );
    }
  }
}
