/*
 * XREFs of CmpAbortRollbackPacket @ 0x140AA17AC
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     TmRollbackEnlistment @ 0x1404F9F70 (TmRollbackEnlistment.c)
 *     CmpTransDereferenceTransaction @ 0x14087D58C (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x140A026E8 (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall CmpAbortRollbackPacket(__int64 a1, _BYTE *a2)
{
  int v2; // esi
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // edi

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
      if ( v6 )
        break;
LABEL_19:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v6 & 1) != 0 )
    {
      v7 = CmpRollbackLightWeightTransaction(v6 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v7 >= 0 )
      {
        CmpTransDereferenceTransaction(v6);
LABEL_10:
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = 0LL;
LABEL_16:
        if ( v2 >= 0 && v7 < 0 )
          v2 = v7;
        goto LABEL_19;
      }
    }
    else
    {
      v7 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8 * v5), 0LL);
      if ( v7 >= 0 )
      {
        ObfDereferenceObject((PVOID)v6);
        goto LABEL_10;
      }
    }
    if ( v7 == -1072103403 || v7 == -1072103405 || v7 == -1072103402 )
    {
      v7 = 0;
      if ( a2 )
        *a2 = 1;
    }
    goto LABEL_16;
  }
  return (unsigned int)v2;
}
