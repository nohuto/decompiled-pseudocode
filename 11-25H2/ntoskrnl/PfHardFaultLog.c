/*
 * XREFs of PfHardFaultLog @ 0x14020994C
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 * Callees:
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     PfLogEvent @ 0x140324B30 (PfLogEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x140479DB8 (EtwTraceSiloTimedEvent.c)
 */

signed __int64 __fastcall PfHardFaultLog(_QWORD *a1, int a2)
{
  _KPROCESS *Process; // rbp
  struct _LIST_ENTRY *Blink; // rdi
  signed __int64 result; // rax
  signed __int64 v7; // rtt
  struct _LIST_ENTRY *Flink; // rcx
  int v9; // r8d
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  size_t Size; // [rsp+20h] [rbp-58h]
  int v16[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  Process = KeGetCurrentThread()->Process;
  if ( !*a1 && !a1[1] )
    goto LABEL_3;
  v9 = a2;
  if ( !a2 )
    goto LABEL_9;
  v9 = a2 - 1;
  if ( a2 == 1 )
  {
    v10 = 626;
    goto LABEL_10;
  }
  if ( a2 == 2 )
    v10 = 627;
  else
LABEL_9:
    v10 = 544;
LABEL_10:
  EtwTraceSiloTimedEvent(Process[3].ActiveGroupsMask.Masks[0], v10, v9, (_DWORD)a1 + 32);
LABEL_3:
  Blink = Process[4].ThreadListHead.Blink;
  _m_prefetchw(&Blink[2].Blink);
  result = (signed __int64)Blink[2].Blink;
  while ( (unsigned __int64)(result + 1) > 1 )
  {
    v7 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)&Blink[2].Blink, result + 1, result);
    if ( v7 == result )
    {
      Flink = Blink[2].Flink;
      if ( Blink )
      {
        if ( Flink && LODWORD(Flink[38].Flink) < HIDWORD(Flink[38].Flink) && a1[8] && a2 != 2 )
        {
          LODWORD(Size) = 40;
          v11 = MEMORY[0xFFFFF78000000320];
          v12 = MEMORY[0xFFFFF78000000320] - a1[8];
          a1[8] = v12;
          v13 = (__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink;
          v16[0] = 2 * v12;
          v16[1] = xmmword_140F0DD48;
          v19 = a1[6];
          v17 = (unsigned int)(a1[4] >> 9);
          v14 = a1[5];
          v20 = v13 & 0x1FFFFFFFFFFFFFFFLL;
          v18 = v14;
          PfLogEvent((int)Flink, 29, v11, (int)v16, Size);
        }
        return PsDereferencePartition(Blink, 1951426128LL);
      }
      return result;
    }
  }
  if ( result )
    __fastfail(0xEu);
  return result;
}
