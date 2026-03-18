/*
 * XREFs of KiAdjustThreadTimer @ 0x1405BE4BC
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x1405B4318 (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x1402F15AC (KiSuspendThread.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 */

void __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rdi
  char v9; // bp
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    if ( !KiSuspendThread(a1, a2, v10) )
      goto LABEL_21;
    v9 = 1;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x60000) == 0x60000 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 && v11 - a3 < v11 )
        v11 -= a3;
    }
    else
    {
      v12 = v11 - a3;
      v11 = 0LL;
      if ( v12 <= 0 )
        v11 = v12;
    }
    *(_QWORD *)(a1 + 280) = v11;
  }
  *(_DWORD *)(a1 + 952) = a4;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v9 )
    KiResumeThread(a1, a2, 0);
LABEL_21:
  _InterlockedAnd(v4, 0xFFFFFF7F);
}
