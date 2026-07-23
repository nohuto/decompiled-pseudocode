/*
 * XREFs of CcChargeThreadForReadAhead @ 0x1404D6A8C
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 * Callees:
 *     PsUpdateDiskCounters @ 0x140434B60 (PsUpdateDiskCounters.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall CcChargeThreadForReadAhead(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        struct _KTHREAD *a5)
{
  __int64 v5; // r8
  volatile signed __int64 *result; // rax
  int v7; // r9d
  int v8; // r9d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rcx

  v5 = *(_QWORD *)(a1 + 48);
  result = (volatile signed __int64 *)*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 4LL);
  if ( !(_DWORD)result )
    KeBugCheckEx(0x34u, 0x613uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = a4 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 != 1 )
      return result;
    v9 = *(unsigned int *)(v5 + 52);
  }
  else
  {
    v9 = *(unsigned int *)(v5 + 52);
    result = *(volatile signed __int64 **)(v5 + 72);
    v10 = v9 + *(_QWORD *)(v5 + 56);
    if ( result )
    {
      if ( v10 <= (unsigned __int64)result )
        return result;
      v9 = v10 - (_QWORD)result;
    }
    _InterlockedExchange64((volatile __int64 *)(v5 + 72), v10);
  }
  if ( v9 )
  {
    CurrentThread = a5;
    if ( !a5 )
      CurrentThread = KeGetCurrentThread();
    return PsUpdateDiskCounters((__int64)CurrentThread->Process, v9, 0LL, 1u, 0, 0);
  }
  return result;
}
