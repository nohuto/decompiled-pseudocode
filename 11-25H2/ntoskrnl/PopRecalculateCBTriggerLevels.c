/*
 * XREFs of PopRecalculateCBTriggerLevels @ 0x140A74B3C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopBatteryCheckTrigger @ 0x140A5E3D8 (PopBatteryCheckTrigger.c)
 *     PopDiagTraceBatteryTriggerFlags @ 0x140A6B418 (PopDiagTraceBatteryTriggerFlags.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopRecalculateCBTriggerLevels(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // ecx
  _BYTE *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 v10; // [rsp+20h] [rbp-8h]
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  PopAcquirePolicyLock(a1, a2);
  v2 = 0;
  v3 = 0LL;
  v11 = 0;
  v4 = 0;
  do
  {
    v5 = PopPolicy;
    v6 = 3 * (v3 + 4);
    v7 = 32LL * v4;
    if ( (*(ULONG *)((char *)&PopCB + v7 + 356) & 0x80u) == 0 )
    {
      *(ULONG *)((char *)&PopCB + v7 + 376) = *((_DWORD *)PopPolicy + 6 * v3 + 25);
      if ( v5[24 * v3 + 96] )
      {
        *(ULONG *)((char *)&PopCB + v7 + 356) |= 0x80u;
        PopDiagTraceBatteryTriggerFlags(&v11, (__int64)&PopCB + v7 + 352);
        v2 = v11;
        v9 = 32LL * v11;
        if ( PopBatteryCheckTrigger((__int64)&PopCB + v9 + 352) )
        {
          *(ULONG *)((char *)&PopCB + v9 + 356) |= 2u;
          PopDiagTraceBatteryTriggerFlags(&v11, (__int64)&PopCB + v9 + 352);
          v2 = v11;
        }
      }
    }
    v11 = ++v2;
    v4 = v2;
    v3 = v2;
  }
  while ( v2 < 4 );
  return PopReleasePolicyLock(v2, v7, v6, v5, v10);
}
