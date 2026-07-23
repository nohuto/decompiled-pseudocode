/*
 * XREFs of CmpLockIXLockIntent @ 0x140A22FF4
 * Callers:
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v6; // rsi
  _QWORD *Pool2; // rax
  __int64 i; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax

  v2 = *a1;
  if ( !*a1 )
  {
    *((_QWORD *)a1 + 1) = a2;
    *a1 = 1;
    goto LABEL_9;
  }
  if ( v2 >= 0 )
  {
    if ( v2 == 1 )
    {
      v6 = *((_QWORD *)a1 + 1);
      if ( CmEqualTrans(*(_QWORD *)(v6 + 56), *(_QWORD *)(a2 + 56)) )
        return 1;
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x78494D43u);
      if ( !Pool2 )
        return 0;
      *((_QWORD *)a1 + 1) = Pool2;
      *Pool2 = v6;
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
      {
        if ( CmEqualTrans(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * i) + 56LL), *(_QWORD *)(a2 + 56)) )
          return 1;
      }
      v9 = (_QWORD *)ExAllocatePool2(0x100uLL, 8LL * (*a1 + 1), 0x78494D43u);
      v10 = v9;
      if ( !v9 )
        return 0;
      memmove(v9, *((const void **)a1 + 1), 8LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x78494D43u);
      v11 = *a1;
      *((_QWORD *)a1 + 1) = v10;
      v10[v11] = a2;
    }
    ++*a1;
LABEL_9:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  return CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), *(_QWORD *)(a2 + 56)) != 0;
}
