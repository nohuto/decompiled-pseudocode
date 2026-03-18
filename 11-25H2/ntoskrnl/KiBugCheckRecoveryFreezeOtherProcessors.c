/*
 * XREFs of KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0
 * Callers:
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C1AD0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405C24DC (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 *     KiSetDebuggerOwner @ 0x1404F8C24 (KiSetDebuggerOwner.c)
 *     KeFrozenProcessorCount @ 0x1405BDA44 (KeFrozenProcessorCount.c)
 *     KiSendFreeze @ 0x1405BDEE4 (KiSendFreeze.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiBugCheckRecoveryFreezeOtherProcessors(unsigned int a1)
{
  unsigned int v2; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  signed int v4; // edi
  int i; // eax
  unsigned int j; // ebx
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-E0h] BYREF
  struct _KAFFINITY_EX *v10; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-D0h]
  __int16 v12; // [rsp+38h] [rbp-C8h]
  int v13; // [rsp+3Ah] [rbp-C6h]
  __int16 v14; // [rsp+3Eh] [rbp-C2h]
  struct _KAFFINITY_EX v15; // [rsp+40h] [rbp-C0h] BYREF

  v13 = 0;
  v14 = 0;
  memset_0(&v15.8, 0, sizeof(v15.8));
  v2 = KeNumberProcessors_0;
  v9 = 0;
  if ( (_DWORD)KeNumberProcessors_0 != 1 && !KiHypervisorInitiatedCrashDump )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    KiSetDebuggerOwner((__int64)CurrentPrcb);
    *(_QWORD *)&v15.Count = 2097153LL;
    memset_0(&v15.8, 0, sizeof(v15.8));
    KiCopyAffinityEx(&v15, 0x20u, &KeActiveProcessors);
    KeRemoveProcessorAffinityEx(&v15.Count, CurrentPrcb->Number);
    KiFreezeInDpc = 1;
    KiFreezeInDpcCount = 0;
    v4 = 0;
    v11 = v15.Bitmap[0];
    v10 = &v15;
    v12 = 0;
    for ( i = KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v10);
          !i;
          i = KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v10) )
    {
      KeInsertQueueDpc((PRKDPC)(KiProcessorBlock[v9] + 40656), 0LL, 0LL);
      ++v4;
    }
    for ( j = 0; j < 0xF4240; j += 50 )
    {
      if ( KiFreezeInDpcCount >= v4 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( KiFreezeInDpcCount < v4 )
    {
      v11 = v15.Bitmap[0];
      v10 = &v15;
      v12 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v9, (unsigned __int16 **)&v10) )
        KeRemoveQueueDpcEx(KiProcessorBlock[v9] + 40656, 0);
    }
    KiSendFreeze(&v15, a1 == 0);
    if ( a1 )
    {
      v7 = 0;
      do
      {
        if ( (unsigned int)KeFrozenProcessorCount() >= v4 )
          break;
        KeStallExecutionProcessor(0x32u);
        v7 += 50;
      }
      while ( v7 < a1 );
    }
    KiFreezeInDpc = 0;
    return (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount();
  }
  return v2;
}
