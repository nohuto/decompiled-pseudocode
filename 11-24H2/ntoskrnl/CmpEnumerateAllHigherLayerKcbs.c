/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x140A1FE28
 * Callers:
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407E11F0 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407E12A0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407E13DC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1F3A0 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140A1FBEC (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpReferenceKeyControlBlock @ 0x140845AD0 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
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
  __int64 v11; // r9
  char v12; // dl
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  ULONG_PTR v15; // rsi
  _QWORD *v16; // r14

  v7 = *(_QWORD **)(a1 + 192);
  v8 = 0LL;
  v9 = 0;
  v11 = a3;
  if ( v7 )
  {
    v12 = 0;
    v13 = (_QWORD *)v7[4];
    if ( v13 != v7 + 4 )
    {
      v14 = *(_QWORD **)(a1 + 192);
      while ( 1 )
      {
        if ( v13 == v14 )
          return;
        if ( v13 != v7 + 4 )
          break;
        v13 = v7;
        v12 = 1;
        v7 = (_QWORD *)v7[3];
LABEL_22:
        v14 = *(_QWORD **)(a1 + 192);
        if ( v13 == v14 + 4 )
          return;
      }
      v15 = v13[2];
      v16 = v13;
      if ( v12 )
      {
        v13 = (_QWORD *)*v13;
        if ( v13 != v7 + 4 )
        {
          v8 = v13[2];
          CmpReferenceKeyControlBlock(v8);
          v11 = a3;
        }
        if ( !v9 )
          v9 = (unsigned int)guard_dispatch_icall_no_overrides(v15, a4, a5, v11) == 1;
        if ( !a6 )
          CmpUnlockKcb(v15);
        CmpDelayDerefKeyControlBlock(v15, a4);
        if ( v9 )
        {
          if ( v8 )
          {
            CmpDelayDerefKeyControlBlock(v8, a4);
            v8 = 0LL;
          }
          v13 = v7;
          v12 = 1;
          v7 = (_QWORD *)v7[3];
          goto LABEL_21;
        }
      }
      else
      {
        if ( !a6 )
        {
          if ( a7 )
            CmpLockKcbExclusive(v15);
          else
            CmpLockKcbShared(v15);
        }
        if ( v15 == v8 )
          v8 = 0LL;
        else
          CmpReferenceKeyControlBlock(v15);
        if ( (unsigned int)guard_dispatch_icall_no_overrides(v15, a5, a3, v11) == 1 )
        {
          v13 = (_QWORD *)v13[4];
          v7 = v16;
        }
        else
        {
          v13 = (_QWORD *)*v13;
          if ( !a6 )
            CmpUnlockKcb(v15);
          CmpDelayDerefKeyControlBlock(v15, a4);
        }
      }
      v12 = 0;
LABEL_21:
      v11 = a3;
      goto LABEL_22;
    }
  }
}
