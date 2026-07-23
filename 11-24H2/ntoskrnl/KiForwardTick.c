/*
 * XREFs of KiForwardTick @ 0x1402AC02C
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14032C760 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     HalRequestClockInterrupt @ 0x1403718A0 (HalRequestClockInterrupt.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiForwardTick(__int64 a1, unsigned int a2, int a3, char a4, struct _KAFFINITY_EX *a5)
{
  unsigned int v6; // r14d
  unsigned int v9; // esi
  unsigned __int16 i; // cx
  struct _KAFFINITY_EX *v11; // rdi
  char v12; // r15
  unsigned __int16 v13; // di
  unsigned int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // edi
  struct _KAFFINITY_EX v20; // [rsp+38h] [rbp-D0h] BYREF

  v6 = a2;
  memset_0(&v20.8, 0, sizeof(v20.8));
  v9 = 1;
  if ( PoSkipTickMode == 2 )
    goto LABEL_6;
  *(_QWORD *)&v20.Count = 2097153LL;
  memset_0(&v20.8, 0, sizeof(v20.8));
  PoCopyDeepIdleMask(&v20);
  for ( i = 0; ; ++i )
  {
    if ( i >= v20.Count )
      goto LABEL_6;
    if ( v20.Bitmap[i] )
      break;
  }
  KiComplementAffinityEx(a5, a5->Size, &v20);
  KeAndAffinityEx2(a5, &KeActiveProcessors, a5);
  if ( a4 )
    KeOrAffinityEx2(a5, KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v12 = KiLastForwardedHand;
    *(_QWORD *)&v20.Count = 2097153LL;
    v13 = 0;
    memset_0(&v20.8, 0, sizeof(v20.8));
    while ( 1 )
    {
      LOBYTE(v14) = v12 - 1;
      v15 = qword_140FC8568[2 * v13];
      do
      {
        v14 = (unsigned __int8)(v14 + 1);
        v16 = *(_QWORD *)(((unsigned __int64)v14 << 6) + v15);
        if ( v20.Count > v13 )
          goto LABEL_20;
        if ( v20.Size > v13 )
        {
          v20.Count = v13 + 1;
LABEL_20:
          v20.Bitmap[v13] |= v16;
        }
      }
      while ( v14 != (unsigned __int8)a3 );
      if ( ++v13 >= (unsigned __int16)KiActiveGroups )
      {
        KiOrAffinityEx(a5, &v20, a5, a5->Size);
        v6 = a2;
        break;
      }
    }
  }
  if ( !(unsigned int)KeIsEqualAffinityEx(a5, &KeActiveProcessors) )
  {
    KeRemoveProcessorAffinityEx(a5, *(unsigned int *)(a1 + 36));
    if ( !PoSkipTickMode || (unsigned int)KeCountSetBitsAffinityEx(a5) <= PoSkipTickMaxOpportunisticProcessors )
    {
      v9 = 0;
      v11 = a5;
      if ( (unsigned int)KeIsEmptyAffinityEx(a5) )
        goto LABEL_15;
      goto LABEL_7;
    }
  }
LABEL_6:
  v11 = 0LL;
  KiCopyAffinityEx(a5, a5->Size, &KeActiveProcessors);
LABEL_7:
  if ( !KiClockTimerPerCpuTickScheduling )
  {
    HalRequestClockInterrupt(v9, v11);
    KiLastForwardedHand = a3;
  }
LABEL_15:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v17 = (unsigned int)KiPollSlotNext;
    KiPollSlot = KiPollSlotNext++;
    if ( KiPollSlotNext >= v6 )
      KiPollSlotNext = 0;
    v18 = *(_DWORD *)(a1 + 36);
    if ( (_DWORD)v17 != v18 && !(unsigned int)KeCheckProcessorAffinityEx(a5, v17) )
      KiPollSlot = v18;
  }
}
