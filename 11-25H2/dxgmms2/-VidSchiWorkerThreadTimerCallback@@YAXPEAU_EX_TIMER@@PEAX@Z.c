/*
 * XREFs of ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140048EE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchiCheckYieldExitCondition @ 0x14003B96C (VidSchiCheckYieldExitCondition.c)
 */

void __fastcall VidSchiWorkerThreadTimerCallback(struct _EX_TIMER *a1, char *a2)
{
  LARGE_INTEGER v3; // r14
  char v4; // bp
  __int64 v5; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+68h] [rbp+10h] BYREF
  union _LARGE_INTEGER v10; // [rsp+70h] [rbp+18h] BYREF

  v10.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&v10);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a2 + 248, &LockHandle);
  if ( v3.QuadPart < *((_QWORD *)a2 + 25) )
  {
    v4 = 0;
    v5 = 0LL;
    if ( *((_DWORD *)a2 + 20) )
    {
      do
      {
        v6 = (__int64 *)*((_QWORD *)a2 + 86);
        if ( (unsigned int)v5 < *((_DWORD *)a2 + 190) )
          v6 += v5;
        v7 = *v6;
        v9 = 0;
        VidSchiCheckYieldExitCondition(v7, v3.QuadPart, &v9);
        if ( v9 )
          v4 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a2 + 20) );
      if ( v4 )
      {
        *((_QWORD *)a2 + 185) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a2 + 1448), 0, 0);
      }
    }
  }
  else
  {
    ExCancelTimer(*((_QWORD *)a2 + 24), 0LL);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    *((_QWORD *)a2 + 25) = 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
