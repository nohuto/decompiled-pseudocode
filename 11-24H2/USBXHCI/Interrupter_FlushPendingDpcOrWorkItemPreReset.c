/*
 * XREFs of Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x140048934
 * Callers:
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     Interrupter_ReleaseEventRingLock @ 0x140022364 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140022440 (Interrupter_AcquireEventRingLock.c)
 */

void __fastcall Interrupter_FlushPendingDpcOrWorkItemPreReset(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 v2; // rbx
  _QWORD *v3; // r14
  __int64 v5; // rsi
  char v6; // al
  _DWORD *v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  int v10; // edx
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  v1 = (_DWORD *)(a1 + 92);
  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 92) )
  {
    do
    {
      v5 = *(_QWORD *)(*v3 + 8 * v2);
      if ( v5 )
      {
        v6 = Interrupter_AcquireEventRingLock(*(_QWORD *)(*v3 + 8 * v2));
        *(_DWORD *)(v5 + 112) |= 0x10u;
        Interrupter_ReleaseEventRingLock(v5, v6);
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *v1 );
    v7 = (_DWORD *)(a1 + 92);
  }
  else
  {
    v7 = (_DWORD *)(a1 + 92);
  }
  KeFlushQueuedDpcs();
  v8 = 0LL;
  if ( *v1 )
  {
    do
    {
      v9 = *(_QWORD **)(*v3 + 8 * v8);
      if ( v9 && v9[27] )
      {
        Timeout.QuadPart = -600000000LL;
        while ( KeWaitForSingleObject(v9 + 24, Executive, 0, 0, &Timeout) == 258 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v9[1] + 72LL),
              v10,
              9,
              35,
              (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
              v8);
          }
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *v7 );
  }
}
