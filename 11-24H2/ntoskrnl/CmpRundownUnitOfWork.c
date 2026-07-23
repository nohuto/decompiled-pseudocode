/*
 * XREFs of CmpRundownUnitOfWork @ 0x14087EED4
 * Callers:
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140987400 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140A43C98 (UNLOCK_TRANSACTION_LIST.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall CmpRundownUnitOfWork(_QWORD *BugCheckParameter4)
{
  ULONG_PTR v1; // rsi
  unsigned int v3; // eax
  ULONG_PTR v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rbx

  v1 = BugCheckParameter4[2];
  if ( v1 )
  {
    BugCheckParameter4[2] = 0LL;
    v3 = *(_DWORD *)v1 & 0x7FFFFFFF;
    if ( v3 == 1 )
    {
      if ( *(_QWORD **)(v1 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v1, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v1 = 0;
      *(_QWORD *)(v1 + 8) = 0LL;
    }
    else
    {
      v12 = 0LL;
      if ( v3 )
      {
        v13 = *(_QWORD **)(v1 + 8);
        do
        {
          if ( (_QWORD *)*v13 == BugCheckParameter4 )
            break;
          v12 = (unsigned int)(v12 + 1);
          ++v13;
        }
        while ( (unsigned int)v12 < v3 );
      }
      if ( (_DWORD)v12 == v3 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v1, (ULONG_PTR)BugCheckParameter4);
      if ( (unsigned int)v12 < v3 - 1 )
      {
        v16 = 8LL * (unsigned int)(v12 + 1);
        v17 = 8 * v12;
        v18 = v3 - 1 - (unsigned int)v12;
        do
        {
          v19 = *(_QWORD *)(v1 + 8);
          v20 = *(_QWORD *)(v16 + v19);
          v16 += 8LL;
          *(_QWORD *)(v17 + v19) = v20;
          v17 += 8LL;
          --v18;
        }
        while ( v18 );
      }
      if ( --*(_DWORD *)v1 == 1 )
      {
        v21 = *(__int64 **)(v1 + 8);
        v22 = *v21;
        ExFreePoolWithTag(v21, 0x78494D43u);
        *(_QWORD *)(v1 + 8) = v22;
      }
    }
  }
  v4 = BugCheckParameter4[3];
  if ( v4 )
  {
    BugCheckParameter4[3] = 0LL;
    v5 = *(_DWORD *)v4 & 0x7FFFFFFF;
    if ( v5 == 1 )
    {
      if ( *(_QWORD **)(v4 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v4, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v4 = 0;
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    else
    {
      v14 = 0LL;
      if ( v5 )
      {
        v15 = *(_QWORD **)(v4 + 8);
        do
        {
          if ( (_QWORD *)*v15 == BugCheckParameter4 )
            break;
          v14 = (unsigned int)(v14 + 1);
          ++v15;
        }
        while ( (unsigned int)v14 < v5 );
      }
      if ( (_DWORD)v14 == v5 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v4, (ULONG_PTR)BugCheckParameter4);
      if ( (unsigned int)v14 < v5 - 1 )
      {
        v23 = 8LL * (unsigned int)(v14 + 1);
        v24 = 8 * v14;
        v25 = v5 - 1 - (unsigned int)v14;
        do
        {
          v26 = *(_QWORD *)(v4 + 8);
          v27 = *(_QWORD *)(v23 + v26);
          v23 += 8LL;
          *(_QWORD *)(v24 + v26) = v27;
          v24 += 8LL;
          --v25;
        }
        while ( v25 );
      }
      if ( --*(_DWORD *)v4 == 1 )
      {
        v28 = *(__int64 **)(v4 + 8);
        v29 = *v28;
        ExFreePoolWithTag(v28, 0x78494D43u);
        *(_QWORD *)(v4 + 8) = v29;
      }
    }
  }
  if ( (_QWORD *)*BugCheckParameter4 != BugCheckParameter4 )
  {
    LOCK_TRANSACTION_LIST();
    v6 = *BugCheckParameter4;
    if ( *(_QWORD **)(*BugCheckParameter4 + 8LL) != BugCheckParameter4
      || (v7 = (_QWORD *)BugCheckParameter4[1], (_QWORD *)*v7 != BugCheckParameter4) )
    {
LABEL_12:
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    UNLOCK_TRANSACTION_LIST();
    BugCheckParameter4[7] = 0LL;
  }
  result = BugCheckParameter4 + 4;
  v9 = (_QWORD *)BugCheckParameter4[4];
  if ( v9 != BugCheckParameter4 + 4 )
  {
    v10 = BugCheckParameter4[6];
    if ( (_QWORD *)v9[1] != result )
      goto LABEL_12;
    v11 = (_QWORD *)BugCheckParameter4[5];
    if ( (_QWORD *)*v11 != result )
      goto LABEL_12;
    *v11 = v9;
    v9[1] = v11;
    result = (_QWORD *)CmpDereferenceKeyControlBlockUnsafe(v10);
    BugCheckParameter4[6] = 0LL;
  }
  return result;
}
