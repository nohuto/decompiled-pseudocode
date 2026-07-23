/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x140AC707C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline @ 0x1405D51C8 (Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     PopBatteryCheckTrigger @ 0x140A31A78 (PopBatteryCheckTrigger.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A66E48 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopRecalculateCBTriggerLevels(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  _BYTE *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  __int64 v11; // rbx
  __int64 v13; // [rsp+20h] [rbp-8h]
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = a1;
  PopAcquirePolicyLock(a1, a2);
  v14 = 0;
  v2 = 0LL;
  v3 = 0;
  do
  {
    v4 = PopPolicy;
    v5 = 3 * (v2 + 4);
    v6 = 32LL * v3;
    if ( (unsigned int)Feature_BatteryTriggerCheck__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = *(unsigned int *)&v4[8 * v5 + 4];
      if ( (_DWORD)v7 != *(ULONG *)((char *)&PopCB + v6 + 376)
        || v4[8 * v5] != ((*(ULONG *)((char *)&PopCB + v6 + 356) & 0x80) != 0) )
      {
        *(ULONG *)((char *)&PopCB + v6 + 376) = v7;
        v10 = (char *)&PopCB + v6 + 352;
        if ( v4[8 * v5] )
        {
          *(ULONG *)((char *)&PopCB + v6 + 356) |= 0x80u;
LABEL_6:
          PopDiagTraceBatteryTriggerFlags(&v14, (__int64)v10);
          v11 = 32LL * v14;
          if ( !PopBatteryCheckTrigger((__int64)&PopCB + v11 + 352) )
            goto LABEL_14;
          *(ULONG *)((char *)&PopCB + v11 + 356) |= 2u;
          v10 = (char *)&PopCB + v11 + 352;
        }
        else
        {
          *(ULONG *)((char *)&PopCB + v6 + 356) &= ~0x80u;
        }
        PopDiagTraceBatteryTriggerFlags(&v14, (__int64)v10);
      }
    }
    else if ( (*(ULONG *)((char *)&PopCB + v6 + 356) & 0x80u) == 0 )
    {
      *(ULONG *)((char *)&PopCB + v6 + 376) = *(_DWORD *)&v4[8 * v5 + 4];
      if ( v4[8 * v5] )
      {
        *(ULONG *)((char *)&PopCB + v6 + 356) |= 0x80u;
        v10 = (char *)&PopCB + v6 + 352;
        goto LABEL_6;
      }
    }
LABEL_14:
    v2 = v14 + 1;
    v14 = v2;
    v3 = v2;
  }
  while ( (unsigned int)v2 < 4 );
  return PopReleasePolicyLock((unsigned int)v2, v7, v8, v9, v13);
}
