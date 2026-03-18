/*
 * XREFs of ExpWaitForFastResource @ 0x140293C60
 * Callers:
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     PerfLogExecutiveResourceWait @ 0x1404AE874 (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ExpWaitForFastResource(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v5; // rsi
  unsigned int *v6; // r14
  int v7; // eax
  _BYTE *v8; // rdi
  signed __int8 *v9; // r12
  char v10; // cl
  LARGE_INTEGER *Timeout; // r13
  NTSTATUS result; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  signed __int8 v15; // al
  signed __int8 v16; // tt
  __int64 Pool2; // rax
  int v18; // [rsp+30h] [rbp-78h]
  int v19; // [rsp+34h] [rbp-74h]
  _QWORD v20[13]; // [rsp+40h] [rbp-68h] BYREF
  int v22; // [rsp+C8h] [rbp+20h]

  v20[0] = 0LL;
  __incgsdword(0x9068u);
  v18 = 0;
  v22 = 0;
  v5 = (_DWORD *)(a1 + 60);
  v20[4] = a1 + 60;
  ++*(_DWORD *)(a1 + 60);
  v6 = (unsigned int *)(a1 + 28);
  v20[3] = a1 + 28;
  v7 = *(_DWORD *)(a1 + 28);
  if ( v7 == -1 )
    v7 = ExResourceTimeoutCount;
  v8 = (_BYTE *)(a1 + 25);
  v9 = (signed __int8 *)(a1 + 25);
  v20[2] = a1 + 25;
  v10 = *(_BYTE *)(a1 + 25);
  if ( !v7 || (v10 & 1) != 0 )
    goto LABEL_4;
  v20[0] = -5000000LL;
  Timeout = (LARGE_INTEGER *)v20;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, Timeout);
    if ( result != 258 )
      return result;
    v13 = ++v18;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v13);
    if ( (*v8 & 1) != 0 )
      goto LABEL_4;
    v14 = *v6;
    v19 = *v6;
    if ( *v6 == -1 )
    {
      v14 = ExResourceTimeoutCount;
      v19 = ExResourceTimeoutCount;
    }
    if ( !v14 )
    {
LABEL_4:
      Timeout = 0LL;
    }
    else if ( ++v22 > v14 )
    {
      Timeout = 0LL;
      v20[1] = 0LL;
      _m_prefetchw(v9);
      v15 = *v9;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange8(v9, v15 | 1, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 1) == 0 )
      {
        v22 = 0;
        DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", (const void *)a1);
        Pool2 = ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 16) = ExpResourceTimeoutCaptureLiveDump;
          *(_QWORD *)(Pool2 + 24) = Pool2;
          *(_QWORD *)Pool2 = 0LL;
          *(_QWORD *)(Pool2 + 32) = KeGetCurrentThread();
          *(_QWORD *)(Pool2 + 40) = a1;
          *(_DWORD *)(Pool2 + 48) = *v5;
          *(_DWORD *)(Pool2 + 52) = v19;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
        }
        __debugbreak();
      }
    }
    else
    {
      Timeout->QuadPart = ExpTimeout;
    }
  }
}
