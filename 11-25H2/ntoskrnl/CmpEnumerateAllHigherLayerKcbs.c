/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C
 * Callers:
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407D1910 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407D19C0 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407D1AFC (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1409DA27C (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1409DAE60 (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087C4C0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
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
              v9 = (unsigned int)guard_dispatch_icall_no_overrides(v14) == 1;
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
            if ( (unsigned int)guard_dispatch_icall_no_overrides(v14) == 1 )
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
