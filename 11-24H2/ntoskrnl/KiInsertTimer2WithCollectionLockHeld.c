/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1403B11E0
 * Callers:
 *     KiInsertTimer2 @ 0x1403AF484 (KiInsertTimer2.c)
 *     KiExpireTimer2 @ 0x1403AF650 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     KiRemoveTimer2 @ 0x1403B04C0 (KiRemoveTimer2.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, bool *a4)
{
  char v5; // cl
  _BYTE *v7; // rbp
  unsigned __int8 v8; // r12
  int v9; // r15d
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _RTL_RB_TREE *v14; // rdi
  int v15; // ecx
  BOOLEAN v16; // r8
  unsigned __int64 v17; // rax
  _RTL_BALANCED_NODE *Min; // rcx
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rax
  _RTL_RB_TREE *v22; // rsi
  __int64 v23; // r8
  unsigned __int64 Root; // rdx
  int v25; // r8d
  BOOLEAN v26; // al
  unsigned __int64 v27; // rax
  _RTL_BALANCED_NODE *v28; // rcx
  __int64 v29; // rax
  signed __int32 *v31; // rdx
  bool v32; // al
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  signed __int32 v35[8]; // [rsp+0h] [rbp-58h] BYREF

  v5 = *(_BYTE *)(a1 + 130);
  v7 = a3;
  v8 = 1;
  v9 = 0;
  *a3 = 0;
  v10 = 0;
  *a4 = 0;
  if ( v5 == 23 || (v5 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v5 | 0x10;
    goto LABEL_20;
  }
  *(_BYTE *)(a1 + 130) = v5 & 0xEF;
  v11 = 3LL * (v5 & 7);
  v12 = *((_QWORD *)&KiTimer2Collections + 3 * (v5 & 7) + 1);
  v13 = *((_QWORD *)&KiTimer2Collections + v11);
  v14 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 8 * v11);
  if ( (v12 & 1) == 0 )
  {
LABEL_4:
    v15 = v12 & 1;
    v16 = 0;
    if ( !v13 )
      goto LABEL_16;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 72) >= *(_QWORD *)(v13 + 48) )
      {
        v17 = *(_QWORD *)(v13 + 8);
        if ( v15 )
        {
          if ( !v17 )
            goto LABEL_15;
          v17 ^= v13;
        }
        if ( !v17 )
        {
LABEL_15:
          v16 = 1;
          goto LABEL_16;
        }
      }
      else
      {
        v17 = *(_QWORD *)v13;
        if ( v15 )
        {
          if ( !v17 )
            goto LABEL_64;
          v17 ^= v13;
        }
        if ( !v17 )
          goto LABEL_64;
      }
      v13 = v17;
    }
  }
  if ( v13 )
  {
    v13 ^= (unsigned __int64)v14;
    goto LABEL_4;
  }
LABEL_64:
  v16 = 0;
LABEL_16:
  RtlRbInsertNodeEx(v14, (PRTL_BALANCED_NODE)v13, v16, (PRTL_BALANCED_NODE)(a1 + 24));
  Min = v14->Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (_RTL_BALANCED_NODE *)1 )
      v19 = 0LL;
    else
      v19 = (unsigned __int64)Min ^ ((unsigned __int64)v14 | 1);
  }
  else
  {
    v19 = (__int64)v14->Min;
  }
  if ( v19 == a1 + 24 )
  {
    v14[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
LABEL_20:
  v20 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v20 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v20 & 0xEF;
    v21 = v20 & 7;
    v22 = (_RTL_RB_TREE *)(0x140000000LL + 24 * v21 + 15868384);
    v23 = *(_QWORD *)(0x140000008LL + 24 * v21 + 15868384);
    Root = (unsigned __int64)v22->Root;
    if ( (v23 & 1) == 0 )
      goto LABEL_22;
    if ( Root )
    {
      Root ^= (unsigned __int64)v22;
LABEL_22:
      v25 = v23 & 1;
      v26 = 0;
      if ( !Root )
        goto LABEL_32;
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) >= *(_QWORD *)(Root + 32) )
        {
          v27 = *(_QWORD *)(Root + 8);
          if ( v25 )
          {
            if ( !v27 )
              goto LABEL_31;
            v27 ^= Root;
          }
          if ( !v27 )
          {
LABEL_31:
            v26 = 1;
            goto LABEL_32;
          }
        }
        else
        {
          v27 = *(_QWORD *)Root;
          if ( v25 )
          {
            if ( !v27 )
              break;
            v27 ^= Root;
          }
          if ( !v27 )
            break;
        }
        Root = v27;
      }
    }
    v26 = 0;
LABEL_32:
    RtlRbInsertNodeEx(v22, (PRTL_BALANCED_NODE)Root, v26, (PRTL_BALANCED_NODE)(a1 + 48));
    v28 = v22->Min;
    if ( ((unsigned __int8)v28 & 1) != 0 )
    {
      if ( v28 == (_RTL_BALANCED_NODE *)1 )
        v29 = 0LL;
      else
        v29 = (unsigned __int64)v28 ^ ((unsigned __int64)v22 | 1);
    }
    else
    {
      v29 = (__int64)v22->Min;
    }
    if ( v29 == a1 + 48 )
    {
      v9 = 1;
      v22[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
    }
    v7 = a3;
    v10 |= v9;
  }
  if ( v10 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v35, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *v7 = 1;
      if ( !a2 )
      {
        KiRemoveTimer2(a1);
        v8 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v31 = *(signed __int32 **)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 36536);
    if ( v31 )
    {
      _m_prefetchw(v31);
      v33 = *v31;
      do
      {
        v34 = v33;
        v33 = _InterlockedCompareExchange(v31, v33 | 0x80000, v33);
      }
      while ( v34 != v33 );
      v32 = (v33 & 0x80000) == 0;
    }
    else
    {
      v32 = 0;
    }
    *a4 = v32;
  }
  return v8;
}
