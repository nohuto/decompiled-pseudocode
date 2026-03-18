/*
 * XREFs of CmpRollbackTransactionArray @ 0x14086C1E8
 * Callers:
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     TmRollbackEnlistment @ 0x1404FC6B0 (TmRollbackEnlistment.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140A061B8 (CmpRollbackLightWeightTransaction.c)
 *     CmpRetryBackOff @ 0x140AB94E0 (CmpRetryBackOff.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PVOID *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  PVOID *v7; // r14
  __int64 v8; // rbp
  PVOID v9; // rbx
  struct _KENLISTMENT *v10; // rcx
  NTSTATUS v11; // esi

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
