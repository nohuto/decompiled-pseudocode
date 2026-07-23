/*
 * XREFs of KiAdjustRescheduleContextForParking @ 0x1402A65D0
 * Callers:
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 */

__int64 __fastcall KiAdjustRescheduleContextForParking(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  struct _KPRCB *v5; // rdx
  struct _KI_RESCHEDULE_CONTEXT *v6; // r8
  unsigned __int8 *v7; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r10
  unsigned __int8 AllCompareThreadStateFlags; // dl
  _KPRCB *Prcb; // rax
  __int64 v11; // r9
  __int64 i; // rdx
  __int64 v13; // r9
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v14; // rdx
  _KPRCB *v15; // rcx
  _KTHREAD *IdleThread; // rax

  v3 = a2[2];
  if ( !v3 )
    v3 = a2[1];
  result = KiIsPrcbThread(v3);
  if ( !(_BYTE)result )
  {
    result = (__int64)KeGetCurrentPrcb();
    if ( (*(_DWORD *)(result + 14524) & 0x10000) == 0 )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v6, v5);
      AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
      RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
      result = (__int64)Prcb->IdleThread;
      *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
      RescheduleContextEntryForPrcb->NewThread = (_KTHREAD *)result;
      if ( (AllCompareThreadStateFlags & 2) != 0 )
      {
        v13 = 0LL;
        if ( *v7 )
        {
          do
          {
            v14 = (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)&v7[32 * v13 + 16 + 8 * (unsigned int)v13];
            if ( v14 != RescheduleContextEntryForPrcb )
            {
              v14->___u5[0] &= ~2u;
              v15 = v14->Prcb;
              v14->CompareThread = v14->Prcb->IdleThread;
              v14->AllCompareThreadStateFlags = v14->AllCompareThreadStateFlags & 0xC0 | 5;
              IdleThread = v15->IdleThread;
              *((_BYTE *)&v14->0 + 1) &= ~1u;
              v14->NewThread = IdleThread;
            }
            result = *v7;
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < (unsigned int)result );
        }
        *((_DWORD *)v7 + 1) = 0;
      }
      v11 = 0LL;
      for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
      {
        result = (__int64)&v7[40 * i];
        if ( *(_QWORD **)(result + 16) == a2 )
        {
          v11 = result + 16;
          break;
        }
      }
      if ( *(_QWORD *)(v11 + 8) )
      {
        result = *(_QWORD *)(v11 + 8);
        if ( (*(_QWORD *)(a2[24] + 80LL) & *(_QWORD *)(result + 712)) != 0LL )
          *(_QWORD *)(v11 + 8) = 0LL;
      }
    }
  }
  return result;
}
