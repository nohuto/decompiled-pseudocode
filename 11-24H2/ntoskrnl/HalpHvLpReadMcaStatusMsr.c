/*
 * XREFs of HalpHvLpReadMcaStatusMsr @ 0x140478158
 * Callers:
 *     HalpHvEpReadMsr @ 0x1404780D0 (HalpHvEpReadMsr.c)
 * Callees:
 *     HalpWheaGetBankFromMciStatusIndex @ 0x1404781FC (HalpWheaGetBankFromMciStatusIndex.c)
 *     HalpHvLpReadMultipleMsr @ 0x140478BDC (HalpHvLpReadMultipleMsr.c)
 */

char __fastcall HalpHvLpReadMcaStatusMsr(__int64 a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char v6; // di
  int BankFromMciStatusIndex; // eax
  unsigned int v8; // r10d
  __int64 v9; // rsi
  __int64 v11; // rbx

  v6 = 0;
  BankFromMciStatusIndex = HalpWheaGetBankFromMciStatusIndex(a2);
  v9 = BankFromMciStatusIndex;
  if ( BankFromMciStatusIndex > -1 && BankFromMciStatusIndex < (unsigned int)HalpHvMcaBankCount )
  {
    v11 = *a3;
    if ( !*a3 )
    {
      v11 = HalpHvMcaStatusCache + 8LL * HalpHvMcaBankCount * v8;
      if ( (int)HalpHvLpReadMultipleMsr(v8, (unsigned int)HalpHvMcaBankCount, HalpHvMcaStatusMsrIndices, v11) < 0 )
        return v6;
      *a3 = v11;
    }
    v6 = 1;
    *a4 = *(_QWORD *)(v11 + 8 * v9);
  }
  return v6;
}
