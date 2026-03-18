/*
 * XREFs of ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x14024E698
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_HDdd @ 0x1402AEF40 (WPP_RECORDER_AND_TRACE_SF_HDdd.c)
 */

struct tagMOUSE_PROMOTION_ENTRY *__fastcall DequeueMousePromotionEntry(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *v1; // r14
  char v2; // r15
  char v3; // r12
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx

  v1 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v1 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    if ( *((_QWORD **)a1 + 1) == v1 )
      *((_QWORD *)a1 + 1) = 0LL;
    v2 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v3 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v3 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v2 = 0;
    }
    if ( v3 || v2 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v5) = v2;
      LOBYTE(v6) = v3;
      WPP_RECORDER_AND_TRACE_SF_HDdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v6,
        v5,
        *(_QWORD *)(UserSessionState + 69416));
    }
  }
  return (struct tagMOUSE_PROMOTION_ENTRY *)v1;
}
