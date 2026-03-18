/*
 * XREFs of KiForwardTick @ 0x140274A70
 * Callers:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402673B0 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140267478 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14026BB80 (KeIsEqualAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140271370 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeOrAffinityEx2 @ 0x1402720D0 (KeOrAffinityEx2.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     HalRequestClockInterrupt @ 0x1403777C0 (HalRequestClockInterrupt.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned int v17; // edx
  int v18; // edi
  struct _KAFFINITY_EX v20; // [rsp+38h] [rbp-D0h] BYREF

  v6 = a2;
  memset_0(&v20.8, 0, sizeof(v20.8));
  v9 = 1;
  if ( PoSkipTickMode == 2 )
    goto LABEL_6;
  *(_QWORD *)&v20.Count = 2097153LL;
  memset_0(&v20.8, 0, sizeof(v20.8));
  PoCopyDeepIdleMask(&v20.Count);
  for ( i = 0; ; ++i )
  {
    if ( i >= v20.Count )
      goto LABEL_6;
    if ( v20.Bitmap[i] )
      break;
  }
  KiComplementAffinityEx(a5, a5->Size, &v20);
  KiAndAffinityEx(a5, &KeActiveProcessors, a5, a5->Size);
  if ( a4 )
    KeOrAffinityEx2(a5, (struct _KAFFINITY_EX *)KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v12 = KiLastForwardedHand;
    *(_QWORD *)&v20.Count = 2097153LL;
    v13 = 0;
    memset_0(&v20.8, 0, sizeof(v20.8));
    while ( 1 )
    {
      LOBYTE(v14) = v12 - 1;
      v15 = qword_140FC7528[2 * v13];
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
  if ( !(unsigned int)KeIsEqualAffinityEx(&a5->Count, &KeActiveProcessors.Count) )
  {
    KeRemoveProcessorAffinityEx(&a5->Count, *(_DWORD *)(a1 + 36));
    if ( !PoSkipTickMode || (unsigned int)KeCountSetBitsAffinityEx(&a5->Count) <= PoSkipTickMaxOpportunisticProcessors )
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
    v17 = KiPollSlotNext;
    KiPollSlot = KiPollSlotNext++;
    if ( KiPollSlotNext >= v6 )
      KiPollSlotNext = 0;
    v18 = *(_DWORD *)(a1 + 36);
    if ( v17 != v18 && !(unsigned int)KeCheckProcessorAffinityEx(&a5->Count, v17) )
      KiPollSlot = v18;
  }
}
