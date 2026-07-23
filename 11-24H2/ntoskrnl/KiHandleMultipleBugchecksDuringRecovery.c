/*
 * XREFs of KiHandleMultipleBugchecksDuringRecovery @ 0x1405C39F0
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     IoSaveBugCheckRecoveryStatus @ 0x14058F00C (IoSaveBugCheckRecoveryStatus.c)
 *     KiRecordRecoveryFailure @ 0x1405C3C48 (KiRecordRecoveryFailure.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405C3DD8 (KiSetBugCheckRecoveryProgressFlag.c)
 */

char __fastcall KiHandleMultipleBugchecksDuringRecovery(unsigned int a1)
{
  char v1; // bl
  char v2; // al
  unsigned int Number; // edx
  signed __int32 v4; // eax
  unsigned int v5; // edx
  signed __int32 v6; // ecx
  int v8; // [rsp+20h] [rbp-18h] BYREF
  bool v9; // [rsp+24h] [rbp-14h]
  char v10; // [rsp+25h] [rbp-13h]
  BOOL v11; // [rsp+26h] [rbp-12h]
  __int16 v12; // [rsp+2Ah] [rbp-Eh]

  v1 = 0;
  if ( KiRecoveryCallbackCount > 0 )
  {
    _m_prefetchw(&KiBugcheckRecoveryState);
    v2 = _InterlockedOr(&KiBugcheckRecoveryState, 0x10u);
    if ( (v2 & 0x11) == 1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      if ( (v2 & 2) != 0 )
      {
        v9 = a1 >> 4 == Number;
        v10 = ((a1 >> 2) & 3) + 1;
        v12 = 0;
        v8 = 3;
        v11 = KiBugcheckRecoveryOwner == Number;
        IoSaveBugCheckRecoveryStatus(&v8);
        if ( (int)KiSetBugCheckRecoveryProgressFlag(0x800000LL) < 0 )
          KiRecordRecoveryFailure(5LL);
      }
      _m_prefetchw(&KiBugcheckRecoveryState);
      if ( (_InterlockedOr(&KiBugcheckRecoveryState, 8u) & 8) == 0 )
      {
        v4 = KiBugCheckActive;
        v5 = (16 * KeGetCurrentPrcb()->Number) | 3;
        do
        {
          v6 = v4;
          v4 = _InterlockedCompareExchange(&KiBugCheckActive, v5, v4);
        }
        while ( v4 != v6 );
        return 1;
      }
    }
  }
  return v1;
}
