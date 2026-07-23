/*
 * XREFs of PopPowerAggregatorScreenOffEnterStateHandler @ 0x140757FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140757974 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffEnterStateHandler(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-40h]
  unsigned __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+38h] [rbp-28h]
  _DWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-8h]

  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 64) )
  {
    PopPowerAggregatorEnterScreenOff();
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 88) && *(_BYTE *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      PopPowerAggregatorEngageModernStandby(a1);
      return 0LL;
    }
    if ( *(_BYTE *)(a1 + 52) )
      return 0LL;
    v1 = *(_DWORD *)(a1 + 44);
    v10 = 0LL;
    v11 = 0;
    if ( v1 == 2 || v1 == 3 || v1 == 4 )
    {
      LODWORD(v10) = 2;
    }
    else if ( v1 == 5 )
    {
      v10 = 0x8000000400000003uLL;
LABEL_16:
      *(_BYTE *)(a1 + 52) = 1;
      v14 = 0LL;
      v13 = 0LL;
      v12[0] = 7;
      v12[1] = 128;
      PopReleaseRwLock(&PopPowerAggregatorLock);
      PopAcquirePolicyLock(v3, v2);
      PopExecutePowerAction(v12, 0, &v10, v1, 1u);
      PopReleasePolicyLock(v5, v4, v6, v7, v9);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
      return 0LL;
    }
    HIDWORD(v10) = -2147483644;
    goto LABEL_16;
  }
  return 0LL;
}
