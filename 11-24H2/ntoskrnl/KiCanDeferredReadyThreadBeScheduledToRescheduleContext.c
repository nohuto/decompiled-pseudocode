/*
 * XREFs of KiCanDeferredReadyThreadBeScheduledToRescheduleContext @ 0x1402A9110
 * Callers:
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402A92A0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402A9340 (KiEvaluateGroupSchedulingPreemption.c)
 */

unsigned __int8 __fastcall KiCanDeferredReadyThreadBeScheduledToRescheduleContext(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  unsigned int v5; // esi
  __int64 v6; // rbp
  unsigned int i; // eax
  __int64 v11; // rdx
  char v12; // al
  bool v13; // cl
  unsigned int v14; // ecx
  unsigned __int8 result; // al
  char v16; // r8
  __int64 v17; // rax
  char v18; // r9
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v19; // rcx
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  v6 = 0LL;
  for ( i = 0; i < *a1; ++i )
  {
    if ( *(_QWORD *)&a1[40 * i + 16] == a3 )
    {
      v6 = (__int64)&a1[40 * i + 16];
      break;
    }
  }
  v11 = 0LL;
  v20 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    v12 = KiEvaluateGroupSchedulingPreemption(v6, a2, a4 != 0, &v20);
    v11 = v20;
    v13 = v12;
  }
  else
  {
    v16 = *(_BYTE *)(v6 + 32);
    if ( (v16 & 1) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v17 = *(_QWORD *)(v6 + 16);
      v18 = *(_BYTE *)(a2 + 195);
      v13 = v18 > *(char *)(v17 + 195)
         || v18 == *(_BYTE *)(v17 + 195) && ((v16 & 0x18) != 0 || a4 != 0)
         || (v16 & 0x10) != 0 && v18;
    }
  }
  if ( a5 )
    *a5 = v11;
  if ( !v13 )
    return 0;
  v14 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  if ( v14 < ((*(unsigned __int8 *)(v6 + 32) >> 1) & 1u) )
    v14 = (*(unsigned __int8 *)(v6 + 32) >> 1) & 1;
  if ( v14 == 1 )
  {
    while ( v5 < *a1 )
    {
      v19 = (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)&a1[32 * v5 + 16 + 8 * v5];
      if ( v19 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v6 )
      {
        result = KiDoesThreadDominateRescheduleContextEntry(v19, (struct _KTHREAD *)a2, a4 != 0, 0LL);
        if ( !result )
          return result;
      }
      ++v5;
    }
  }
  return 1;
}
