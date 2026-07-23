/*
 * XREFs of KiRemoveTimer2 @ 0x140372730
 * Callers:
 *     KeDisableTimer2 @ 0x14036F62C (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140371480 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiTimer2Expiration @ 0x140372250 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140454A68 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned int v1; // ebx
  char *v2; // rdi
  int v3; // r12d
  __int64 v4; // rbp
  __int64 v6; // rsi
  char v7; // al
  _RTL_RB_TREE *v8; // r13
  __int64 v9; // rcx
  _RTL_BALANCED_NODE *v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  _RTL_BALANCED_NODE *Min; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  bool v19; // cf
  volatile signed __int32 *v20; // rcx

  v1 = 0;
  v2 = (char *)(a1 + 130);
  v3 = 0;
  v4 = 72LL;
  v6 = 0LL;
  do
  {
    v7 = *v2;
    if ( (*v2 & 0x10) != 0 )
      goto LABEL_7;
    v8 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (v7 & 7) + 15865632);
    v9 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 15865632);
    v10 = (_RTL_BALANCED_NODE *)(a1 + 24 * (v1 + 1LL));
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
        v11 = 0LL;
      else
        v11 = v9 ^ ((unsigned __int64)v8 | 1);
    }
    else
    {
      v11 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 15865632);
    }
    if ( (_RTL_BALANCED_NODE *)v11 != v10 )
    {
      RtlRbRemoveNode(v8, v10);
      goto LABEL_7;
    }
    RtlRbRemoveNode(v8, v10);
    Min = v8->Min;
    v3 = 1;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
      {
LABEL_14:
        v8[1].Root = (_RTL_BALANCED_NODE *)-1LL;
        goto LABEL_7;
      }
      v14 = (unsigned __int64)Min ^ ((unsigned __int64)v8 | 1);
    }
    else
    {
      v14 = (__int64)v8->Min;
    }
    if ( !v14 )
      goto LABEL_14;
    v8[1].Root = *(_RTL_BALANCED_NODE **)(v4 - v6 + v14 - 24);
LABEL_7:
    ++v1;
    v4 += 8LL;
    ++v2;
    v6 += 24LL;
  }
  while ( v1 < 2 );
  if ( v3 && KiNextTimer2DueTime == *(_QWORD *)(a1 + 72) )
  {
    v15 = -1LL;
    v16 = (__int64 *)&unk_140F21730;
    v17 = 7LL;
    do
    {
      v18 = v15;
      v15 = *v16;
      v19 = *v16 < v18;
      v16 += 3;
      if ( !v19 )
        v15 = v18;
      --v17;
    }
    while ( v17 );
    KiNextTimer2DueTime = v15;
  }
  result = *(unsigned __int8 *)(a1 + 129);
  if ( (result & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    result = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    v20 = *(volatile signed __int32 **)(result + 36536);
    if ( v20 )
      _InterlockedAnd(v20, 0xFFF7FFFF);
  }
  return result;
}
