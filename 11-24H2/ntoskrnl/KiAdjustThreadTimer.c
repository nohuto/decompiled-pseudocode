/*
 * XREFs of KiAdjustThreadTimer @ 0x1405BFB6C
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x1405B57E8 (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KiSuspendThread @ 0x1402DE060 (KiSuspendThread.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

void __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rdi
  char v9; // bp
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    if ( !KiSuspendThread(a1, a2) )
      goto LABEL_21;
    v9 = 1;
  }
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x60000) == 0x60000 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 && v10 - a3 < v10 )
        v10 -= a3;
    }
    else
    {
      v11 = v10 - a3;
      v10 = 0LL;
      if ( v11 <= 0 )
        v10 = v11;
    }
    *(_QWORD *)(a1 + 280) = v10;
  }
  *(_DWORD *)(a1 + 952) = a4;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v9 )
    KiResumeThread(a1, a2, 0LL);
LABEL_21:
  _InterlockedAnd(v4, 0xFFFFFF7F);
}
