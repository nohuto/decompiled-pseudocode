/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A14D64
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A14304 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  ULONG_PTR v4; // rsi
  bool v5; // r15
  __int64 v7; // r8
  char v9; // dl
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  ULONG_PTR v12; // rbp
  _QWORD *v13; // r12

  v3 = *(_QWORD **)(a1 + 192);
  v4 = 0LL;
  v5 = 0;
  v7 = a2;
  if ( v3 )
  {
    v9 = 0;
    v10 = (_QWORD *)v3[4];
    if ( v10 != v3 + 4 )
    {
      v11 = *(_QWORD **)(a1 + 192);
      while ( 1 )
      {
        if ( v10 == v11 )
          return CmpCommitDiscardReplacePost(a1, a3, v7);
        if ( v10 != v3 + 4 )
          break;
        v10 = v3;
        v9 = 1;
        v3 = (_QWORD *)v3[3];
LABEL_16:
        v11 = *(_QWORD **)(a1 + 192);
        if ( v10 == v11 + 4 )
          return CmpCommitDiscardReplacePost(a1, a3, v7);
      }
      v12 = v10[2];
      v13 = v10;
      if ( v9 )
      {
        v10 = (_QWORD *)*v10;
        if ( v10 != v3 + 4 )
        {
          v4 = v10[2];
          CmpReferenceKeyControlBlock(v4);
          v7 = a2;
        }
        if ( !v5 )
          v5 = (unsigned int)CmpCommitDiscardReplacePost(v12, a3, v7) == 1;
        CmpDelayDerefKeyControlBlock(v12, a3);
        if ( v5 )
        {
          if ( v4 )
          {
            CmpDelayDerefKeyControlBlock(v4, a3);
            v4 = 0LL;
          }
          v10 = v3;
          v9 = 1;
          v3 = (_QWORD *)v3[3];
          goto LABEL_15;
        }
      }
      else
      {
        if ( v12 == v4 )
          v4 = 0LL;
        else
          CmpReferenceKeyControlBlock(v10[2]);
        if ( *(_DWORD *)(v12 + 40) == -1 )
        {
          v10 = (_QWORD *)v10[4];
          v3 = v13;
        }
        else
        {
          v10 = (_QWORD *)*v10;
          CmpDelayDerefKeyControlBlock(v12, a3);
        }
      }
      v9 = 0;
LABEL_15:
      v7 = a2;
      goto LABEL_16;
    }
  }
  return CmpCommitDiscardReplacePost(a1, a3, v7);
}
