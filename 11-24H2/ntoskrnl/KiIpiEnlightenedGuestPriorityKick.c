/*
 * XREFs of KiIpiEnlightenedGuestPriorityKick @ 0x140443850
 * Callers:
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140432720 (KiHvEnlightenedGuestPriorityKick.c)
 */

_UNKNOWN **__fastcall KiIpiEnlightenedGuestPriorityKick(__int64 a1)
{
  _UNKNOWN **result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v4; // rdx
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF

  result = &retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  v8 = 0;
  v10 = 0;
  if ( CurrentPrcb->SchedulerAssist )
  {
    result = (_UNKNOWN **)KeIsEmptyAffinityEx((unsigned __int16 *)a1);
    if ( !(_DWORD)result )
    {
      v5[1] = *(unsigned __int16 **)(a1 + 8);
      v6 = 0;
      v5[0] = (unsigned __int16 *)a1;
      while ( 1 )
      {
        result = (_UNKNOWN **)KeEnumerateNextProcessor(&v10, v5);
        if ( (_DWORD)result )
          break;
        v4 = KiProcessorBlock[v10];
        if ( (struct _KPRCB *)v4 != CurrentPrcb )
          KiHvEnlightenedGuestPriorityKick((__int64)CurrentPrcb, v4, KiVpThreadSystemWorkPriority);
      }
    }
  }
  return result;
}
