/*
 * XREFs of TppInitializeTimerSubQueue @ 0x18006D538
 * Callers:
 *     TppInitializeTimerQueue @ 0x1800ABC40 (TppInitializeTimerQueue.c)
 * Callees:
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwAssociateWaitCompletionPacket @ 0x180162EC0 (ZwAssociateWaitCompletionPacket.c)
 *     NtCreateTimer2 @ 0x180163600 (NtCreateTimer2.c)
 *     NtCreateWaitCompletionPacket @ 0x1801636C0 (NtCreateWaitCompletionPacket.c)
 */

__int64 __fastcall TppInitializeTimerSubQueue(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  HANDLE *v3; // rbx
  __int64 v6; // r15
  __int64 result; // rax
  int WaitCompletionPacket; // ebp
  char v9; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = (HANDLE *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = a3;
  v9 = 0;
  result = NtCreateTimer2(a1 + 24, 0LL, 0LL, 8LL, 1048578);
  if ( (int)result >= 0 )
  {
    WaitCompletionPacket = NtCreateWaitCompletionPacket(a1 + 32, 1LL);
    if ( WaitCompletionPacket < 0 )
    {
      NtClose(*v3);
    }
    else
    {
      ZwAssociateWaitCompletionPacket(*(_QWORD *)(a1 + 32), *(_QWORD *)(a2 + 64), *v3, a1 + 40, a2 + 112, 0, v6, &v9);
      *(_QWORD *)(a1 + 96) = TppTimerQueueExpiration;
      TppGetCurrentThreadNumaNode(a2, a1 + 104, a1 + 108, 0LL);
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 88) = a1 + 80;
      *(_QWORD *)(a1 + 80) = a1 + 80;
      *(_QWORD *)(a1 + 40) = TppDirectTaskVFuncs;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 104);
      *(_BYTE *)(a1 + 52) = *(_BYTE *)(a1 + 108);
    }
    return (unsigned int)WaitCompletionPacket;
  }
  return result;
}
