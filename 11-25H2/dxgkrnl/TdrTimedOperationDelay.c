/*
 * XREFs of TdrTimedOperationDelay @ 0x140044300
 * Callers:
 *     <none>
 * Callees:
 *     ?_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z @ 0x140047B8C (-_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z.c)
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1400716F0 (TdrTimedOperationAllowToDebugTimeout.c)
 *     TdrTimedOperationBugcheckOnTimeout @ 0x14007187C (TdrTimedOperationBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrTimedOperationDelay(
        struct _DXGK_TIMED_OPERATION *a1,
        KPROCESSOR_MODE a2,
        BOOLEAN a3,
        union _LARGE_INTEGER *a4)
{
  unsigned int v4; // ebp
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER StartTick; // r10
  __int64 v11; // rdi
  __int64 TimeIncrement; // rbx
  __int64 v13; // rax
  union _LARGE_INTEGER v14; // rbx
  __int64 QuadPart; // rcx
  union _LARGE_INTEGER v17; // rax
  union _LARGE_INTEGER v18; // [rsp+20h] [rbp-38h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v9.QuadPart = MEMORY[0xFFFFF78000000320];
  StartTick = a1->StartTick;
  if ( StartTick.QuadPart > MEMORY[0xFFFFF78000000320] )
  {
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
    StartTick = v9;
  }
  v11 = StartTick.QuadPart + a1->Timeout.QuadPart - v9.QuadPart;
  TimeIncrement = KeQueryTimeIncrement();
  v13 = 0LL;
  if ( v11 >= 0 )
    v13 = v11;
  v14.QuadPart = -(v13 * TimeIncrement);
  v18 = v14;
  if ( v14.QuadPart )
  {
    if ( KeGetCurrentIrql() <= 1u )
    {
      if ( a4 )
      {
        QuadPart = a4->QuadPart;
        if ( a4->QuadPart )
        {
          v17.QuadPart = -QuadPart;
          if ( QuadPart <= 0 )
            v17 = *a4;
          Interval = v17;
          if ( v17.QuadPart < v14.QuadPart )
            Interval = v14;
          v4 = KeDelayExecutionThread(a2, a3, &Interval);
          _TdrTimedOperationGetRelativeTimeLeft(a1, &v18);
          v14 = v18;
        }
      }
    }
  }
  if ( v14.QuadPart )
    return v4;
  a1->TimeoutTriggered = 1;
  if ( (unsigned int)TdrTimedOperationAllowToDebugTimeout(a1) )
  {
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
    return 0LL;
  }
  else
  {
    if ( a1->OsHandled )
      TdrTimedOperationBugcheckOnTimeout(a1);
    return 258LL;
  }
}
