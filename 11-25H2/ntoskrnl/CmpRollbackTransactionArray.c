/*
 * XREFs of CmpRollbackTransactionArray @ 0x14086AFEC
 * Callers:
 *     CmpParseKey @ 0x14085EAA0 (CmpParseKey.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     TmRollbackEnlistment @ 0x1404F9F30 (TmRollbackEnlistment.c)
 *     CmpRollbackLightWeightTransaction @ 0x140866FE0 (CmpRollbackLightWeightTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140870EB0 (CmpTransDereferenceTransaction.c)
 *     CmpRetryBackOff @ 0x140AB50F4 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PVOID *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  PVOID *v7; // r14
  __int64 v8; // rbp
  PVOID v9; // rbx
  struct _KENLISTMENT *v10; // rcx
  int v11; // esi

  v4 = 0;
  if ( a1 )
  {
    v7 = a2;
    v8 = a1;
    do
    {
      v9 = *v7;
      v10 = (struct _KENLISTMENT *)*v7;
      if ( ((unsigned __int8)*v7 & 1) != 0 )
      {
        v11 = CmpRollbackLightWeightTransaction((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFEuLL);
        CmpTransDereferenceTransaction(v9);
      }
      else
      {
        v11 = TmRollbackEnlistment(v10, 0LL);
        ObfDereferenceObject(*v7);
      }
      if ( v11 < 0 && v4 >= 0 && (((v11 + 1072103405) & 0xFFFFFFFC) != 0 || v11 == -1072103404) )
        v4 = v11;
      ++v7;
      --v8;
    }
    while ( v8 );
    ExFreePoolWithTag(a2, 0x36344D43u);
  }
  CmpRetryBackOff(a4);
  return (unsigned int)v4;
}
