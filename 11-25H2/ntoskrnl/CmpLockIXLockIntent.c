/*
 * XREFs of CmpLockIXLockIntent @ 0x140869074
 * Callers:
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140977BB4 (CmpUndoDeleteKeyForTrans.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v6 + 56)) )
        return 1;
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
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
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * i) + 56LL)) )
          return 1;
      }
      v9 = (_QWORD *)ExAllocatePool2(0x100uLL);
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
  return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL)) != 0;
}
